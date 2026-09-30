/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 063822fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_063349e4();
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar2 = thunk_FUN_037788cc();
  FUN_061a843c(uVar2,uVar1,0);
  uVar1 = thunk_FUN_037a15ac(PTR_DAT_07db6128);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar1);
}


