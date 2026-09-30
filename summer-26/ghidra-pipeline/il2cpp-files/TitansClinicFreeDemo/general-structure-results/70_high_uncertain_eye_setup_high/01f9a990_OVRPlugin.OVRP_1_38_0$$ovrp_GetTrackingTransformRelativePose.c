/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 01f9a990
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_0124bba8();
  thunk_FUN_01279b34(PTR_DAT_027c1218);
  FUN_01e7598c(uVar1);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1d70);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar1,uVar2);
}


