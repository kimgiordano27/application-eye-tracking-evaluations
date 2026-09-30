/*
FUNCTION_NAME: OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C
ENTRY_POINT: 02e03600
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 139
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C
               (Il2CppObject *param_1,undefined4 param_2,
               Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *param_3,undefined8 param_4)

{
  undefined *puVar1;
  void *pvVar2;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  Il2CppClass *pIVar8;
  Exception_t *pEVar9;
  undefined8 uVar10;
  MethodInfo *pMVar11;
  long lVar12;
  Il2CppObject *pIVar13;
  void *pvVar14;
  undefined1 *local_c8;
  FinallyHelper<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::__1,false>
  aFStack_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  Il2CppObject *local_88;
  Exception_t *local_80;
  Il2CppObject *local_78;
  void *local_70;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *pAStack_68;
  undefined8 local_60;
  int local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *local_38;
  Il2CppObject *local_30;
  undefined4 local_24;
  
  puVar1 = StringLiteral_75;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  local_24 = param_2;
  if ((OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_96);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_ObjectModel_ReadOnlyCollection<SwitchCase>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::s_Il2CppMethodInitialized = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_54 = 0;
  local_60 = 0;
  local_70 = (void *)0x0;
  pAStack_68 = (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)0x0;
  local_78 = local_30;
  if (local_30 != (Il2CppObject *)0x0) {
    local_88 = local_30;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_b0 = OVRSpatialAnchor_ToNativeArray_m5956C20F6F86994827CDBBB1140F47E912079061(local_88);
    local_c8 = local_50;
    local_a0 = local_b0;
    local_50 = local_b0;
    il2cpp::utils::Finally<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::__1>
              ((utils *)&local_c8,local_b0._8_8_);
    uVar4 = local_50._8_8_;
    uVar10 = local_50._0_8_;
    uVar5 = OVRExtensions_ToSpaceStorageLocation_mFF7C8770305D5CFCCB62FB78319A81CEFFF6926C
                      (local_24,0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_54 = OVRPlugin_SaveSpaceList_m7C64FA741045A22005534AD460C9707855784D57
                         (uVar10,uVar4,uVar5,&local_60,0);
    uVar6 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_54,0);
    pIVar13 = local_30;
    pAVar3 = local_38;
    iVar7 = local_54;
    if ((uVar6 & 1) == 0) {
      if (local_38 != (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)0x0) {
        NullCheck(local_38);
        Action_2_Invoke_mE6C45AFF3AF60568FF7CEA7FCBE78280828775BE_inline
                  (pAVar3,pIVar13,iVar7,(MethodInfo *)0x0);
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      uVar10 = local_60;
      pvVar14 = *(void **)(lVar12 + 0x28);
      il2cpp_codegen_initobj(&local_70,0x10);
      local_70 = (void *)OVRSpatialAnchor_CopyAnchorListIntoListFromPool_m54E4A6B582FA7EB08C799813A73B37D29993FABE
                                   (local_30,0);
      Il2CppCodeGenWriteBarrier(&local_70,local_70);
      pAStack_68 = local_38;
      Il2CppCodeGenWriteBarrier(&pAStack_68,local_38);
      pAVar3 = pAStack_68;
      pvVar2 = local_70;
      NullCheck(pvVar14);
      Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A
                (pvVar14,uVar10,pvVar2,pAVar3,*(undefined8 *)StringLiteral_96);
      if (local_38 != (Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED *)0x0) {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                  );
        pIVar13 = (Il2CppObject *)
                  OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
        iVar7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(&local_60,0);
        NullCheck(pIVar13);
        VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar13,0x9b80987,iVar7,-1);
      }
    }
    il2cpp::utils::
    FinallyHelper<OVRSpatialAnchor_Save_m88DEEEC8D6A719DBFE26E8AE3B011AFD2944630C::$_1,false>::
    ~FinallyHelper(aFStack_c0);
    return;
  }
  pIVar8 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar8);
  local_80 = pEVar9;
  uVar10 = il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Nullable<long>_GetValueOrDefault__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar9,uVar10,0);
  pEVar9 = local_80;
  pMVar11 = (MethodInfo *)
            il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_97);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar9,pMVar11);
}


