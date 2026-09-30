/*
FUNCTION_NAME: UnityEngine.UIElements.TreeDataController<__Il2CppFullySharedGenericType>$$Move
ENTRY_POINT: 0232ba4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_UIElements_TreeDataController<__Il2CppFullySharedGenericType>__Move(void)

{
  undefined *puVar1;
  MethodInfo *pMVar2;
  Il2CppClass *pIVar3;
  FieldInfo *pFVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x29;
  
  *(byte *)(unaff_x29 + -0x98) = *(byte *)(unaff_x29 + -0x34) & 1;
  if ((*(byte *)(unaff_x29 + -0x98) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x140) = *(undefined8 *)(unaff_x29 + -0x10);
    pMVar2 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0),2);
    *(undefined4 *)(unaff_x29 + -0x11c) = 0;
    FieldMouseDragger_1_set_dragging_mF12F873307B3321775B99CF67916E1118F4AD9E8_inline
              (*(FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F **)
                (unaff_x29 + -0x140),false,pMVar2);
    *(undefined8 *)(unaff_x29 + -0x138) = *(undefined8 *)(unaff_x29 + -0x10);
    pIVar3 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0)
                        ,1);
    pFVar4 = (FieldInfo *)il2cpp_rgctx_field(pIVar3,*(int *)(unaff_x29 + -0x11c));
    puVar5 = (undefined8 *)
             il2cpp_codegen_get_instance_field_data_pointer(*(void **)(unaff_x29 + -0x138),pFVar4);
    *(undefined8 *)(unaff_x29 + -0xa0) = *puVar5;
    *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x10);
    *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0x30);
    pMVar2 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0),0xf);
    FieldMouseDragger_1_get_startValue_m1C9274BE91740DF3F999E183F7A84A5BD5186326_inline
              (*(FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F **)
                (unaff_x29 + -0x128),*(void ***)(unaff_x29 + -0x130),pMVar2);
    NullCheck(*(void **)(unaff_x29 + -0xa0));
    uVar6 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0),
                              *(int *)(unaff_x29 + -0x11c));
    *(undefined8 *)(unaff_x29 + -0x118) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x110) = *(undefined8 *)(unaff_x29 + -0xa0);
    pIVar3 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0)
                        ,3);
    uVar7 = il2cpp_codegen_class_is_value_type(pIVar3);
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0x148) = **(undefined8 **)(unaff_x29 + -0x30);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x148) = *(undefined8 *)(unaff_x29 + -0x30);
    }
    *(undefined4 *)(unaff_x29 + -0x15c) = 1;
    InterfaceActionInvoker1Invoker<void*>::Invoke
              (1,*(Il2CppClass **)(unaff_x29 + -0x118),*(Il2CppObject **)(unaff_x29 + -0x110),
               *(void **)(unaff_x29 + -0x148));
    *(undefined8 *)(unaff_x29 + -0x158) = *(undefined8 *)(unaff_x29 + -0x10);
    pIVar3 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0)
                        ,*(int *)(unaff_x29 + -0x15c));
    *(undefined4 *)(unaff_x29 + -0x14c) = 0;
    pFVar4 = (FieldInfo *)il2cpp_rgctx_field(pIVar3,0);
    puVar5 = (undefined8 *)
             il2cpp_codegen_get_instance_field_data_pointer(*(void **)(unaff_x29 + -0x158),pFVar4);
    *(undefined8 *)(unaff_x29 + -0xa8) = *puVar5;
    NullCheck(*(void **)(unaff_x29 + -0xa8));
    pIVar3 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0),
                               *(int *)(unaff_x29 + -0x14c));
    InterfaceActionInvoker0::Invoke(4,pIVar3,*(Il2CppObject **)(unaff_x29 + -0xa8));
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0xb0));
    uVar6 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E
                      (*(undefined8 *)(unaff_x29 + -0xb0),0);
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
    uVar6 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0xb8),
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
    if (*(long *)(unaff_x29 + -0xc0) == 0) {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined8 *)(unaff_x29 + -0x60) = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xc0);
      NullCheck(*(void **)(unaff_x29 + -0x50));
      uVar6 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1
                        (*(undefined8 *)(unaff_x29 + -0x50),0);
      *(undefined8 *)(unaff_x29 + -200) = uVar6;
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -200);
    }
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x40);
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
    ;
    *(undefined **)(unaff_x29 + -0x168) =
         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
    ;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)**(undefined8 **)(unaff_x29 + -0x168));
    *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(lVar8 + 8);
    PointerCaptureHelper_ReleasePointer_mE9ABEA39360504C8B5A9CF1C067A63F7535CDECB
              (*(undefined8 *)(unaff_x29 + -0xd0),*(undefined4 *)(unaff_x29 + -0xd4),0);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x40);
    uVar6 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0xe0),
                        *(Il2CppClass **)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar6;
    if (*(long *)(unaff_x29 + -0xe8) == 0) {
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xe8);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xe8);
      NullCheck(*(void **)(unaff_x29 + -0x68));
      uVar6 = BaseVisualElementPanel_get_uiElementsBridge_mE8A13CF4592174C25F80AF9B1EDC68F3EFEB264B
                        (*(undefined8 *)(unaff_x29 + -0x68),0);
      *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xf0);
      if (*(long *)(unaff_x29 + -0xf8) == 0) {
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xf8);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0xf8);
        NullCheck(*(void **)(unaff_x29 + -0x78));
        VirtualActionInvoker1<int>::Invoke(4,*(Il2CppObject **)(unaff_x29 + -0x78),0);
      }
    }
  }
  lVar8 = tpidr_el0;
  lVar8 = *(long *)(lVar8 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar8);
  }
  return;
}


