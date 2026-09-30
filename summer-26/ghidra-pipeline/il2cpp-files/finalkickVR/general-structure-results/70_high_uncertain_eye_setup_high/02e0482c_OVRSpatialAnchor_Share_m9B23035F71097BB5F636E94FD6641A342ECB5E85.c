/*
FUNCTION_NAME: OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85
ENTRY_POINT: 02e0482c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e04c18) */
/* WARNING: Removing unreachable block (ram,0x02e04d30) */

void OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85
               (Il2CppObject *param_1,Il2CppObject *param_2,
               Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *param_3,undefined8 param_4)

{
  undefined *puVar1;
  void *pvVar2;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAVar3;
  Il2CppObject *pIVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  Il2CppClass *pIVar9;
  Exception_t *pEVar10;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  long lVar13;
  __3 *extraout_x1;
  void *pvVar14;
  undefined1 auVar15 [16];
  Il2CppObject **local_170;
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__4,false>
  aFStack_168 [16];
  Il2CppObject *local_158;
  Il2CppObject *local_150;
  long *local_148;
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__3,false>
  aFStack_140 [16];
  long local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  int local_110;
  Il2CppObject *local_100;
  undefined1 *local_f8;
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__2,false>
  aFStack_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  Il2CppObject *local_b8;
  Exception_t *local_b0;
  Il2CppObject *local_a8;
  void *local_a0;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAStack_98;
  undefined8 local_90;
  Il2CppObject *local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *local_38;
  Il2CppObject *local_30;
  Il2CppObject *local_28;
  
  puVar1 = StringLiteral_75;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_96);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_106);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_107);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_108);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_ObjectModel_ReadOnlyCollection<SwitchCase>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_90);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::s_Il2CppMethodInitialized = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (Il2CppObject *)0x0;
  local_90 = 0;
  local_a0 = (void *)0x0;
  pAStack_98 = (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)0x0;
  local_a8 = local_28;
  if (local_28 == (Il2CppObject *)0x0) {
    pIVar9 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
    local_b0 = pEVar10;
    uVar11 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_System_Nullable<long>_GetValueOrDefault__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar10,uVar11,0);
    pEVar10 = local_b0;
    pMVar12 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_109);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar12);
  }
  local_b8 = local_28;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_e0 = OVRSpatialAnchor_ToNativeArray_m5956C20F6F86994827CDBBB1140F47E912079061(local_b8,0);
  local_f8 = local_50;
  local_d0 = local_e0;
  local_50 = local_e0;
  il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__2>
            ((utils *)&local_f8,local_e0._8_8_);
  local_100 = local_30;
  NullCheck(local_30);
  local_110 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)StringLiteral_106,local_100);
  local_120 = 0;
  uStack_118 = 0;
  NativeArray_1__ctor_mA8531DC1B7696C5771660F84BEFAAD1B126030D1
            ((NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B *)&local_120,local_110,2,1,
             *(MethodInfo **)StringLiteral_90);
  uStack_58 = uStack_118;
  local_60 = local_120;
  uStack_128 = uStack_118;
  local_130 = local_120;
  local_148 = &local_70;
  uStack_68 = uStack_118;
  local_70 = local_120;
  il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__3>
            ((utils *)&local_148,extraout_x1);
  local_74 = 0;
  local_150 = local_30;
  NullCheck(local_30);
  auVar15 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                      (0,*(Il2CppClass **)StringLiteral_107,local_150);
  local_158 = auVar15._0_8_;
  local_170 = &local_88;
  local_88 = local_158;
  il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__4>
            ((utils *)&local_170,auVar15._8_8_);
  while( true ) {
    pIVar4 = local_88;
    NullCheck(local_88);
    uVar8 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar4);
    pIVar4 = local_88;
    if ((uVar8 & 1) == 0) break;
    NullCheck(local_88);
    local_90 = InterfaceFuncInvoker0<OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F>::Invoke
                         (0,*(Il2CppClass **)StringLiteral_108,pIVar4);
    iVar5 = local_74;
    local_74 = il2cpp_codegen_add<int,int>(local_74,1);
    *(undefined8 *)(local_60 + (long)iVar5 * 8) = local_90;
  }
  il2cpp::utils::
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_4,false>::
  ~FinallyHelper(aFStack_168);
  uVar11 = uStack_58;
  lVar13 = local_60;
  uVar7 = local_50._8_8_;
  uVar6 = local_50._0_8_;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_78 = OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717
                       (uVar6,uVar7,lVar13,uVar11,&local_80,0);
  uVar8 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_78,0);
  pIVar4 = local_28;
  pAVar3 = local_38;
  iVar5 = local_78;
  if ((uVar8 & 1) == 0) {
    if (local_38 != (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)0x0) {
      NullCheck(local_38);
      Action_2_Invoke_mE6C45AFF3AF60568FF7CEA7FCBE78280828775BE_inline
                (pAVar3,pIVar4,iVar5,(MethodInfo *)0x0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar11 = local_80;
    pvVar14 = *(void **)(lVar13 + 0x28);
    il2cpp_codegen_initobj(&local_a0,0x10);
    local_a0 = (void *)OVRSpatialAnchor_CopyAnchorListIntoListFromPool_m54E4A6B582FA7EB08C799813A73B37D29993FABE
                                 (local_28,0);
    Il2CppCodeGenWriteBarrier(&local_a0,local_a0);
    pAStack_98 = local_38;
    Il2CppCodeGenWriteBarrier(&pAStack_98,local_38);
    pAVar3 = pAStack_98;
    pvVar2 = local_a0;
    NullCheck(pvVar14);
    Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A
              (pvVar14,uVar11,pvVar2,pAVar3,*(undefined8 *)StringLiteral_96);
  }
  il2cpp::utils::
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_3,false>::
  ~FinallyHelper(aFStack_140);
  il2cpp::utils::
  FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_2,false>::
  ~FinallyHelper(aFStack_f0);
  return;
}


