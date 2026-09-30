/*
FUNCTION_NAME: DateTime__ctor_m3BCC46F053A8B6C0BF4E67B5E6AEF8E11D18E958
ENTRY_POINT: 02852680
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void DateTime__ctor_m3BCC46F053A8B6C0BF4E67B5E6AEF8E11D18E958(undefined8 *param_1,void *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Il2CppClass *pIVar10;
  Exception_t *pEVar11;
  MethodInfo *pMVar12;
  long lVar13;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar5 = Method_OVRObjectPool_Get<List<OVRAnchor>>__;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
  ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02852490 with catch @ 02852680
                        */
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Keys__;
  if ((DateTime__ctor_m3BCC46F053A8B6C0BF4E67B5E6AEF8E11D18E958::s_Il2CppMethodInitialized & 1) == 0
     ) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRObjectPool_List<OVRAnchor>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVREyeGaze_OnPermissionGranted__);
    DateTime__ctor_m3BCC46F053A8B6C0BF4E67B5E6AEF8E11D18E958::s_Il2CppMethodInitialized = 1;
  }
  if (param_2 == (void *)0x0) {
    pIVar10 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                        );
    pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_get_Item__
                      );
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar11,uVar8,0);
    pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar5);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar11,pMVar12);
  }
  bVar2 = false;
  bVar1 = false;
  local_58 = 0;
  local_60 = 0;
  NullCheck(param_2);
  pvVar7 = (void *)SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6
                             (param_2,0);
  while( true ) {
    NullCheck(pvVar7);
    bVar6 = System_Convert__ToSByte(pvVar7,0);
    if ((bVar6 & 1) == 0) break;
    NullCheck(pvVar7);
    uVar8 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(pvVar7);
    bVar6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                      (uVar8,*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__,0);
    if ((bVar6 & 1) == 0) {
      bVar6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                        (uVar8,*(undefined8 *)Method_OVRObjectPool_List<OVRAnchor>__,0);
      if ((bVar6 & 1) != 0) {
        NullCheck(pvVar7);
        uVar8 = SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9
                          (pvVar7);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        uVar9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        local_60 = Convert_ToUInt64_mA2BE4A2841686E8B79607BA469368B4FB4D40F34(uVar8,uVar9,0);
        bVar1 = true;
      }
    }
    else {
      NullCheck(pvVar7);
      uVar8 = SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9
                        (pvVar7);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      uVar9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_58 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(uVar8,uVar9,0);
      bVar2 = true;
    }
  }
  if (bVar1) {
    *param_1 = local_60;
  }
  else {
    if (!bVar2) {
      pIVar10 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_System_Collections_Generic_List<Cookie>_get_Item__);
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_OVRObjectPool_List<OVRSpaceUser>__);
      SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar11,uVar8,0);
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar5);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    *param_1 = local_58;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
  lVar13 = DateTime_get_InternalTicks_m80645EA2AFA7D75594415703E0396FFA2E2D950D(param_1,0);
  if ((-1 < lVar13) && (lVar13 < 0x2bca2875f4374000)) {
    return;
  }
  pIVar10 = (Il2CppClass *)
            il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Collections_Generic_List<Cookie>_get_Item__);
  pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
  uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRObjectPool_List<OVRSpatialAnchor>__);
  SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar11,uVar8,0);
  pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar5);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar11,pMVar12);
}


