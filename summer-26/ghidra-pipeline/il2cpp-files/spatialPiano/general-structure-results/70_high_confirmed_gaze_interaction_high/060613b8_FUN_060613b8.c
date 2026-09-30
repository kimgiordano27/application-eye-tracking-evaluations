/*
FUNCTION_NAME: FUN_060613b8
ENTRY_POINT: 060613b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060613b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__;
  puVar8 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<sbyte>__;
  puVar7 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__;
  puVar6 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__;
  puVar5 = Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__;
  puVar4 = Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__;
  puVar3 = Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__;
  puVar2 = PTR_DAT_067de050;
  puVar1 = PTR_DAT_067cc618;
  if ((DAT_06bc5e14 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireHumanDepthCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<sbyte>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                );
    FUN_02f08768(PTR_DAT_067cc618);
    FUN_02f08768(PTR_DAT_067de050);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__);
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Implicit__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__);
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Multiply__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    DAT_06bc5e14 = 1;
  }
  FUN_05b297dc(param_1,0);
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
  uVar11 = *(undefined8 *)puVar7;
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar9;
  uVar12 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar2;
  uVar12 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar5;
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  uVar11 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar1);
  puVar1 = Method_Mono_Math_BigInteger_op_Implicit__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_Mono_Math_BigInteger_op_Multiply__;
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__;
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireHumanDepthCpuImage__;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
  ;
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  return;
}


