/*
FUNCTION_NAME: System.Data.XmlTreeGen$$FindSimpleType
ENTRY_POINT: 01cbaf30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

long System_Data_XmlTreeGen__FindSimpleType(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  
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
  thunk_FUN_00d48444(Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_get_Null__);
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
  *(undefined1 *)(unaff_x22 + 0xe83) = 1;
  puVar5 = (undefined8 *)
           Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_RegisterFrameAllocation__
  ;
  if ((unaff_x21 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_01cbb3e8;
    uVar3 = (**(code **)(*unaff_x20 + 0x5c8))();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)StringLiteral_6252 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_01d04f98();
      puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      switch(uVar2) {
      case 1:
        uVar6 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar6,0);
        uVar3 = FUN_01789ac0();
        if ((uVar3 & 1) != 0) {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_PointerEventData>_get_Current__
                                    );
          if (lVar4 != 0) {
            FUN_01cbad98();
            return lVar4;
          }
          goto LAB_01cbb3e8;
        }
        uVar6 = *(undefined8 *)Method_System_Type_GetConstructor__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar6,0);
        uVar3 = FUN_01789ac0();
        if ((uVar3 & 1) == 0) {
          uVar6 = *(undefined8 *)System_IO_UnexceptionalStreamReader_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01780344(uVar6,0);
          uVar3 = FUN_01789ac0();
          if ((uVar3 & 1) == 0) goto switchD_01cbb0c0_caseD_2;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRDeserialize_MarshalEntireStructAs<OVRDeserialize_ColocationSessionAdvertisementCompleteData>__
                                    );
        }
        else {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_get_Current__
                                    );
        }
        break;
      default:
        goto switchD_01cbb0c0_caseD_2;
      case 3:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Linq_Expressions_MethodCallExpression3_GetArgument__
                                  );
        break;
      case 4:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8069);
        break;
      case 5:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033efdd0);
        break;
      case 6:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_ProBuilder_MeshUtility_GetMeshChannel<Vector3[]>__
                                  );
        break;
      case 7:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Text_EncoderNLS_Convert__);
        break;
      case 8:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10742);
        break;
      case 9:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo);
        break;
      case 10:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_948);
        break;
      case 0xb:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_9147);
        break;
      case 0xc:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4242);
        break;
      case 0xd:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<InspectedHandle>__ctor__)
        ;
        break;
      case 0xe:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_get_Null__
                                  );
        break;
      case 0xf:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_Transform>_Deconstruct__
                                  );
        break;
      case 0x10:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
        break;
      case 0x12:
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<NameAndParameters>_get_Count__
                                  );
      }
      if (lVar4 != 0) {
        FUN_0136b9b4(lVar4);
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
    FUN_01cbad98();
    *(long **)(lVar4 + 0x18) = unaff_x20;
    return lVar4;
  }
LAB_01cbb3e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


