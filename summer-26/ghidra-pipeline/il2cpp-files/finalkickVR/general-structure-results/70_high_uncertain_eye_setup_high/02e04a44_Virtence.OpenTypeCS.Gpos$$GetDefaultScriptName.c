/*
FUNCTION_NAME: Virtence.OpenTypeCS.Gpos$$GetDefaultScriptName
ENTRY_POINT: 02e04a44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Virtence_OpenTypeCS_Gpos__GetDefaultScriptName(undefined8 param_1,__3 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAVar9;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  int iStack0000000000000024;
  undefined8 *in_stack_00000058;
  int iStack0000000000000134;
  long in_stack_00000180;
  undefined8 in_stack_00000198;
  Il2CppObject *in_stack_000001a0;
  long lStack00000000000001a8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  lStack00000000000001a8 = unaff_x29 + -0x50;
  *(undefined8 *)(unaff_x29 + -0x48) = in_stack_000001c8;
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_000001c0;
  il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__3>
            ((utils *)&stack0x000001a8,param_2);
  *(undefined4 *)(unaff_x29 + -0x54) = 0;
  in_stack_000001a0 = *(Il2CppObject **)(unaff_x29 + -0x10);
  NullCheck(in_stack_000001a0);
  auVar13 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                      (0,*(Il2CppClass **)StringLiteral_107,in_stack_000001a0);
  in_stack_00000198 = auVar13._0_8_;
  in_stack_00000180 = unaff_x29 + -0x68;
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000198;
  il2cpp::utils::Finally<OVRSpatialAnchor_Share_m9B23035F71097BB5F636E94FD6641A342ECB5E85::__4>
            ((utils *)&stack0x00000180,auVar13._8_8_);
  while( true ) {
    pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x68);
    NullCheck(pIVar7);
    uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar7);
    if ((uVar3 & 1) == 0) break;
    pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x68);
    NullCheck(pIVar7);
    uVar4 = InterfaceFuncInvoker0<OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F>::Invoke
                      (0,*(Il2CppClass **)StringLiteral_108,pIVar7);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
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
    uVar11 = *(undefined8 *)(unaff_x29 + -0x28);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x30);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x40);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar2 = OVRPlugin_ShareSpaces_mCDFE2923EA4CB496BB2E90A33AC2A01093909717
                      (uVar4,uVar11,uVar10,uVar12,unaff_x29 + -0x60,0);
    *(undefined4 *)(unaff_x29 + -0x58) = uVar2;
    uVar3 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68
                      (*(undefined4 *)(unaff_x29 + -0x58),0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x29 + -0x18) == 0) {
        iStack0000000000000134 = 9;
      }
      else {
        pAVar9 = *(Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED **)(unaff_x29 + -0x18);
        pIVar7 = *(Il2CppObject **)(unaff_x29 + -8);
        iVar1 = *(int *)(unaff_x29 + -0x58);
        NullCheck(pAVar9);
        Action_2_Invoke_mE6C45AFF3AF60568FF7CEA7FCBE78280828775BE_inline
                  (pAVar9,pIVar7,iVar1,(MethodInfo *)0x0);
        iStack0000000000000134 = 9;
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
      lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
      pvVar8 = *(void **)(lVar5 + 0x28);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x60);
      il2cpp_codegen_initobj((void *)(unaff_x29 + -0x80),0x10);
      pvVar6 = (void *)OVRSpatialAnchor_CopyAnchorListIntoListFromPool_m54E4A6B582FA7EB08C799813A73B37D29993FABE
                                 (*(undefined8 *)(unaff_x29 + -8),0);
      *(void **)(unaff_x29 + -0x80) = pvVar6;
      Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x80),pvVar6);
      *(void **)(unaff_x29 + -0x78) = *(void **)(unaff_x29 + -0x18);
      Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x78),*(void **)(unaff_x29 + -0x18));
      uVar11 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x80);
      NullCheck(pvVar8);
      Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A
                (pvVar8,uVar4,uVar10,uVar11,*(undefined8 *)StringLiteral_96);
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


