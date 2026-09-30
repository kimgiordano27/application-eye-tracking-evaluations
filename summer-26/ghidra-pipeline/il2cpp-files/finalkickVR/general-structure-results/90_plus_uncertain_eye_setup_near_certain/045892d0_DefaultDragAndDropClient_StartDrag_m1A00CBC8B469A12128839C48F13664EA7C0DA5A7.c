/*
FUNCTION_NAME: DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7
ENTRY_POINT: 045892d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,Il2CppObject *param_4,
               StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  String_t *pSVar10;
  Il2CppObject *pIVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined4 uStack_2ac;
  undefined4 uStack_23c;
  Il2CppObject **local_e8;
  undefined8 *local_e0;
  FinallyHelper<DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7::__3,false>
  aFStack_d8 [24];
  Il2CppObject *local_c0;
  Il2CppObject *local_b8;
  undefined4 local_ac;
  void *local_a8;
  Il2CppObject *local_a0;
  undefined1 local_91;
  long local_90;
  void *local_88;
  undefined1 local_7a;
  byte local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  Il2CppObject *local_60;
  undefined1 local_51;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  Il2CppObject *local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  puVar2 = Method_System_Nullable<InputUserAccountHandle>_get_HasValue__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__;
  local_40 = param_6;
  local_38 = param_4;
  local_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  if ((DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Queue<LocomotionEvent>_Dequeue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_19692);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_StyleEnum_1_op_Implicit_m3CDF632B66BE956AED4D451BF8A5C2F7F1B7B48D_RuntimeMethod_var_048d83b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (void *)0x0;
  local_50 = (void *)0x0;
  local_51 = 0;
  local_60 = (Il2CppObject *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_79 = 0;
  local_7a = 0;
  local_88 = (void *)0x0;
  local_90 = StartDragArgs_get_unityObjectReferences_m51A81D6907FCA509A035F4907C37754EDE61C27F_inline
                       (param_5,(MethodInfo *)0x0);
  local_91 = local_90 != 0;
  local_51 = local_91;
  if ((bool)local_91) {
    local_a0 = (Il2CppObject *)
               StartDragArgs_get_unityObjectReferences_m51A81D6907FCA509A035F4907C37754EDE61C27F_inline
                         (param_5,(MethodInfo *)0x0);
    local_a8 = (void *)Enumerable_ToArray_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m6FFA9BD09F6155B2C67C1696C416FE75E4AE7DFE
                                 (local_a0,*(MethodInfo **)StringLiteral_19692);
    *(void **)(local_38 + 0x28) = local_a8;
    Il2CppCodeGenWriteBarrier((void **)(local_38 + 0x28),local_a8);
  }
  local_ac = StartDragArgs_get_visualMode_m7FB56D75E8FDD310645CC91C98E46CC773AF0175_inline
                       (param_5,(MethodInfo *)0x0);
  *(undefined4 *)(local_38 + 0x20) = local_ac;
  local_b8 = (Il2CppObject *)
             StartDragArgs_get_genericData_m9F34B0D595FC63E28E4D033BCA5767E5ED8185BD_inline
                       (param_5,(MethodInfo *)0x0);
  NullCheck(local_b8);
  auVar12 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(0x1f,local_b8);
  local_c0 = auVar12._0_8_;
  local_e8 = &local_60;
  local_e0 = &local_78;
  local_60 = local_c0;
  il2cpp::utils::
  Finally<DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7::__3>
            ((utils *)&local_e8,auVar12._8_8_);
  while( true ) {
    pIVar4 = local_60;
    NullCheck(local_60);
    uVar3 = InterfaceFuncInvoker0<bool>::Invoke(0,*(Il2CppClass **)puVar1,pIVar4);
    pIVar4 = local_60;
    if ((uVar3 & 1) == 0) break;
    NullCheck(local_60);
    pIVar4 = (Il2CppObject *)
             InterfaceFuncInvoker0<Il2CppObject*>::Invoke(1,*(Il2CppClass **)puVar1,pIVar4);
    puVar5 = (undefined8 *)
             UnBox(pIVar4,*(Il2CppClass **)
                           Method_System_Collections_Generic_Queue<LocomotionEvent>_Dequeue__);
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    pIVar11 = *(Il2CppObject **)(local_38 + 0x10);
    pIVar4 = (Il2CppObject *)
             DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline
                       ((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB *)&local_70,
                        (MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)
             DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline
                       ((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB *)&local_70,
                        (MethodInfo *)0x0);
    NullCheck(pIVar11);
    pIVar4 = (Il2CppObject *)
             CastclassSealed(pIVar4,*(Il2CppClass **)
                                     Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                            );
    VirtualActionInvoker2<Il2CppObject*,Il2CppObject*>::Invoke(0x1e,pIVar11,pIVar4,pIVar6);
  }
  il2cpp::utils::
  FinallyHelper<DefaultDragAndDropClient_StartDrag_m1A00CBC8B469A12128839C48F13664EA7C0DA5A7::$_3,false>
  ::~FinallyHelper(aFStack_d8);
  uVar7 = StartDragArgs_get_title_mB252BB46053EACA4B3D3321AF902D26DEFD11D41_inline
                    (param_5,(MethodInfo *)0x0);
  local_79 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(uVar7,0);
  local_79 = local_79 & 1;
  if (local_79 == 0) {
    pIVar4 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,local_38);
    pvVar8 = (void *)IsInstClass(pIVar4,*(Il2CppClass **)
                                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                );
    local_48 = pvVar8;
    if (pvVar8 == (void *)0x0) {
      local_88 = (void *)0x0;
    }
    else {
      NullCheck(pvVar8);
      pIVar4 = (Il2CppObject *)
               VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar8,0);
      NullCheck(pIVar4);
      local_88 = (void *)InterfaceFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                         ::Invoke(0,*(Il2CppClass **)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__
                                  ,pIVar4);
    }
    local_50 = local_88;
    local_7a = local_88 == (void *)0x0;
    if (!(bool)local_7a) {
      if (*(long *)(local_38 + 0x18) == 0) {
        pvVar8 = (void *)il2cpp_codegen_object_new
                                   (*(Il2CppClass **)
                                     Method_System_Nullable<InputUserAccountHandle>_get_Value__);
        Label__ctor_mEC3F9EF41CBD508BAA966A8C6C75EABBED3CB365(pvVar8);
        NullCheck(pvVar8);
        VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar8,1,0);
        NullCheck(pvVar8);
        pvVar9 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar8,0)
        ;
        uVar7 = StyleEnum_1_op_Implicit_m3CDF632B66BE956AED4D451BF8A5C2F7F1B7B48D
                          (1,*(MethodInfo **)
                              PTR_StyleEnum_1_op_Implicit_m3CDF632B66BE956AED4D451BF8A5C2F7F1B7B48D_RuntimeMethod_var_048d83b0
                          );
        NullCheck(pvVar9);
        InterfaceActionInvoker1<StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9>::Invoke
                  (0x28,*(undefined8 *)puVar2,pvVar9,uVar7);
        *(void **)(local_38 + 0x18) = pvVar8;
        Il2CppCodeGenWriteBarrier((void **)(local_38 + 0x18),pvVar8);
      }
      pIVar4 = *(Il2CppObject **)(local_38 + 0x18);
      pSVar10 = (String_t *)
                StartDragArgs_get_title_mB252BB46053EACA4B3D3321AF902D26DEFD11D41_inline
                          (param_5,(MethodInfo *)0x0);
      NullCheck(pIVar4);
      VirtualActionInvoker1<String_t*>::Invoke(0x9f,pIVar4,pSVar10);
      pvVar8 = *(void **)(local_38 + 0x18);
      NullCheck(pvVar8);
      pvVar8 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar8,0);
      auVar13 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(uStack_28,0);
      NullCheck(pvVar8);
      InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
                ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
                 0x2d,*(undefined8 *)puVar2,pvVar8,auVar13._0_8_,CONCAT44(uStack_23c,auVar13._8_4_))
      ;
      pvVar8 = *(void **)(local_38 + 0x18);
      NullCheck(pvVar8);
      pvVar8 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar8,0);
      auVar13 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(local_2c,0);
      NullCheck(pvVar8);
      InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
                ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
                 0x19,*(undefined8 *)puVar2,pvVar8,auVar13._0_8_,CONCAT44(uStack_2ac,auVar13._8_4_))
      ;
      pvVar8 = local_50;
      uVar7 = *(undefined8 *)(local_38 + 0x18);
      NullCheck(local_50);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar8,uVar7,0);
    }
  }
  return;
}


