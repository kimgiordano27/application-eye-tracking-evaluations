/*
FUNCTION_NAME: FUN_01cbae04
ENTRY_POINT: 01cbae04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 208
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

long FUN_01cbae04(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_0377ee83 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_RegisterFrameAllocation__
                      );
    thunk_FUN_00d48444(Method_System_Type_GetConstructor__);
    thunk_FUN_00d48444(System_IO_UnexceptionalStreamReader_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_PointerEventData>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverEnterEventArgs>_Get__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_9685);
    thunk_FUN_00d48444(StringLiteral_3490);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DataColumn>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_688);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<BlastableModel>__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_get_Current__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_s32__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_107_0_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<RenderPassEvent>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_2914);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<HeightFieldHeader>_RemoveAt__);
    thunk_FUN_00d48444(StringLiteral_11065);
    thunk_FUN_00d48444(StringLiteral_2242);
    thunk_FUN_00d48444(UnityEngine_UI_LayoutUtility_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_MeshUtility_GetMeshChannel<Vector3[]>__);
    thunk_FUN_00d48444(Method_System_Text_EncoderNLS_Convert__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_9147);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_MethodCallExpression3_GetArgument__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_0_1_2_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRDeserialize_MarshalEntireStructAs<OVRDeserialize_ColocationSessionAdvertisementCompleteData>__
                      );
    thunk_FUN_00d48444(StringLiteral_948);
    thunk_FUN_00d48444(Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_get_Null__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NameAndParameters>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_4242);
    thunk_FUN_00d48444(StringLiteral_10742);
    thunk_FUN_00d48444(PTR_DAT_033efdd0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_Transform>_Deconstruct__
                      );
    thunk_FUN_00d48444(StringLiteral_8069);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(StringLiteral_6252);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IDebugManager>_Dispose__);
    DAT_0377ee83 = 1;
  }
  puVar5 = (undefined8 *)
           Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_RegisterFrameAllocation__
  ;
  if ((param_3 & 1) == 0) {
    if (param_1 == (long *)0x0) goto LAB_01cbb3e8;
    uVar3 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)StringLiteral_6252 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_01d04f98(param_1,0);
      puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      switch(uVar2) {
      case 1:
        uVar6 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01780344(uVar6,0);
        uVar3 = FUN_01789ac0(param_1,uVar6,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_PointerEventData>_get_Current__
                                    );
          if (lVar4 != 0) {
            FUN_01cbad98(lVar4,param_2);
            return lVar4;
          }
          goto LAB_01cbb3e8;
        }
        uVar6 = *(undefined8 *)Method_System_Type_GetConstructor__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01780344(uVar6,0);
        uVar3 = FUN_01789ac0(param_1,uVar6,0);
        if ((uVar3 & 1) == 0) {
          uVar6 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_01780344(uVar6,0);
          uVar3 = FUN_01789ac0(param_1,uVar6,0);
          if ((uVar3 & 1) == 0) goto switchD_01cbb0c0_caseD_2;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRDeserialize_MarshalEntireStructAs<OVRDeserialize_ColocationSessionAdvertisementCompleteData>__
                                    );
          puVar5 = (undefined8 *)StringLiteral_9685;
        }
        else {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_get_Current__
                                    );
          puVar5 = (undefined8 *)
                   Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Add__
          ;
        }
        break;
      default:
        goto switchD_01cbb0c0_caseD_2;
      case 3:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Linq_Expressions_MethodCallExpression3_GetArgument__
                                  );
        puVar5 = (undefined8 *)
                 Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
        ;
        break;
      case 4:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8069);
        puVar5 = (undefined8 *)StringLiteral_2242;
        break;
      case 5:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033efdd0);
        puVar5 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverEnterEventArgs>_Get__
        ;
        break;
      case 6:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_ProBuilder_MeshUtility_GetMeshChannel<Vector3[]>__
                                  );
        puVar5 = (undefined8 *)StringLiteral_11065;
        break;
      case 7:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_EncoderNLS_Convert__);
        puVar5 = (undefined8 *)UnityEngine_UI_LayoutUtility_<>c_TypeInfo;
        break;
      case 8:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10742);
        puVar5 = (undefined8 *)StringLiteral_688;
        break;
      case 9:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo);
        puVar5 = (undefined8 *)Method_Unity_Collections_NativeArray<RenderPassEvent>_Dispose__;
        break;
      case 10:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_948);
        puVar5 = (undefined8 *)
                 Method_UnityEngine_GameObject_GetComponentInChildren<BlastableModel>__;
        break;
      case 0xb:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_9147);
        puVar5 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_BakingSet>_get_Current__
        ;
        break;
      case 0xc:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4242);
        puVar5 = (undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo;
        break;
      case 0xd:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<InspectedHandle>__ctor__)
        ;
        puVar5 = (undefined8 *)StringLiteral_3490;
        break;
      case 0xe:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_get_Null__
                                  );
        puVar5 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_s32__;
        break;
      case 0xf:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_Transform>_Deconstruct__
                                  );
        puVar5 = (undefined8 *)Method_System_Collections_Generic_List<DataColumn>_get_Count__;
        break;
      case 0x10:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
        puVar5 = (undefined8 *)StringLiteral_2914;
        break;
      case 0x12:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<NameAndParameters>_get_Count__
                                  );
        puVar5 = (undefined8 *)Method_Obi_ObiNativeList<HeightFieldHeader>_RemoveAt__;
      }
      if (lVar4 != 0) {
        FUN_0136b9b4(lVar4,param_2,*puVar5);
        return lVar4;
      }
      goto LAB_01cbb3e8;
    }
switchD_01cbb0c0_caseD_2:
    puVar5 = (undefined8 *)
             Method_System_Collections_Generic_List_Enumerator<IDebugManager>_Dispose__;
  }
  lVar4 = thunk_FUN_00d62348(*puVar5);
  if (lVar4 != 0) {
    FUN_01cbad98(lVar4,param_2);
    *(long **)(lVar4 + 0x18) = param_1;
    return lVar4;
  }
LAB_01cbb3e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


