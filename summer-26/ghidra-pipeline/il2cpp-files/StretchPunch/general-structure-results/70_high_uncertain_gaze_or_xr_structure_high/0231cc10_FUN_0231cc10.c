/*
FUNCTION_NAME: FUN_0231cc10
ENTRY_POINT: 0231cc10
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0231cc10(long param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6,long param_7)

{
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  UnityEngine_Rendering_RenderPipeline__InternalProcessRenderRequests<object>
            (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6,
             *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0xb8));
  return;
}


