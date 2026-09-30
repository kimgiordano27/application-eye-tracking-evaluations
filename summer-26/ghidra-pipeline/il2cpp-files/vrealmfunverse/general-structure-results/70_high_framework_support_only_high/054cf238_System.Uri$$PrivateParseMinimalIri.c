/*
FUNCTION_NAME: System.Uri$$PrivateParseMinimalIri
ENTRY_POINT: 054cf238
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Uri__PrivateParseMinimalIri(ulong param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_02b3c81c(PTR_DAT_0632a950);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02b3c81c(PTR_DAT_063217c0);
    *(undefined1 *)(unaff_x23 + 0x16b) = 1;
  }
  FUN_04db368c(param_2);
  if (unaff_x19 != 0) {
    FUN_04c8c710();
    FUN_04c8c710();
    FUN_04c8c710();
    FUN_04c8c8f4();
    FUN_04c8c8f4();
    FUN_04c8c710();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


