/*
FUNCTION_NAME: UnityEngine.UI.LayoutGroup$$set_padding
ENTRY_POINT: 045cab34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined8 UnityEngine_UI_LayoutGroup__set_padding(Il2CppObject *param_1)

{
  undefined8 uVar1;
  Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *pAVar2;
  EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *pEVar3;
  undefined8 *puVar4;
  void *pvVar5;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar6;
  Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *pDVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  byte bStack000000000000008f;
  Il2CppObject *pIStack00000000000000a0;
  Il2CppObject *pIStack00000000000000a8;
  
  pIStack00000000000000a0 = *(Il2CppObject **)(unaff_x29 + -8);
  pIStack00000000000000a8 = param_1;
  NullCheck(param_1);
  InterfaceActionInvoker1<Il2CppObject*>::Invoke
            (0,(Il2CppClass *)*in_stack_00000020,pIStack00000000000000a8,pIStack00000000000000a0);
  uVar1 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -8),
                      *(Il2CppClass **)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  *(bool *)(unaff_x29 + -0x61) = *(long *)(unaff_x29 + -0x28) != 0;
  bStack000000000000008f = *(byte *)(unaff_x29 + -0x61) & 1;
  if (bStack000000000000008f == 0) {
    uVar1 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -8),
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar1;
    *(bool *)(unaff_x29 + -0x71) = *(long *)(unaff_x29 + -0x70) != 0;
    if ((*(byte *)(unaff_x29 + -0x71) & 1) != 0) {
      pCVar6 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)
                (unaff_x29 + -0x70);
      pEVar3 = (EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                         );
      EventCallback_1__ctor_m0407B736C264F06C81E5CBB70EF40FBB975AC634
                (pEVar3,(Il2CppObject *)0x0,
                 *(long *)
                  PTR_GroupBoxUtility_OnGroupBoxDetachedFromPanel_m0DB94D8E684A9DF2E71807F44C13B65080F75263_RuntimeMethod_var_048de6c8
                 ,(MethodInfo *)0x0);
      NullCheck(pCVar6);
      CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_t5E26427B0E6AF96F0C522D1FCEDDC078D755E496_mED85B91BE761D1DBE3001231E0050CD612946F2C
                (pCVar6,pEVar3,0,
                 *(MethodInfo **)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    }
  }
  else {
    pvVar5 = *(void **)(unaff_x29 + -0x28);
    pAVar2 = (Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         PTR_Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53_il2cpp_TypeInfo_var_048d9d00
                       );
    Action_1__ctor_mFD901720CA0969541BCC09A9D54A99329A963BC3
              (pAVar2,(Il2CppObject *)0x0,
               *(long *)
                PTR_GroupBoxUtility_OnPanelDestroyed_m7A573F29FF8193CB706B2CB7051E0C5D83043958_RuntimeMethod_var_048de6d0
               ,(MethodInfo *)0x0);
    NullCheck(pvVar5);
    BaseVisualElementPanel_add_panelDisposed_mC30B137E566B05408BD8ED250AE58EC7ECE14909
              (pvVar5,pAVar2,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  pDVar7 = (Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *)*puVar4;
  pIVar8 = *(Il2CppObject **)(unaff_x29 + -8);
  pIVar9 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(pDVar7);
  Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425
            (pDVar7,pIVar8,pIVar9,
             *(MethodInfo **)
              PTR_Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425_RuntimeMethod_var_048de6c0
            );
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -0x38);
}


