/*
FUNCTION_NAME: MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared
ENTRY_POINT: 0220a250
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               MethodInfo *param_5)

{
  long lVar1;
  ulong uVar2;
  Il2CppClass *pIVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_320 [12];
  uint local_314;
  undefined4 *local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  MethodInfo *local_2d0;
  void *local_2c8;
  void *local_2c0;
  uint local_2b4;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_2b0;
  int local_2a4;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *local_2a0;
  Il2CppClass *local_298;
  undefined8 *local_290;
  uint local_284;
  void *local_280;
  Il2CppClass *local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  int local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  MethodInfo *local_238;
  int local_22c;
  undefined8 *local_228;
  undefined4 local_21c;
  byte local_20c;
  Il2CppObject *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190 [6];
  int local_15c;
  undefined4 local_150;
  undefined4 local_140;
  int local_128;
  int local_124;
  byte local_118;
  byte local_114;
  utils local_d8 [8];
  FinallyHelper<MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared::__20,false>
  aFStack_d0 [52];
  byte local_9c;
  ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *local_88 [2];
  undefined1 local_78 [12];
  int local_6c;
  uint local_54;
  MethodInfo *local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_228 = local_190;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = param_5;
  local_48 = param_4;
  local_3c = param_3;
  local_38 = param_2;
  local_30 = param_1;
  uVar2 = il2cpp_rgctx_is_initialized(param_5);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<InputUser>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUser>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_GetValueOrDefault__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUpdateType>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_rgctx_method_init((MethodInfo *)local_228[0x28]);
  }
  local_22c = 0;
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_228[0x28] + 0x38),0)
  ;
  local_54 = il2cpp_codegen_sizeof(pIVar3);
  uVar2 = (ulong)local_54;
  local_228[0x26] = auStack_320 + -(uVar2 + 0xf & 0x1fffffff0);
  local_228[0x25] =
       (long)(auStack_320 + -(uVar2 + 0xf & 0x1fffffff0)) - ((ulong)local_54 + 0xf & 0x1fffffff0);
  local_238 = (MethodInfo *)0x0;
  local_228[0x23] = 0;
  local_228[0x22] = 0;
  local_228[0x21] = 0;
  local_228[0x20] = 0;
  local_228[0x1f] = 0;
  local_9c = (byte)local_22c;
  local_6c = local_22c;
  local_228[0x1d] = *(undefined8 *)(local_228[0x2c] + 0x30);
  NullCheck((void *)local_228[0x1d]);
  uVar4 = MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline
                    ((MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *)
                     local_228[0x1d],local_238);
  local_228[0x1c] = uVar4;
  NullCheck((void *)local_228[0x1c]);
  uVar4 = Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC
                    (local_228[0x1c],local_238);
  local_228[0x1b] = uVar4;
  NullCheck((void *)local_228[0x1b]);
  auVar5 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                     ((ushort)local_22c,
                      *(Il2CppClass **)Method_System_Nullable<InputUser>_get_HasValue__,
                      (Il2CppObject *)local_228[0x1b]);
  local_228[0x1a] = auVar5._0_8_;
  local_228[0x23] = local_228[0x1a];
  local_228[0x17] = local_78;
  il2cpp::utils::
  Finally<MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared::__20>
            (local_d8,auVar5._8_8_);
  while( true ) {
    local_208 = (Il2CppObject *)local_228[0x23];
    NullCheck(local_208);
    local_314 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,local_208);
    local_20c = (byte)local_314 & 1;
    if ((local_314 & 1) == 0) break;
    local_228[0x16] = local_228[0x23];
    NullCheck((void *)local_228[0x16]);
    local_240 = InterfaceFuncInvoker0<Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*>::Invoke
                          (0,*(Il2CppClass **)Method_System_Nullable<InputUserAccountHandle>__ctor__
                           ,(Il2CppObject *)local_228[0x16]);
    local_228[0x13] = local_240;
    local_228[0x22] = local_228[0x13];
    local_228[0x12] = *(undefined8 *)(local_228[0x2c] + 0x30);
    NullCheck((void *)local_228[0x12]);
    local_248 = MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline
                          ((MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *)
                           local_228[0x12],(MethodInfo *)0x0);
    local_228[0x11] = local_248;
    local_228[0x10] = local_228[0x22];
    NullCheck((void *)local_228[0x11]);
    local_24c = Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C
                          ((Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11 *)local_228[0x11]
                           ,(Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)local_228[0x10],
                           local_88,*(MethodInfo **)Method_System_Nullable<InputUser>__ctor__);
    local_114 = (byte)local_24c & 1;
    local_118 = ~local_114 & 1;
    local_9c = local_118;
    if (local_118 == 0) {
      local_228[0xe] = local_228[0x2b];
      local_124 = local_6c;
      local_128 = local_6c;
      local_250 = il2cpp_codegen_add<int,int>(local_6c,1);
      local_6c = local_250;
      NullCheck((void *)local_228[0xe]);
      local_258 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693
                            (local_228[0xe],local_128,0);
      local_228[0xc] = local_258;
      local_228[0x20] = local_228[0xc];
      local_228[0xb] = local_228[0x20];
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__);
      local_260 = il2cpp_codegen_static_fields_for
                            (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__
                            );
      local_140 = *(undefined4 *)(local_260 + 4);
      NullCheck((void *)local_228[0xb]);
      local_150 = local_140;
      local_268 = VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2
                            (local_228[0xb],local_140,0);
      local_228[9] = local_268;
      local_270 = IsInstClass((Il2CppObject *)local_228[9],
                              *(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
      local_228[0x1f] = local_270;
      local_228[7] = local_228[0x1f];
      local_15c = local_3c;
      local_228[5] = local_228[0x22];
      local_280 = (void *)local_228[0x26];
      local_278 = (Il2CppClass *)
                  il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_228[0x28] + 0x38),0);
      local_284 = il2cpp_codegen_class_is_value_type(local_278);
      if ((local_284 & 1) == 0) {
        local_290 = &local_48;
      }
      else {
        local_290 = (undefined8 *)local_228[0x29];
      }
      il2cpp_codegen_memcpy(local_280,local_290,(ulong)local_54);
      local_2b0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_228[7];
      local_2a4 = local_15c;
      local_2a0 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)local_228[5];
      local_298 = (Il2CppClass *)
                  il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_228[0x28] + 0x38),0);
      local_2b4 = il2cpp_codegen_class_is_value_type(local_298);
      if ((local_2b4 & 1) == 0) {
        local_2c8 = *(void **)local_228[0x26];
      }
      else {
        local_2c8 = (void *)il2cpp_codegen_memcpy
                                      ((void *)local_228[0x25],(void *)local_228[0x26],
                                       (ulong)local_54);
        local_2c0 = local_2c8;
      }
      local_2d8 = local_2c8;
      local_2d0 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_228[0x28] + 0x38),1)
      ;
      MultiColumnController_BindCellItem_TisIl2CppFullySharedGenericAny_m33A460026F65F44B391C25C4A6B19810267BE782
                (local_2b0,local_2a4,local_2a0,local_2d8,local_2d0);
      local_228[4] = local_228[0x20];
      NullCheck((void *)local_228[4]);
      local_2e0 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(local_228[4],0);
      local_228[3] = local_2e0;
      local_228[2] = local_228[0x21];
      NullCheck((void *)local_228[2]);
      local_2e8 = ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline
                            ((ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *)local_228[2],
                             (MethodInfo *)0x0);
      local_228[1] = local_2e8;
      NullCheck((void *)local_228[1]);
      local_2f0 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB
                            (local_228[1],0);
      *local_228 = local_2f0;
      NullCheck((void *)*local_228);
      local_2f4 = InterfaceFuncInvoker0<float>::Invoke
                            (0x2c,*(Il2CppClass **)
                                   Method_System_Nullable<InputUserAccountHandle>_GetValueOrDefault__
                             ,(Il2CppObject *)*local_228);
      local_194 = local_2f4;
      auVar5 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(local_2f4,0);
      local_308 = auVar5._8_8_;
      local_300 = auVar5._0_8_;
      local_1b8._0_4_ = auVar5._8_4_;
      local_1a8 = (undefined4)local_1b8;
      local_198 = (undefined4)local_1b8;
      local_1c0 = local_300;
      local_1b8 = local_308;
      local_1b0 = local_300;
      local_1a0 = local_300;
      NullCheck((void *)local_228[3]);
      local_1c8 = local_198;
      local_1d0 = local_1a0;
      local_1d8 = local_198;
      local_1e0 = local_1a0;
      InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
                ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
                 0x36,*(undefined8 *)Method_System_Nullable<InputUserAccountHandle>_get_HasValue__,
                 local_228[3],local_1a0,CONCAT44(uStack_1d4,local_198));
      local_1e8 = (void *)local_228[0x20];
      local_310 = (undefined4 *)
                  il2cpp_codegen_static_fields_for
                            (*(Il2CppClass **)Method_System_Nullable<InputUpdateType>_get_HasValue__
                            );
      local_1f0 = *local_310;
      local_1f8 = local_228[0x22];
      NullCheck(local_1e8);
      local_200 = local_1f0;
      VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6
                (local_1e8,local_1f0,local_1f8,0);
    }
  }
  local_21c = 5;
  il2cpp::utils::
  FinallyHelper<MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared::$_20,false>
  ::~FinallyHelper(aFStack_d0);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


