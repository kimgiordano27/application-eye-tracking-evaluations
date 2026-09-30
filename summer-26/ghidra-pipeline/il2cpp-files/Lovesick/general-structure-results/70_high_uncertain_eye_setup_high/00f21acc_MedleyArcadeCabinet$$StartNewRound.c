/*
FUNCTION_NAME: MedleyArcadeCabinet$$StartNewRound
ENTRY_POINT: 00f21acc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long MedleyArcadeCabinet__StartNewRound(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_OVRTask<OVRPlugin_Result>_SetInternalData<IList<OVRAnchor>>__;
  if ((DAT_03775555 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTask<OVRPlugin_Result>_SetInternalData<IList<OVRAnchor>>__);
    DAT_03775555 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


