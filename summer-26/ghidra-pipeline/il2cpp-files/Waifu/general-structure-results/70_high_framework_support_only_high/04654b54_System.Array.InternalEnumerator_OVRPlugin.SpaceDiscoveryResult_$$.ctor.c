/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04654b54
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  long unaff_x19;
  int *unaff_x21;
  int unaff_w23;
  
  do {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
                    /* try { // try from 04654b70 to 04754bd3 has its CatchHandler @ 04654cd8 */
    FUN_04653658();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618(*(long *)(unaff_x19 + 0x20));
    }
    FUN_03c206e4();
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w23 < *unaff_x21);
  return;
}


