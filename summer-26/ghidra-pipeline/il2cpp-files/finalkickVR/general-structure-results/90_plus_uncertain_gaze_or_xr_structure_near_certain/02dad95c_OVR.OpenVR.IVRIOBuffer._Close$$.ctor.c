/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Close$$.ctor
ENTRY_POINT: 02dad95c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVR_OpenVR_IVRIOBuffer__Close___ctor(void)

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
  byte bStack0000000000000027;
  
  *(undefined1 *)(in_x9 + 0x691) = in_w8;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar2 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x15) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 1;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x14) = 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    bStack0000000000000027 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                   (*(undefined8 *)(unaff_x29 + -0x20),*puVar4,0);
    bStack0000000000000027 = bStack0000000000000027 & 1;
    if (bStack0000000000000027 != 0) {
      uVar1 = *(undefined4 *)(unaff_x29 + -8);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      OVRP_1_15_0_ovrp_GetLayerTextureStageCount_m5901B689D44D8E791FCE1D46A31504C6520DFA76
                (uVar1,unaff_x29 + -0x14,0);
    }
    *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x14);
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


