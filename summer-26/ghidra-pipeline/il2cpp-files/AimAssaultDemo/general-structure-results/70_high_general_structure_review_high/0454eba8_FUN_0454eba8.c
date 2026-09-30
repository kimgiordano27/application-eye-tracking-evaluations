/*
FUNCTION_NAME: FUN_0454eba8
ENTRY_POINT: 0454eba8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


undefined8 FUN_0454eba8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_045533c4();
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar16 = *(uint *)(lVar7 + 0x18);
    iVar13 = 0;
    if (uVar16 != 0) {
      iVar13 = iVar2 / (int)uVar16;
    }
    uVar1 = iVar2 - iVar13 * uVar16;
    if (uVar16 <= uVar1) {
LAB_0454ee24:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar16 = *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0)
      goto UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>___ctor;
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      iVar13 = 0;
      uVar14 = 0xffffffff;
      do {
        if ((uint)uVar8 <= uVar16) goto LAB_0454ee24;
        piVar12 = (int *)(lVar7 + (ulong)uVar16 * 0x18 + 0x20);
        uVar17 = (ulong)uVar16;
        if (*piVar12 == iVar2) {
          plVar15 = *(long **)(param_1 + 0x30);
          if (plVar15 == (long *)0x0)
          goto 
          UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>___ctor;
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
          lVar9 = lVar7 + uVar17 * 0x18;
          uVar8 = *(undefined8 *)(lVar9 + 0x28);
          uVar4 = *(undefined8 *)(lVar9 + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03775678(lVar5);
          }
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0454ece0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar15,lVar5,0);
LAB_0454ece0:
          uVar10 = (*(code *)*puVar3)(plVar15,uVar8,uVar4,param_2,param_3,puVar3[1]);
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar14 < 0) {
              uVar6 = *(uint *)(lVar7 + 0x18);
              if (uVar6 <= uVar16) goto LAB_0454ee24;
              lVar5 = *(long *)(param_1 + 0x10);
              if (lVar5 == 0)
              goto 
              UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>___ctor
              ;
              if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_0454ee24;
              *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) =
                   *(int *)(lVar7 + uVar17 * 0x18 + 0x24) + 1;
            }
            else {
              uVar6 = *(uint *)(lVar7 + 0x18);
              if ((uVar6 <= uVar16) || (uVar6 <= (uint)uVar14)) goto LAB_0454ee24;
              *(undefined4 *)(lVar7 + 0x20 + uVar14 * 0x18 + 4) =
                   *(undefined4 *)(lVar7 + 0x20 + uVar17 * 0x18 + 4);
            }
            if (uVar16 < uVar6) {
              *piVar12 = -1;
              *(undefined4 *)(lVar7 + uVar17 * 0x18 + 0x24) = *(undefined4 *)(param_1 + 0x28);
              iVar2 = *(int *)(param_1 + 0x20) + -1;
              *(int *)(param_1 + 0x20) = iVar2;
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
              if (iVar2 == 0) {
                uVar16 = 0xffffffff;
                *(undefined4 *)(param_1 + 0x24) = 0;
              }
              *(uint *)(param_1 + 0x28) = uVar16;
              return 1;
            }
            goto LAB_0454ee24;
          }
          uVar8 = *(undefined8 *)(lVar7 + 0x18);
        }
        if ((int)(uint)uVar8 <= iVar13) {
          thunk_FUN_037a15ac(PTR_DAT_07d8e248);
          uVar8 = thunk_FUN_037788cc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d98ac0);
          FUN_06242c7c(uVar8,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar8,param_4);
        }
        if ((uint)uVar8 <= uVar16) goto LAB_0454ee24;
        uVar6 = *(uint *)(lVar7 + uVar17 * 0x18 + 0x24);
        iVar13 = iVar13 + 1;
        uVar14 = (ulong)uVar16;
        uVar16 = uVar6;
      } while (-1 < (int)uVar6);
    }
  }
  return 0;
}


