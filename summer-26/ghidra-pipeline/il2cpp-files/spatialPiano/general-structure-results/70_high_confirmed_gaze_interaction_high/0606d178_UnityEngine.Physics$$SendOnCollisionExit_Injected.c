/*
FUNCTION_NAME: UnityEngine.Physics$$SendOnCollisionExit_Injected
ENTRY_POINT: 0606d178
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Physics__SendOnCollisionExit_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  if ((*(byte *)(unaff_x26 + 0xe2e) & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireHumanDepthCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<sbyte>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__);
    FUN_02f08768(PTR_DAT_067cc618);
    FUN_02f08768(PTR_DAT_067de050);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__);
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Implicit__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_AddListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_RemoveListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__);
    FUN_02f08768(Method_System_Nullable<byte>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__);
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Multiply__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    *(undefined1 *)(unaff_x26 + 0xe2e) = 1;
  }
  FUN_05b297dc(param_1,0);
  uVar3 = FUN_03440bb0(param_1,*unaff_x22,*unaff_x29);
  uVar4 = *unaff_x25;
  uVar5 = *unaff_x27;
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,uVar5);
  uVar4 = *unaff_x21;
  uVar5 = *unaff_x29;
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,uVar5);
  uVar4 = *unaff_x20;
  uVar5 = *unaff_x27;
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,uVar5);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = PTR_DAT_067cc618;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1d8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x1e8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__;
  uVar4 = *unaff_x23;
  *(undefined8 *)(param_1 + 0x1f0) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = PTR_DAT_067de050;
  uVar4 = *unaff_x23;
  *(undefined8 *)(param_1 + 0x1f8) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__;
  uVar4 = *unaff_x28;
  *(undefined8 *)(param_1 + 0x200) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  uVar4 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,*(undefined8 *)puVar1);
  puVar1 = Method_Mono_Math_BigInteger_op_Implicit__;
  uVar4 = *unaff_x24;
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__;
  uVar4 = *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__;
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,*(undefined8 *)puVar1);
  puVar2 = Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__;
  uVar4 = *unaff_x24;
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar2,uVar4);
  puVar2 = Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__;
  uVar4 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_03440bb0(param_1,*(undefined8 *)puVar2,uVar4);
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireHumanDepthCpuImage__;
  uVar4 = *(undefined8 *)
           Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
  ;
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_03440bb0(param_1,uVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  return;
}


