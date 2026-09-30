/*
FUNCTION_NAME: FUN_019d6af0
ENTRY_POINT: 019d6af0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 213
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019d6af0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = uint_var;
  if ((DAT_0377a759 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9176);
    thunk_FUN_00d48444(FullSerializer_fsGlobalConfig_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_692);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                      );
    thunk_FUN_00d48444(uint_var);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UI_LayoutGroup_SetProperty<float>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__
                      );
    DAT_0377a759 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar4 != 0) &&
     (FUN_01320e50(lVar4,*(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                  ),
     puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__,
     param_2 != 0)) {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup_MoveGroupMemberTo__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_019d6d2c;
      FUN_012d239c(lVar7,uVar8,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TypeInfo
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar7;
    }
    puVar3 = StringLiteral_692;
    puVar2 = Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__;
    uVar6 = FUN_010dcdb8(uVar6,lVar7,*(undefined8 *)StringLiteral_9176);
    FUN_01322050(lVar4,uVar6,*(undefined8 *)puVar3);
    FUN_00bfba38(lVar4,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_019d6d2c;
      FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<float>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar7;
    }
    System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
              (lVar4,lVar7,*(undefined8 *)FullSerializer_fsGlobalConfig_TypeInfo);
    return;
  }
LAB_019d6d2c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


