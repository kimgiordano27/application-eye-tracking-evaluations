/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 044fce74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (void)

{
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_067bb38c(&stack0x00000008);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    FUN_067ba838(&stack0x00000040,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


