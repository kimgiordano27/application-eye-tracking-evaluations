/*
FUNCTION_NAME: FUN_01096b5c
ENTRY_POINT: 01096b5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long FUN_01096b5c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_037762f4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2438);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_SetException__
                      );
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_AddOvfInstruction_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1163);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshld_n_s64__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Utilities_TypeExtensions_FloatEqualityComparer__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<List<HintValue>>_AddListener__);
    thunk_FUN_00d48444(StringLiteral_2866);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<HumanBodyBones,_Quaternion>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7112);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_ContainsKey__);
    thunk_FUN_00d48444(StringLiteral_12954);
    thunk_FUN_00d48444(PTR_DAT_033ec0f0);
    thunk_FUN_00d48444(StringLiteral_5376);
    thunk_FUN_00d48444(Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_ToArray__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<ColliderRigidbody>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ed910);
    thunk_FUN_00d48444(PTR_DAT_033f5678);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Tween>_GetEnumerator__);
    thunk_FUN_00d48444(
                      Method_Obi_ObiLateFixedUpdater_<RunLateFixedUpdate>d__6_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<GrabbableObject>__);
    thunk_FUN_00d48444(System_Xml_XmlStandalone_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DataRelation>_MoveNext__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<PurchaseList>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FormatterLocator_FormatterInfo>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_9556);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<ErrorCode,_string>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_14__);
    thunk_FUN_00d48444(System_Net_FileWebRequestCreator_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4d40);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<IHand>__);
    thunk_FUN_00d48444(PTR_DAT_033f0938);
    thunk_FUN_00d48444(StringLiteral_7395);
    DAT_037762f4 = 1;
  }
  puVar2 = StringLiteral_7395;
  puVar1 = StringLiteral_2438;
  switch(param_1) {
  case 1:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) {
LAB_01097d4c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_SetException__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
    }
    break;
  case 2:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)PTR_DAT_033ec0f0,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar4;
    }
    break;
  case 3:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)Method_System_Linq_Enumerable_First<GrabbableObject>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar4;
    }
    break;
  case 4:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_9556,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar4;
    }
    break;
  case 5:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<ErrorCode,_string>_ContainsKey__,0)
      ;
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar4;
    }
    break;
  case 6:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_14__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar4;
    }
    break;
  case 7:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)System_Net_FileWebRequestCreator_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = lVar4;
    }
    break;
  case 8:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f4d40,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = lVar4;
    }
    break;
  case 9:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)Method_UnityEngine_Component_GetComponent<IHand>__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar4;
    }
    break;
  case 10:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f0938,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = lVar4;
    }
    break;
  case 0xb:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)System_Linq_Expressions_Interpreter_AddOvfInstruction_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = lVar4;
    }
    break;
  case 0xc:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_1163,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60) = lVar4;
    }
    break;
  case 0xd:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x68);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshld_n_s64__,
                   0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68) = lVar4;
    }
    break;
  case 0xe:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x70);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_Sirenix_Serialization_Utilities_TypeExtensions_FloatEqualityComparer__,0)
      ;
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70) = lVar4;
    }
    break;
  case 0xf:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x78);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<List<HintValue>>_AddListener__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78) = lVar4;
    }
    break;
  case 0x10:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x80);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_2866,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80) = lVar4;
    }
    break;
  case 0x11:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x88);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<HumanBodyBones,_Quaternion>_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88) = lVar4;
    }
    break;
  case 0x12:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x90);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_7112,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90) = lVar4;
    }
    break;
  case 0x13:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x98);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_Glyph>_ContainsKey__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98) = lVar4;
    }
    break;
  case 0x14:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_12954,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0) = lVar4;
    }
    break;
  case 0x15:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)StringLiteral_5376,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8) = lVar4;
    }
    break;
  case 0x16:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0) = lVar4;
    }
    break;
  case 0x17:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)Method_System_Collections_Generic_List<PropertyInfo>_ToArray__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8) = lVar4;
    }
    break;
  case 0x18:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xc0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)Method_Obi_ObiNativeList<ColliderRigidbody>__ctor__,0)
      ;
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0) = lVar4;
    }
    break;
  case 0x19:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 200);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)PTR_DAT_033ed910,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200) = lVar4;
    }
    break;
  case 0x1a:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xd0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)PTR_DAT_033f5678,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0) = lVar4;
    }
    break;
  case 0x1b:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xd8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd8) = lVar4;
    }
    break;
  case 0x1c:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xe0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xe0) = lVar4;
    }
    break;
  case 0x1d:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xe8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)Method_System_Collections_Generic_List<Tween>_GetEnumerator__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xe8) = lVar4;
    }
    break;
  case 0x1e:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xf0);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_Obi_ObiLateFixedUpdater_<RunLateFixedUpdate>d__6_System_Collections_IEnumerator_Reset__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xf0) = lVar4;
    }
    break;
  case 0x1f:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xf8);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)System_Xml_XmlStandalone_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xf8) = lVar4;
    }
    break;
  case 0x20:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x100);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<DataRelation>_MoveNext__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x100) = lVar4;
    }
    break;
  case 0x21:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x108);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_MoveNext__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x108) = lVar4;
    }
    break;
  case 0x22:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x110);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Merge__,0)
      ;
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x110) = lVar4;
    }
    break;
  case 0x23:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x118);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,*(undefined8 *)Method_Oculus_Platform_Request<PurchaseList>__ctor__,0
                  );
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x118) = lVar4;
    }
    break;
  default:
    lVar3 = *(long *)StringLiteral_7395;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x120);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01097d4c;
      FUN_01066d80(lVar4,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<FormatterLocator_FormatterInfo>_get_Count__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x120) = lVar4;
    }
  }
  return lVar4;
}


