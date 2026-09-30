/*
FUNCTION_NAME: Virtence.OpenTypeCS.Encoding$$.ctor
ENTRY_POINT: 02dd2200
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Virtence_OpenTypeCS_Encoding___ctor(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  byte bStack000000000000001f;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  UnityOpenXR_OnSessionBegin_m0422580F20229CC217DB02155FC2DC0D867F74CE::s_Il2CppMethodInitialized =
       1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar2,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f != 0) {
    uVar1 = *(undefined8 *)(unaff_x29 + -8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Virtence_OpenTypeCS_CmapEncoding___ctor(uVar1,0);
  }
  return;
}


