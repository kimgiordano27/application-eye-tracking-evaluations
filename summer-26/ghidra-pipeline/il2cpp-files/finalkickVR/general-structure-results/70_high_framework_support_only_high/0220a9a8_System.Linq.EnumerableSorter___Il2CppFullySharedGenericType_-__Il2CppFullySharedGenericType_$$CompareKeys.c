/*
FUNCTION_NAME: System.Linq.EnumerableSorter<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$CompareKeys
ENTRY_POINT: 0220a9a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_9;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Linq_EnumerableSorter<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CompareKeys
               (long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 in_x9;
  undefined8 in_x10;
  long unaff_x19;
  long unaff_x29;
  undefined1 auVar6 [16];
  
  do {
    *(undefined8 *)(unaff_x19 + 0x160) = in_x10;
    *(undefined8 *)(unaff_x19 + 0x168) = in_x9;
    *(undefined4 *)(unaff_x19 + 0x178) = *(undefined4 *)(unaff_x19 + 0x168);
    *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0x160);
    *(undefined4 *)(unaff_x19 + 0x188) = *(undefined4 *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0x170);
    NullCheck(*(void **)(param_1 + 0x18));
    uVar2 = *(undefined8 *)Method_System_Nullable<InputUserAccountHandle>_get_HasValue__;
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x18);
    *(undefined4 *)(unaff_x19 + 0x158) = *(undefined4 *)(unaff_x19 + 0x188);
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x180);
    *(undefined4 *)(unaff_x19 + 0x148) = *(undefined4 *)(unaff_x19 + 0x158);
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0x150);
    InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
              ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
               0x36,uVar2,uVar3,*(undefined8 *)(unaff_x19 + 0x140),
               *(undefined8 *)(unaff_x19 + 0x148));
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x100);
    uVar2 = il2cpp_codegen_static_fields_for
                      (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x130) = **(undefined4 **)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x110);
    NullCheck(*(void **)(unaff_x19 + 0x138));
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(unaff_x19 + 0x130);
    VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6
              (*(undefined8 *)(unaff_x19 + 0x138),*(undefined4 *)(unaff_x19 + 0x120),
               *(undefined8 *)(unaff_x19 + 0x128),0);
    do {
      *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x118);
      NullCheck(*(void **)(unaff_x19 + 0x118));
      uVar1 = InterfaceFuncInvoker0<bool>::Invoke
                        (0,*(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                         ,*(Il2CppObject **)(unaff_x19 + 0x118));
      *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
      *(byte *)(unaff_x19 + 0x114) = (byte)*(undefined4 *)(unaff_x19 + 0xc) & 1;
      if ((*(byte *)(unaff_x19 + 0x114) & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0x104) = 5;
        il2cpp::utils::
        FinallyHelper<MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared::$_20,false>
        ::~FinallyHelper((FinallyHelper<MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared::__20,false>
                          *)(unaff_x29 + -0xb0));
        lVar4 = tpidr_el0;
        lVar4 = *(long *)(lVar4 + 0x28) - *(long *)(unaff_x29 + -8);
        if (lVar4 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(lVar4);
      }
      lVar4 = *(long *)(unaff_x19 + 0xf8);
      *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(lVar4 + 0x118);
      NullCheck(*(void **)(lVar4 + 0xb0));
      uVar2 = InterfaceFuncInvoker0<Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*>::Invoke
                        (0,*(Il2CppClass **)Method_System_Nullable<InputUserAccountHandle>__ctor__,
                         *(Il2CppObject **)(*(long *)(unaff_x19 + 0xf8) + 0xb0));
      *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
      lVar4 = *(long *)(unaff_x19 + 0xf8);
      *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(lVar4 + 0x110) = *(undefined8 *)(lVar4 + 0x98);
      *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(*(long *)(lVar4 + 0x160) + 0x30);
      NullCheck(*(void **)(lVar4 + 0x90));
      uVar2 = MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline
                        (*(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
                          (*(long *)(unaff_x19 + 0xf8) + 0x90),(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
      lVar4 = *(long *)(unaff_x19 + 0xf8);
      *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x110);
      NullCheck(*(void **)(lVar4 + 0x88));
      uVar1 = Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C
                        (*(Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11 **)
                          (*(long *)(unaff_x19 + 0xf8) + 0x88),
                         *(Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A **)
                          (*(long *)(unaff_x19 + 0xf8) + 0x80),
                         (ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A **)
                         (unaff_x29 + -0x68),
                         *(MethodInfo **)Method_System_Nullable<InputUser>__ctor__);
      *(undefined4 *)(unaff_x19 + 0xd4) = uVar1;
      *(byte *)(unaff_x29 + -0xf4) = (byte)*(undefined4 *)(unaff_x19 + 0xd4) & 1;
      *(byte *)(unaff_x29 + -0x7c) = ~*(byte *)(unaff_x29 + -0xf4) & 1;
      *(byte *)(unaff_x29 + -0xf8) = *(byte *)(unaff_x29 + -0x7c) & 1;
    } while ((*(byte *)(unaff_x29 + -0xf8) & 1) != 0);
    *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x70) =
         *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x158);
    *(undefined4 *)(unaff_x19 + 0x1fc) = *(undefined4 *)(unaff_x29 + -0x4c);
    *(undefined4 *)(unaff_x19 + 0x1f8) = *(undefined4 *)(unaff_x19 + 0x1fc);
    uVar1 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x19 + 0x1f8),1);
    *(undefined4 *)(unaff_x19 + 0xd0) = uVar1;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x19 + 0xd0);
    NullCheck(*(void **)(lVar4 + 0x70));
    uVar2 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x70),
                       *(undefined4 *)(unaff_x19 + 0x1f8),0);
    *(undefined8 *)(unaff_x19 + 200) = uVar2;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(unaff_x19 + 200);
    *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar4 + 0x100);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__);
    uVar2 = il2cpp_codegen_static_fields_for
                      (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x1e0) = *(undefined4 *)(*(long *)(unaff_x19 + 0xc0) + 4);
    NullCheck(*(void **)(*(long *)(unaff_x19 + 0xf8) + 0x58));
    uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x58);
    *(undefined4 *)(unaff_x19 + 0x1d0) = *(undefined4 *)(unaff_x19 + 0x1e0);
    uVar2 = VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2
                      (uVar2,*(undefined4 *)(unaff_x19 + 0x1d0),0);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(unaff_x19 + 0xb8);
    uVar2 = IsInstClass(*(Il2CppObject **)(lVar4 + 0x48),
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar4 + 0xf8);
    *(undefined4 *)(unaff_x19 + 0x1c4) = *(undefined4 *)(unaff_x29 + -0x1c);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(lVar4 + 0x130);
    uVar2 = il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(lVar4 + 0x140) + 0x38),0);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
    uVar1 = il2cpp_codegen_class_is_value_type(*(Il2CppClass **)(unaff_x19 + 0xa8));
    *(undefined4 *)(unaff_x19 + 0x9c) = uVar1;
    if ((*(uint *)(unaff_x19 + 0x9c) & 1) == 0) {
      *(long *)(unaff_x19 + 0x90) = unaff_x29 + -0x28;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x148);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x19 + 0xa0),*(void **)(unaff_x19 + 0x90),
               (ulong)*(uint *)(unaff_x29 + -0x34));
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(lVar4 + 0x38);
    *(undefined4 *)(unaff_x19 + 0x7c) = *(undefined4 *)(unaff_x19 + 0x1c4);
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(lVar4 + 0x28);
    uVar2 = il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(lVar4 + 0x140) + 0x38),0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
    uVar1 = il2cpp_codegen_class_is_value_type(*(Il2CppClass **)(unaff_x19 + 0x88));
    *(undefined4 *)(unaff_x19 + 0x6c) = uVar1;
    if ((*(uint *)(unaff_x19 + 0x6c) & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = **(undefined8 **)(*(long *)(unaff_x19 + 0xf8) + 0x130);
    }
    else {
      uVar2 = il2cpp_codegen_memcpy
                        (*(void **)(*(long *)(unaff_x19 + 0xf8) + 0x128),
                         *(void **)(*(long *)(unaff_x19 + 0xf8) + 0x130),
                         (ulong)*(uint *)(unaff_x29 + -0x34));
      *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x60);
    }
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x58);
    uVar2 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                 (*(long *)(*(long *)(unaff_x19 + 0xf8) + 0x140) + 0x38),1);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
    MultiColumnController_BindCellItem_TisIl2CppFullySharedGenericAny_m33A460026F65F44B391C25C4A6B19810267BE782
              (*(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(unaff_x19 + 0x70),
               *(int *)(unaff_x19 + 0x7c),
               *(Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A **)(unaff_x19 + 0x80),
               *(void **)(unaff_x19 + 0x48),*(MethodInfo **)(unaff_x19 + 0x50));
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x100);
    NullCheck(*(void **)(lVar4 + 0x20));
    uVar2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x108);
    NullCheck(*(void **)(lVar4 + 0x10));
    uVar2 = ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline
                      (*(ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A **)
                        (*(long *)(unaff_x19 + 0xf8) + 0x10),(MethodInfo *)0x0);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(unaff_x19 + 0x38);
    NullCheck(*(void **)(lVar4 + 8));
    uVar2 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 8),0);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    puVar5 = *(undefined8 **)(unaff_x19 + 0xf8);
    *puVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    NullCheck((void *)*puVar5);
    uVar1 = InterfaceFuncInvoker0<float>::Invoke
                      (0x2c,*(Il2CppClass **)
                             Method_System_Nullable<InputUserAccountHandle>_GetValueOrDefault__,
                       (Il2CppObject *)**(undefined8 **)(unaff_x19 + 0xf8));
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x18c) = *(undefined4 *)(unaff_x19 + 0x2c);
    auVar6 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019
                       (*(undefined4 *)(unaff_x19 + 0x18c),0);
    *(long *)(unaff_x19 + 0x18) = auVar6._8_8_;
    *(long *)(unaff_x19 + 0x20) = auVar6._0_8_;
    param_1 = *(long *)(unaff_x19 + 0xf8);
    in_x9 = *(undefined8 *)(unaff_x19 + 0x18);
    in_x10 = *(undefined8 *)(unaff_x19 + 0x20);
  } while( true );
}


