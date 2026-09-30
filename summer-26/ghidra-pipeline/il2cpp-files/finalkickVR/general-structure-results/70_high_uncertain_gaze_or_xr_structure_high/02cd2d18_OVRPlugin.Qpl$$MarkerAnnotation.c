/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 02cd2d18
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


undefined8 OVRPlugin_Qpl__MarkerAnnotation(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__);
  CAPI_ovr_NetSyncSession_GetVoipGroup_mD35148724D16B6207E0B1002789B344A9EC5E538::
  s_Il2CppMethodInitialized = 1;
  uVar1 = *(undefined8 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_NetSyncSession_GetVoipGroup_Native_m87EDAD07E6F7781ECC18A6720EC4195BB684158D
                    (uVar1);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F(uVar1,0);
  return uVar1;
}


