/*
FUNCTION_NAME: FUN_01045794
ENTRY_POINT: 01045794
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01045794(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_03775ffb & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_127__);
    DAT_03775ffb = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_127__;
  if (lVar2 != 0) {
    FUN_016f27fc(lVar2,param_1,
                 *(undefined8 *)
                  Method_System_Resources_ResourceManager_ResourceManagerMediator__ctor__,0);
    FUN_00fe0764(*(undefined8 *)puVar1,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


