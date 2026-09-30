/*
FUNCTION_NAME: FUN_05ac8d78
ENTRY_POINT: 05ac8d78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ac8d78(long param_1)

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
  
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushAsyncInternal>d__38>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_Base64Encoder_<EncodeAsync>d__13>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<ProcessOperation>d__24>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ValueTaskAwaiter,_CryptoStream_<WriteAsyncCore>d__49>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
  ;
  puVar3 = Method_Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs__ctor__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  puVar1 = Method_UnityEngine_Events_UnityEvent<Pose>_Invoke__;
  if ((DAT_06bc260b & 1) == 0) {
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
    DAT_06bc260b = 1;
  }
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)puVar5;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar6;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar7;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar8;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar9;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar11,uVar12);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_ARStarterAssets_ARSampleMenuManager_ShowMenu__;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
  ;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar11);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  FUN_05ac8f48(param_1);
  return;
}


