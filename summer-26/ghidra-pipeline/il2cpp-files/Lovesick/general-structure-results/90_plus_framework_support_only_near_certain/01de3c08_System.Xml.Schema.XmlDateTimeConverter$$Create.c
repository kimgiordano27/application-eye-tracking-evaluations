/*
FUNCTION_NAME: System.Xml.Schema.XmlDateTimeConverter$$Create
ENTRY_POINT: 01de3c08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_Xml_Schema_XmlDateTimeConverter__Create
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0377f91a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GameObject>_AddRange__);
    thunk_FUN_00d48444(StringLiteral_4932);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56>_SliceWithStride<Vector2>__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__);
    thunk_FUN_00d48444(PTR_DAT_033f6290);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Expression>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRInteractor>_Remove__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s16__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalProjector>__);
    thunk_FUN_00d48444(PTR_DAT_033f3b20);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateInstanceFieldSetter<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__GetOverlayTexture_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11907);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_WitResponseNode>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4c68);
    thunk_FUN_00d48444(UnityEngine_InputSystem_XR_PoseState_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiActor>__ctor__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_C606E03B5FE8EAD2ECA6BCB45AE684039D928B4EE7C4A03C63D0DF9F94F81DAF
                      );
    thunk_FUN_00d48444(Method_System_Type_GetGenericParameterConstraints__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__);
    thunk_FUN_00d48444(Method_System_ParseNumbers_GrabInts__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_raycastTriggerInteraction__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_28>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputAction_ReadValue<float>__);
    thunk_FUN_00d48444(StringLiteral_11527);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<char>_RemoveAt__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<uint>_Add__);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1678);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Manager_ActionHook_<>c__DisplayClass4_0_<_ctor>b__0__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(OVRPlugin_SpaceComponentType___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11664);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_n_s32__);
    DAT_0377f91a = 1;
  }
  puVar2 = Method_Unity_Mathematics_math_select_shuffle_component__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  switch(param_3) {
  case 0:
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0178a8c4(0,param_2,0);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      goto LAB_01de43d8;
    }
    uVar6 = *(undefined8 *)
             Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>__ctor__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar5 = (long *)FUN_01780344(uVar6,0);
    if (plVar5 == (long *)0x0) goto LAB_01de43d0;
    uVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x2d0));
    if ((uVar4 & 1) != 0) {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_TypeInfo);
      if (lVar3 != 0) {
        FUN_01e0eab4(lVar3,param_1,param_2,0);
        return lVar3;
      }
      goto LAB_01de43d0;
    }
  default:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 == 0) {
LAB_01de43d0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01de4404(lVar3,param_1,param_2);
    break;
  case 2:
    uVar6 = 2;
LAB_01de43d8:
    uVar6 = FUN_01d34448(uVar6,0);
    uVar7 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_SelectMany<Triangle,_int>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar7);
  case 3:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4932);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de08d4(lVar3,param_1);
    break;
  case 4:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de2a98(lVar3,param_1);
    break;
  case 5:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayTexture_TypeInfo);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de45a4(lVar3,param_1);
    break;
  case 6:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56>_SliceWithStride<Vector2>__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de1918(lVar3,param_1);
    break;
  case 7:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalProjector>__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4698(lVar3,param_1);
    break;
  case 8:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e12638(lVar3,param_1,0);
    break;
  case 9:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3b20);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de478c(lVar3,param_1);
    break;
  case 10:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11664);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e13904(lVar3,param_1,0);
    break;
  case 0xb:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateInstanceFieldSetter<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4880(lVar3,param_1);
    break;
  case 0xc:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_n_s32__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e14be4(lVar3,param_1,0);
    break;
  case 0xd:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11907);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e0d9a4(lVar3,param_1,0);
    break;
  case 0xe:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s16__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4974(lVar3,param_1);
    break;
  case 0xf:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRInteractor>_Remove__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4a68(lVar3,param_1);
    break;
  case 0x10:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_Expression>_TryGetValue__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4ba4(lVar3,param_1);
    break;
  case 0x11:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Meta_XR_ImmersiveDebugger_Manager_ActionHook_<>c__DisplayClass4_0_<_ctor>b__0__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e10d18(lVar3,param_1,0);
    break;
  case 0x12:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1678);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e102d4(lVar3,param_1,0);
    break;
  case 0x17:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f6290);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4ccc(lVar3,param_1);
    break;
  case 0x18:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<GameObject>_AddRange__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01dddee0(lVar3,param_1,0);
    break;
  case 0x1a:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_WitResponseNode>_Dispose__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4dfc(lVar3,param_1);
    break;
  case 0x1b:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e0c870(lVar3,param_1,0);
    break;
  case 0x1c:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c68);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de4f3c(lVar3,param_1);
    break;
  case 0x1d:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_InputSystem_XR_PoseState_TypeInfo);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de5074(lVar3,param_1);
    break;
  case 0x1e:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<ObiActor>__ctor__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de5154(lVar3,param_1);
    break;
  case 0x1f:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_C606E03B5FE8EAD2ECA6BCB45AE684039D928B4EE7C4A03C63D0DF9F94F81DAF
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01de5234(lVar3,param_1);
    break;
  case 0x20:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Type_GetGenericParameterConstraints__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01dfe888(lVar3,param_1,0);
    break;
  case 0x21:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e005d4(lVar3,param_1,0);
    break;
  case 0x22:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_System_ParseNumbers_GrabInts__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e01f84(lVar3,param_1,0);
    break;
  case 0x23:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_raycastTriggerInteraction__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e02e68(lVar3,param_1,0);
    break;
  case 0x24:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_28>__
                              );
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e04938(lVar3,param_1,0);
    break;
  case 0x25:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputAction_ReadValue<float>__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e063dc(lVar3,param_1,0);
    break;
  case 0x26:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11527);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e07f2c(lVar3,param_1,0);
    break;
  case 0x27:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<char>_RemoveAt__);
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e09adc(lVar3,param_1,0);
    break;
  case 0x28:
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Collections_Generic_HashSet<uint>_Add__)
    ;
    if (lVar3 == 0) goto LAB_01de43d0;
    FUN_01e0b550(lVar3,param_1,0);
  }
  return lVar3;
}


