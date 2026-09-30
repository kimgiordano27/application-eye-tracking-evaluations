/*
FUNCTION_NAME: OVR.OpenVR.CVRChaperoneSetup$$GetWorkingSeatedZeroPoseToRawTrackingPose
ENTRY_POINT: 02db4000
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_CVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose(Il2CppClass *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 uVar4;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 uStack000000000000004c;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x38) = *puVar3;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x38),0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x20);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    uStack000000000000004c =
         OVRP_1_84_0_ovrp_UpdatePassthroughColorLut_m79ADC74EA655FD287F6E5988EEE5D1EDF3E749D8
                   (*(undefined8 *)(unaff_x29 + -0x48),uVar2,uVar4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(uStack000000000000004c,0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


