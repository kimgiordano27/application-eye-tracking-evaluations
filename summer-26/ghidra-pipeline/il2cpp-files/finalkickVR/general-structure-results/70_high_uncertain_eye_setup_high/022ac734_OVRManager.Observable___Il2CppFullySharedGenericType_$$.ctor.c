/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 022ac734
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  MethodInfo *pMVar4;
  Il2CppClass *pIVar5;
  undefined8 *puVar6;
  long lVar7;
  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *pLVar8;
  List_1_tDFC8E86C6C617CE8BA27D69135EFC14A13092C37 *pLVar9;
  Il2CppObject *pIVar10;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar11;
  CachedComponentFilter_2_t35C33D484A4C46960AF4D789823F40362A6C63C6 *pCVar12;
  long unaff_x29;
  undefined1 auVar13 [16];
  undefined8 uStack00000000000000e8;
  undefined8 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined4 uStack000000000000015c;
  long in_stack_000001c0;
  long in_stack_000001c8;
  
  uStack00000000000000e8 = 0;
  uVar3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(in_stack_00000140[0x12])
  ;
  in_stack_00000140[0x11] = uVar3;
  NullCheck((void *)in_stack_00000140[0x11]);
  uVar3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                    (in_stack_00000140[0x11],uStack00000000000000e8);
  in_stack_00000140[0x10] = uVar3;
  in_stack_00000140[0x1e] = in_stack_00000140[0x10];
  while( true ) {
    in_stack_00000140[4] = in_stack_00000140[0x1e];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000150);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(in_stack_00000140[4],0);
    *(byte *)(unaff_x29 + -0xf9) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xf9) & 1) == 0) break;
    in_stack_00000140[0xf] = in_stack_00000140[0x1e];
    NullCheck((void *)in_stack_00000140[0xf]);
    pCVar11 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)in_stack_00000140[0xf];
    pMVar4 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),0xc);
    uVar3 = Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33
                      (pCVar11,pMVar4);
    in_stack_00000140[0xe] = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000150);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(in_stack_00000140[0xe],0)
    ;
    *(byte *)(unaff_x29 + -0xa9) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xa9) & 1) != 0) break;
    in_stack_00000140[0xc] = in_stack_00000140[0x1e];
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
    il2cpp_codegen_runtime_class_init_inline(pIVar5);
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar5);
    in_stack_00000140[0xb] = *puVar6;
    NullCheck((void *)in_stack_00000140[0xc]);
    pCVar11 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)in_stack_00000140[0xc];
    pLVar8 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *)in_stack_00000140[0xb];
    pMVar4 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),9);
    Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421
              (pCVar11,pLVar8,pMVar4);
    in_stack_00000140[10] = in_stack_00000140[0x1e];
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
    lVar7 = il2cpp_codegen_static_fields_for(pIVar5);
    in_stack_00000140[9] = *(undefined8 *)(lVar7 + 8);
    NullCheck((void *)in_stack_00000140[10]);
    pCVar11 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)in_stack_00000140[10];
    pLVar9 = (List_1_tDFC8E86C6C617CE8BA27D69135EFC14A13092C37 *)in_stack_00000140[9];
    pMVar4 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),10);
    Component_GetComponents_TisIComponentHost_1_tA9F88AA87921266F3C90532D7F03CCF8AA90F18E_mDF1C11A8BAD8793E6620D53B289864CAE6B8BDA8
              (pCVar11,pLVar9,pMVar4);
    *(byte *)(unaff_x29 + -0xd1) = *(byte *)(unaff_x29 + -0x15) & 1;
    pCVar12 = (CachedComponentFilter_2_t35C33D484A4C46960AF4D789823F40362A6C63C6 *)
              in_stack_00000140[0x22];
    bVar1 = *(byte *)(unaff_x29 + -0xd1);
    pMVar4 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),0xb);
    CachedComponentFilter_2_FilteredCopyToMaster_m6984E471ED721B30E895C5EE9CF1FB83901F1438
              (pCVar12,(bool)(bVar1 & 1),pMVar4);
    in_stack_00000140[7] = in_stack_00000140[0x1e];
    NullCheck((void *)in_stack_00000140[7]);
    uVar3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(in_stack_00000140[7]);
    in_stack_00000140[6] = uVar3;
    NullCheck((void *)in_stack_00000140[6]);
    uVar3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(in_stack_00000140[6],0);
    in_stack_00000140[5] = uVar3;
    in_stack_00000140[0x1e] = in_stack_00000140[5];
  }
  *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x14);
  if ((*(uint *)(unaff_x29 + -0x100) & 1) == 1) {
    in_stack_00000140[2] = in_stack_00000140[0x21];
    NullCheck((void *)in_stack_00000140[2]);
    uVar3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(in_stack_00000140[2]);
    in_stack_00000140[1] = uVar3;
    NullCheck((void *)in_stack_00000140[1]);
    auVar13 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404
                        (in_stack_00000140[1],0);
    *in_stack_00000140 = auVar13._0_8_;
    in_stack_000001c0 = unaff_x29 + -0x30;
    in_stack_00000140[0x1d] = *in_stack_00000140;
    in_stack_000001c8 = unaff_x29 + -0x38;
    il2cpp::utils::
    Finally<CachedComponentFilter_2__ctor_mA476DA5E024D52334C4B46B86D0633809F73A335_gshared::__2>
              ((utils *)&stack0x000001c0,auVar13._8_8_);
    while( true ) {
      pIVar10 = (Il2CppObject *)in_stack_00000140[0x1d];
      NullCheck(pIVar10);
      uVar2 = InterfaceFuncInvoker0<bool>::Invoke(0,(Il2CppClass *)*in_stack_00000148,pIVar10);
      if ((uVar2 & 1) == 0) break;
      pIVar10 = (Il2CppObject *)in_stack_00000140[0x1d];
      NullCheck(pIVar10);
      pIVar10 = (Il2CppObject *)
                InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                          (1,(Il2CppClass *)*in_stack_00000148,pIVar10);
      pCVar11 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                CastclassClass(pIVar10,*(Il2CppClass **)
                                        Method_System_Collections_Generic_Dictionary<string,_JToken>_Remove__
                              );
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
      il2cpp_codegen_runtime_class_init_inline(pIVar5);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
      puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar5);
      pLVar8 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *)*puVar6;
      NullCheck(pCVar11);
      pMVar4 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                    (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),0xd);
      Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B
                (pCVar11,pLVar8,pMVar4);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                  (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),4);
      lVar7 = il2cpp_codegen_static_fields_for(pIVar5);
      pLVar9 = *(List_1_tDFC8E86C6C617CE8BA27D69135EFC14A13092C37 **)(lVar7 + 8);
      NullCheck(pCVar11);
      pMVar4 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                    (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),0xe);
      Component_GetComponentsInChildren_TisIComponentHost_1_tA9F88AA87921266F3C90532D7F03CCF8AA90F18E_mF9EE1A60B3E29E2E7DE95EF6460AF2F6478453A9
                (pCVar11,pLVar9,pMVar4);
      bVar1 = *(byte *)(unaff_x29 + -0x15);
      pIVar10 = (Il2CppObject *)in_stack_00000140[0x21];
      pCVar12 = (CachedComponentFilter_2_t35C33D484A4C46960AF4D789823F40362A6C63C6 *)
                in_stack_00000140[0x22];
      pMVar4 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                    (*(long *)(in_stack_00000140[0x1f] + 0x20) + 0xc0),0xf);
      CachedComponentFilter_2_FilteredCopyToMaster_m858F299604C1EDB92C93B702A2A3E2F375709882
                (pCVar12,(bool)(bVar1 & 1),pIVar10,pMVar4);
    }
    uStack000000000000015c = 6;
    il2cpp::utils::
    FinallyHelper<CachedComponentFilter_2__ctor_mA476DA5E024D52334C4B46B86D0633809F73A335_gshared::$_2,false>
    ::~FinallyHelper((FinallyHelper<CachedComponentFilter_2__ctor_mA476DA5E024D52334C4B46B86D0633809F73A335_gshared::__2,false>
                      *)&stack0x000001d0);
  }
  return;
}


