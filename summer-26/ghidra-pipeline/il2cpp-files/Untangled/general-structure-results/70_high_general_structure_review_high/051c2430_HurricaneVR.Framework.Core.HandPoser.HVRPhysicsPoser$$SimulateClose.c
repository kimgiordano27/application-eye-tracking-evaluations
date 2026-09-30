/*
FUNCTION_NAME: HurricaneVR.Framework.Core.HandPoser.HVRPhysicsPoser$$SimulateClose
ENTRY_POINT: 051c2430
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void HurricaneVR_Framework_Core_HandPoser_HVRPhysicsPoser__SimulateClose
               (ulong param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  int iVar6;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d390f0);
    FUN_02f07e70(PTR_DAT_06d03ce0);
    *(undefined1 *)(unaff_x20 + 0xc0f) = 1;
  }
  if (param_3 == 0) {
LAB_051c265c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar1 = *(int *)(param_3 + 0x20);
  if (iVar1 != 0) {
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_051c265c;
    iVar6 = *(int *)(*(long *)(param_3 + 0x10) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06d390f0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar4 = FUN_055cdb44(iVar1 + 1,0);
    if (iVar4 < iVar6) {
      uVar2 = *(uint *)(param_3 + 0x24);
      lVar7 = *(long *)(param_3 + 0x18);
      FUN_051c4e78(param_2,iVar1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70));
      if ((int)uVar2 < 1) {
        iVar6 = 0;
      }
      else {
        if (lVar7 == 0) goto LAB_051c265c;
        uVar8 = 0;
        iVar6 = 0;
        puVar10 = (undefined8 *)(lVar7 + 0x30);
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (-1 < *(int *)(puVar10 + -2)) {
            FUN_051c5468(param_2,iVar6,*(int *)(puVar10 + -2),puVar10[-1],*puVar10);
            iVar6 = iVar6 + 1;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 3;
        } while (uVar2 != uVar8);
      }
      *(int *)(param_2 + 0x24) = iVar6;
    }
    else {
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_051c265c;
      lVar7 = FUN_05625564(*(long *)(param_3 + 0x10),0);
      puVar3 = PTR_DAT_06d03ce0;
      if (lVar7 == 0) {
        lVar5 = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_06d03ce0;
        lVar5 = thunk_FUN_02ef170c(lVar7,lVar9);
        if (lVar5 == 0) goto LAB_051c25d0;
        *(long *)(param_2 + 0x10) = lVar5;
        uVar11 = *(undefined8 *)puVar3;
        lVar5 = thunk_FUN_02ef170c(lVar7,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar7,uVar11);
        }
      }
      thunk_FUN_02f411dc(param_2 + 0x10,lVar5);
      if (*(long *)(param_3 + 0x18) == 0) goto LAB_051c265c;
      lVar7 = FUN_05625564(*(long *)(param_3 + 0x18),0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02eea768(lVar9);
      }
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_02ef170c(lVar7,lVar9);
        if (lVar5 == 0) {
LAB_051c25d0:
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar7,lVar9);
        }
      }
      *(long *)(param_2 + 0x18) = lVar5;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768(lVar5);
      }
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_02ef170c(lVar7,lVar5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar7,lVar5);
        }
      }
      thunk_FUN_02f411dc((long *)(param_2 + 0x18),lVar9);
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 0x24);
    }
    *(int *)(param_2 + 0x20) = iVar1;
  }
  return;
}


