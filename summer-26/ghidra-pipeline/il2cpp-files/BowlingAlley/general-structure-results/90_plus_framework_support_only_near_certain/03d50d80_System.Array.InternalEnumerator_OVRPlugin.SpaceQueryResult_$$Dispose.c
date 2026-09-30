/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 03d50d80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w23;
  
  do {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    FUN_03d50078();
    do {
      unaff_w23 = unaff_w23 + 1;
      if (*unaff_x20 <= unaff_w23) {
        return;
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      FUN_03d4fc64();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8(*(long *)(unaff_x19 + 0x20));
      }
      uVar1 = FUN_03d50bb0();
    } while ((uVar1 & 1) != 0);
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
}


