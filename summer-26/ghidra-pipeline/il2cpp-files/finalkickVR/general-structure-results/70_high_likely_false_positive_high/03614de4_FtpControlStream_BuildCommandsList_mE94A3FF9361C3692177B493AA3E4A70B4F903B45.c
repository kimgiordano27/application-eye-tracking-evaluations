/*
FUNCTION_NAME: FtpControlStream_BuildCommandsList_mE94A3FF9361C3692177B493AA3E4A70B4F903B45
ENTRY_POINT: 03614de4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FtpControlStream_BuildCommandsList_mE94A3FF9361C3692177B493AA3E4A70B4F903B45
               (long param_1,Il2CppObject *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  String_t *pSVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  Il2CppObject *pIVar13;
  Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E *pUVar14;
  undefined8 uVar15;
  Il2CppClass *pIVar16;
  Exception_t *pEVar17;
  MethodInfo *pMVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  Type_t *pTVar22;
  Il2CppObject *pIVar23;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  String_t *local_88;
  String_t *local_80;
  uint local_74;
  String_t *local_70;
  String_t *local_68;
  undefined8 local_60;
  undefined4 local_54;
  Il2CppObject *local_50;
  Il2CppObject *local_48;
  byte local_39;
  undefined8 local_38;
  Il2CppObject *local_30;
  long local_28;
  
  puVar6 = StringLiteral_12044;
  puVar5 = StringLiteral_12022;
  puVar4 = StringLiteral_9782;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
  ;
  puVar2 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((FtpControlStream_BuildCommandsList_mE94A3FF9361C3692177B493AA3E4A70B4F903B45::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12005);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_11984);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_4285);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12045);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12046);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12047);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12048);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<IEventDispatchingStrategy>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12049);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12050);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12051);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12052);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12053);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12019);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12054);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12055);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_1755);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12056);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12057);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12058);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12059);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12060);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12061);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12062);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12063);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12064);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12023);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_12065);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_494);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<IPAddress>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Utilities_ConvertUtils_ToBigInteger__);
    FtpControlStream_BuildCommandsList_mE94A3FF9361C3692177B493AA3E4A70B4F903B45::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  local_54 = 0;
  local_60 = 0;
  local_68 = (String_t *)0x0;
  local_70 = (String_t *)0x0;
  local_74 = 0;
  local_80 = (String_t *)0x0;
  local_88 = (String_t *)0x0;
  local_90 = 0;
  local_98 = (void *)0x0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_39 = 0;
  local_48 = (Il2CppObject *)CastclassSealed(local_30,*(Il2CppClass **)StringLiteral_11984);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  bVar10 = NetEventSource_get_IsEnabled_mCDF5C44FDAF5233434ECA169E62C20857366CF0D(0);
  if ((bVar10 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    NetEventSource_Info_m9F8FBBB17D485F5C5A54BB3D08274516B7C4AD16
              (local_28,0,*(undefined8 *)StringLiteral_12055);
  }
  pIVar23 = local_48;
  NullCheck(local_48);
  pvVar12 = (void *)VirtualFuncInvoker0<Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*>::Invoke
                              (0xb,pIVar23);
  *(void **)(local_28 + 0xf8) = pvVar12;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xf8),pvVar12);
  pIVar13 = (Il2CppObject *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
                      );
  ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(pIVar13);
  pIVar23 = local_48;
  local_50 = pIVar13;
  NullCheck(local_48);
  bVar10 = FtpWebRequest_get_EnableSsl_mE30506F987A04EB9771FD530066BC18A9F2A7ED8_inline
                     ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                      (MethodInfo *)0x0);
  if (((bVar10 & 1) != 0) &&
     (bVar10 = NetworkStreamWrapper_get_UsingSecureStream_m86E61049DC4265D855C187275D6536ACA6988A05
                         (local_28,0), pIVar23 = local_50, (bVar10 & 1) == 0)) {
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)StringLiteral_12048,
                        *(undefined8 *)StringLiteral_12049);
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    local_39 = 1;
  }
  if ((local_39 & 1) != 0) {
    *(undefined8 *)(local_28 + 0xe0) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xe0),(void *)0x0);
    *(undefined8 *)(local_28 + 0xe8) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xe8),(void *)0x0);
    *(undefined8 *)(local_28 + 0xf0) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xf0),(void *)0x0);
    puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pvVar12 = (void *)*puVar21;
    *(void **)(local_28 + 0xc0) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xc0),pvVar12);
    if (*(char *)(local_28 + 0x100) == '\x01') {
      *(undefined1 *)(local_28 + 0x100) = 2;
    }
  }
  pIVar23 = local_48;
  if (*(char *)(local_28 + 0x100) != '\x01') {
    NullCheck(local_48);
    pIVar13 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(0x12,pIVar23);
    pIVar23 = local_48;
    NullCheck(local_48);
    pUVar14 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E *)
              VirtualFuncInvoker0<Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*>::Invoke
                        (0xb,pIVar23);
    NullCheck(pIVar13);
    uVar15 = InterfaceFuncInvoker2<NetworkCredential_tC8E2931557131BA3E6F42A8E1E2A10EC62567313*,Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*,String_t*>
             ::Invoke(0,*(Il2CppClass **)StringLiteral_4285,pIVar13,pUVar14,
                      *(String_t **)
                       Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                     );
    FtpControlStream_set_Credentials_mB7B4723790E93C6A35DA14B680F74E087EE7675E(local_28,uVar15);
    pvVar12 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(pvVar12,0);
    *(void **)(local_28 + 0xa8) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xa8),pvVar12);
    pvVar12 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(pvVar12,0);
    *(void **)(local_28 + 0xb0) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xb0),pvVar12);
    puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_80 = (String_t *)*puVar21;
    puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_88 = (String_t *)*puVar21;
    lVar20 = FtpControlStream_get_Credentials_m58332EC011855E9A49AF9938434859AF08C7CE7F(local_28,0);
    if (lVar20 != 0) {
      pvVar12 = (void *)FtpControlStream_get_Credentials_m58332EC011855E9A49AF9938434859AF08C7CE7F
                                  (local_28);
      NullCheck(pvVar12);
      local_80 = (String_t *)
                 NetworkCredential_get_UserName_mEBB5D5B4928F1868DD79A104CF2BAFCFAC88AFA1(pvVar12,0)
      ;
      pvVar12 = (void *)FtpControlStream_get_Credentials_m58332EC011855E9A49AF9938434859AF08C7CE7F
                                  (local_28,0);
      NullCheck(pvVar12);
      local_90 = NetworkCredential_get_Domain_mFFC454BD64B52DC2FFA09971876B56A2B337DE17(pvVar12,0);
      bVar10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(local_90,0);
      if ((bVar10 & 1) == 0) {
        local_80 = (String_t *)
                   String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                             (local_90,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<IEventDispatchingStrategy>_MoveNext__
                              ,local_80,0);
      }
      pvVar12 = (void *)FtpControlStream_get_Credentials_m58332EC011855E9A49AF9938434859AF08C7CE7F
                                  (local_28);
      NullCheck(pvVar12);
      local_88 = (String_t *)
                 NetworkCredential_get_Password_m7F0F54ED0E4A41F66513296C4E3063D70AF6036C(pvVar12,0)
      ;
    }
    pSVar7 = local_80;
    NullCheck(local_80);
    iVar11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                       (pSVar7,(MethodInfo *)0x0);
    pSVar7 = local_88;
    if (iVar11 == 0) {
      NullCheck(local_88);
      iVar11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                         (pSVar7,(MethodInfo *)0x0);
      if (iVar11 == 0) {
        local_80 = *(String_t **)StringLiteral_12053;
        local_88 = *(String_t **)StringLiteral_12057;
      }
    }
    pIVar23 = local_50;
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)StringLiteral_12023,local_80);
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    pIVar23 = local_50;
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)StringLiteral_12019,local_88,0);
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,8,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    pIVar23 = local_48;
    NullCheck(local_48);
    bVar10 = FtpWebRequest_get_EnableSsl_mE30506F987A04EB9771FD530066BC18A9F2A7ED8_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    if (((bVar10 & 1) != 0) &&
       (bVar10 = NetworkStreamWrapper_get_UsingSecureStream_m86E61049DC4265D855C187275D6536ACA6988A05
                           (local_28,0), pIVar23 = local_50, (bVar10 & 1) == 0)) {
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,*(undefined8 *)StringLiteral_12052,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<IPAddress>_Dispose__);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
      pIVar23 = local_50;
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,*(undefined8 *)StringLiteral_12063,
                          *(undefined8 *)
                           Method_Newtonsoft_Json_Utilities_ConvertUtils_ToBigInteger__,0);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    }
    pIVar23 = local_50;
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)StringLiteral_12062,
                        *(undefined8 *)StringLiteral_12064);
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    pIVar23 = local_50;
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)StringLiteral_12047,0);
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
  }
  pIVar23 = local_48;
  local_54 = 0;
  NullCheck(local_48);
  pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                              ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                               (MethodInfo *)0x0);
  NullCheck(pvVar12);
  bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,0x10,0);
  pIVar23 = local_48;
  if ((bVar10 & 1) == 0) {
    NullCheck(local_48);
    pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                                ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                                 (MethodInfo *)0x0);
    NullCheck(pvVar12);
    bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,0x20,0);
    if ((bVar10 & 1) != 0) {
      local_54 = 1;
    }
  }
  else {
    local_54 = 2;
  }
  pIVar23 = local_48;
  uVar9 = local_54;
  NullCheck(local_48);
  uVar15 = VirtualFuncInvoker0<Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*>::Invoke(0xb,pIVar23);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)StringLiteral_12005);
  FtpControlStream_GetPathInfo_m27EC06A118AE89A8E8BB7A9AAD292063A35B09D1
            (uVar9,uVar15,&local_60,&local_68,&local_70);
  pSVar7 = local_70;
  NullCheck(local_70);
  iVar11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                     (pSVar7,(MethodInfo *)0x0);
  pIVar23 = local_48;
  if (iVar11 == 0) {
    NullCheck(local_48);
    pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                                ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                                 (MethodInfo *)0x0);
    NullCheck(pvVar12);
    bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,4,0);
    if ((bVar10 & 1) != 0) {
      pIVar16 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__
                          );
      pEVar17 = (Exception_t *)il2cpp_codegen_object_new(pIVar16);
      uVar15 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_12066);
      WebException__ctor_mFBC3890EC80132004827F36950EEB651595BF277(pEVar17,uVar15,0);
      pMVar18 = (MethodInfo *)
                il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_12067);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar17,pMVar18);
    }
  }
  if (((*(long *)(local_28 + 0xe8) != 0) && (*(long *)(local_28 + 0xe0) != 0)) &&
     (bVar10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                         (*(undefined8 *)(local_28 + 0xe8),*(undefined8 *)(local_28 + 0xe0),0),
     pIVar23 = local_50, (bVar10 & 1) != 0)) {
    uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                       (local_28,*(undefined8 *)puVar5,*(undefined8 *)(local_28 + 0xe0));
    pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
    PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,1,0);
    NullCheck(pIVar23);
    VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    *(void **)(local_28 + 0xf0) = *(void **)(local_28 + 0xe0);
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xf0),*(void **)(local_28 + 0xe0));
  }
  pIVar23 = local_48;
  NullCheck(local_48);
  pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                              ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                               (MethodInfo *)0x0);
  NullCheck(pvVar12);
  bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,0x100,0);
  pSVar7 = local_68;
  if ((bVar10 & 1) != 0) {
    NullCheck(local_68);
    iVar11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                       (pSVar7,(MethodInfo *)0x0);
    pIVar23 = local_50;
    if (0 < iVar11) {
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,*(undefined8 *)puVar5,local_68);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,1,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
      *(String_t **)(local_28 + 0xf0) = local_68;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xf0),local_68);
    }
  }
  pIVar23 = local_48;
  NullCheck(local_48);
  pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                              ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                               (MethodInfo *)0x0);
  NullCheck(pvVar12);
  bVar10 = FtpMethodInfo_get_IsCommandOnly_m908F15518314673A19C0757AA67E24374709D719(pvVar12,0);
  pIVar23 = local_48;
  if ((bVar10 & 1) == 0) {
    NullCheck(local_48);
    bVar10 = FtpWebRequest_get_UseBinary_mF3DE86086AD5AD72D92B04325590EA25E2597591_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    if ((bVar10 & 1) == 0) {
      local_c8 = *(void **)StringLiteral_494;
    }
    else {
      local_c8 = *(void **)StringLiteral_1755;
    }
    local_98 = local_c8;
    bVar10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                       (*(undefined8 *)(local_28 + 0xc0),local_c8,0);
    pIVar23 = local_50;
    if ((bVar10 & 1) != 0) {
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,*(undefined8 *)StringLiteral_12050,local_98);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
      *(void **)(local_28 + 0xc0) = local_98;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xc0),local_98);
    }
    pIVar23 = local_48;
    NullCheck(local_48);
    bVar10 = FtpWebRequest_get_UsePassive_m3934FCB6A521CBDC77018736E820BAA8978135BC_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    if ((bVar10 & 1) == 0) {
      pvVar12 = (void *)NetworkStreamWrapper_get_ServerAddress_mE6D714D4B29C89FFE2C975AAA6828FF02440D2C6
                                  (local_28);
      NullCheck(pvVar12);
      iVar11 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(pvVar12,0);
      if (iVar11 == 2) {
        local_d8 = *(undefined8 *)StringLiteral_12054;
      }
      else {
        local_d8 = *(undefined8 *)StringLiteral_12059;
      }
      local_a8 = local_d8;
      UnityEngine_XR_WindowsMR_Input_HololensHand__get_airTap(local_28,local_48);
      pIVar23 = local_50;
      uVar15 = local_a8;
      uVar19 = FtpControlStream_GetPortCommandLine_mAA8762A087F108ABA5DE42D38AD916C9CFA03194
                         (local_28,local_48,0);
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,uVar15,uVar19,0);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    }
    else {
      pvVar12 = (void *)NetworkStreamWrapper_get_ServerAddress_mE6D714D4B29C89FFE2C975AAA6828FF02440D2C6
                                  (local_28);
      NullCheck(pvVar12);
      iVar11 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(pvVar12,0);
      pIVar23 = local_50;
      if (iVar11 == 2) {
        local_d0 = *(undefined8 *)StringLiteral_12056;
      }
      else {
        local_d0 = *(undefined8 *)StringLiteral_12058;
      }
      local_a0 = local_d0;
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,local_d0,0);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,4,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    }
    pIVar23 = local_48;
    NullCheck(local_48);
    lVar20 = FtpWebRequest_get_ContentOffset_mA4ECBD88A0B0834C16BF00D976B20AF95D87701B_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    pIVar13 = local_48;
    pIVar23 = local_50;
    if (0 < lVar20) {
      NullCheck(local_48);
      local_b0 = FtpWebRequest_get_ContentOffset_mA4ECBD88A0B0834C16BF00D976B20AF95D87701B_inline
                           ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar13,
                            (MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                );
      uVar15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(0);
      uVar15 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD(&local_b0,uVar15,0);
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,*(undefined8 *)StringLiteral_12060,uVar15,0);
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    }
  }
  pIVar23 = local_48;
  local_74 = 1;
  NullCheck(local_48);
  pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                              ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                               (MethodInfo *)0x0);
  NullCheck(pvVar12);
  bVar10 = FtpMethodInfo_get_IsCommandOnly_m908F15518314673A19C0757AA67E24374709D719(pvVar12,0);
  pIVar23 = local_48;
  if ((bVar10 & 1) == 0) {
    local_74 = local_74 | 2;
    NullCheck(local_48);
    bVar10 = FtpWebRequest_get_UsePassive_m3934FCB6A521CBDC77018736E820BAA8978135BC_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    if ((bVar10 & 1) == 0) {
      local_74 = local_74 | 4;
    }
  }
  pIVar23 = local_48;
  NullCheck(local_48);
  pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                              ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                               (MethodInfo *)0x0);
  NullCheck(pvVar12);
  pIVar23 = local_48;
  pSVar7 = local_68;
  if (*(int *)((long)pvVar12 + 0x18) != 9) {
    NullCheck(local_48);
    pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                                ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                                 (MethodInfo *)0x0);
    NullCheck(pvVar12);
    bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,0x10,0);
    pIVar13 = local_48;
    pIVar23 = local_50;
    if ((bVar10 & 1) == 0) {
      NullCheck(local_48);
      pvVar12 = (void *)FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                                  ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)
                                   pIVar13,(MethodInfo *)0x0);
      NullCheck(pvVar12);
      bVar10 = FtpMethodInfo_HasFlag_mE4178764BE8879A93F8E9A4A3737528A2BE3F775(pvVar12,0x100,0);
      pIVar13 = local_48;
      pIVar23 = local_50;
      if ((bVar10 & 1) == 0) {
        NullCheck(local_48);
        uVar15 = VirtualFuncInvoker0<String_t*>::Invoke(9,pIVar13);
        uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                           (local_28,uVar15,local_60);
        uVar8 = local_74;
        pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
        PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,uVar8,0);
        NullCheck(pIVar23);
        VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
      }
      else {
        NullCheck(local_48);
        uVar15 = VirtualFuncInvoker0<String_t*>::Invoke(9,pIVar13);
        uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                           (local_28,uVar15,local_70);
        uVar8 = local_74;
        pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
        PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,uVar8,0);
        NullCheck(pIVar23);
        VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
      }
    }
    else {
      NullCheck(local_48);
      uVar15 = VirtualFuncInvoker0<String_t*>::Invoke(9,pIVar13);
      puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                         (local_28,uVar15,*puVar21);
      uVar8 = local_74;
      pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,uVar8,0);
      NullCheck(pIVar23);
      VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
    }
    goto LAB_03616768;
  }
  puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(pSVar7,*puVar21,0);
  if ((bVar10 & 1) == 0) {
    local_e0 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                         (local_68,*(undefined8 *)puVar3,0);
  }
  else {
    puVar21 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_e0 = *puVar21;
  }
  pIVar23 = local_50;
  uVar15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(local_e0,local_70);
  uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                     (local_28,*(undefined8 *)StringLiteral_12065,uVar15,0);
  uVar8 = local_74;
  pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
  PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,uVar8,0);
  NullCheck(pIVar23);
  VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
  pIVar23 = local_48;
  NullCheck(local_48);
  uVar15 = FtpWebRequest_get_RenameTo_m582E665F04E3524E6E4F872D30E4DD30955760E5_inline
                     ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                      (MethodInfo *)0x0);
  bVar10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar15,0);
  pIVar23 = local_48;
  if ((bVar10 & 1) == 0) {
    NullCheck(local_48);
    pvVar12 = (void *)FtpWebRequest_get_RenameTo_m582E665F04E3524E6E4F872D30E4DD30955760E5_inline
                                ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                                 (MethodInfo *)0x0);
    NullCheck(pvVar12);
    bVar10 = System_Runtime_Serialization_SerializationFieldInfo__get_Name
                       (pvVar12,*(undefined8 *)puVar3,5,0);
    pIVar23 = local_48;
    if ((bVar10 & 1) == 0) goto LAB_03616430;
    NullCheck(local_48);
    local_c0 = FtpWebRequest_get_RenameTo_m582E665F04E3524E6E4F872D30E4DD30955760E5_inline
                         ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                          (MethodInfo *)0x0);
  }
  else {
LAB_03616430:
    pIVar23 = local_48;
    NullCheck(local_48);
    uVar15 = FtpWebRequest_get_RenameTo_m582E665F04E3524E6E4F872D30E4DD30955760E5_inline
                       ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)pIVar23,
                        (MethodInfo *)0x0);
    local_c0 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(local_e0,uVar15,0);
  }
  pIVar23 = local_50;
  uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                     (local_28,*(undefined8 *)StringLiteral_12061,local_c0);
  uVar8 = local_74;
  pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
  PipelineEntry__ctor_mCF62FB0B8F6602CF2081D896C0232FB7B9F31881(pIVar13,uVar15,uVar8,0);
  NullCheck(pIVar23);
  VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
LAB_03616768:
  pIVar23 = local_50;
  uVar15 = FtpControlStream_FormatFtpCommand_m29176141DC970F6084AA0572E60CDF71F5A6BABB
                     (local_28,*(undefined8 *)StringLiteral_12051,0);
  pIVar13 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
  PipelineEntry__ctor_m3988E03D67CAC7725DDD334A772C465FCDD58002(pIVar13,uVar15,0);
  NullCheck(pIVar23);
  VirtualFuncInvoker1<int,Il2CppObject*>::Invoke(0x1d,pIVar23,pIVar13);
  pIVar23 = local_50;
  uVar15 = *(undefined8 *)StringLiteral_12046;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  pTVar22 = (Type_t *)Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar15,0);
  NullCheck(pIVar23);
  pIVar23 = (Il2CppObject *)VirtualFuncInvoker1<Il2CppArray*,Type_t*>::Invoke(0x2f,pIVar23,pTVar22);
  Castclass(pIVar23,*(Il2CppClass **)StringLiteral_12045);
  return;
}


