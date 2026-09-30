/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginEyeTrackingProvider$$Oculus.Avatar2.IOvrAvatarNativeEyePose.get_NativeProvider
ENTRY_POINT: 0559867c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider__Oculus_Avatar2_IOvrAvatarNativeEyePose_get_NativeProvider
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
  uVar1 = thunk_FUN_02dd3144();
  FUN_0544bf54(uVar1,param_1,0);
  uVar2 = thunk_FUN_02dfd288(OVRAnchor_FetchOptions_var);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1,uVar2);
}


