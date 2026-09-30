/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 02cdc684
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long lStack0000000000000078;
  
  lStack0000000000000078 = *(long *)(unaff_x29 + -0x38);
  if (lStack0000000000000078 == 0) {
    in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x10);
    in_stack_00000068 = in_stack_00000060;
    uVar1 = Box(*(Il2CppClass **)
                 Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                ,&stack0x00000060);
    uVar1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                      (*(undefined8 *)
                        Method_Newtonsoft_Json_Linq_JToken_<AfterSelf>d__49_System_Collections_IEnumerator_Reset__
                       ,uVar1);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar1,0);
  }
  else {
    in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x38);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(in_stack_00000070,0);
  }
  return;
}


