/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05d18e98
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  
  FUN_05cb1b24();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    lVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5c00);
    FUN_05d18ef8(lVar1,lVar3);
    plVar2 = (long *)(unaff_x19 + 0x48);
    *plVar2 = lVar1;
    thunk_FUN_03048534(plVar2,lVar1);
    *(bool *)(unaff_x19 + 0x38) = *plVar2 != 0;
  }
  return;
}


