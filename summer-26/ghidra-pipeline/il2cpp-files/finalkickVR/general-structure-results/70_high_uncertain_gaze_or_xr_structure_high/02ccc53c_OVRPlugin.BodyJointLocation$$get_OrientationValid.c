/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationValid
ENTRY_POINT: 02ccc53c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_BodyJointLocation__get_OrientationValid(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  
  CAPI_ovr_LanguagePackInfo_GetEnglishName_m64E8A33ACC19FBA25AF6F0BB1CCE973509F9FA3B::
  s_Il2CppMethodInitialized = 1;
  uStack0000000000000018 = *(undefined8 *)(unaff_x29 + -8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_LanguagePackInfo_GetEnglishName_Native_m4B590560CA77AAACFF5466F7326C4C3D3F0F2694
                    (uStack0000000000000018);
  uVar1 = CAPI_StringFromNative_mF8188437F3BA8E0FFB24A0C8E656586031427C4F(uVar1,0);
  return uVar1;
}


