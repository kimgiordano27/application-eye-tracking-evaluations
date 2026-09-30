/*
FUNCTION_NAME: Virtence.OpenTypeCS.Gsub.SubTableType6Format3$$ToString
ENTRY_POINT: 02e0b618
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Virtence_OpenTypeCS_Gsub_SubTableType6Format3__ToString(Il2CppClass *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar2 + 0x10);
  bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                    (*(undefined8 *)(unaff_x29 + -0x10),0);
  *(byte *)(unaff_x29 + -0x11) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
    NullCheck(*(void **)(unaff_x29 + -0x20));
    uVar3 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(unaff_x29 + -0x20));
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
                    /* try { // try from 02e0b6a8 to 02f0b767 has its CatchHandler @ 02e0b788 */
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
    Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x10),*(void **)(unaff_x29 + -0x28));
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar2 + 0x10);
  OVRTelemetryMarker_AddAnnotation_mE6F17914B4251FF7B6494169D68E9D5FEBAA927D
            (&stack0x00000028,in_stack_00000018,*(undefined8 *)StringLiteral_211,
             *(undefined8 *)(unaff_x29 + -0x30),0);
  in_stack_00000010[1] = in_stack_00000030;
  *in_stack_00000010 = in_stack_00000028;
  in_stack_00000010[2] = in_stack_00000038;
  return;
}


