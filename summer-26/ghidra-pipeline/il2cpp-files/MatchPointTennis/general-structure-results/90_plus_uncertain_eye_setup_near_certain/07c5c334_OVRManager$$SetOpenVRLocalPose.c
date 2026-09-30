/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 07c5c334
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    fVar2 = param_5[2];
    fVar3 = *param_5;
    fVar1 = (float)FUN_09539d64(*(long *)(param_4 + 0x28),0);
    if (DAT_0a51c009 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c009 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_094bab0c(SQRT((fVar2 - param_3) * (fVar2 - param_3) +
                        (fVar3 - fVar1) * (fVar3 - fVar1) + 0.0),*(long *)(param_4 + 0x30),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


