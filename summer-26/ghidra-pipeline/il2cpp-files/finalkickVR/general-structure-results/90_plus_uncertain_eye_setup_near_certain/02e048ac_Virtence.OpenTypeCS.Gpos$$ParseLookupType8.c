/*
FUNCTION_NAME: Virtence.OpenTypeCS.Gpos$$ParseLookupType8
ENTRY_POINT: 02e048ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Virtence_OpenTypeCS_Gpos__ParseLookupType8(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  __3 *extraout_x1;
  undefined8 uVar9;
  Exception_t *pEVar10;
  Il2CppObject *pIVar11;
  void *pvVar12;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAVar13;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  int iStack0000000000000024;
  undefined4 uStack0000000000000044;
  ulong *in_stack_00000058;
  int iStack0000000000000134;
  long in_stack_00000180;
  undefined8 in_stack_00000198;
  Il2CppObject *in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_ObjectModel_ReadOnlyCollection<SwitchCase>_get_Count__);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_90);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000058);
  OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x54) = 0;
  *(undefined4 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -8);
  if (*(long *)(unaff_x29 + -0x88) != 0) {
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    auVar16 = OVRSpatialAnchor_ToNativeArray_m5956C20F6F86994827CDBBB1140F47E912079061
                        (*(undefined8 *)(unaff_x29 + -0x98),0);
    *(undefined1 (*) [16])(unaff_x29 + -0xc0) = auVar16;
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xc0);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x30;
    il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__2>
              ((utils *)(unaff_x29 + -0xd8),auVar16._8_8_);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0xe0));
    uStack0000000000000044 =
         InterfaceFuncInvoker0<int>::Invoke
                   (0,*(Il2CppClass **)StringLiteral_106,*(Il2CppObject **)(unaff_x29 + -0xe0));
    *(undefined4 *)(unaff_x29 + -0xf0) = uStack0000000000000044;
    *(undefined8 *)(unaff_x29 + -0x100) = 0;
    *(undefined8 *)(unaff_x29 + -0xf8) = 0;
    NativeArray_1__ctor_mA8531DC1B7696C5771660F84BEFAAD1B126030D1
              ((NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B *)(unaff_x29 + -0x100),
               *(int *)(unaff_x29 + -0xf0),2,1,*(MethodInfo **)StringLiteral_90);
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0xf8);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x100);
    in_stack_000001c8 = *(undefined8 *)(unaff_x29 + -0x38);
    in_stack_000001c0 = *(undefined8 *)(unaff_x29 + -0x40);
    in_stack_000001a8 = unaff_x29 + -0x50;
    *(undefined8 *)(unaff_x29 + -0x48) = in_stack_000001c8;
    *(undefined8 *)(unaff_x29 + -0x50) = in_stack_000001c0;
    il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__3>
              ((utils *)&stack0x000001a8,extraout_x1);
    *(undefined4 *)(unaff_x29 + -0x54) = 0;
    in_stack_000001a0 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(in_stack_000001a0);
    auVar16 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                        (0,*(Il2CppClass **)StringLiteral_107,in_stack_000001a0);
    in_stack_00000198 = auVar16._0_8_;
    in_stack_00000180 = unaff_x29 + -0x68;
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000198;
    il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__4>
              ((utils *)&stack0x00000180,auVar16._8_8_);
    while( true ) {
      pIVar11 = *(Il2CppObject **)(unaff_x29 + -0x68);
      NullCheck(pIVar11);
      uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                        (0,*(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                         ,pIVar11);
      if ((uVar3 & 1) == 0) break;
      pIVar11 = *(Il2CppObject **)(unaff_x29 + -0x68);
      NullCheck(pIVar11);
      uVar6 = InterfaceFuncInvoker0<OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F>::Invoke
                        (0,*(Il2CppClass **)StringLiteral_108,pIVar11);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
      iVar1 = *(int *)(unaff_x29 + -0x54);
      uVar2 = il2cpp_codegen_add<int,int>(iVar1,1);
      *(undefined4 *)(unaff_x29 + -0x54) = uVar2;
      *(undefined8 *)(*(long *)(unaff_x29 + -0x40) + (long)iVar1 * 8) =
           *(undefined8 *)(unaff_x29 + -0x70);
    }
    iStack0000000000000134 = 7;
    il2cpp::utils::
    FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_4,false>::
    ~FinallyHelper((FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__4,false>
                    *)&stack0x00000188);
    iStack0000000000000024 = iStack0000000000000134;
    if ((iStack0000000000000134 == 0) || (iStack0000000000000134 == 7)) {
      uVar14 = *(undefined8 *)(unaff_x29 + -0x28);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x30);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x40);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      uVar2 = OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717
                        (uVar6,uVar14,uVar9,uVar15,unaff_x29 + -0x60,0);
      *(undefined4 *)(unaff_x29 + -0x58) = uVar2;
      uVar3 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68
                        (*(undefined4 *)(unaff_x29 + -0x58),0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x29 + -0x18) == 0) {
          iStack0000000000000134 = 9;
        }
        else {
          pAVar13 = *(Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED **)(unaff_x29 + -0x18);
          pIVar11 = *(Il2CppObject **)(unaff_x29 + -8);
          iVar1 = *(int *)(unaff_x29 + -0x58);
          NullCheck(pAVar13);
          Action_2_Invoke_mE6C45AFF3AF60568FF7CEA7FCBE78280828775BE_inline
                    (pAVar13,pIVar11,iVar1,(MethodInfo *)0x0);
          iStack0000000000000134 = 9;
        }
      }
      else {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
        lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
        pvVar12 = *(void **)(lVar7 + 0x28);
        uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
        il2cpp_codegen_initobj((void *)(unaff_x29 + -0x80),0x10);
        pvVar8 = (void *)OVRSpatialAnchor_CopyAnchorListIntoListFromPool_m54E4A6B582FA7EB08C799813A73B37D29993FABE
                                   (*(undefined8 *)(unaff_x29 + -8),0);
        *(void **)(unaff_x29 + -0x80) = pvVar8;
        Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x80),pvVar8);
        *(void **)(unaff_x29 + -0x78) = *(void **)(unaff_x29 + -0x18);
        Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x78),*(void **)(unaff_x29 + -0x18));
        uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x80);
        NullCheck(pvVar12);
        Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A
                  (pvVar12,uVar6,uVar9,uVar14,*(undefined8 *)StringLiteral_96);
        iStack0000000000000134 = 9;
      }
    }
    il2cpp::utils::
    FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_3,false>::
    ~FinallyHelper((FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__3,false>
                    *)&stack0x000001b0);
    if (iStack0000000000000134 == 0) {
      iStack0000000000000134 = 0;
    }
    il2cpp::utils::
    FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::$_2,false>::
    ~FinallyHelper((FinallyHelper<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__2,false>
                    *)(unaff_x29 + -0xd0));
    return;
  }
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  uVar6 = il2cpp_codegen_object_new(pIVar4);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
  uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_Nullable<long>_GetValueOrDefault__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(uVar9,uVar6,0);
  pEVar10 = *(Exception_t **)(unaff_x29 + -0x90);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_109);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar10,pMVar5);
}


