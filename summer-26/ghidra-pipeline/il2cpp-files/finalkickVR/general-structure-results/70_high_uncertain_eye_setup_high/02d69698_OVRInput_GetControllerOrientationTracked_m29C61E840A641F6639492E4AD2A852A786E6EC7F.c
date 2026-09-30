/*
FUNCTION_NAME: OVRInput_GetControllerOrientationTracked_m29C61E840A641F6639492E4AD2A852A786E6EC7F
ENTRY_POINT: 02d69698
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


byte OVRInput_GetControllerOrientationTracked_m29C61E840A641F6639492E4AD2A852A786E6EC7F(int param_1)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRInput_GetControllerOrientationTracked_m29C61E840A641F6639492E4AD2A852A786E6EC7F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRInput_GetControllerOrientationTracked_m29C61E840A641F6639492E4AD2A852A786E6EC7F::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_1 < 3) {
    if (param_1 == 1) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F(0xc,0);
      return bVar2 & 1;
    }
    if (param_1 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F(0xd,0);
      return bVar2 & 1;
    }
  }
  else {
    if (param_1 == 0x20) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F(3,0);
      return bVar2 & 1;
    }
    if (param_1 == 0x40) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F(4,0);
      return bVar2 & 1;
    }
  }
  return 0;
}


