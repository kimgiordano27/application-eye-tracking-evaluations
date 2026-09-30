/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem$$get_library
ENTRY_POINT: 0650e068
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem__get_library
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_05171ffc(param_2,param_3,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0) = unaff_x20;
  thunk_FUN_02f411dc();
  FUN_037d861c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
    FUN_051720b0(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_SortedList<string,_object>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d8964();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                              );
    FUN_0516d34c(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_SortedList<string,_RpcStaticInvokeDelegate>_TypeInfo,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d2064();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516d784(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_SortedList<TrackableId,_MeshFilter>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d3414();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsConverter>_TypeInfo)
    ;
    FUN_0516d568(uVar2,uVar4,
                 *(undefined8 *)
                  System_Buffers_SpanAction<char,_ValueTuple<byte[],_int,_int>>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d2a3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                              );
    FUN_0516d8ec(uVar2,uVar4,
                 *(undefined8 *)
                  System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_bool>>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d3aa4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
    FUN_0516d61c(uVar2,uVar4,
                 *(undefined8 *)
                  System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d2d84();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VehicleTypes>_TypeInfo
                              );
    FUN_0516d9a0(uVar2,uVar4,
                 *(undefined8 *)
                  System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d3dec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
    FUN_0516d6d0(uVar2,uVar4,
                 *(undefined8 *)
                  System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d30cc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo);
    FUN_0516d838(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d375c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_0516d400(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<IEnumerator<int>>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d23ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlAttribute>_TypeInfo
                              );
    FUN_0516d4b4(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<BindingRestrictions>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar3 = uVar2;
    thunk_FUN_02f411dc(puVar3,uVar2);
  }
  FUN_037d26f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_05173250(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<ByteArraySlice>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x100) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x100,uVar2);
  }
  FUN_037dc474();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElement>_TypeInfo);
    FUN_05173688(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<DerSequenceReader>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x108,uVar2);
  }
  FUN_037dd824();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
    FUN_0517346c(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<DialogueEntry>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x110,uVar2);
  }
  FUN_037dce4c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                              );
    FUN_051737f0(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x118,uVar2);
  }
  FUN_037ddeb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
    FUN_05173520(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<Expression>_TypeInfo,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x120) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x120,uVar2);
  }
  FUN_037dd194();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo);
    FUN_051738a4(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x128,uVar2);
  }
  FUN_037de1fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
    FUN_051735d4(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<IList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x130,uVar2);
  }
  FUN_037dd4dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                              );
    FUN_05173958(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<IMGUIContainer>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x138) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x138,uVar2);
  }
  FUN_037de544();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObjectEntry>_TypeInfo);
    FUN_0517373c(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<int>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x140) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x140,uVar2);
  }
  FUN_037ddb6c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_05173304(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<JSONNode>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x148) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x148,uVar2);
  }
  FUN_037dc7bc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo);
    FUN_051733b8(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<Matrix4x4>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x150,uVar2);
  }
  FUN_037dcb04();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
    FUN_0516da54(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<NCommand>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x158) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x158,uVar2);
  }
  FUN_037d4134();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VehicleComponent>_TypeInfo);
    FUN_0516e0a8(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<NetworkObjectHeaderSnapshot>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x160) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x160,uVar2);
  }
  FUN_037d54e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
    FUN_0516dc70(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<NetworkObjectInactivityGuard>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x168) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x168,uVar2);
  }
  FUN_037d4b0c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VirtualMesh>_TypeInfo)
    ;
    FUN_0516e210(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<NetworkObjectStatisticsSnapshot>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x170,uVar2);
  }
  FUN_037d5b74();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
    FUN_0516ddd8(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<object>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x178,uVar2);
  }
  FUN_037d4e54();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_0516e2c4(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<ParameterExpression>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x180,uVar2);
  }
  FUN_037d5ebc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
    FUN_0516de8c(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<Rect>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x188,uVar2);
  }
  FUN_037d519c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_0516e15c(uVar2,uVar4,
                 *(undefined8 *)System_Collections_Generic_Stack<SimulationInput>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 400,uVar2);
  }
  FUN_037d582c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueInput>_TypeInfo);
    FUN_0516db08(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<TextureId>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x198,uVar2);
  }
  FUN_037d447c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRNodeState>_TypeInfo)
    ;
    FUN_0516dbbc(uVar2,uVar4,*(undefined8 *)System_Collections_Generic_Stack<Transform>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1a0,uVar2);
  }
  FUN_037d47c4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo)
    ;
    FUN_05173a0c(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1a8,uVar2);
  }
  FUN_037de88c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
    FUN_05173e44(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1b0,uVar2);
  }
  FUN_037dfc3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UserVariable>_TypeInfo
                              );
    FUN_05173c28(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<EventDispatcher_DispatchContext>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1b8,uVar2);
  }
  FUN_037df264();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueOutput>_TypeInfo)
    ;
    FUN_05173fac(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1c0,uVar2);
  }
  FUN_037e02cc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
    FUN_05173cdc(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1c8,uVar2);
  }
  FUN_037df5ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                              );
    FUN_05174060(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<SequenceNode_SequenceConstructPosContext>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1d0,uVar2);
  }
  FUN_037e0614();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
    FUN_05173d90(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<Simulation_AreaOfInterestCell>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1d8,uVar2);
  }
  FUN_037df8f4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VertexAttribute>_TypeInfo);
    FUN_05174114(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_TypeInfo,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1e0,uVar2);
  }
  FUN_037e095c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecord>_TypeInfo);
    FUN_05173ef8(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<BindingRestrictions_TestBuilder_AndNode>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1e8,uVar2);
  }
  FUN_037dff84();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                              );
    FUN_05173ac0(uVar2,uVar4,*(undefined8 *)System_Runtime_CompilerServices_StrongBox<int>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1f0,uVar2);
  }
  FUN_037debd4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_05173b74(uVar2,uVar4,
                 *(undefined8 *)System_Runtime_CompilerServices_StrongBox<object>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x1f8,uVar2);
  }
  FUN_037def1c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_0516e378(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<bool>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x200) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x200,uVar2);
  }
  FUN_037d6204();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_0516e7b0(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<byte>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x208) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x208,uVar2);
  }
  FUN_037d75b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_0516e594(uVar2,uVar4,
                 *(undefined8 *)
                  ExitGames_Client_Photon_StructWrapping_StructWrapper<double>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x210,uVar2);
  }
  FUN_037d6bdc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_0516e918(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<short>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x218,uVar2);
  }
  FUN_037d7c44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo)
    ;
    FUN_0516e648(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<int>_TypeInfo,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x220,uVar2);
  }
  FUN_037d6f24();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516e9cc(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<long>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x228,uVar2);
  }
  FUN_037d7f8c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                              );
    FUN_0516e6fc(uVar2,uVar4,
                 *(undefined8 *)
                  ExitGames_Client_Photon_StructWrapping_StructWrapper<object>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x230,uVar2);
  }
  FUN_037d726c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                              );
    FUN_0516e864(uVar2,uVar4,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<float>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x238) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x238,uVar2);
  }
  FUN_037d78fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_0516e42c(uVar2,uVar4,
                 *(undefined8 *)
                  ExitGames_Client_Photon_StructWrapping_StructWrapper<Vector2>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x240,uVar2);
  }
  FUN_037d654c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_0516e4e0(uVar2,uVar4,
                 *(undefined8 *)
                  ExitGames_Client_Photon_StructWrapping_StructWrapper<Vector3>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x248,uVar2);
  }
  FUN_037d6894();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_06931ff4();
  return;
}


