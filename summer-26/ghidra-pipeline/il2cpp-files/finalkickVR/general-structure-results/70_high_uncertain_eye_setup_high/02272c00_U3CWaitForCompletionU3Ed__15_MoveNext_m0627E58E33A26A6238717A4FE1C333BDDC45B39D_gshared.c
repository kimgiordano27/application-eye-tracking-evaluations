/*
FUNCTION_NAME: U3CWaitForCompletionU3Ed__15_MoveNext_m0627E58E33A26A6238717A4FE1C333BDDC45B39D_gshared
ENTRY_POINT: 02272c00
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void U3CWaitForCompletionU3Ed__15_MoveNext_m0627E58E33A26A6238717A4FE1C333BDDC45B39D_gshared
               (U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 *param_1,
               MethodInfo *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  MethodInfo *pMVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  void *local_3a0 [2];
  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *local_390;
  Exception_t *local_370;
  undefined8 local_368;
  Exception_t *local_360;
  Il2CppClass *local_358;
  void *local_350;
  MethodInfo *local_348;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_340;
  long local_338;
  MethodInfo *local_330;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_328;
  void **local_320;
  long local_318;
  int local_30c;
  MethodInfo *local_308;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_300;
  long local_2f8;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_2f0;
  MethodInfo *local_2e8;
  long local_2e0;
  MethodInfo *local_2d8;
  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *local_2d0;
  U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 *local_2c8;
  long local_2c0;
  Il2CppClass *local_2b8;
  long local_2b0;
  uint local_284;
  MethodInfo *local_280;
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  MethodInfo *local_260;
  long local_258;
  undefined8 local_250;
  undefined8 local_248;
  MethodInfo *local_240;
  Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC *local_238;
  long local_230;
  Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC *local_228;
  MethodInfo *local_220;
  TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7 *local_218;
  long local_210;
  undefined8 *local_208;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_200;
  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *local_1f8;
  Exception_t *local_1c8;
  void *local_1c0;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_1b8;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_1b0;
  int local_1a4;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_1a0;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_198;
  undefined4 local_18c;
  U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *local_168;
  undefined8 local_160 [3];
  undefined4 local_148;
  byte local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined8 uStack_118;
  Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC *local_f8;
  TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7 *local_f0;
  void *local_d8;
  int local_cc;
  void *local_c8;
  int local_bc;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_b8 [16];
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_a8;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_a0;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *pRStack_98;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_90;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *pRStack_88;
  Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *local_78;
  void *local_70;
  void *local_68;
  int local_5c;
  void *local_58;
  void **local_50;
  void **local_48;
  uint local_3c;
  MethodInfo *local_38;
  U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 *local_30;
  long local_28;
  
  local_208 = local_160;
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(param_2 + 0x20));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02272bb0 with catch @ 02272c44
                        */
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar4 + 0xc0),0x16);
  local_3c = il2cpp_codegen_sizeof(pIVar5);
                    /* try { // try from 02272c4c to 02372dfb has its CatchHandler @ 02272c4c
                       catch() { ... } // from try @ 02272c4c with catch @ 02272c4c
                       catch() { ... } // from try @ 02272e74 with catch @ 02272c4c
                       catch() { ... } // from try @ 02272ec8 with catch @ 02272c4c
                       catch() { ... } // from try @ 02272f54 with catch @ 02272c4c */
  local_50 = (void **)((long)local_3a0 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_58 = (void *)((long)local_50 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_5c = 0;
  local_200 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *)0x0;
  local_68 = (void *)0x0;
  local_70 = (void *)((long)local_58 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_48 = local_50;
  memset(local_70,0,(ulong)local_3c);
  local_78 = local_200;
  pRStack_88 = local_200;
  local_90 = local_200;
  pRStack_98 = local_200;
  local_a0 = local_200;
  local_a8 = local_200;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_b8);
  local_cc = *(int *)local_30;
  local_c8 = *(void **)(local_30 + 0x20);
  local_bc = local_cc;
  local_68 = local_c8;
  local_5c = local_cc;
  if (local_cc == 0) {
    uStack_178 = *(undefined8 *)(local_30 + 0x30);
    uVar8 = *(undefined8 *)(local_30 + 0x28);
    puVar1 = local_208 + 0x1a;
    local_180 = uVar8;
    local_208[0x1b] = uStack_178;
    *puVar1 = uVar8;
    local_188 = local_30 + 0x28;
    il2cpp_codegen_initobj(local_188,0x10);
    local_18c = 0xffffffff;
    local_5c = -1;
    *(int *)local_30 = -1;
  }
  else {
    local_d8 = local_c8;
    NullCheck(local_c8);
    local_f0 = *(TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7 **)
                ((long)local_d8 + 0x10);
    NullCheck(local_f0);
    local_218 = local_f0;
    local_210 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
    local_220 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_210 + 0xc0),3);
    local_228 = (Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC *)
                TaskCompletionSource_1_get_Task_m99C4E7D405DA7485360F4554AD219A778BBED3C7_inline
                          (local_218,local_220);
    local_f8 = local_228;
    NullCheck(local_228);
    local_238 = local_f8;
    local_230 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
    local_240 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_230 + 0xc0),5);
    auVar9 = Task_1_ConfigureAwait_m1AC82F33431DFFF7B3EA34E5A7EFCF9BA01DEA10
                       (local_238,false,local_240);
    puVar3 = local_208;
    local_250 = auVar9._8_8_;
    local_248 = auVar9._0_8_;
    puVar1 = local_208 + 8;
    puVar2 = local_208 + 10;
    local_120 = local_248;
    uStack_118 = local_250;
    local_208[0xb] = local_208[9];
    *puVar2 = *puVar1;
    puVar3[0x19] = puVar3[0xb];
    puVar3[0x18] = puVar3[10];
    local_258 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
    local_260 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_258 + 0xc0),7);
    auVar9 = ConfiguredTaskAwaitable_1_GetAwaiter_m3908A95C09C81E66D2D640837B74A249FC6B0F97_inline
                       ((ConfiguredTaskAwaitable_1_t2ED119E87D01C85A64E0CD806974D3A1ED3F92E5 *)
                        &local_a0,local_260);
    puVar3 = local_208;
    local_270 = auVar9._8_8_;
    local_268 = auVar9._0_8_;
    puVar1 = local_208 + 4;
    puVar2 = local_208 + 6;
    local_140 = local_268;
    uStack_138 = local_270;
    local_208[7] = local_208[5];
    *puVar2 = *puVar1;
    puVar3[0x1b] = puVar3[7];
    puVar3[0x1a] = puVar3[6];
    local_278 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
    local_280 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_278 + 0xc0),10);
    local_284 = ConfiguredTaskAwaiter_get_IsCompleted_mC5C107AAC0E5413765606EDF49B670B22481D097
                          ((ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA *)
                           &local_90,local_280);
    puVar1 = local_208;
    local_144 = (byte)local_284 & 1;
    if ((local_284 & 1) == 0) {
      local_148 = 0;
      local_5c = 0;
      *(int *)local_30 = 0;
      puVar2 = local_208 + 0x1a;
      local_208[1] = local_208[0x1b];
      *puVar1 = *puVar2;
      uVar8 = *puVar1;
      *(undefined8 *)(local_30 + 0x30) = puVar1[1];
      *(undefined8 *)(local_30 + 0x28) = uVar8;
      Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x28),(void *)0x0);
      local_168 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *)
                  (local_30 + 8);
      local_2b0 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
      local_2b8 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_2b0 + 0xc0),0xe);
      il2cpp_codegen_runtime_class_init_inline(local_2b8);
      local_2d0 = local_168;
      local_2c8 = local_30;
      local_2c0 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
      local_2d8 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_2c0 + 0xc0),0xd);
      AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA_TisU3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937_mE9896D83E6F6674741A8136444325078F7B815ED
                (local_2d0,
                 (ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA *)&local_90,
                 local_2c8,local_2d8);
      goto LAB_0227354c;
    }
  }
  local_2e0 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  local_2e8 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_2e0 + 0xc0),0x11);
  local_2f0 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 *)
              ConfiguredTaskAwaiter_GetResult_m6A6EED428C875D4387025E05D6F12ECC96202F0E
                        ((ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA *)
                         &local_90,local_2e8);
  local_1a0 = local_2f0;
  local_198 = local_2f0;
  local_78 = local_2f0;
  NullCheck(local_2f0);
  local_300 = local_1a0;
  local_2f8 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  local_308 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_2f8 + 0xc0),0x13);
  local_30c = Result_get_Status_mE4AEFB0E863B8A5D9A3A8FC53D1F5FC886946F2A_inline
                        (local_300,local_308);
  local_1a4 = local_30c;
  if (local_30c != 1) {
    local_1b8 = local_78;
    NullCheck(local_78);
    local_340 = local_1b8;
    local_338 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
    local_348 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_338 + 0xc0),0x17);
    local_350 = (void *)Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_inline
                                  (local_340,local_348);
    local_1c0 = local_350;
    NullCheck(local_350);
    ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(local_1c0,0);
    local_358 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                          );
    local_370 = (Exception_t *)il2cpp_codegen_object_new(local_358);
    local_360 = local_370;
    local_1c8 = local_370;
    local_368 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                          );
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(local_370,local_368,0)
    ;
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(local_1c8,local_38);
  }
  local_1b0 = local_78;
  NullCheck(local_78);
  local_328 = local_1b0;
  local_320 = local_48;
  local_318 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  local_330 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_318 + 0xc0),0x15);
  Result_get_Argument_mFF777A595129DC21EE0ACD74FCDF6DA6FF49E6CD_inline
            (local_328,local_320,local_330);
  il2cpp_codegen_memcpy(local_70,local_48,(ulong)local_3c);
  *(int *)local_30 = -2;
  local_1f8 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *)(local_30 + 8);
  il2cpp_codegen_memcpy(local_50,local_70,(ulong)local_3c);
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar4 + 0xc0),0xe);
  il2cpp_codegen_runtime_class_init_inline(pIVar5);
  local_390 = local_1f8;
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar4 + 0xc0),0x16);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar6 & 1) == 0) {
    local_3a0[1] = *local_50;
  }
  else {
    local_3a0[1] = (void *)il2cpp_codegen_memcpy(local_58,local_50,(ulong)local_3c);
  }
  local_3a0[0] = local_3a0[1];
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(local_38 + 0x20));
  pMVar7 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar4 + 0xc0),0x19);
  AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778
            (local_390,local_3a0[0],pMVar7);
LAB_0227354c:
  lVar4 = tpidr_el0;
  lVar4 = *(long *)(lVar4 + 0x28) - local_28;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


