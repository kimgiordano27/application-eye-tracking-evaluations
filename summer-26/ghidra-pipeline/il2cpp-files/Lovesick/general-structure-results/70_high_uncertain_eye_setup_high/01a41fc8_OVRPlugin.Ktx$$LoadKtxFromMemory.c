/*
FUNCTION_NAME: OVRPlugin.Ktx$$LoadKtxFromMemory
ENTRY_POINT: 01a41fc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__LoadKtxFromMemory(long param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_0377ac46 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377ac46 = 1;
  }
  if (param_1 == 0) {
    puVar1 = *(undefined8 **)
              (*(long *)
                Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
              0xb8);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x10);
  }
  return *puVar1;
}


