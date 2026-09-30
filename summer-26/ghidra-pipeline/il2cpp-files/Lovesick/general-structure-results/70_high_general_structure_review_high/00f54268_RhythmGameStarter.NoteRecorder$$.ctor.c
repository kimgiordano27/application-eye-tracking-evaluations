/*
FUNCTION_NAME: RhythmGameStarter.NoteRecorder$$.ctor
ENTRY_POINT: 00f54268
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RhythmGameStarter_NoteRecorder___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x24;
  
  FUN_012d239c(param_2,param_3,*param_1,0);
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0xa0) = param_2;
  puVar2 = StringLiteral_3910;
  puVar1 = Method_System_Net_Sockets_Socket_ThrowIfUdp__;
  uVar3 = FUN_010df764();
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_UnityEngine_GameObject_AddComponent<ObiRope>__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xa8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)System_Collections_Generic_List<PlayableBinding>_TypeInfo,0);
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0xa8) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_Newtonsoft_Json_Converters_BinaryConverter_ReadJson__;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xb0);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)PTR_DAT_033ed830,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xb0) = lVar7;
  }
  puVar2 = Method_System_Linq_Enumerable_ToList<MethodInfo>__;
  puVar1 = PTR_DAT_033f00a0;
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<AudioAffordanceThemeData>__ctor__);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = StringLiteral_4292;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)Method_TutorialPopup_Hide__,0);
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0xb8) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xc0);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)StringLiteral_1349,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xc0) = lVar7;
  }
  puVar2 = Method_System_UriParser_Resolve__;
  puVar1 = Method_System_Collections_Generic_Stack<WitResponseNode>_get_Count__;
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,*(undefined8 *)StringLiteral_11171);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = StringLiteral_2898;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 200);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_get_IsCompleted__
                 ,0);
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 200) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = StringLiteral_9273;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xd0);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)System_Linq_Expressions_NewArrayExpression_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xd0) = lVar7;
  }
  puVar2 = Method_Obi_ObiNativeList<HeightFieldHeader>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__;
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Item__
                      );
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = 
  Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_get_Assembly__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xd8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)System_Xml_Linq_SaveOptions_var,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xd8) = lVar5;
  }
  uVar3 = FUN_010db508(uVar3,lVar5,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_laneq_s32__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar2 = Method_System_Globalization_CultureInfo_get_CalendarType__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe0);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)StringLiteral_3209,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xe0) = lVar5;
  }
  uVar3 = FUN_010dcdb8(uVar3,lVar5,*(undefined8 *)Method_Obi_ObiNativeList<Vector3>_AddRange__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__,0)
    ;
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0xe8) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xf0);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__,
                 0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf0) = lVar7;
  }
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  puVar1 = 
  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_SetState__
  ;
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                      );
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xf8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf8) = lVar5;
  }
  uVar3 = FUN_010db508(uVar3,lVar5,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_s16__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar2 = Method_System_Reflection_Emit_TypeBuilder_IsDefined__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x100);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Rotate>__
                 ,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x100) = lVar5;
  }
  uVar3 = FUN_010dcdb8(uVar3,lVar5,
                       *(undefined8 *)Method_UnityEngine_AI_NavMeshBuilder_CollectSources__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x108);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtd_f64__,0);
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x108) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x110);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) {
LAB_00f54b0c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_System_Xml_Linq_XHashtable<WeakReference>_Add__,0
                );
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x110) = lVar7;
  }
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,*(undefined8 *)StringLiteral_773);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
  return;
}


