/*
FUNCTION_NAME: FUN_07947578
ENTRY_POINT: 07947578
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void FUN_07947578(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  if ((DAT_086eb9ff & 1) == 0) {
    FUN_0335b6c8(&DAT_083dffe8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd228,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f4dc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f4dd0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086eb9ff = 1;
  }
  FUN_07913e50(param_1,param_2,0);
  if (param_2 != 1) {
    return;
  }
  uVar2 = UnityEngine_Animator__SetGoalRotation(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    lVar3 = FUN_05bb8574(*(long *)(param_1 + 0x210),DAT_083dffe8);
    if (*(char *)(param_1 + 0x238) == '\0') {
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x18) != '\0') {
          if (DAT_086ef688 == (code *)0x0) {
            DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
          }
          fVar9 = (float)(*DAT_086ef688)();
          if (*(float *)(lVar3 + 0x1c) < fVar9 - *(float *)(param_1 + 0x240)) {
            if (DAT_086ef688 == (code *)0x0) {
              DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
            }
            uVar10 = (*DAT_086ef688)();
            *(undefined4 *)(param_1 + 0x240) = uVar10;
            plVar4 = (long *)FUN_079468e8(param_1);
            if (plVar4 == (long *)0x0) goto LAB_07947860;
            lVar3 = *plVar4;
            uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_083cd228) {
                  puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_07947768;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar5 = (undefined8 *)FUN_0338f71c(plVar4,DAT_083cd228,0);
LAB_07947768:
            iVar1 = (*(code *)*puVar5)(plVar4,param_1,puVar5[1]);
            if (-1 < iVar1) {
              lVar3 = *(long *)(param_1 + 0x208);
              if (lVar3 == 0) goto LAB_07947860;
              if (iVar1 < *(int *)(lVar3 + 0x18)) {
                uVar6 = FUN_04ab0b48(lVar3,iVar1,DAT_083f4dd0);
                uVar8 = *(undefined8 *)(param_1 + 0x220);
                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cf7d8);
                }
                uVar2 = FUN_07a119fc(uVar6,uVar8,0);
                if ((uVar2 & 1) != 0) {
                  return;
                }
              }
            }
            FUN_079473b0(param_1);
            uVar2 = FUN_07946cb8(param_1);
            if ((uVar2 & 1) == 0) {
              *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
              if (-1 < iVar1) {
                if (*(long *)(param_1 + 0x208) == 0) goto LAB_07947860;
                if (iVar1 < *(int *)(*(long *)(param_1 + 0x208) + 0x18)) {
                  FUN_07947864(param_1,iVar1);
                  return;
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x238) = 1;
              if (DAT_086ef688 == (code *)0x0) {
                DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
              }
              uVar10 = (*DAT_086ef688)();
              *(undefined4 *)(param_1 + 0x23c) = uVar10;
            }
          }
        }
        return;
      }
    }
    else {
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      fVar9 = (float)(*DAT_086ef688)();
      if (lVar3 != 0) {
        fVar9 = (fVar9 - *(float *)(param_1 + 0x23c)) / *(float *)(lVar3 + 0x14);
        *(float *)(param_1 + 0x218) = fVar9;
        if (fVar9 < 1.0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x238) = 0;
        FUN_07947420(param_1);
        return;
      }
    }
  }
LAB_07947860:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


