/*
FUNCTION_NAME: System.Func<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 022353f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 System_Func<__Il2CppFullySharedGenericType>__EndInvoke(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  __57 *extraout_x1;
  undefined8 uVar7;
  long unaff_x29;
  int iStack0000000000000094;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  void *in_stack_00000180;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_rgctx_method_init(*(MethodInfo **)(unaff_x29 + -0x18));
  }
  pvVar3 = (void *)(unaff_x29 + -0x48);
  memset(pvVar3,0,0x30);
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined1 *)(unaff_x29 + -0x71) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined4 *)(unaff_x29 + -0x8c) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(*(void **)(unaff_x29 + -0x98));
  List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253
            (*(List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F **)(unaff_x29 + -0x98),
             *(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
  memcpy((void *)(unaff_x29 + -200),(void *)(unaff_x29 + -0xf8),0x30);
  memcpy(pvVar3,(void *)(unaff_x29 + -200),0x30);
  in_stack_00000180 = pvVar3;
  il2cpp::utils::
  Finally<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::__57>
            ((utils *)&stack0x00000180,extraout_x1);
  do {
    uVar2 = Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD
                      ((Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD *)(unaff_x29 + -0x48),
                       *(MethodInfo **)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    if ((uVar2 & 1) == 0) {
      iStack0000000000000094 = 8;
      goto LAB_022355a4;
    }
    Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_inline
              ((Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD *)(unaff_x29 + -0x48),
               *(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000148;
    *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000140;
    *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000158;
    *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000150;
    pvVar3 = *(void **)(unaff_x29 + -0x70);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(pvVar3);
    uVar2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar3,uVar7,0);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(unaff_x29 + -0x8c) = 0;
    }
    else {
      uVar7 = AssetEntry_get_type_mF58DB144BB0A3D53633E8A2EA2EB4C692CDDC23D(unaff_x29 + -0x70,0);
      uVar4 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
      uVar4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar4,0);
      bVar1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uVar7,uVar4,0);
      *(uint *)(unaff_x29 + -0x8c) = (uint)(bVar1 & 1);
    }
    *(bool *)(unaff_x29 + -0x71) = *(int *)(unaff_x29 + -0x8c) != 0;
  } while ((*(byte *)(unaff_x29 + -0x71) & 1) == 0);
  pIVar6 = *(Il2CppObject **)(unaff_x29 + -0x60);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),1);
  pIVar6 = (Il2CppObject *)IsInst(pIVar6,pIVar5);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),1);
  uVar7 = Castclass(pIVar6,pIVar5);
  *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
  iStack0000000000000094 = 7;
LAB_022355a4:
  il2cpp::utils::
  FinallyHelper<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::$_57,false>
  ::~FinallyHelper((FinallyHelper<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::__57,false>
                    *)&stack0x00000188);
  if ((iStack0000000000000094 == 0) || (iStack0000000000000094 != 7)) {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x88),8);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x88);
  }
  return *(undefined8 *)(unaff_x29 + -0x80);
}


