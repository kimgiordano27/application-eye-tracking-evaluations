/*
FUNCTION_NAME: FUN_06e3437c
ENTRY_POINT: 06e3437c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


bool FUN_06e3437c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_07199bdc(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_06e34448;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        param_1[3] = 0;
        param_1[4] = 0;
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        goto Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_06e34448;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x30 + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x30;
    lVar6 = *(long *)(lVar4 + 0x40);
    lVar3 = *(long *)(lVar4 + 0x38);
    param_1[4] = *(long *)(lVar4 + 0x48);
    param_1[3] = lVar6;
    param_1[2] = lVar3;
    thunk_FUN_03d1023c(param_1 + 3,0);
Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition:
    return uVar5 < uVar1;
  }
LAB_06e34448:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


