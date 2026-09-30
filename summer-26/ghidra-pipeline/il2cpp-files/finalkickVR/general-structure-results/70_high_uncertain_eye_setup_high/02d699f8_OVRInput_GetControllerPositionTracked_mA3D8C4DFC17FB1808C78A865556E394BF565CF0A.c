/*
FUNCTION_NAME: OVRInput_GetControllerPositionTracked_mA3D8C4DFC17FB1808C78A865556E394BF565CF0A
ENTRY_POINT: 02d699f8
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


byte OVRInput_GetControllerPositionTracked_mA3D8C4DFC17FB1808C78A865556E394BF565CF0A(int param_1)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRInput_GetControllerPositionTracked_mA3D8C4DFC17FB1808C78A865556E394BF565CF0A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRInput_GetControllerPositionTracked_mA3D8C4DFC17FB1808C78A865556E394BF565CF0A::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_1 < 3) {
    if (param_1 == 1) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(0xc,0);
      return bVar2 & 1;
    }
    if (param_1 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(0xd,0);
      return bVar2 & 1;
    }
  }
  else {
    if (param_1 == 0x20) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(3,0);
      return bVar2 & 1;
    }
    if (param_1 == 0x40) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(4,0);
      return bVar2 & 1;
    }
  }
  return 0;
}


