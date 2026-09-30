/*
FUNCTION_NAME: FUN_0198e9f4
ENTRY_POINT: 0198e9f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


long FUN_0198e9f4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_0377a435 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_get_ResponseData__
                      );
    DAT_0377a435 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_016f27fc(lVar2,param_1,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_get_ResponseData__
                 ,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


