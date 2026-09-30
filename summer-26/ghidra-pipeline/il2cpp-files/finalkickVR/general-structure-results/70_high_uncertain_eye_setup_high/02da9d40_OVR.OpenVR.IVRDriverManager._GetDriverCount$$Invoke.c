/*
FUNCTION_NAME: OVR.OpenVR.IVRDriverManager._GetDriverCount$$Invoke
ENTRY_POINT: 02da9d40
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 OVR_OpenVR_IVRDriverManager__GetDriverCount__Invoke(ulong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000027;
  
  if ((param_1 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                    /* try { // try from 02da9d68 to 02ea9d6f has its CatchHandler @ 02da9e90 */
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
                    /* try { // try from 02da9d70 to 02ea9d73 has its CatchHandler @ 02da9ea8 */
                    /* try { // try from 02da9d74 to 02ea9d9f has its CatchHandler @ 02da9c60 */
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    bStack0000000000000027 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                   (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
    bStack0000000000000027 = bStack0000000000000027 & 1;
    if (bStack0000000000000027 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
      uVar1 = OVRP_1_6_0_ovrp_GetSystemRecommendedMSAALevel_mAA869EA0F0CAA39E32BE18E342F377854CB36D2F
                        (0);
      *(undefined4 *)(unaff_x29 + -4) = uVar1;
      goto LAB_02da9dd4;
    }
  }
  *(undefined4 *)(unaff_x29 + -4) = 2;
LAB_02da9dd4:
  return *(undefined4 *)(unaff_x29 + -4);
}


