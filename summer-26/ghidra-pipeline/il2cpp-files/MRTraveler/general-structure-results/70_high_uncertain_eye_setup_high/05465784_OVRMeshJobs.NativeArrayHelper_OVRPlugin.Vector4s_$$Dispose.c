/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 05465784
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(long param_1,long param_2)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  FUN_05464028(param_2,unaff_w19,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x148));
  if (param_2 != 0) {
    FUN_0712485c(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(param_2 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(param_2 + 0x18) = unaff_w19;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


