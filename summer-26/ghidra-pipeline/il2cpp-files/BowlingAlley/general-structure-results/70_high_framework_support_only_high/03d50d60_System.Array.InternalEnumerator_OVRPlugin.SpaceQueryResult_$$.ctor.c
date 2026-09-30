/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03d50d60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ulong uVar1;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w23;
  
  while( true ) {
    uVar1 = FUN_03d50bb0();
    if ((uVar1 & 1) == 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      FUN_03d50078();
    }
    unaff_w23 = unaff_w23 + 1;
    if (*unaff_x20 <= unaff_w23) break;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    FUN_03d4fc64();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8(*(long *)(unaff_x19 + 0x20));
    }
  }
  return;
}


