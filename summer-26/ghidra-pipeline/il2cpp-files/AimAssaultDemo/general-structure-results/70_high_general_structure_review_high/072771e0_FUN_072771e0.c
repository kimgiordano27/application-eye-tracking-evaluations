/*
FUNCTION_NAME: FUN_072771e0
ENTRY_POINT: 072771e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21
*/


void FUN_072771e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo;
  puVar3 = PTR_DAT_07dc7838;
  puVar2 = PTR_DAT_07dc6e90;
  puVar1 = PTR_DAT_07dc6830;
  if ((DAT_0826890f & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_KMeansClustering_DataPoint>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_MeshCombinerSingle_MBBlendShape>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<MB3_MeshCombinerSingle_MB_DynamicGameObject>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LeaderboardList>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<LinkedAccountList>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<OrgScopedID>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<Party>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<PlatformInitialize>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<ProductList>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkSceneManager_SceneMap>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<NetworkSceneManager_SceneUnloadEventHandler>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<NetworkSpawnManager_DeferredDespawnObject>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07dc6830);
    FUN_0373b518(PTR_DAT_07dc6e90);
    FUN_0373b518(PTR_DAT_07dc7838);
    DAT_0826890f = 1;
  }
  FUN_072ad810(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar2,
               *(undefined8 *)puVar1,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<MB3_MeshCombinerSingle_MBBlendShape>_TypeInfo
                              );
    FUN_0449c794(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo,
                 0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_037aeb94(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_0426cad4(param_1,lVar7,
                 *(undefined8 *)
                  System_Collections_Generic_List<NetworkSceneManager_SceneMap>_TypeInfo);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MeshCombinerSingle_MB_DynamicGameObject>_TypeInfo
                                );
      FUN_044a619c(lVar7,uVar8,
                   *(undefined8 *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d14c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo
                                );
      FUN_0449e5c0(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426ce10(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_TypeInfo
                                );
      FUN_044a8840(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d374(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
      FUN_0449ed7c(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<LinkedAccountList>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426cf24(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                                );
      FUN_044a88f4(lVar7,uVar8,
                   *(undefined8 *)Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d488(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_KMeansClustering_DataPoint>_TypeInfo
                                );
      FUN_0449fb8c(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<OrgScopedID>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d038(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = 
    System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo
                                );
      FUN_044a8b10(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<Party>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d59c(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo
                                );
      FUN_044a6a40(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426d260(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkSceneManager_SceneUnloadEventHandler>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_TypeInfo
                                );
      FUN_0449d600(lVar7,uVar8,*(undefined8 *)Oculus_Platform_Request<ProductList>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426cbe8(param_1,lVar7,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkSpawnManager_DeferredDespawnObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_TypeInfo
                                );
      FUN_0449d768(lVar7,uVar8,
                   *(undefined8 *)Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_0426ccfc(param_1,lVar7,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


