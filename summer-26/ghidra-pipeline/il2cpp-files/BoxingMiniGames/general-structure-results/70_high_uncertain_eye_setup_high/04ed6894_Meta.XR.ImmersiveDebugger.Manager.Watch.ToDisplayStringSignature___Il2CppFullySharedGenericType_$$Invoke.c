/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$Invoke
ENTRY_POINT: 04ed6894
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__Invoke
               (undefined8 param_1,undefined1 param_2 [16],long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(long *)(param_3 + 0x20) = param_2._8_8_;
  *(long *)(param_3 + 0x18) = param_2._0_8_;
  thunk_FUN_036b7ad0(param_3 + 0x20,0);
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_04ed6c54(*(long *)(param_3 + 0x10),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


