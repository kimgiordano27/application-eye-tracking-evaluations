/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XROcclusionSubsystem$$TryGetEnvironmentDepthConfidence
ENTRY_POINT: 05d3c6a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 339
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo;ordered_structure;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_17;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARSubsystems_XROcclusionSubsystem__TryGetEnvironmentDepthConfidence(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02d6084c();
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Copy__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRShareAnchorResult>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRShareAnchorResult>_GetEnumerator__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRTextureDescriptor>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_GetSubArray__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float3>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float3>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float4>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float4>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<float4x4>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<quaternion>_Dispose__);
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>__ctor__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>_Dispose__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
              );
  FUN_02d6084c(Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
              );
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__)
  ;
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__)
  ;
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__)
  ;
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__ctor__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_Dispose__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
              );
  FUN_02d6084c(
              Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
              );
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Clear__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Item__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_ElementAt__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_RemoveAtSwapBack__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_Item__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_ElementAt__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_ResizeUninitialized__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_IsEmpty__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_ElementAt__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_RemoveAtSwapBack__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_Item__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_IsCreated__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Item__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_Dispose__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_ResizeUninitialized__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Item__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Length__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>_Add__);
  FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>_Clear__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>__ctor__);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRRaycastHit>_get_IsCreated__);
  FUN_02d6084c(PTR_DAT_0678be18);
  FUN_02d6084c(PTR_DAT_067761c8);
  FUN_02d6084c(Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__);
  *(undefined1 *)(unaff_x20 + 0xa84) = 1;
  FUN_05ce6dd8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_04d6838c(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Copy__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_033305a8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_04d687c4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033318e0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_04d685a8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03330f44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_04d6892c(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331f48();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_04d6865c(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Add__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331278();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d689e0(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Add__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333227c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
    FUN_04d68710(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_get_IsCreated__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033315ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_04d68a94(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>__ctor__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033325b0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_04d68878(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_IsCreated__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331c14();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_04d68440(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<IndirectBufferContext>_Clear__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033308dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_04d684f4(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<float2>_GetSubArray__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03330c10();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Count__);
    Mono_Math_BigInteger_ModulusRing__Pow
              (uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<float3>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333d548();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_04d6d16c(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<float3>_Dispose__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e880();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6cf50(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<float4>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333dee4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_04d6d2d4(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<float4>_Dispose__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333eee8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_04d6d004(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e218();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_04d6d388(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeArray<float4x4>_Dispose__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333f21c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_04d6d0b8(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<quaternion>_Dispose__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e54c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_04d6d220(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333ebb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_04d6cde8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>_Dispose__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333d87c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                              );
    FUN_04d6ce9c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333dbb0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_ToArray__
                              );
    FUN_04d69bc4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337530();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                              );
    FUN_04d69ffc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338868();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d69de0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337ecc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_04d6a164(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338ed0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d69e94(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338200();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_04d6a218(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03339204();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338534();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338b9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337864();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337b98();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x100) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x100,uVar2);
  }
  FUN_03341558();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x108,uVar2);
  }
  FUN_03342890();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x110,uVar2);
  }
  FUN_03341ef4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    FUN_0638a10c(*(undefined8 *)(lVar1 + 0xb8));
    return;
  }
  FUN_03342ef8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x120) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x120,uVar2);
  }
  FUN_03342228();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x128,uVar2);
  }
  FUN_0334322c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x130,uVar2);
  }
  FUN_0334255c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x138) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x138,uVar2);
  }
  FUN_03343560();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x140) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x140,uVar2);
  }
  FUN_03342bc4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x148) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x148,uVar2);
  }
  FUN_0334188c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x150,uVar2);
  }
  FUN_03341bc0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_Dispose__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x158) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x158,uVar2);
  }
  FUN_03339538();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x160) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x160,uVar2);
  }
  FUN_0333a870();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x168) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x168,uVar2);
  }
  FUN_03339ed4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x170,uVar2);
  }
  FUN_0333aed8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x178,uVar2);
  }
  FUN_0333a208();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x180,uVar2);
  }
  FUN_0333b20c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x188,uVar2);
  }
  FUN_0333a53c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 400,uVar2);
  }
  FUN_0333aba4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(uVar2,uVar4,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Clear__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x198,uVar2);
  }
  FUN_0333986c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1a0,uVar2);
  }
  FUN_03339ba0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1a8,uVar2);
  }
  FUN_03343894();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1b0,uVar2);
  }
  FUN_03344bcc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (uVar2,uVar4,
               *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1b8,uVar2);
  }
  FUN_03344230();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1c0,uVar2);
  }
  FUN_03345234();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1c8,uVar2);
  }
  FUN_03344564();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1d0,uVar2);
  }
  FUN_03345568();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1d8,uVar2);
  }
  FUN_03344898();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1e0,uVar2);
  }
  FUN_0334589c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(uVar2,uVar4,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1e8,uVar2);
  }
  FUN_03344f00();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0638a53c();
  return;
}


