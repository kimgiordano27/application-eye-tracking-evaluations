/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 02ccb710
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_Sizef___cctor(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000018;
  
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native_m9D24C510A6D1022CC3BC68B1607904CB831B3828
                    (in_stack_00000018);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F(uVar1,0);
  return uVar1;
}


