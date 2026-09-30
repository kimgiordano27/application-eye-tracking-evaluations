/*
FUNCTION_NAME: OVRPlugin.RectiPair$$set_Item
ENTRY_POINT: 02ccb928
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRPlugin_RectiPair__set_Item(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((CAPI_ovr_GroupPresenceLeaveIntent_GetLobbySessionId_m795A21FABB07663111D18E2531926B9A0180E9BD
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    CAPI_ovr_GroupPresenceLeaveIntent_GetLobbySessionId_m795A21FABB07663111D18E2531926B9A0180E9BD::
    s_Il2CppMethodInitialized = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native_m425F6080276768FDC0FFD8DC989166FB10D3976B
                    (uVar1);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F(uVar1,0);
  return uVar1;
}


