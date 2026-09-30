/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 02cd981c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  
  CAPI_ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native_m0F808B29A6A330E2D0BED13C18A116EAA885E7BD
            (param_1,in_stack_00000010);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar1,in_stack_00000000);
  return;
}


