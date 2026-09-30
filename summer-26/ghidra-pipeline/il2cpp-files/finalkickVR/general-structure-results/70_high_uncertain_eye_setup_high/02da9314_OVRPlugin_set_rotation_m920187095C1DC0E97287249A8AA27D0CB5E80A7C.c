/*
FUNCTION_NAME: OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C
ENTRY_POINT: 02da9314
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C(byte param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar3 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(param_1 & 1);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    OVRP_1_1_0_ovrp_SetTrackingOrientationEnabled_m339C12EDB7FB3E285054396398D800E4D22933CE(uVar3,0)
    ;
  }
  return;
}


