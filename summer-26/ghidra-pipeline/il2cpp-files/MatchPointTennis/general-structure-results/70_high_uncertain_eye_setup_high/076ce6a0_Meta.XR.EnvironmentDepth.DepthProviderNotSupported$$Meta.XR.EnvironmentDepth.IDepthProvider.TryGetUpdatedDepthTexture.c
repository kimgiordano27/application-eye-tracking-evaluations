/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture
ENTRY_POINT: 076ce6a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture
               (undefined8 param_1)

{
  int iVar1;
  byte in_ZR;
  int in_w8;
  int unaff_w24;
  int unaff_w25;
  
  iVar1 = (uint)in_ZR << 1;
  if (in_w8 == unaff_w24) {
    iVar1 = 1;
  }
  if (in_w8 <= unaff_w25) {
    iVar1 = 0;
  }
  FUN_094fe604(param_1,iVar1);
  FUN_094fe8bc();
  return;
}


