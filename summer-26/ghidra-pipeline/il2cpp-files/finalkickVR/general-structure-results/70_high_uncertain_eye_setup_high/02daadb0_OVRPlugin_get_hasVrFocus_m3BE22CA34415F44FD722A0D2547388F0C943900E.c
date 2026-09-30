/*
FUNCTION_NAME: OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E
ENTRY_POINT: 02daadb0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E(void)

{
  int iVar1;
  
  if ((OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
            );
  iVar1 = OVRP_1_1_0_ovrp_GetAppHasVrFocus_m55F1CE2E97746A3D68D08FA7077646D7F4A0A3CF(0);
  return iVar1 == 1;
}


