/*
FUNCTION_NAME: OVRPlugin.RectfPair$$get_Item
ENTRY_POINT: 02ccba48
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


undefined8 OVRPlugin_RectfPair__get_Item(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((CAPI_ovr_GroupPresenceLeaveIntent_GetMatchSessionId_m8D7AFD7DDE6B46DDCDA436B85811E8EB83C28DA8
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    CAPI_ovr_GroupPresenceLeaveIntent_GetMatchSessionId_m8D7AFD7DDE6B46DDCDA436B85811E8EB83C28DA8::
    s_Il2CppMethodInitialized = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native_m7187CE6C7F8BECE5F4ADC886B156B4B7AD16F699
                    (uVar1);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F(uVar1,0);
  return uVar1;
}


