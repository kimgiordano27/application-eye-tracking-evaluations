/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 05ac1eec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  long lVar1;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar1 = *unaff_x21;
  if (lVar1 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar1 = *unaff_x21;
  }
  FUN_05e24634(lVar1,(int)unaff_x21[1]);
  return;
}


