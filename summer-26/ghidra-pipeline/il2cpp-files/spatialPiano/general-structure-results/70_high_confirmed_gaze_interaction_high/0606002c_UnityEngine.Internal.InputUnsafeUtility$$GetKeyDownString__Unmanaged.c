/*
FUNCTION_NAME: UnityEngine.Internal.InputUnsafeUtility$$GetKeyDownString__Unmanaged
ENTRY_POINT: 0606002c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void UnityEngine_Internal_InputUnsafeUtility__GetKeyDownString__Unmanaged(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  
  FUN_02f08768();
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__);
  FUN_02f08768(Method_Mono_Math_BigInteger_op_Implicit__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__);
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_1__
              );
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


