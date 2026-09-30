/*
FUNCTION_NAME: FUN_060704cc
ENTRY_POINT: 060704cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060704cc(long param_1)

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
  
  puVar9 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<sbyte>__;
  puVar8 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputDevice,_InputDevice>__
  ;
  puVar7 = Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>_Invoke__;
  puVar6 = Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__;
  puVar5 = Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__;
  puVar4 = Method_UnityEngine_Events_UnityEvent<Quaternion>_Invoke__;
  puVar3 = Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__;
  puVar2 = Method_System_Nullable<byte>__ctor__;
  puVar1 = Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo;
  if ((DAT_06bc5e34 & 1) == 0) {
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
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<float>__ctor__);
    FUN_02f08768(Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>_RemoveListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
    FUN_02f08768(Method_System_Nullable<byte>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallback_<>c_<_ctor>b__2_0__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__);
    FUN_02f08768(Method_Mono_Math_BigInteger_op_Multiply__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    DAT_06bc5e34 = 1;
  }
  FUN_05b297dc(param_1,0);
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar2;
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar6;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar7;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar5;
  uVar12 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = PTR_DAT_067cc618;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<float>_AddListener__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>_RemoveListener__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<float>_Invoke__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x200) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  Method_UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallback_<>c_<_ctor>b__2_0__
  ;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__;
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x210) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = PTR_DAT_067de050;
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x218) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>_Invoke__;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x220) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  uVar11 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__;
  *(undefined8 *)(param_1 + 0x228) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_Invoke__;
  uVar11 = *(undefined8 *)Method_Mono_Math_BigInteger_op_Implicit__;
  *(undefined8 *)(param_1 + 0x230) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar1);
  puVar2 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__;
  uVar11 = *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__;
  *(undefined8 *)(param_1 + 0x238) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar2);
  puVar3 = Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_Invoke__;
  uVar11 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x240) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,uVar11);
  puVar1 = Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>__ctor__;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x248) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireHumanDepthCpuImage__;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
  ;
  *(undefined8 *)(param_1 + 0x250) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 600) = uVar10;
  return;
}


