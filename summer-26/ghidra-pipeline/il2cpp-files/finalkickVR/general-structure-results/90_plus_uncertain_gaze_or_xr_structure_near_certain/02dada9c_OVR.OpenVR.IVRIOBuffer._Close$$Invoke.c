/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Close$$Invoke
ENTRY_POINT: 02dada9c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVR_OpenVR_IVRIOBuffer__Close__Invoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 in_w8;
  long in_x9;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack000000000000002f;
  
  *(undefined1 *)(in_x9 + 0x692) = in_w8;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar2 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x21) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x20);
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x30);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    bStack000000000000002f =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
    bStack000000000000002f = bStack000000000000002f & 1;
    if (bStack000000000000002f != 0) {
      uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      OVRP_1_29_0_ovrp_GetLayerAndroidSurfaceObject_m3FF8D33D69BC59A3CAFDCACD51A9C1C6FE78F690
                (uVar1,unaff_x29 + -0x20,0);
    }
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


