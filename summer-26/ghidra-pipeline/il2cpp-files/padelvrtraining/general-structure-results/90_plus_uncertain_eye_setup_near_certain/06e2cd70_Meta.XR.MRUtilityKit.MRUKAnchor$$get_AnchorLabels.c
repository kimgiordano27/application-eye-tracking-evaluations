/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$get_AnchorLabels
ENTRY_POINT: 06e2cd70
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKAnchor__get_AnchorLabels(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *unaff_x19;
  
  FUN_07199bdc(0);
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
Meta_XR_MRUtilityKit_MRUKAnchor__get_DeltaPose:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar5 = uVar2;
    if (uVar1 <= uVar5) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto LAB_06e2cdec;
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar5 + 1;
    if (lVar4 == 0) goto Meta_XR_MRUtilityKit_MRUKAnchor__get_DeltaPose;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x30 + 0x20) < 0);
  lVar4 = lVar4 + (long)(int)uVar5 * 0x30;
  lVar3 = *(long *)(lVar4 + 0x28);
  unaff_x19[3] = *(long *)(lVar4 + 0x30);
  unaff_x19[2] = lVar3;
LAB_06e2cdec:
  return uVar5 < uVar1;
}


