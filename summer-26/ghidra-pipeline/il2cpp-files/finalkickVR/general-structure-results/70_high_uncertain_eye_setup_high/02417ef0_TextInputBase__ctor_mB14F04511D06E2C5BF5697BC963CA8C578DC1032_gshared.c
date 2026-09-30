/*
FUNCTION_NAME: TextInputBase__ctor_mB14F04511D06E2C5BF5697BC963CA8C578DC1032_gshared
ENTRY_POINT: 02417ef0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void TextInputBase__ctor_mB14F04511D06E2C5BF5697BC963CA8C578DC1032_gshared
               (undefined1 param_1 [16],undefined4 param_2,
               TextInputBase_tEC90EE082678B4A2F6AD45223E7A865597BED41D *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0 *pTVar7;
  MethodInfo *pMVar8;
  void *pvVar9;
  Il2CppObject *pIVar10;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar11;
  undefined8 uVar12;
  Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F *pFVar13;
  long lVar14;
  Il2CppObject *pIVar15;
  Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *pAVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar19;
  EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F *pEVar20;
  Il2CppClass *pIVar21;
  undefined4 uVar22;
  
  puVar6 = 
  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_SafeAtomicRemove__
  ;
  puVar5 = 
  Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Source__;
  puVar4 = 
  Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Index__;
  puVar3 = Method_System_Collections_Generic_List<Leaderboard>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<int>_Sort__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((TextInputBase__ctor_mB14F04511D06E2C5BF5697BC963CA8C578DC1032_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Leaderboard>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_button__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    TextInputBase__ctor_mB14F04511D06E2C5BF5697BC963CA8C578DC1032_gshared::s_Il2CppMethodInitialized
         = 1;
  }
  uVar22 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline((MethodInfo *)0x0);
  *(ulong *)(param_3 + 0x3e4) = CONCAT44(param_2,uVar22);
  uVar22 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline((MethodInfo *)0x0);
  *(ulong *)(param_3 + 0x3f0) = CONCAT44(param_2,uVar22);
  *(undefined4 *)(param_3 + 0x3f8) = 2;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(param_3,0);
  NullCheck(param_3);
  Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F(param_3,1,0);
  pTVar7 = (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
                     );
  TextElement__ctor_mB52112242702EEDC8E13BF444AB19E97329B7CE5(pTVar7,0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),8);
  TextInputBase_set_textElement_m6995C74A5478107B7602E01BFC88B5F8F1D5DF5B_inline
            (param_3,pTVar7,pMVar8);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),1);
  pvVar9 = (void *)TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                             (param_3,pMVar8);
  NullCheck(pvVar9);
  TextElement_set_parseEscapeSequences_m5ADCCA10490C7C4B8524A57DEDF7AC98EF55D656(pvVar9,0,0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),1);
  pvVar9 = (void *)TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                             (param_3,pMVar8);
  NullCheck(pvVar9);
  pIVar10 = (Il2CppObject *)
            TextElement_get_selection_m7F398260F03C33BC5EDDCB11416B579CD908DA0D(pvVar9,0);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(1,*(Il2CppClass **)puVar4,pIVar10,true);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(3,*(Il2CppClass **)puVar5,pIVar10,false);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<int>::Invoke(0x1e,*(Il2CppClass **)puVar5,pIVar10,0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(0x1a,*(Il2CppClass **)puVar5,pIVar10,false);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),2);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textSelection_mDFF50964E29AD418ECC5C2A64C7562F7F372FE88
                      (param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(1,*(Il2CppClass **)puVar4,pIVar10,true);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),1);
  pvVar9 = (void *)TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                             (param_3,pMVar8);
  NullCheck(pvVar9);
  TextElement_set_enableRichText_m5611B38A755963EAD7F9873847930EAB20A9A1ED(pvVar9,0,0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),2);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textSelection_mDFF50964E29AD418ECC5C2A64C7562F7F372FE88
                      (param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(0x10,*(Il2CppClass **)puVar4,pIVar10,true);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),2);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textSelection_mDFF50964E29AD418ECC5C2A64C7562F7F372FE88
                      (param_3,pMVar8);
  NullCheck(pIVar10);
  InterfaceActionInvoker1<bool>::Invoke(0x12,*(Il2CppClass **)puVar4,pIVar10,true);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),1);
  pFVar11 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
            TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                      (param_3,pMVar8);
  NullCheck(pFVar11);
  Focusable_set_tabIndex_m1D41B758C7AA057707AE7CC919ED868075575E96_inline
            (pFVar11,0,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  uVar12 = InterfaceFuncInvoker0<Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*>::Invoke
                     (10,*(Il2CppClass **)puVar5,pIVar10);
  pFVar13 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  lVar14 = GetVirtualMethodInfo((Il2CppObject *)param_3,0x67);
  Func_2__ctor_m86D272566839A59489924C367E316D2E516EC1F2
            (pFVar13,(Il2CppObject *)param_3,lVar14,(MethodInfo *)0x0);
  pIVar15 = (Il2CppObject *)
            Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar12,pFVar13,0);
  NullCheck(pIVar10);
  pIVar21 = *(Il2CppClass **)puVar5;
  pFVar13 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F *)
            Castclass(pIVar15,*(Il2CppClass **)puVar2);
  InterfaceActionInvoker1<Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*>::Invoke
            (0xb,pIVar21,pIVar10,pFVar13);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  uVar12 = InterfaceFuncInvoker0<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>::Invoke
                     (0xc,*(Il2CppClass **)puVar5,pIVar10);
  pAVar16 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
  lVar14 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),10);
  Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501
            (pAVar16,(Il2CppObject *)param_3,lVar14,(MethodInfo *)0x0);
  pIVar15 = (Il2CppObject *)
            Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar12,pAVar16,0);
  NullCheck(pIVar10);
  pIVar21 = *(Il2CppClass **)puVar5;
  pAVar16 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)
            Castclass(pIVar15,*(Il2CppClass **)puVar3);
  InterfaceActionInvoker1<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>::Invoke
            (0xd,pIVar21,pIVar10,pAVar16);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  uVar12 = InterfaceFuncInvoker0<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
                     (0xe,*(Il2CppClass **)puVar5,pIVar10);
  uVar17 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  uVar18 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0xb);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar17,param_3,uVar18,0);
  pIVar15 = (Il2CppObject *)
            Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar12,uVar17,0);
  NullCheck(pIVar10);
  pIVar21 = *(Il2CppClass **)puVar5;
  pAVar19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
            CastclassSealed(pIVar15,*(Il2CppClass **)puVar1);
  InterfaceActionInvoker1<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
            (0xf,pIVar21,pIVar10,pAVar19);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  uVar12 = InterfaceFuncInvoker0<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
                     (0x10,*(Il2CppClass **)puVar5,pIVar10);
  uVar17 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  uVar18 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0xc);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar17,param_3,uVar18,0);
  pIVar15 = (Il2CppObject *)
            Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar12,uVar17,0);
  NullCheck(pIVar10);
  pIVar21 = *(Il2CppClass **)puVar5;
  pAVar19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
            CastclassSealed(pIVar15,*(Il2CppClass **)puVar1);
  InterfaceActionInvoker1<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
            (0x11,pIVar21,pIVar10,pAVar19);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),7);
  pIVar10 = (Il2CppObject *)
            TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_3,pMVar8);
  NullCheck(pIVar10);
  uVar12 = InterfaceFuncInvoker0<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
                     (0x12,*(Il2CppClass **)puVar5,pIVar10);
  uVar17 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  uVar18 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0xd);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar17,param_3,uVar18,0);
  pIVar15 = (Il2CppObject *)
            Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(uVar12,uVar17,0);
  NullCheck(pIVar10);
  pIVar21 = *(Il2CppClass **)puVar5;
  pAVar19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
            CastclassSealed(pIVar15,*(Il2CppClass **)puVar1);
  InterfaceActionInvoker1<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>::Invoke
            (0x13,pIVar21,pIVar10,pAVar19);
  pIVar21 = (Il2CppClass *)
            il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0xe);
  il2cpp_codegen_runtime_class_init_inline(pIVar21);
  pIVar21 = (Il2CppClass *)
            il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0xe);
  lVar14 = il2cpp_codegen_static_fields_for(pIVar21);
  uVar12 = *(undefined8 *)(lVar14 + 0x20);
  NullCheck(param_3);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_3,uVar12,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
  lVar14 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  uVar12 = *(undefined8 *)(lVar14 + 0x48);
  NullCheck(param_3);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(param_3,uVar12,0);
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0x10);
  TextInputBase_SetSingleLine_m51EDFAC41B5FB3C9F7FC08AA370C441C4A8B5FF8(param_3,pMVar8);
  pEVar20 = (EventCallback_1_tDE93D01AB4244ED03015ADF985CF61A9E3CA060F *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_button__
                      );
  lVar14 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_4 + 0x20) + 0xc0),0x11);
  EventCallback_1__ctor_mA03324C646FE93909402ABA6C660D14D22ACE4F8
            (pEVar20,(Il2CppObject *)param_3,lVar14,(MethodInfo *)0x0);
  NullCheck(param_3);
  CallbackEventHandler_RegisterCallback_TisCustomStyleResolvedEvent_t54D095D62773F628A6A05A4531DEE990166062E6_m667D7BACFE267AD56818889E3879640E13998401
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_3,pEVar20,0,
             *(MethodInfo **)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__
            );
  NullCheck(param_3);
  Focusable_set_tabIndex_m1D41B758C7AA057707AE7CC919ED868075575E96_inline
            ((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)param_3,-1,(MethodInfo *)0x0);
  return;
}


