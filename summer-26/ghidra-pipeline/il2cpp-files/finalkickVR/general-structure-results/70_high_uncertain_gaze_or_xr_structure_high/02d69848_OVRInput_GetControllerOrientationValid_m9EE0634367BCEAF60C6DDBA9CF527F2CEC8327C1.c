/*
FUNCTION_NAME: OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1
ENTRY_POINT: 02d69848
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_gaze_retrieval_or_extraction
*/


byte OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1(int param_1)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_1 < 3) {
    if (param_1 == 1) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationValid_m84C2B516B7C2D28967C271C8F5068028E6816717(0xc,0);
      return bVar2 & 1;
    }
    if (param_1 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationValid_m84C2B516B7C2D28967C271C8F5068028E6816717(0xd,0);
      return bVar2 & 1;
    }
  }
  else {
    if (param_1 == 0x20) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationValid_m84C2B516B7C2D28967C271C8F5068028E6816717(3,0);
      return bVar2 & 1;
    }
    if (param_1 == 0x40) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar2 = OVRPlugin_GetNodeOrientationValid_m84C2B516B7C2D28967C271C8F5068028E6816717(4,0);
      return bVar2 & 1;
    }
  }
  return 0;
}


