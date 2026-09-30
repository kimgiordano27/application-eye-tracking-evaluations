/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 02cb4448
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetPassthroughCapabilities(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0xcb0) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    CAPI_ovr_ApplicationOptions_SetLobbySessionId_mF6CC4743DC27C0EF89497F07AE31E77BB3E05735::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_StringToNative_m173627D71EB50C1F9E17F6638116ED2FCA2534F2(uVar1);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  CAPI_ovr_ApplicationOptions_SetLobbySessionId_Native_m8EC3B0D319864E03A6EF9962DA3E144EB24AF0F7
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x20),0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar1,0);
  return;
}


