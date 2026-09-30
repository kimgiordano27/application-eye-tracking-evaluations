/*
FUNCTION_NAME: Virtence.OpenTypeCS.Gpos$$ParseLookupType2
ENTRY_POINT: 02e03740
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 147
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void Virtence_OpenTypeCS_Gpos__ParseLookupType2(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAVar7;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined4 uStack000000000000005c;
  byte bStack00000000000000eb;
  undefined4 uStack00000000000000ec;
  
  auVar10 = OVRSpatialAnchor_ToNativeArray_m5956C20F6F86994827CDBBB1140F47E912079061();
  *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = auVar10;
  in_stack_00000048[0x11] = in_stack_00000048[0xf];
  in_stack_00000048[0x10] = in_stack_00000048[0xe];
  in_stack_00000048[0x1b] = in_stack_00000048[0x11];
  in_stack_00000048[0x1a] = in_stack_00000048[0x10];
  in_stack_00000048[0xb] = unaff_x29 + -0x30;
  il2cpp::utils::Finally<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::__1>
            ((utils *)(unaff_x29 + -0xa8),auVar10._8_8_);
  in_stack_00000048[9] = in_stack_00000048[0x1b];
  in_stack_00000048[8] = in_stack_00000048[0x1a];
  *(undefined4 *)(unaff_x29 + -0xc4) = *(undefined4 *)(unaff_x29 + -4);
  *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0xc4);
  uStack0000000000000034 =
       OVRExtensions_ToSpaceStorageLocation_mFF7C8770305D5CFCCB62FB78319A81CEFFF6926C
                 (*(undefined4 *)(unaff_x29 + -200),in_stack_00000028);
  *(undefined4 *)(unaff_x29 + -0xcc) = uStack0000000000000034;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  in_stack_00000048[3] = in_stack_00000048[9];
  in_stack_00000048[2] = in_stack_00000048[8];
  uStack0000000000000024 =
       OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57
                 (in_stack_00000048[2],in_stack_00000048[3],*(undefined4 *)(unaff_x29 + -0xcc),
                  unaff_x29 + -0x40,0);
  *(undefined4 *)(unaff_x29 + -0xe0) = uStack0000000000000024;
  *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0xe0);
  uStack00000000000000ec = *(undefined4 *)(unaff_x29 + -0x34);
  bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(uStack00000000000000ec,0);
  bStack00000000000000eb = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    if (in_stack_00000048[0x1d] != 0) {
      pAVar7 = (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)in_stack_00000048[0x1d];
      pIVar6 = (Il2CppObject *)in_stack_00000048[0x1e];
      iVar2 = *(int *)(unaff_x29 + -0x34);
      NullCheck(pAVar7);
      Action_2_Invoke_mE6C45AFF3AF60568FF7CEA7FCBE78280828775BE_inline
                (pAVar7,pIVar6,iVar2,(MethodInfo *)0x0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    *in_stack_00000048 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = in_stack_00000048[0x18];
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x50),0x10);
    pvVar4 = (void *)OVRSpatialAnchor_CopyAnchorListIntoListFromPool_m54E4A6B582FA7EB08C799813A73B37D29993FABE
                               (in_stack_00000048[0x1e],0);
    in_stack_00000048[0x16] = pvVar4;
    Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x50),pvVar4);
    in_stack_00000048[0x17] = (void *)in_stack_00000048[0x1d];
    Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x48),(void *)in_stack_00000048[0x1d]);
    uVar9 = in_stack_00000048[0x17];
    uVar8 = in_stack_00000048[0x16];
    NullCheck((void *)*in_stack_00000048);
    Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A
              (*in_stack_00000048,uVar5,uVar8,uVar9,*(undefined8 *)StringLiteral_96);
    if (in_stack_00000048[0x1d] != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                );
      pIVar6 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
      iVar2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(unaff_x29 + -0x40,0);
      NullCheck(pIVar6);
      VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar6,0x9b80987,iVar2,-1);
    }
  }
  uStack000000000000005c = 7;
  il2cpp::utils::
  FinallyHelper<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::$_1,false>::
  ~FinallyHelper((FinallyHelper<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::__1,false>
                  *)(unaff_x29 + -0xa0));
  return;
}


