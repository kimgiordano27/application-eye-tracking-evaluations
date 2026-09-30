/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARLightEstimationData$$get_averageMainLightBrightness
ENTRY_POINT: 05cffdc0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 218
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_21;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_9
*/


void UnityEngine_XR_ARFoundation_ARLightEstimationData__get_averageMainLightBrightness(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x48) == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_04d68878(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Clear__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03331c14();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x50) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_04d68440(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Find__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_033308dc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x58) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_04d684f4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03330c10();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x60) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Count__);
    Mono_Math_BigInteger_ModulusRing__Pow
              (uVar1,uVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
               ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333d548();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x68) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_04d6d16c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333e880();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6cf50(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333dee4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_04d6d2d4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333eee8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_04d6d004(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333e218();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_04d6d388(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333f21c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_04d6d0b8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333e54c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_04d6d220(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__,0)
    ;
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333ebb4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_04d6cde8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333d87c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                              );
    FUN_04d6ce9c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_0333dbb0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_ToArray__
                              );
    FUN_04d69bc4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337530();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                              );
    FUN_04d69ffc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338868();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d69de0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337ecc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_04d6a164(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338ed0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d69e94(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338200();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_04d6a218(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__,0)
    ;
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03339204();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338534();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03338b9c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Count__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337864();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>__ctor__
                 ,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar2 = uVar1;
    thunk_FUN_02dd37b4(puVar2,uVar1);
  }
  FUN_03337b98();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x100) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x100,uVar1);
  }
  FUN_03341558();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x108) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x108,uVar1);
  }
  FUN_03342890();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x110) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x110,uVar1);
  }
  FUN_03341ef4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e7d0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x118) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x118,uVar1);
  }
  FUN_03342ef8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x120) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x120,uVar1);
  }
  FUN_03342228();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x128) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x128,uVar1);
  }
  FUN_0334322c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_ToArray__,0
                );
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x130) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x130,uVar1);
  }
  FUN_0334255c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x138) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x138,uVar1);
  }
  FUN_03343560();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Item__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x140) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x140,uVar1);
  }
  FUN_03342bc4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x148) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x148,uVar1);
  }
  FUN_0334188c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x150) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x150,uVar1);
  }
  FUN_03341bc0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x158) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x158,uVar1);
  }
  FUN_03339538();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x160) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x160,uVar1);
  }
  FUN_0333a870();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__,0)
    ;
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x168) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x168,uVar1);
  }
  FUN_03339ed4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x170) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x170,uVar1);
  }
  FUN_0333aed8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x178) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x178,uVar1);
  }
  FUN_0333a208();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x180) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x180,uVar1);
  }
  FUN_0333b20c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x188) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x188,uVar1);
  }
  FUN_0333a53c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 400) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 400,uVar1);
  }
  FUN_0333aba4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x198) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x198,uVar1);
  }
  FUN_0333986c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1a0,uVar1);
  }
  FUN_03339ba0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1a8,uVar1);
  }
  FUN_03343894();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1b0,uVar1);
  }
  FUN_03344bcc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (uVar1,uVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_Add__
               ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1b8,uVar1);
  }
  FUN_03344230();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1c0,uVar1);
  }
  FUN_03345234();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_RemoveAt__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1c8,uVar1);
  }
  FUN_03344564();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1d0,uVar1);
  }
  FUN_03345568();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1d8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1d8,uVar1);
  }
  FUN_03344898();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1e0,uVar1);
  }
  FUN_0334589c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1e8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1e8,uVar1);
  }
  FUN_03344f00();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_04d6eaa0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1f0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1f0,uVar1);
  }
  FUN_03343bc8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_04d6eb54(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1f8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x1f8,uVar1);
  }
  FUN_03343efc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_04d6ad58(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_Add__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x200) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x200,uVar1);
  }
  FUN_0333b540();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__)
    ;
    FUN_04d6b190(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x208) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x208,uVar1);
  }
  FUN_0333c878();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                              );
    FUN_04d6af74(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x210) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x210,uVar1);
  }
  FUN_0333bedc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_04d6b2f8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x218) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x218,uVar1);
  }
  FUN_0333cee0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_04d6b028(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Contains__,0)
    ;
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x220) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x220,uVar1);
  }
  FUN_0333c210();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_04d6b3ac(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x228) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x228,uVar1);
  }
  FUN_0333d214();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_04d6b0dc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_Clear__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x230) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x230,uVar1);
  }
  FUN_0333c544();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Capacity__
                              );
    FUN_04d6b244(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x238) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x238,uVar1);
  }
  FUN_0333cbac();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>__ctor__)
    ;
    FUN_04d6ae0c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>__ctor__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x240) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x240,uVar1);
  }
  FUN_0333b874();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>__ctor__);
    FUN_04d6aec0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_Add__,0)
    ;
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x248) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x248,uVar1);
  }
  FUN_0333bba8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                              );
    FUN_04d6f1a8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x250) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x250,uVar1);
  }
  FUN_03345bd0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_04d6f694(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 600) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 600,uVar1);
  }
  FUN_0334723c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_04d6f748(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x260) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x260,uVar1);
  }
  FUN_03347570();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6f7fc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x268) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x268,uVar1);
  }
  FUN_033478a4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_04d6f5e0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x270) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x270,uVar1);
  }
  FUN_03346f08();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Remove__)
    ;
    FUN_04d6f25c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x278) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x278,uVar1);
  }
  FUN_03345f04();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_04d6f310(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x280) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x280,uVar1);
  }
  FUN_03346238();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_04d6d4f0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x288) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x288,uVar1);
  }
  FUN_0333f550();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                              );
    FUN_04d6d874(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x290) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x290,uVar1);
  }
  FUN_03340554();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_04d6d658(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x298) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x298,uVar1);
  }
  FUN_0333fbb8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_04d6db44(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2a0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2a0,uVar1);
  }
  FUN_03340bbc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_04d6d70c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Clear__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2a8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2a8,uVar1);
  }
  FUN_0333feec();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_04d6dbf8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2b0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2b0,uVar1);
  }
  FUN_03340ef0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Add__);
    FUN_04d6d7c0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2b8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2b8,uVar1);
  }
  Unity_Jobs_IJobExtensions__Schedule<NativeStreamDisposeJob>();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d6dcac(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Item__,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2c0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2c0,uVar1);
  }
  FUN_03341224();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_04d6d9dc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2c8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2c8,uVar1);
  }
  FUN_03340888();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__
                              );
    FUN_04d6d5a4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2d0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2d0,uVar1);
  }
  FUN_0333f884();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_04d68d00(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_RemoveAt__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2d8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2d8,uVar1);
  }
  FUN_033328e4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_04d69084(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Count__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2e0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2e0,uVar1);
  }
  FUN_033338e8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d68e68(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2e8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2e8,uVar1);
  }
  FUN_03332f4c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    FUN_0638a0dc(*(undefined8 *)(lVar3 + 0xb8));
    return;
  }
  FUN_03333c1c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_04d68f1c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2f8) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2f8,uVar1);
  }
  FUN_03333280();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x300) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x300,uVar1);
  }
  FUN_03333f50();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x308) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x308,uVar1);
  }
  FUN_033335b4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x310) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x310,uVar1);
  }
  FUN_03334284();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x318) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x318,uVar1);
  }
  FUN_03332c18();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Clear__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 800) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 800,uVar1);
  }
  FUN_033345b8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Count__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x328) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x328,uVar1);
  }
  FUN_0333652c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Item__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x330) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x330,uVar1);
  }
  FUN_03335b90();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Add__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x338) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x338,uVar1);
  }
  FUN_03336b94();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Clear__,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x340) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x340,uVar1);
  }
  FUN_03335ec4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__ctor__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x348) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x348,uVar1);
  }
  FUN_03336ec8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Add__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x350) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x350,uVar1);
  }
  FUN_033361f8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Exists__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x358) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x358,uVar1);
  }
  FUN_033371fc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAll__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x360) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x360,uVar1);
  }
  FUN_03336860();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(uVar1,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAt__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x368) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x368,uVar1);
  }
  FUN_0333585c();
  return;
}


