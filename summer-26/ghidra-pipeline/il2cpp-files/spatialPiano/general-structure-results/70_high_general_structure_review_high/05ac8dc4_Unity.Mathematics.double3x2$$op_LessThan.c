/*
FUNCTION_NAME: Unity.Mathematics.double3x2$$op_LessThan
ENTRY_POINT: 05ac8dc4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_double3x2__op_LessThan(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  undefined8 *puVar8;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0x18);
  puVar10 = *(undefined8 **)(unaff_x27 + 0x9f0);
  puVar9 = *(undefined8 **)(unaff_x26 + 0x9f8);
  puVar8 = *(undefined8 **)(unaff_x25 + 0xa00);
  puVar7 = *(undefined8 **)(unaff_x24 + 0xa08);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x100);
  if ((*(byte *)(unaff_x22 + 0x60b) & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__);
    FUN_02f08768(Method_Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_Base64Encoder_<EncodeAsync>d__13>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushAsyncInternal>d__38>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_ARStarterAssets_ARSampleMenuManager_ShowMenu__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ValueTaskAwaiter,_CryptoStream_<WriteAsyncCore>d__49>__
                );
    *(undefined1 *)(unaff_x22 + 0x60b) = 1;
  }
  uVar2 = FUN_03440bb0(param_1,*unaff_x29,*unaff_x21);
  uVar3 = *unaff_x28;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  uVar2 = FUN_03440bb0(param_1,uVar3,uVar4);
  uVar3 = *puVar10;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  uVar2 = FUN_03440bb0(param_1,uVar3,uVar4);
  uVar3 = *puVar9;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  uVar2 = FUN_03440bb0(param_1,uVar3,uVar4);
  uVar3 = *puVar8;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  uVar2 = FUN_03440bb0(param_1,uVar3,uVar4);
  uVar3 = *puVar7;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  uVar2 = FUN_03440bb0(param_1,uVar3,uVar4);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_ARStarterAssets_ARSampleMenuManager_ShowMenu__;
  uVar3 = *puVar5;
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  uVar2 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar3);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
  ;
  uVar3 = *puVar5;
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar3);
  *(undefined8 *)(param_1 + 0x1e8) = uVar2;
  FUN_05ac8f48(param_1);
  return;
}


