/*
FUNCTION_NAME: UnityEngine.Internal.InputUnsafeUtility$$GetAxis_Injected
ENTRY_POINT: 06060070
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Internal_InputUnsafeUtility__GetAxis_Injected(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x2f0));
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__);
  FUN_02f08768(Method_System_Nullable<byte>__ctor__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__);
  FUN_02f08768(Method_Mono_Math_BigInteger_op_Multiply__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_RemoveListener__);
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
              );
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
  *(undefined1 *)(unaff_x22 + 0xe0e) = 1;
  FUN_05b297dc();
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x220) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x228) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x200) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x208) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x210) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x218) = uVar1;
  uVar1 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x230) = uVar1;
  return;
}


