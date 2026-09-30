/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$SetImeWindowPosition
ENTRY_POINT: 0712ef30
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_TextEditingUtilities__SetImeWindowPosition(long param_1)

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
  
  puVar9 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_get_Task__;
  puVar8 = System_Threading_CancellationToken_TypeInfo;
  puVar7 = System_Reflection_FieldInfo___TypeInfo;
  puVar6 = System_Runtime_Serialization_ElementData___TypeInfo;
  puVar5 = Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
  puVar4 = NAudio_Dmo_DmoOutputDataBuffer___TypeInfo;
  puVar3 = System_Collections_DictionaryEntry___TypeInfo;
  puVar2 = PTR_DAT_07a578d8;
                    /* try { // try from 0712ef30 to 0722ef43 has its CatchHandler @ 0712f3ec */
  puVar1 = PTR_DAT_07a29538;
                    /* try { // try from 0712ef58 to 0722ef67 has its CatchHandler @ 0712f3f4 */
                    /* try { // try from 0712ef78 to 0722ef9b has its CatchHandler @ 0712f420 */
  if ((DAT_07eeca01 & 1) == 0) {
    FUN_03642964(NAudio_Dmo_DmoOutputDataBuffer___TypeInfo);
    FUN_03642964(System_Collections_DictionaryEntry___TypeInfo);
                    /* try { // try from 0712efb8 to 0722efc3 has its CatchHandler @ 0712f3fc */
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LoadSceneFromDeviceSharedLib>d__88>__
                );
                    /* try { // try from 0712efcc to 0722efd7 has its CatchHandler @ 0712f3e8 */
    FUN_03642964(System_Drawing_FontFamily___TypeInfo);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_get_Task__
                );
    FUN_03642964(UnityEngine_TextCore_LowLevel_GlyphMarshallingStruct___TypeInfo);
    FUN_03642964(System_Threading_CancellationToken_TypeInfo);
    FUN_03642964(System_DateTimeOffset___TypeInfo);
    FUN_03642964(PTR_DAT_07a00bd8);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_03642964(PTR_DAT_07a13ae0);
    FUN_03642964(UnityEngine_TextCore_Text_FontWeightPair___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_DecalDrawCallChunk_TypeInfo);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                );
    FUN_03642964(System_Globalization_EraInfo___TypeInfo);
    FUN_03642964(UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo);
    FUN_03642964(Unity_InferenceEngine_DynamicTensorDim___TypeInfo);
    FUN_03642964(System_Runtime_CompilerServices_Ephemeron___TypeInfo);
    FUN_03642964(PTR_DAT_07a29538);
    FUN_03642964(System_Reflection_FieldInfo___TypeInfo);
    FUN_03642964(UnityEngine_Display___TypeInfo);
    FUN_03642964(Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo);
    FUN_03642964(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_03642964(System_Runtime_Serialization_ElementData___TypeInfo);
    FUN_03642964(UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo);
    FUN_03642964(PTR_DAT_07a578d8);
    FUN_03642964(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03642964(System_ComponentModel_EventDescriptor___TypeInfo);
    FUN_03642964(UnityEngine_GradientAlphaKey___TypeInfo);
    FUN_03642964(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    FUN_03642964(UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                );
    FUN_03642964(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_03642964(Unity_InferenceEngine_Compiler_Passes_GraphPass___TypeInfo);
    FUN_03642964(System_Runtime_Serialization_FixupHolder___TypeInfo);
    DAT_07eeca01 = 1;
  }
  FUN_06d6ebd0(param_1,0);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1a8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1e8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)puVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1f0,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1f8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1b0,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)UnityEngine_Display___TypeInfo,*(undefined8 *)puVar3)
  ;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1b8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)PTR_DAT_07a00bd8,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1c0,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1c8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1d0,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)System_Globalization_EraInfo___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1d8,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x1e0,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)System_ComponentModel_EventDescriptor___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x200) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x200,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x208,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x210) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x210,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                        ,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x218) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x218,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)PTR_DAT_07a13ae0,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x220) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x220,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)UnityEngine_TextCore_Text_FontWeightPair___TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x228) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x228,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)System_Runtime_Serialization_FixupHolder___TypeInfo,
                        *(undefined8 *)System_Drawing_FontFamily___TypeInfo);
  *(undefined8 *)(param_1 + 0x230) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x230,uVar10);
  puVar1 = System_DateTimeOffset___TypeInfo;
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DecalDrawCallChunk_TypeInfo,
                        *(undefined8 *)System_DateTimeOffset___TypeInfo);
  *(undefined8 *)(param_1 + 0x238) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x238,uVar10);
  puVar2 = UnityEngine_TextCore_LowLevel_GlyphMarshallingStruct___TypeInfo;
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo,
                        *(undefined8 *)
                         UnityEngine_TextCore_LowLevel_GlyphMarshallingStruct___TypeInfo);
  *(undefined8 *)(param_1 + 0x240) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x240,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)UnityEngine_GradientAlphaKey___TypeInfo,
                        *(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x248) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x248,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Unity_InferenceEngine_Compiler_Passes_GraphPass___TypeInfo,
                        *(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x250) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x250,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                        ,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LoadSceneFromDeviceSharedLib>d__88>__
                       );
  *(undefined8 *)(param_1 + 600) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 600,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                        ,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x260) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x260,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__,
                        *(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x268) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x268,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__,
                        *(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x270) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x270,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                        ,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x278) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x278,uVar10);
  uVar10 = FUN_03d6c4a4(param_1,*(undefined8 *)
                                 Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                        ,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x280) = uVar10;
  thunk_FUN_036b7ad0(param_1 + 0x280);
  return;
}


