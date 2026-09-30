/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_20
ENTRY_POINT: 076ebd7c
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__657_20(void)

{
  long lVar1;
  undefined1 in_w8;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x314) = in_w8;
  lVar1 = System_Collections_Generic_Dictionary<int,_Pose>__Add();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x58) != 0)) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x58) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


