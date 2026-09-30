/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs$$GetHashCode
ENTRY_POINT: 05d183f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_19;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs__GetHashCode(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  undefined8 uVar4;
  long *unaff_x22;
  
  uVar1 = thunk_FUN_02d9d534(*in_x9);
  FUN_04d6a218();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
  *puVar2 = uVar1;
  thunk_FUN_02dd37b4(puVar2,uVar1);
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
                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
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
                  Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>__ctor__
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
                  Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_Add__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<LoadBundleTaskProgress>>_ClearCallbacksForOwner__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<LoadBundleTaskProgress>>_Register__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<LoadBundleTaskProgress>>_TryGetCallback__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<DocumentSnapshotProxy,_FirestoreError,_string>>__ctor__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<DocumentSnapshotProxy,_FirestoreError,_string>>_ClearCallbacksForOwner__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<DocumentSnapshotProxy,_FirestoreError,_string>>_Register__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<DocumentSnapshotProxy,_FirestoreError,_string>>_TryGetCallback__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<QuerySnapshotProxy,_FirestoreError,_string>>__ctor__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<QuerySnapshotProxy,_FirestoreError,_string>>_ClearCallbacksForOwner__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action<QuerySnapshotProxy,_FirestoreError,_string>>_Register__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Func<TransactionCallbackProxy,_Task>>__ctor__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Func<TransactionCallbackProxy,_Task>>_ClearCallbacksForOwner__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Func<TransactionCallbackProxy,_Task>>_Register__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Func<TransactionCallbackProxy,_Task>>_TryGetCallback__
                 ,0);
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Func<TransactionCallbackProxy,_Task>>_Unregister__
                 ,0);
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
                 *(undefined8 *)Method_Firebase_Firestore_ListenerRegistrationMap<Action>__ctor__,0)
    ;
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action>_ClearCallbacksForOwner__
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
                 *(undefined8 *)Method_Firebase_Firestore_ListenerRegistrationMap<Action>_Register__
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
                  Method_Firebase_Firestore_ListenerRegistrationMap<Action>_TryGetCallback__,0);
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
                  Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
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
    FUN_04d6a380(uVar1,uVar4,*(undefined8 *)Method_System_Data_Listeners<DataViewListener>__ctor__,0
                );
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
    FUN_04d6a434(uVar1,uVar4,*(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Add__,0);
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
    FUN_04d6e9ec(uVar1,uVar4,*(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Remove__,
                 0);
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
                 *(undefined8 *)Method_System_Data_Listeners<DataViewListener>_get_HasListeners__,0)
    ;
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
                Method_System_Collections_Generic_LowLevelDictionary<int,_Task>__ctor__,0);
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
                  Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_Remove__,0);
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
                  Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_set_Item__,0);
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
                  Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__,0);
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
                  Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
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
                  Method_System_Collections_Generic_LowLevelListWithIList<object>__ctor__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Exception>_Add__,0);
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
                  Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__,0);
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
                  Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_AddRange__,0
                );
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
                  Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__,
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
                  Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Item__,0
                );
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_Add__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_IndexOf__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_Insert__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_RemoveAll__,0
                );
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
                  Method_System_Collections_Generic_LowLevelList<object>_get_Capacity__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_get_Item__,0)
    ;
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__,0)
    ;
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_Add__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_RemoveAll__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_get_Count__,0);
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
                  Method_Unity_VisualScripting_MachineEventUnit<AnimationEvent>__ctor__,0);
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
                  Method_Unity_VisualScripting_MachineEventUnit<EmptyEventArgs>__ctor__,0);
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
                 *(undefined8 *)Method_Unity_VisualScripting_MachineEventUnit<string>__ctor__,0);
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
                  Method_Unity_VisualScripting_Machine<FlowGraph,_ScriptGraphAsset>_get_graph__,0);
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
                  Method_Unity_VisualScripting_Machine<FlowGraph,_ScriptGraphAsset>_get_hasGraph__,0
                );
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
    FUN_04d6d4f0(uVar1,uVar4,*(undefined8 *)Method_Unity_VisualScripting_Macro<FlowGraph>__ctor__,0)
    ;
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
                 *(undefined8 *)Method_Firebase_Platform_MainThreadProperty<bool>__ctor__,0);
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
                 *(undefined8 *)Method_Firebase_Platform_MainThreadProperty<bool>_get_Value__,0);
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>__ctor__
                 ,0);
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_GetValue__
                 ,0);
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_UpdateValue__
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>__ctor__
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_GetValue__
                 ,0);
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_UpdateValue__
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__
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
                  Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
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
                 *(undefined8 *)Method_Unity_VisualScripting_ManualEventUnit<EmptyEventArgs>__ctor__
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
    FUN_04d68e68(uVar1,uVar4,*(undefined8 *)Method_Unity_VisualScripting_Maximum<float>__ctor__,0);
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
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
    FUN_04d69138(uVar1,uVar4,*(undefined8 *)Method_Unity_VisualScripting_Maximum<Vector2>__ctor__,0)
    ;
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x2f0) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x2f0,uVar1);
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
    FUN_04d68f1c(uVar1,uVar4,*(undefined8 *)Method_Unity_VisualScripting_Maximum<Vector3>__ctor__,0)
    ;
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
    FUN_04d691ec(uVar1,uVar4,*(undefined8 *)Method_Unity_VisualScripting_Maximum<Vector4>__ctor__,0)
    ;
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
    FUN_04d68fd0(uVar1,uVar4,*(undefined8 *)Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__,0)
    ;
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
    FUN_04d692a0(uVar1,uVar4,*(undefined8 *)Method_System_Memory<byte>__ctor__,0);
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
    FUN_04d68db4(uVar1,uVar4,*(undefined8 *)Method_System_Memory<byte>__ctor__,0);
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
    FUN_04d69354(uVar1,uVar4,*(undefined8 *)Method_System_Memory<byte>_Equals__,0);
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
                  Method_System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_Clear__
                 ,0);
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
                  Method_System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_get_Count__
                 ,0);
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
                  Method_System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_get_Item__
                 ,0);
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__
                 ,0);
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_get_Count__
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
                  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_get_Item__
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x368) = uVar1;
    thunk_FUN_02dd37b4(lVar3 + 0x368,uVar1);
  }
  FUN_0333585c();
  return;
}


