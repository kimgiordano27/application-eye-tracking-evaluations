/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 01a42ddc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  
  if (unaff_x19 == 0) {
    puVar1 = *(undefined8 **)
              (*(long *)
                Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
              0xb8);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x19 + 0x10);
  }
  return *puVar1;
}


