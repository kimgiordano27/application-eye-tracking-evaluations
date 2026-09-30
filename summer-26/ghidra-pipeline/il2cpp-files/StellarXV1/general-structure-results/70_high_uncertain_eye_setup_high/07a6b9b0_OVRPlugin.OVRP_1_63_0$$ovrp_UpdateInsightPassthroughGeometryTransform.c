/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 07a6b9b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_08978b08(*unaff_x21,0);
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    uVar1 = FUN_089c7604();
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x20);
    }
    FUN_089d17f8(uVar1,0);
    return;
  }
  return;
}


