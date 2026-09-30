/*
FUNCTION_NAME: FUN_06479de0
ENTRY_POINT: 06479de0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_8;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_06479de0(long param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_20__;
  if ((DAT_06dccf63 & 1) == 0) {
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_21__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_22__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_23__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_24__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_25__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_26__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_27__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_28__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_29__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_3__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_30__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_4__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_5__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_6__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_7__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_8__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    FUN_02d965b8(Method_OVRGLTFLoader_<>c__DisplayClass26_0_<LoadGLBCoroutine>b__1__);
    FUN_02d965b8(Method_OVRGLTFLoader_<LoadGLBCoroutine>d__26_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_OVRGLTFLoader_<LoadGLTF>d__37_System_Collections_IEnumerator_Reset__);
    FUN_02d965b8(
                Method_OVRGLTFLoader_<ProcessAnimations>d__48_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_OVRGLTFLoader_<ProcessNode>d__38_System_Collections_IEnumerator_Reset__);
    FUN_02d965b8(Method_OVRHandTest_<>c_<_cctor>b__19_0__);
    FUN_02d965b8(Method_OVRHandTest_<>c_<Start>b__14_0__);
    FUN_02d965b8(Method_OVRLocatable_TrackingSpacePose_ComputeWorldPosition__);
    FUN_02d965b8(Method_OVRLocatable_TrackingSpacePose_ComputeWorldPosition__);
    FUN_02d965b8(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    FUN_02d965b8(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    FUN_02d965b8(Method_OVRManager_<>c_<_cctor>b__519_0__);
    FUN_02d965b8(Method_OVRManager_<>c_<FindMainCamera>b__469_0__);
    FUN_02d965b8(Method_OVRManager_<>c_<InitOVRManager>b__452_0__);
    FUN_02d965b8(Method_OVRMicrogestureEventSource_<>c_<_ctor>b__8_0__);
    FUN_02d965b8(
                Method_OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(
                Method_OVRMicrogesturesSample_<ShowGestureLabel>d__26_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_OVRNativeList_CapacityHelper_AllocateEmpty<long>__);
    FUN_02d965b8(Method_OVRNativeList_CapacityHelper_AllocateEmpty<OVRLocatable>__);
    FUN_02d965b8(Method_OVRNativeList_CapacityHelper_AllocateEmpty<ulong>__);
    FUN_02d965b8(Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__);
    FUN_02d965b8(Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__);
    FUN_02d965b8(Method_OVRNetwork_OVRNetworkTcpServer_DoAcceptTcpClientCallback__);
    FUN_02d965b8(Method_OVRNetwork_OVRNetworkTcpServer_DoWriteDataCallback__);
    FUN_02d965b8(Method_OVROverlayCanvas_<>c__DisplayClass69_0_<RenderCamera>b__0__);
    FUN_02d965b8(Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__);
    FUN_02d965b8(Method_OVRPassthroughColorLut_ColorLutTextureConverter_GetTextureSettings__);
    FUN_02d965b8(Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__);
    FUN_02d965b8(Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__);
    FUN_02d965b8(Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__);
    FUN_02d965b8(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_0__);
    FUN_02d965b8(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__);
    FUN_02d965b8(Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__);
    FUN_02d965b8(Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Spherecast>b__16_0__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_0__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_1__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_10__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_100__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_101__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_102__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_103__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_104__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_105__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_106__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_107__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_108__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_109__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_11__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_110__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_111__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_112__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_113__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_114__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_115__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_116__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_117__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_118__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_119__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_12__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_120__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_121__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_122__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_123__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_124__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_125__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_126__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_127__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_128__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_129__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_13__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_130__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_131__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_132__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_133__);
    FUN_02d965b8(Method_OVRControllerTest_<>c_<Start>b__4_20__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_134__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_135__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_136__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_137__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_138__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_139__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_14__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_140__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_141__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_142__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_143__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_144__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_145__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_146__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_147__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_148__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_149__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_15__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_150__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_151__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_152__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_153__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_16__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_17__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_18__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_19__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_2__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_20__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_21__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_22__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_23__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_24__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_25__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_26__);
    DAT_06dccf63 = 1;
  }
  puVar11 = Method_OVRPlugin_<>c_<_cctor>b__807_133__;
  puVar10 = Method_OVRPlugin_<>c_<_cctor>b__807_119__;
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__807_118__;
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__807_107__;
  puVar7 = Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__;
  puVar6 = Method_OVRNativeList_CapacityHelper_AllocateEmpty<long>__;
  puVar5 = Method_OVRLocatable_TrackingSpacePose_ComputeWorldPosition__;
  puVar4 = Method_OVRLocatable_TrackingSpacePose_ComputeWorldPosition__;
  puVar3 = Method_OVRControllerTest_<>c_<Start>b__4_22__;
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_21__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_04470d60(param_1,*(undefined8 *)puVar11);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
  FUN_0400f9fc(uVar12,0x54,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  LeanTween__value((undefined8 *)(param_1 + 0x18),uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_04e9288c(uVar12,0xfc,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  LeanTween__value((undefined8 *)(param_1 + 0x20),uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_0647b2f4();
  OVRTask__Create<OVRResult<object,_Int32Enum>>(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0647b33c();
  OVRTask__Create<OVRResult<object,_Int32Enum>>(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__);
  FUN_0647b384();
  OVRTask__Create<OVRResult<object,_Int32Enum>>(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_24__);
  FUN_0647c340();
  puVar1 = Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__;
  FUN_03668828(param_1,uVar12,
               *(undefined8 *)Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_25__);
  FUN_0647c768();
  FUN_03668268(param_1,uVar12,*(undefined8 *)Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__
              );
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_26__);
  FUN_0647cf08();
  FUN_036683d8(param_1,uVar12,*(undefined8 *)puVar6);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_27__);
  FUN_0647cf08();
  FUN_036683d8(param_1,uVar12,*(undefined8 *)puVar6);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_28__);
  FUN_0647d328();
  FUN_03668548(param_1,uVar12,
               *(undefined8 *)Method_OVRNativeList_CapacityHelper_AllocateEmpty<OVRLocatable>__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_29__);
  FUN_0647d59c();
  FUN_036686b8(param_1,uVar12,
               *(undefined8 *)Method_OVRNativeList_CapacityHelper_AllocateEmpty<ulong>__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_3__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_30__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_4__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_5__);
  FUN_0647e140();
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_103__;
  FUN_03668b08(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_103__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_6__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_7__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_8__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRGLTFLoader_<>c__DisplayClass26_0_<LoadGLBCoroutine>b__1__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRGLTFLoader_<LoadGLBCoroutine>d__26_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRGLTFLoader_<LoadGLTF>d__37_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRGLTFLoader_<ProcessAnimations>d__48_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRGLTFLoader_<ProcessNode>d__38_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRHandTest_<>c_<_cctor>b__19_0__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRHandTest_<>c_<Start>b__14_0__);
  FUN_0647f954();
  FUN_03668998(param_1,uVar12,
               *(undefined8 *)Method_OVRNetwork_OVRNetworkTcpServer_DoAcceptTcpClientCallback__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  FUN_0647b420();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)
              Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRManager_<>c_<_cctor>b__519_0__);
  FUN_0647b46c();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRManager_<>c_<FindMainCamera>b__469_0__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRManager_<>c_<InitOVRManager>b__452_0__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRMicrogestureEventSource_<>c_<_ctor>b__8_0__);
  FUN_0647b4bc();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_OVRMicrogesturesSample_<ShowGestureLabel>d__26_System_Collections_IEnumerator_Reset__
                             );
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_115__);
  FUN_0647b50c();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)
              Method_OVRPassthroughColorLut_ColorLutTextureConverter_GetTextureSettings__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_116__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_117__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_12__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_120__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_121__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_122__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_123__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_124__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_125__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_126__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_127__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_128__);
  FUN_0647b580();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_102__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_129__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_13__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_130__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_131__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_132__);
  FUN_0647b5d8();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_101__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_134__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_135__);
  FUN_06482f40();
  FUN_03669238(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_110__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_136__);
  FUN_064831b4();
  OVRTask__RegisterType<__Il2CppFullySharedGenericType>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_111__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_137__);
  FUN_0647b62c();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)
              Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Spherecast>b__16_0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_138__);
  FUN_064835e8();
  FUN_03669518(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_112__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_139__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_14__);
  FUN_06483a4c();
  FUN_03669688(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_113__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_140__);
  FUN_0647b680();
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_108__;
  FUN_036680f8(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_108__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_141__);
  FUN_0647b6c8();
  FUN_036680f8(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_142__);
  FUN_0647b710();
  FUN_03667f88(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_11__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_143__);
  FUN_0647b758();
  FUN_03667e18(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_109__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_144__);
  FUN_06484460();
  FUN_036697f8(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_114__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_145__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_146__);
  FUN_0647b7a8();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)Method_OVRNetwork_OVRNetworkTcpServer_DoWriteDataCallback__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_148__);
  FUN_06484a94();
  FUN_03668c78(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_105__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_147__);
  FUN_06484d08();
  FUN_03668de8(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_104__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_149__);
  FUN_0647b7f8();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_15__);
  FUN_0647b840();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_1__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_150__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_151__);
  FUN_064857f8();
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_106__;
  FUN_03668f58(param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_106__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_152__);
  FUN_064857f8();
  FUN_03668f58(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_153__);
  FUN_064857f8();
  FUN_03668f58(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_16__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_17__);
  FUN_064857f8();
  FUN_03668f58(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_18__);
  FUN_0647b8a0();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_10__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_19__);
  FUN_0647b8e8();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_2__);
  FUN_0647b930();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_100__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_20__);
  FUN_0647c340();
  FUN_03668828(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_21__);
  FUN_0647e140();
  FUN_03668b08(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_22__);
  FUN_0647b980();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)Method_OVROverlayCanvas_<>c__DisplayClass69_0_<RenderCamera>b__0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_23__);
  FUN_0647b9c8();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)
              Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_24__);
  FUN_0647ba10();
  OVRTask__Create<OVRResult<object,_Int32Enum>>
            (param_1,uVar12,
             *(undefined8 *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_0__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_25__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_26__);
  FUN_0647da00();
  FUN_036690c8(param_1,uVar12,*(undefined8 *)puVar8);
  return;
}


