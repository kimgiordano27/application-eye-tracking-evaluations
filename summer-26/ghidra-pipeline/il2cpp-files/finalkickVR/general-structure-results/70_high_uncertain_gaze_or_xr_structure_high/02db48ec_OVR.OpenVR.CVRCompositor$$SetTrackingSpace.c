/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$SetTrackingSpace
ENTRY_POINT: 02db48ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVR_OpenVR_CVRCompositor__SetTrackingSpace(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  byte bStack000000000000001f;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_908D334519CD2058BD63EE5799AB533DCB4822C6671010C02AFA8C8F673DD8AF
  ;
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_908D334519CD2058BD63EE5799AB533DCB4822C6671010C02AFA8C8F673DD8AF
  ;
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar4,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    uVar2 = OVRP_1_9_0_ovrp_GetSystemHeadsetType_m796B817B52B09D72FECC607FD69406BE0421EF35(0);
    *(undefined4 *)(unaff_x29 + -4) = uVar2;
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


