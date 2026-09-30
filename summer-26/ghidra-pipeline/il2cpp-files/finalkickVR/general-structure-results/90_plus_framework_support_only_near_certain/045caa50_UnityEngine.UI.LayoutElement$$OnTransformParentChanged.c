/*
FUNCTION_NAME: UnityEngine.UI.LayoutElement$$OnTransformParentChanged
ENTRY_POINT: 045caa50
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 127
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_10
*/


undefined8 UnityEngine_UI_LayoutElement__OnTransformParentChanged(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  Type_t *pTVar5;
  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *this;
  Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *pAVar6;
  EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *pEVar7;
  undefined8 *puVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  void *pvVar11;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar12;
  Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *pDVar13;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  byte bStack000000000000008f;
  byte bStack00000000000000d7;
  void *pvStack00000000000000e0;
  int iStack00000000000000e8;
  
  do {
    iStack00000000000000e8 = *(int *)(unaff_x29 + -0x44);
    pvStack00000000000000e0 = *(void **)(unaff_x29 + -0x40);
    NullCheck(pvStack00000000000000e0);
    if ((int)*(undefined8 *)((long)pvStack00000000000000e0 + 0x18) <= iStack00000000000000e8) {
LAB_045caa80:
      uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
      bStack00000000000000d7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(uVar3,0)
      ;
      bStack00000000000000d7 = bStack00000000000000d7 & 1;
      if (bStack00000000000000d7 == 0) {
        uVar3 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            PTR_DefaultGroupManager_t74642D7322ED5B8113DA5C8C35F66E302D701157_il2cpp_TypeInfo_var_048de6a8
                          );
        DefaultGroupManager__ctor_m94200A8E4477B3E5652C35E3C143DC2AEE9C1ED4(uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x60) = uVar3;
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x60);
      }
      else {
        pIVar9 = (Il2CppObject *)
                 Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF
                           (*(undefined8 *)(unaff_x29 + -0x18),0);
        uVar3 = Castclass(pIVar9,(Il2CppClass *)*in_stack_00000020);
        *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
      }
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x80);
      pIVar9 = *(Il2CppObject **)(unaff_x29 + -0x20);
      pIVar10 = *(Il2CppObject **)(unaff_x29 + -8);
      NullCheck(pIVar9);
      InterfaceActionInvoker1<Il2CppObject*>::Invoke
                (0,(Il2CppClass *)*in_stack_00000020,pIVar9,pIVar10);
      uVar3 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -8),
                          *(Il2CppClass **)
                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
      *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
      *(bool *)(unaff_x29 + -0x61) = *(long *)(unaff_x29 + -0x28) != 0;
      bStack000000000000008f = *(byte *)(unaff_x29 + -0x61) & 1;
      if (bStack000000000000008f == 0) {
        uVar3 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -8),
                            *(Il2CppClass **)
                             Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
        *(bool *)(unaff_x29 + -0x71) = *(long *)(unaff_x29 + -0x70) != 0;
        if ((*(byte *)(unaff_x29 + -0x71) & 1) != 0) {
          pCVar12 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)
                     (unaff_x29 + -0x70);
          pEVar7 = (EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *)
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                             );
          EventCallback_1__ctor_m0407B736C264F06C81E5CBB70EF40FBB975AC634
                    (pEVar7,(Il2CppObject *)0x0,
                     *(long *)
                      PTR_GroupBoxUtility_OnGroupBoxDetachedFromPanel_m0DB94D8E684A9DF2E71807F44C13B65080F75263_RuntimeMethod_var_048de6c8
                     ,(MethodInfo *)0x0);
          NullCheck(pCVar12);
          CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_t5E26427B0E6AF96F0C522D1FCEDDC078D755E496_mED85B91BE761D1DBE3001231E0050CD612946F2C
                    (pCVar12,pEVar7,0,
                     *(MethodInfo **)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
        }
      }
      else {
        pvVar11 = *(void **)(unaff_x29 + -0x28);
        pAVar6 = (Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             PTR_Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53_il2cpp_TypeInfo_var_048d9d00
                           );
        Action_1__ctor_mFD901720CA0969541BCC09A9D54A99329A963BC3
                  (pAVar6,(Il2CppObject *)0x0,
                   *(long *)
                    PTR_GroupBoxUtility_OnPanelDestroyed_m7A573F29FF8193CB706B2CB7051E0C5D83043958_RuntimeMethod_var_048de6d0
                   ,(MethodInfo *)0x0);
        NullCheck(pvVar11);
        BaseVisualElementPanel_add_panelDisposed_mC30B137E566B05408BD8ED250AE58EC7ECE14909
                  (pvVar11,pAVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
      pDVar13 = (Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *)*puVar8;
      pIVar9 = *(Il2CppObject **)(unaff_x29 + -8);
      pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x20);
      NullCheck(pDVar13);
      Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425
                (pDVar13,pIVar9,pIVar10,
                 *(MethodInfo **)
                  PTR_Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425_RuntimeMethod_var_048de6c0
                );
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x20);
      return *(undefined8 *)(unaff_x29 + -0x38);
    }
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x44);
    NullCheck(*(void **)(unaff_x29 + -0xd0));
    *(undefined4 *)(unaff_x29 + -0xd8) = *(undefined4 *)(unaff_x29 + -0xd4);
    uVar3 = TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::GetAt
                      (*(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0xd0)
                       ,(long)*(int *)(unaff_x29 + -0xd8));
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xe0);
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x50);
    NullCheck(*(void **)(unaff_x29 + -0xe8));
    bVar1 = VirtualFuncInvoker0<bool>::Invoke(0x2a,*(Il2CppObject **)(unaff_x29 + -0xe8));
    *(byte *)(unaff_x29 + -0xe9) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xe9) & 1) == 0) {
      *(undefined4 *)(unaff_x29 + -0x78) = 0;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
      *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x50);
      NullCheck(*(void **)(unaff_x29 + -0x100));
      pTVar5 = (Type_t *)
               VirtualFuncInvoker0<Type_t*>::Invoke(0x32,*(Il2CppObject **)(unaff_x29 + -0x100));
      NullCheck(*(void **)(unaff_x29 + -0xf8));
      bVar1 = VirtualFuncInvoker1<bool,Type_t*>::Invoke
                        (0x18,*(Il2CppObject **)(unaff_x29 + -0xf8),pTVar5);
      *(uint *)(unaff_x29 + -0x78) = (uint)(bVar1 & 1);
    }
    *(bool *)(unaff_x29 + -0x51) = *(int *)(unaff_x29 + -0x78) != 0;
    if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
      pIVar9 = *(Il2CppObject **)(unaff_x29 + -0x50);
      NullCheck(pIVar9);
      this = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)
             VirtualFuncInvoker0<TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::Invoke
                       (0x34,pIVar9);
      NullCheck(this);
      uVar3 = TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::GetAt(this,0);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
      goto LAB_045caa80;
    }
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x44),1);
    *(undefined4 *)(unaff_x29 + -0x44) = uVar2;
  } while( true );
}


