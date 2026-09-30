/*
FUNCTION_NAME: FUN_020a8788
ENTRY_POINT: 020a8788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020a8788(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 020a8784 with catch @ 020a8790
                        */
  if ((DAT_0482f894 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<long>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item2__);
    thunk_FUN_01efb3a4(Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ListViewReorderMode>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<PickingMode>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(Method_TMPro_TweenRunner<FloatTween>_Init__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(Method_TMPro_TweenRunner<FloatTween>_StartTween__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_get_defaultValue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_Init__);
    DAT_0482f894 = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = param_2;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x78),param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_Init__;
  puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  uVar8 = FUN_04073094(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_020a8c24;
    uVar12 = FUN_040766fc(*(long *)(param_1 + 0x30),0);
    uVar12 = FUN_03405678(uVar12,*(undefined8 *)puVar2,0);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar9,uVar12,0);
    if (lVar9 == 0) goto LAB_020a8c24;
    uVar12 = FUN_04073258(lVar9,0);
    *(undefined8 *)(param_1 + 0x58) = uVar12;
    thunk_FUN_01f51358();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar12 = FUN_040766fc(*(long *)(param_1 + 0x28),0);
    uVar12 = FUN_03405678(uVar12,*(undefined8 *)puVar2,0);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar9,uVar12,0);
    puVar7 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__;
    puVar2 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__;
    puVar1 = Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item3__;
    if (lVar9 != 0) {
      uVar12 = FUN_04073258(lVar9,0);
      *(undefined8 *)(param_1 + 0x60) = uVar12;
      thunk_FUN_01f51358();
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02e631d0(uVar12,param_1,*(undefined8 *)puVar2,0);
      lVar9 = *(long *)puVar7;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar7;
      }
      puVar6 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_get_defaultValue__
      ;
      puVar5 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>__ctor__;
      puVar4 = 
      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ListViewReorderMode>_set_defaultValue__
      ;
      puVar3 = Method_TMPro_TweenRunner<FloatTween>_StartTween__;
      puVar2 = Method_TMPro_TweenRunner<FloatTween>_Init__;
      puVar1 = Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item2__;
      lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar13 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar7;
        }
        uVar14 = **(undefined8 **)(lVar9 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                  (lVar13,uVar14,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__
                   ,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        *plVar10 = lVar13;
        thunk_FUN_01f51358(plVar10,lVar13);
      }
      uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                (uVar14,param_1,*(undefined8 *)puVar5,0);
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_025d758c(uVar11,uVar12,lVar13,uVar14,0,1,10,10000,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x68) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x68),uVar11);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_02e631d0(uVar12,param_1,*(undefined8 *)puVar6,0);
      lVar9 = *(long *)puVar7;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar7;
      }
      puVar4 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_set_defaultValue__
      ;
      puVar3 = 
      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
      ;
      puVar2 = 
      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<PickingMode>_set_defaultValue__;
      puVar1 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<long>_set_defaultValue__;
      lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar7;
        }
        uVar14 = **(undefined8 **)(lVar9 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                  (lVar13,uVar14,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                   ,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
        *plVar10 = lVar13;
        thunk_FUN_01f51358(plVar10,lVar13);
      }
      uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                (uVar14,param_1,*(undefined8 *)puVar4,0);
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_025d758c(uVar11,uVar12,lVar13,uVar14,0,1,10,10000,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x70) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x70),uVar11);
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_04073314(*(long *)(param_1 + 0x40),0,0);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x4c);
        return;
      }
    }
  }
LAB_020a8c24:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


