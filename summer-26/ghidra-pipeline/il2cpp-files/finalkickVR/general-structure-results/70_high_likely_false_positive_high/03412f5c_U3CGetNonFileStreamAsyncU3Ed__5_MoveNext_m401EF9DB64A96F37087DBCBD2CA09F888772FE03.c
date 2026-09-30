/*
FUNCTION_NAME: U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03
ENTRY_POINT: 03412f5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_11;telemetry_or_network_hits_13;negative_known_unity_or_il2cpp_false_positive_family
*/


void U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03
               (U3CGetNonFileStreamAsyncU3Ed__5_t6F4037451FAED208D46C99166A90090CCACC4D15 *param_1,
               undefined8 param_2)

{
  AsyncTaskMethodBuilder_1_t923DC16ADFF754593B125800F38ED37C920B14C1 *pAVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *pHVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  Func_3_t37EC932F9834D7F9E1C44B6BC6C01F409AE93BA7 *pFVar9;
  long lVar10;
  Func_2_tE048A673EF3350A89334B6C88EA7517D1EDF8FF3 *pFVar11;
  void *pvVar12;
  Il2CppObject *pIVar13;
  ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29 *pSVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *pSVar18;
  Il2CppObject *pIVar19;
  Il2CppObject *pIVar20;
  undefined1 auVar21 [16];
  int *local_258;
  undefined1 *local_250;
  void **local_248;
  FinallyHelper<U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03::__3,false>
  aFStack_240 [32];
  void *local_220;
  HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *local_218;
  Il2CppObject *local_210;
  Il2CppObject *local_208;
  undefined4 local_1fc;
  U3CGetNonFileStreamAsyncU3Ed__5_t6F4037451FAED208D46C99166A90090CCACC4D15 *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  AsyncTaskMethodBuilder_1_t923DC16ADFF754593B125800F38ED37C920B14C1 *local_1d8;
  undefined1 local_1d0 [16];
  undefined4 local_1b8;
  byte local_1b1;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  Task_1_t5E1291839AEFBDBE3699513D40515588EE167AB0 *local_170;
  Func_2_tE048A673EF3350A89334B6C88EA7517D1EDF8FF3 *local_168;
  Il2CppObject *local_160;
  Il2CppObject *local_158;
  Func_3_t37EC932F9834D7F9E1C44B6BC6C01F409AE93BA7 *local_150;
  Il2CppObject *local_148;
  Il2CppObject *local_140;
  TaskFactory_1_t1C878D0A5D747EAFF79E944B48ED5067568E4873 *local_138;
  RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550 *local_130;
  Il2CppObject *local_128;
  long local_120;
  Il2CppObject *local_118;
  Il2CppObject *local_110;
  long local_108;
  Il2CppObject *local_100;
  Il2CppObject *local_f8;
  long local_f0;
  void *local_e8;
  undefined8 local_d0;
  int local_c4;
  void *local_c0;
  int local_b4;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_b0 [16];
  undefined8 local_a0;
  Il2CppObject *local_98;
  undefined1 local_89;
  void *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *local_58;
  Il2CppObject *local_50;
  Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *local_48;
  void *local_40;
  int local_34;
  undefined8 local_30;
  U3CGetNonFileStreamAsyncU3Ed__5_t6F4037451FAED208D46C99166A90090CCACC4D15 *local_28;
  
  puVar4 = StringLiteral_8721;
  puVar3 = StringLiteral_4278;
  local_30 = param_2;
  local_28 = param_1;
  if ((U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8729);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_4280);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8730);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8731);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8732);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8733);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8734);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<IContextProperty>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<int3>_get_IsCreated__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8735);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8736);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8737);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8722);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_8723);
    U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03::
    s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0;
  local_40 = (void *)0x0;
  local_48 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *)0x0;
  local_50 = (Il2CppObject *)0x0;
  local_58 = (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *)0x0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = (void *)0x0;
  local_89 = 0;
  local_98 = (Il2CppObject *)0x0;
  local_a0 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_b0);
  local_c4 = *(int *)local_28;
  local_c0 = *(void **)(local_28 + 0x40);
  local_b4 = local_c4;
  local_40 = local_c0;
  local_34 = local_c4;
  if (local_c4 == 0) {
    uStack_1e8 = *(undefined8 *)(local_28 + 0x58);
    local_1f0 = *(undefined8 *)(local_28 + 0x50);
    local_1f8 = local_28 + 0x50;
    local_70._0_8_ = local_1f0;
    local_70._8_8_ = uStack_1e8;
    il2cpp_codegen_initobj(local_1f8,0x10);
    local_1fc = 0xffffffff;
    local_34 = -1;
    *(int *)local_28 = -1;
  }
  else {
    local_d0 = *(undefined8 *)(local_28 + 0x20);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
              );
    local_e8 = (void *)WebRequest_Create_m82055E3A45625D108C0BA8927059EFA8E75E80D2(local_d0,0);
    *(void **)(local_28 + 0x48) = local_e8;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),local_e8);
    local_f0 = *(long *)(local_28 + 0x28);
    if (local_f0 != 0) {
      local_f8 = *(Il2CppObject **)(local_28 + 0x48);
      local_100 = *(Il2CppObject **)(local_28 + 0x28);
      NullCheck(local_f8);
      VirtualActionInvoker1<Il2CppObject*>::Invoke(0x13,local_f8,local_100);
    }
    local_108 = *(long *)(local_28 + 0x30);
    if (local_108 != 0) {
      local_110 = *(Il2CppObject **)(local_28 + 0x48);
      local_118 = *(Il2CppObject **)(local_28 + 0x30);
      NullCheck(local_110);
      VirtualActionInvoker1<Il2CppObject*>::Invoke(0x16,local_110,local_118);
    }
    local_120 = *(long *)(local_28 + 0x38);
    if (local_120 != 0) {
      local_128 = *(Il2CppObject **)(local_28 + 0x48);
      local_130 = *(RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550 **)
                   (local_28 + 0x38);
      NullCheck(local_128);
      VirtualActionInvoker1<RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550*>::Invoke
                (8,local_128,local_130);
    }
    local_138 = (TaskFactory_1_t1C878D0A5D747EAFF79E944B48ED5067568E4873 *)
                Task_1_get_Factory_mD89EEB624F4B1BF7199953C2A9DE66D56A8C0F3C
                          (*(MethodInfo **)StringLiteral_8737);
    local_148 = *(Il2CppObject **)(local_28 + 0x48);
    local_140 = local_148;
    pFVar9 = (Func_3_t37EC932F9834D7F9E1C44B6BC6C01F409AE93BA7 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_8734);
    pIVar13 = local_148;
    local_150 = pFVar9;
    lVar10 = GetVirtualMethodInfo(local_148,0x1a);
    Func_3__ctor_m324F8E477614BC2752604D3ECE61CD9A8FD3D0CA(pFVar9,pIVar13,lVar10,(MethodInfo *)0x0);
    local_160 = *(Il2CppObject **)(local_28 + 0x48);
    local_158 = local_160;
    pFVar11 = (Func_2_tE048A673EF3350A89334B6C88EA7517D1EDF8FF3 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_8733);
    pIVar13 = local_160;
    local_168 = pFVar11;
    lVar10 = GetVirtualMethodInfo(local_160,0x1b);
    Func_2__ctor_m94318EE271260331D61373FD793E51DFB7A1C4C0(pFVar11,pIVar13,lVar10,(MethodInfo *)0x0)
    ;
    NullCheck(local_138);
    local_170 = (Task_1_t5E1291839AEFBDBE3699513D40515588EE167AB0 *)
                TaskFactory_1_FromAsync_m59E275F7DFF2D16C3BF4E79DFD862A2ADB4A55B2
                          (local_138,local_150,local_168,(Il2CppObject *)0x0,
                           *(MethodInfo **)StringLiteral_8735);
    NullCheck(local_170);
    local_190 = Task_1_ConfigureAwait_m30B2F04D4FC03DE8195FED5A63C848EB5DB36A7F
                          (local_170,false,*(MethodInfo **)StringLiteral_8736);
    local_180 = local_190;
    local_80 = local_190;
    local_1b0 = ConfiguredTaskAwaitable_1_GetAwaiter_mA44944C8B7CF9551764480CD91C8062F86304793_inline
                          ((ConfiguredTaskAwaitable_1_tC80D7FC6B858A8683E07A7A894D3329F33EFB022 *)
                           local_80,*(MethodInfo **)StringLiteral_8730);
    local_1a0 = local_1b0;
    local_70 = local_1b0;
    bVar6 = ConfiguredTaskAwaiter_get_IsCompleted_m1051A39047111C6697E6E6EA6CEC500056158CF4
                      ((ConfiguredTaskAwaiter_tA4D58A8C85956FAD6ADECC38D4BA4FAC370DE136 *)local_70,
                       *(MethodInfo **)StringLiteral_8732);
    local_1b1 = bVar6 & 1;
    if ((bVar6 & 1) == 0) {
      local_1b8 = 0;
      local_34 = 0;
      *(int *)local_28 = 0;
      *(undefined1 (*) [16])(local_28 + 0x50) = local_70;
      local_1d0 = local_70;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x50),(void *)0x0);
      local_1d8 = (AsyncTaskMethodBuilder_1_t923DC16ADFF754593B125800F38ED37C920B14C1 *)
                  (local_28 + 8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA4D58A8C85956FAD6ADECC38D4BA4FAC370DE136_TisU3CGetNonFileStreamAsyncU3Ed__5_t6F4037451FAED208D46C99166A90090CCACC4D15_mA680061D6515E3135C5AB905FFBF043E1DB9C903
                (local_1d8,
                 (ConfiguredTaskAwaiter_tA4D58A8C85956FAD6ADECC38D4BA4FAC370DE136 *)local_70,
                 local_28,*(MethodInfo **)StringLiteral_8729);
      return;
    }
  }
  local_208 = (Il2CppObject *)
              ConfiguredTaskAwaiter_GetResult_m45E079235ACADEF93D8648E4EB96339ADA880B54
                        ((ConfiguredTaskAwaiter_tA4D58A8C85956FAD6ADECC38D4BA4FAC370DE136 *)local_70
                         ,*(MethodInfo **)StringLiteral_8731);
  local_210 = *(Il2CppObject **)(local_28 + 0x48);
  local_50 = local_208;
  auVar21 = IsInstClass(local_210,
                        *(Il2CppClass **)Method_Unity_Collections_NativeArray<int3>_get_IsCreated__)
  ;
  pIVar13 = local_50;
  local_218 = auVar21._0_8_;
  local_58 = local_218;
  if (local_218 == (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9 *)0x0) {
    NullCheck(local_50);
    local_48 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *)
               VirtualFuncInvoker0<Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*>::Invoke
                         (0xc,pIVar13);
  }
  else {
    local_220 = local_40;
    local_248 = &local_88;
    local_88 = local_40;
    local_250 = &local_89;
    local_89 = 0;
    local_258 = &local_34;
    il2cpp::utils::
    Finally<U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03::__3>
              ((utils *)&local_258,auVar21._8_8_);
    Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(local_88,&local_89,0);
    pvVar12 = local_40;
    NullCheck(local_40);
    pvVar15 = local_40;
    if (*(long *)((long)pvVar12 + 0x10) == 0) {
      pvVar12 = (void *)il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_System_Collections_Generic_List_Enumerator<IContextProperty>_MoveNext__
                                  );
      Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(pvVar12,0);
      NullCheck(pvVar15);
      *(void **)((long)pvVar15 + 0x10) = pvVar12;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar15 + 0x10),pvVar12);
    }
    pvVar12 = local_40;
    NullCheck(local_40);
    pHVar5 = local_58;
    pIVar19 = *(Il2CppObject **)((long)pvVar12 + 0x10);
    NullCheck(local_58);
    pvVar12 = (void *)HttpWebRequest_get_Address_mC0579CE0CED2FDCBF69FAF3232706F7994EAC20D_inline
                                (pHVar5,(MethodInfo *)0x0);
    NullCheck(pvVar12);
    pIVar13 = (Il2CppObject *)Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(pvVar12,0);
    NullCheck(pIVar19);
    pIVar13 = (Il2CppObject *)
              VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke(0x1d,pIVar19,pIVar13);
    local_98 = (Il2CppObject *)CastclassClass(pIVar13,*(Il2CppClass **)puVar4);
    if (local_98 == (Il2CppObject *)0x0) {
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      OpenedHost__ctor_m2A06F35EBA2FE8A343C6D8F0E7DF28B1FE74BD64(pIVar13,0);
      local_98 = pIVar13;
    }
    pIVar13 = local_98;
    NullCheck(local_98);
    pHVar5 = local_58;
    iVar2 = *(int *)(pIVar13 + 0x10);
    NullCheck(local_58);
    pSVar14 = (ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29 *)
              HttpWebRequest_get_ServicePoint_m170B921D095437FC5B7FE5920F327F1AABF532D6(pHVar5,0);
    NullCheck(pSVar14);
    iVar7 = ServicePoint_get_ConnectionLimit_m0CC608F18FE94755E430FADADD650D853FF22AA4_inline
                      (pSVar14,(MethodInfo *)0x0);
    iVar7 = il2cpp_codegen_subtract<int,int>(iVar7,1);
    pIVar19 = local_50;
    pIVar13 = local_98;
    if (iVar2 < iVar7) {
      NullCheck(local_98);
      pvVar12 = local_40;
      if (*(int *)(pIVar13 + 0x10) == 0) {
        NullCheck(local_40);
        pHVar5 = local_58;
        pIVar20 = *(Il2CppObject **)((long)pvVar12 + 0x10);
        NullCheck(local_58);
        pvVar12 = (void *)HttpWebRequest_get_Address_mC0579CE0CED2FDCBF69FAF3232706F7994EAC20D_inline
                                    (pHVar5,(MethodInfo *)0x0);
        NullCheck(pvVar12);
        pIVar19 = (Il2CppObject *)Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(pvVar12,0);
        pIVar13 = local_98;
        NullCheck(pIVar20);
        VirtualActionInvoker2<Il2CppObject*,Il2CppObject*>::Invoke(0x17,pIVar20,pIVar19,pIVar13);
      }
      pIVar13 = local_98;
      NullCheck(local_98);
      iVar2 = *(int *)(pIVar13 + 0x10);
      NullCheck(pIVar13);
      uVar8 = il2cpp_codegen_add<int,int>(iVar2,1);
      pIVar19 = local_50;
      *(undefined4 *)(pIVar13 + 0x10) = uVar8;
      NullCheck(local_50);
      uVar16 = VirtualFuncInvoker0<Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*>::Invoke
                         (0xc,pIVar19);
      pvVar12 = local_40;
      pHVar5 = local_58;
      NullCheck(local_58);
      pvVar15 = (void *)HttpWebRequest_get_Address_mC0579CE0CED2FDCBF69FAF3232706F7994EAC20D_inline
                                  (pHVar5,(MethodInfo *)0x0);
      NullCheck(pvVar15);
      uVar17 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(pvVar15,0);
      pSVar18 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *)
                il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_8723);
      XmlRegisteredNonCachedStream__ctor_mAF8BF20A5548FBA90920A191D8833071E4244DD9
                (pSVar18,uVar16,pvVar12,uVar17,0);
      local_48 = pSVar18;
    }
    else {
      NullCheck(local_50);
      uVar16 = VirtualFuncInvoker0<Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*>::Invoke
                         (0xd,pIVar19);
      pIVar13 = local_50;
      NullCheck(local_50);
      uVar17 = VirtualFuncInvoker0<Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*>::Invoke
                         (0xc,pIVar13);
      pSVar18 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE *)
                il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_8722);
      XmlCachedStream__ctor_m42CE73C3EA3B5DEFBC2925C6702FC5EE06F78BC9(pSVar18,uVar16,uVar17,0);
      local_48 = pSVar18;
    }
    il2cpp::utils::
    FinallyHelper<U3CGetNonFileStreamAsyncU3Ed__5_MoveNext_m401EF9DB64A96F37087DBCBD2CA09F888772FE03::$_3,false>
    ::~FinallyHelper(aFStack_240);
  }
  *(int *)local_28 = -2;
  *(undefined8 *)(local_28 + 0x48) = 0;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),(void *)0x0);
  pSVar18 = local_48;
  pAVar1 = (AsyncTaskMethodBuilder_1_t923DC16ADFF754593B125800F38ED37C920B14C1 *)(local_28 + 8);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  AsyncTaskMethodBuilder_1_SetResult_m03C6502C8E7CD8CC5C2DEBF334C70F640D9D6272
            (pAVar1,pSVar18,*(MethodInfo **)StringLiteral_4280);
  return;
}


