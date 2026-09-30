/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_14
ENTRY_POINT: 076ebaf4
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__657_14(void)

{
  bool bVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x30f) = in_w8;
  lVar2 = System_Collections_Generic_Dictionary<int,_Pose>__Add();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(lVar2 + 0x11) != '\0';
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


