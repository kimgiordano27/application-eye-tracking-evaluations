/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 05a0c40c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_EqualityComparer<OVRPlugin_Vector4f>___ctor
               (long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    thunk_FUN_036b7ad0(param_1);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((long)param_1 + 0xc) = (int)uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(3);
}


