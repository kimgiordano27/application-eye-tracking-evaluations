/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XROcclusionSubsystem.Provider$$get_environmentDepthConfidenceCpuImageApi
ENTRY_POINT: 0729d4e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose
*/


void UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider__get_environmentDepthConfidenceCpuImageApi
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x980));
  FUN_0373b518(System_ValueTuple<int,_Vector2Int>_TypeInfo);
  FUN_0373b518(
              UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<NetworkSceneManager_SceneMap>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NetworkSceneManager_SceneUnloadEventHandler>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<NetworkSpawnManager_DeferredDespawnObject>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
  FUN_0373b518(PTR_DAT_07dc67e8);
  FUN_0373b518(PTR_DAT_07d8ad30);
  FUN_0373b518(
              UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>_TypeInfo
              );
  FUN_0373b518(PTR_DAT_07dc8678);
  *(undefined1 *)(unaff_x20 + 0x977) = 1;
  FUN_072ad810();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<MB3_MeshCombinerSingle_MBBlendShape>_TypeInfo
                              );
    FUN_0449c794(uVar2,uVar4,
                 *(undefined8 *)
                  UnityEngine_UIElements_UxmlObjectAttributeDescription<Columns>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_037aeb94(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_0426cad4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MeshCombinerSingle_MB_DynamicGameObject>_TypeInfo
                                );
      FUN_044a619c(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlObjectAttributeDescription<SortColumnDescriptions>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426d14c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo
                                );
      FUN_0449e5c0(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426ce10();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_TypeInfo
                                );
      FUN_044a8840(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426d374();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
      FUN_0449ed7c(uVar2,uVar4,
                   *(undefined8 *)UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426cf24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                                );
      FUN_044a88f4(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_Experimental_ValueAnimation<StyleValues>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426d488();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_KMeansClustering_DataPoint>_TypeInfo
                                );
      FUN_0449fb8c(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder_ValueBypass<Vector2>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426d038();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo
                                );
      FUN_044a6a40(uVar2,uVar4,*(undefined8 *)System_ValueTuple<int,_int>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426d260();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_TypeInfo
                                );
      FUN_0449d600(uVar2,uVar4,*(undefined8 *)System_ValueTuple<int,_object>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426cbe8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_TypeInfo
                                );
      FUN_0449d768(uVar2,uVar4,*(undefined8 *)System_ValueTuple<int,_Vector2Int>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_0426ccfc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


