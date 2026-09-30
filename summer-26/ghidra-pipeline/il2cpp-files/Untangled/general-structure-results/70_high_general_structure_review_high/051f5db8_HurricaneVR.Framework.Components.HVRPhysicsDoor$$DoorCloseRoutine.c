/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDoor$$DoorCloseRoutine
ENTRY_POINT: 051f5db8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


undefined8
HurricaneVR_Framework_Components_HVRPhysicsDoor__DoorCloseRoutine(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int in_w9;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  long unaff_x24;
  long *plVar12;
  long unaff_x25;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lStack0000000000000000;
  
  lStack0000000000000000 = (long)in_w9;
  uVar13 = *(int *)(param_1 + lStack0000000000000000 * 4 + 0x20) - 1;
  if (-1 < (int)uVar13) {
    lVar14 = *(long *)(unaff_x24 + 0x18);
    if (lVar14 == 0) {
LAB_051f6014:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = *(undefined8 *)(lVar14 + 0x18);
    iVar10 = 0;
    uVar11 = 0xffffffff;
    do {
      if ((uint)uVar5 <= uVar13) goto LAB_051f5fd4;
      piVar9 = (int *)(lVar14 + (ulong)uVar13 * 0x18 + 0x20);
      uVar15 = (ulong)uVar13;
      if (*piVar9 == param_2) {
        plVar12 = *(long **)(unaff_x24 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_051f6014;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
        lVar6 = lVar14 + uVar15 * 0x18;
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        uVar2 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar6 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_051f5e90;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar1 = (undefined8 *)FUN_02eea86c(plVar12,lVar3,0);
LAB_051f5e90:
        uVar7 = (*(code *)*puVar1)(plVar12,uVar5,uVar2);
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar11 < 0) {
            uVar4 = *(uint *)(lVar14 + 0x18);
            if (uVar4 <= uVar13) goto LAB_051f5fd4;
            lVar3 = *(long *)(unaff_x24 + 0x10);
            if (lVar3 == 0) goto LAB_051f6014;
            if (*(uint *)(lVar3 + 0x18) <= (uint)lStack0000000000000000) goto LAB_051f5fd4;
            *(int *)(lVar3 + lStack0000000000000000 * 4 + 0x20) =
                 *(int *)(lVar14 + uVar15 * 0x18 + 0x24) + 1;
          }
          else {
            uVar4 = *(uint *)(lVar14 + 0x18);
            if ((uVar4 <= uVar13) || (uVar4 <= (uint)uVar11)) goto LAB_051f5fd4;
            *(undefined4 *)(lVar14 + 0x20 + uVar11 * 0x18 + 4) =
                 *(undefined4 *)(lVar14 + 0x20 + uVar15 * 0x18 + 4);
          }
          if (uVar13 < uVar4) {
            *piVar9 = -1;
            *(undefined4 *)(lVar14 + uVar15 * 0x18 + 0x24) = *(undefined4 *)(unaff_x24 + 0x28);
            iVar10 = *(int *)(unaff_x24 + 0x20) + -1;
            *(int *)(unaff_x24 + 0x20) = iVar10;
            *(int *)(unaff_x24 + 0x38) = *(int *)(unaff_x24 + 0x38) + 1;
            if (iVar10 == 0) {
              uVar13 = 0xffffffff;
              *(undefined4 *)(unaff_x24 + 0x24) = 0;
            }
            *(uint *)(unaff_x24 + 0x28) = uVar13;
            return 1;
          }
          goto LAB_051f5fd4;
        }
        uVar5 = *(undefined8 *)(lVar14 + 0x18);
      }
      if ((int)(uint)uVar5 <= iVar10) {
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar5 = thunk_FUN_02ef1808();
        uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
        FUN_05601bec(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,unaff_x25);
      }
      if ((uint)uVar5 <= uVar13) {
LAB_051f5fd4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar4 = *(uint *)(lVar14 + uVar15 * 0x18 + 0x24);
      iVar10 = iVar10 + 1;
      uVar11 = (ulong)uVar13;
      uVar13 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return 0;
}


