/*
FUNCTION_NAME: FUN_05856a70
ENTRY_POINT: 05856a70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05856a70(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_06bc1010 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculateFullCurl_00000185_PostfixBurstDelegate>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_Dispose__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_size__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__);
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculatePinch_00000189_PostfixBurstDelegate>_get_Value__
                );
    DAT_06bc1010 = 1;
  }
  if ((param_3 == (long *)0x0) || (param_3[2] == 0)) {
LAB_05856ecc:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(param_3[2] + 0x10) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_05856ecc;
  plVar3 = (long *)FUN_05772298(param_2,param_3,0);
  if (plVar3 == (long *)0x0) {
    FUN_05771d30(param_2,param_3,param_4,0);
    return;
  }
  if (plVar3 == param_4) {
    return;
  }
  uVar9 = *(undefined8 *)
           Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_MoveNext__;
  if (param_4 == (long *)0x0) goto LAB_05856e98;
  lVar7 = *param_4;
  bVar1 = *(byte *)(lVar7 + 0x130);
  bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__ +
                   0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__)) {
    bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__)) {
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
         )) {
        bVar2 = *(byte *)(*(long *)
                           System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            bVar2 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                             + 0x130);
            if ((bVar1 < bVar2) ||
               (puVar8 = (undefined8 *)
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
               , *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
               )) {
              bVar2 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                               + 0x130);
              if ((bVar1 < bVar2) ||
                 (puVar8 = (undefined8 *)
                           Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_size__
                 , *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                   *(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                 )) goto LAB_05856e98;
            }
            goto LAB_05856e94;
          }
          uVar5 = FUN_05857128(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)
                   Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculatePinch_00000189_PostfixBurstDelegate>_get_Value__
          ;
        }
        else {
          uVar5 = FUN_05856ffc(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)
                   Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_Dispose__;
        }
      }
      else {
        uVar5 = FUN_05856ffc(plVar3,plVar3,param_4,param_2);
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_get_Current__
        ;
      }
joined_r0x05856e44:
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_05856ecc;
      uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1b0));
      uVar5 = FUN_0580db00(uVar9,*(undefined8 *)(param_1 + 0x38),0);
      puVar8 = (undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__;
      if ((uVar5 & 1) != 0) {
        lVar7 = FUN_05725294(0);
        if ((lVar7 == 0) || (lVar7 = FUN_05769f38(lVar7,0), lVar7 == 0)) goto LAB_05856ecc;
        plVar4 = (long *)FUN_05772298(lVar7,param_3,0);
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__;
        goto joined_r0x05856dbc;
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_05856ecc;
    uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1b0));
    uVar5 = FUN_0580db00(uVar9,*(undefined8 *)(param_1 + 0x38),0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_05856ed0(uVar5,plVar3,param_4,param_2);
      puVar8 = (undefined8 *)
               Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculateFullCurl_00000185_PostfixBurstDelegate>_get_Value__
      ;
      goto joined_r0x05856e44;
    }
    lVar7 = FUN_05725294(0);
    if ((lVar7 == 0) || (lVar7 = FUN_05769f9c(lVar7,0), lVar7 == 0)) goto LAB_05856ecc;
    plVar4 = (long *)FUN_05772298(lVar7,param_3,0);
    puVar8 = (undefined8 *)
             Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculateFullCurl_00000185_PostfixBurstDelegate>_get_Value__
    ;
joined_r0x05856dbc:
    if (plVar3 == plVar4) {
      FUN_05771e1c(param_2,param_3,param_4,0);
      return;
    }
    if (plVar4 == param_4) {
      return;
    }
  }
LAB_05856e94:
  uVar9 = *puVar8;
LAB_05856e98:
  uVar6 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
  FUN_05857240(param_1,uVar9,uVar6,param_4);
  return;
}


