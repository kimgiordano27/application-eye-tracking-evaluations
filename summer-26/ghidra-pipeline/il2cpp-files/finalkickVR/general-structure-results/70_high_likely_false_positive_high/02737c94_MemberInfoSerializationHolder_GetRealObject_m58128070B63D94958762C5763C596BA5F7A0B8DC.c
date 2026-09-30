/*
FUNCTION_NAME: MemberInfoSerializationHolder_GetRealObject_m58128070B63D94958762C5763C596BA5F7A0B8DC
ENTRY_POINT: 02737c94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


Il2CppObject *
MemberInfoSerializationHolder_GetRealObject_m58128070B63D94958762C5763C596BA5F7A0B8DC(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  Il2CppClass *pIVar13;
  Exception_t *pEVar14;
  MethodInfo *pMVar15;
  FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8 *this;
  EventInfoU5BU5D_t15CC441197507A7E14B3F62A53BB711E7E0E6110 *this_00;
  PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7 *this_01;
  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *this_02;
  Il2CppObject *pIVar16;
  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *this_03;
  MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 *this_04;
  Il2CppArray *pIVar17;
  String_t *pSVar18;
  void *pvVar19;
  int local_9c;
  Il2CppObject *local_88;
  int local_7c;
  int local_6c;
  Il2CppObject *local_28;
  
  puVar9 = Method_System_Net_FtpWebRequest_SetException__;
  puVar8 = Method_System_Net_FtpWebRequest_GetResponse__;
  puVar7 = Method_System_Net_FtpWebRequest_EndGetResponse__;
  puVar6 = Method_System_Net_FtpWebRequest_EndGetRequestStream__;
  puVar5 = Method_System_Text_EncoderNLS_GetBytes__;
  puVar4 = Method_System_Collections_Generic_List<Cookie>_get_Item__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
                    /* try { // try from 02737cb8 to 02837f9f has its CatchHandler @ 02737c30 */
  if ((MemberInfoSerializationHolder_GetRealObject_m58128070B63D94958762C5763C596BA5F7A0B8DC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpWebRequest_SubmitRequest__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpWebRequest_SyncRequestCallback__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Enum_InternalFormattedHexString__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpWebRequest_TimerCallback__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Net_FtpWebRequest__ctor__);
    MemberInfoSerializationHolder_GetRealObject_m58128070B63D94958762C5763C596BA5F7A0B8DC::
    s_Il2CppMethodInitialized = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
    bVar10 = RuntimeType_op_Equality_mE27F28762D4E6524097C391A1047A768C3676D49(uVar12,0);
    if (((bVar10 & 1) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
      iVar1 = *(int *)(param_1 + 0x30);
      uVar11 = il2cpp_codegen_subtract<int,int>(iVar1,1);
      switch(uVar11) {
      case 0:
        if (*(long *)(param_1 + 0x20) == 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_Net_FtpWebRequest_get_ContentType__);
          uVar12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
          SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0);
          pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar15);
        }
        pIVar16 = *(Il2CppObject **)(param_1 + 0x18);
        pSVar18 = *(String_t **)(param_1 + 0x10);
        NullCheck(pIVar16);
        pIVar16 = (Il2CppObject *)
                  VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                  ::Invoke(0x5e,pIVar16,pSVar18,1,0x4003c);
        this_02 = (ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *)
                  IsInst(pIVar16,*(Il2CppClass **)Method_System_Net_FtpWebRequest_SubmitRequest__);
        NullCheck(this_02);
        if ((int)*(undefined8 *)(this_02 + 0x18) != 1) {
          NullCheck(this_02);
          if (1 < (int)*(undefined8 *)(this_02 + 0x18)) {
            for (local_7c = 0; NullCheck(this_02), local_7c < (int)*(undefined8 *)(this_02 + 0x18);
                local_7c = il2cpp_codegen_add<int,int>(local_7c,1)) {
              if (*(long *)(param_1 + 0x28) == 0) {
                NullCheck(this_02);
                pIVar16 = (Il2CppObject *)
                          ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                                    (this_02,(long)local_7c);
                NullCheck(pIVar16);
                pvVar19 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar16);
                uVar12 = *(undefined8 *)(param_1 + 0x20);
                NullCheck(pvVar19);
                bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0);
                if ((bVar10 & 1) != 0) {
                  NullCheck(this_02);
                  pIVar16 = (Il2CppObject *)
                            ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                                      (this_02,(long)local_7c);
                  return pIVar16;
                }
              }
              else {
                NullCheck(this_02);
                pIVar16 = (Il2CppObject *)
                          ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                                    (this_02,(long)local_7c);
                pvVar19 = (void *)CastclassClass(pIVar16,*(Il2CppClass **)puVar6);
                NullCheck(pvVar19);
                CastclassClass(pIVar16,*(Il2CppClass **)puVar6);
                pvVar19 = (void *)RuntimeConstructorInfo_SerializationToString_m94EE511DB94ED904859EADA09E0E0387B00F72A1
                                            ();
                uVar12 = *(undefined8 *)(param_1 + 0x28);
                NullCheck(pvVar19);
                bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0);
                if ((bVar10 & 1) != 0) {
                  NullCheck(this_02);
                  pIVar16 = (Il2CppObject *)
                            ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                                      (this_02,(long)local_7c);
                  return pIVar16;
                }
              }
            }
          }
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
          pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
          pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
          NullCheck(pIVar17);
          ArrayElementTypeCheck(pIVar17,pIVar16);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
          uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
          uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                             (uVar12,pIVar17);
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
          SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0);
          pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar15);
        }
        NullCheck(this_02);
        local_28 = (Il2CppObject *)
                   ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt(this_02,0)
        ;
        break;
      case 1:
        pIVar16 = *(Il2CppObject **)(param_1 + 0x18);
        pSVar18 = *(String_t **)(param_1 + 0x10);
        NullCheck(pIVar16);
        pIVar16 = (Il2CppObject *)
                  VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                  ::Invoke(0x5e,pIVar16,pSVar18,2,0x4003c);
        this_00 = (EventInfoU5BU5D_t15CC441197507A7E14B3F62A53BB711E7E0E6110 *)
                  IsInst(pIVar16,*(Il2CppClass **)
                                  Method_System_Net_FtpWebRequest_SyncRequestCallback__);
        NullCheck(this_00);
        if (*(long *)(this_00 + 0x18) == 0) {
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
          pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
          pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
          NullCheck(pIVar17);
          ArrayElementTypeCheck(pIVar17,pIVar16);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
          uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
          uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                             (uVar12,pIVar17);
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
          SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0);
          pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar15);
        }
        NullCheck(this_00);
        local_28 = (Il2CppObject *)
                   EventInfoU5BU5D_t15CC441197507A7E14B3F62A53BB711E7E0E6110::GetAt(this_00,0);
        break;
      case 2:
LAB_0273922c:
        il2cpp_codegen_initialize_runtime_metadata_inline
                  ((ulong *)Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__);
        uVar12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
        pIVar13 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                            );
        pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
        ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar14,uVar12,0);
        pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar14,pMVar15);
      case 3:
        pIVar16 = *(Il2CppObject **)(param_1 + 0x18);
        pSVar18 = *(String_t **)(param_1 + 0x10);
        NullCheck(pIVar16);
        pIVar16 = (Il2CppObject *)
                  VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                  ::Invoke(0x5e,pIVar16,pSVar18,4,0x4003c);
        this = (FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8 *)
               IsInst(pIVar16,*(Il2CppClass **)Method_System_Enum_InternalFormattedHexString__);
        NullCheck(this);
        if (*(long *)(this + 0x18) == 0) {
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
          pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
          pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
          NullCheck(pIVar17);
          ArrayElementTypeCheck(pIVar17,pIVar16);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
          uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
          uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                             (uVar12,pIVar17);
          pIVar13 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
          SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0);
          pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar15);
        }
        NullCheck(this);
        local_28 = (Il2CppObject *)
                   FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8::GetAt(this,0);
        break;
      default:
        if (iVar1 == 8) {
          local_88 = (Il2CppObject *)0x0;
          if (*(long *)(param_1 + 0x20) == 0) {
            il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Net_FtpWebRequest_get_ContentType__);
            uVar12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
            pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
            SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0)
            ;
            pMVar15 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          pvVar19 = *(void **)(param_1 + 0x38);
          uVar12 = *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uVar12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar12);
          NullCheck(pvVar19);
          pIVar16 = (Il2CppObject *)
                    SerializationInfo_GetValueNoThrow_mC2AB5CF14F11B0C67E384D5CEF15C9ADDC754D06
                              (pvVar19,*(undefined8 *)Method_System_Net_FtpWebRequest__ctor__,uVar12
                               ,0);
          this_03 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)
                    IsInst(pIVar16,*(Il2CppClass **)
                                    Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
                          );
          pIVar16 = *(Il2CppObject **)(param_1 + 0x18);
          pSVar18 = *(String_t **)(param_1 + 0x10);
          NullCheck(pIVar16);
          pIVar16 = (Il2CppObject *)
                    VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                    ::Invoke(0x5e,pIVar16,pSVar18,8,0x4003c);
          this_04 = (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 *)
                    IsInst(pIVar16,*(Il2CppClass **)
                                    Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
          NullCheck(this_04);
          if ((int)*(undefined8 *)(this_04 + 0x18) == 1) {
            NullCheck(this_04);
            pIVar16 = (Il2CppObject *)
                      MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt(this_04,0);
          }
          else {
            NullCheck(this_04);
            pIVar16 = local_88;
            if (1 < (int)*(undefined8 *)(this_04 + 0x18)) {
              for (local_9c = 0; NullCheck(this_04), pIVar16 = local_88,
                  local_9c < (int)*(undefined8 *)(this_04 + 0x18);
                  local_9c = il2cpp_codegen_add<int,int>(local_9c,1)) {
                if (*(long *)(param_1 + 0x28) == 0) {
                  NullCheck(this_04);
                  pIVar16 = (Il2CppObject *)
                            MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                      (this_04,(long)local_9c);
                  NullCheck(pIVar16);
                  pvVar19 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar16);
                  uVar12 = *(undefined8 *)(param_1 + 0x20);
                  NullCheck(pvVar19);
                  bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0)
                  ;
                  if ((bVar10 & 1) != 0) {
                    NullCheck(this_04);
                    pIVar16 = (Il2CppObject *)
                              MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                        (this_04,(long)local_9c);
                    break;
                  }
                }
                else {
                  NullCheck(this_04);
                  pIVar16 = (Il2CppObject *)
                            MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                      (this_04,(long)local_9c);
                  pvVar19 = (void *)CastclassClass(pIVar16,*(Il2CppClass **)puVar5);
                  NullCheck(pvVar19);
                  CastclassClass(pIVar16,*(Il2CppClass **)puVar5);
                  pvVar19 = (void *)RuntimeMethodInfo_SerializationToString_m73CF6CC68B5AB3B8F61A2EF43A51BB35C21C5F1C
                                              ();
                  uVar12 = *(undefined8 *)(param_1 + 0x28);
                  NullCheck(pvVar19);
                  bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0)
                  ;
                  if ((bVar10 & 1) != 0) {
                    NullCheck(this_04);
                    pIVar16 = (Il2CppObject *)
                              MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                        (this_04,(long)local_9c);
                    break;
                  }
                }
                if (this_03 != (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)0x0) {
                  NullCheck(this_04);
                  pIVar16 = (Il2CppObject *)
                            MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                      (this_04,(long)local_9c);
                  NullCheck(pIVar16);
                  bVar10 = VirtualFuncInvoker0<bool>::Invoke(0x1c,pIVar16);
                  if ((bVar10 & 1) != 0) {
                    NullCheck(this_04);
                    pIVar16 = (Il2CppObject *)
                              MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                        (this_04,(long)local_9c);
                    NullCheck(pIVar16);
                    pvVar19 = (void *)VirtualFuncInvoker0<TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
                                      ::Invoke(0x1e,pIVar16);
                    NullCheck(pvVar19);
                    NullCheck(this_03);
                    if ((int)*(undefined8 *)((long)pvVar19 + 0x18) ==
                        (int)*(undefined8 *)(this_03 + 0x18)) {
                      NullCheck(this_04);
                      pIVar16 = (Il2CppObject *)
                                MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                                          (this_04,(long)local_9c);
                      NullCheck(pIVar16);
                      pIVar16 = (Il2CppObject *)
                                VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
                                ::Invoke(0x2c,pIVar16,this_03);
                      if (*(long *)(param_1 + 0x28) == 0) {
                        NullCheck(pIVar16);
                        pvVar19 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar16);
                        uVar12 = *(undefined8 *)(param_1 + 0x20);
                        NullCheck(pvVar19);
                        bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D
                                           (pvVar19,uVar12,0);
                      }
                      else {
                        pvVar19 = (void *)CastclassClass(pIVar16,*(Il2CppClass **)puVar5);
                        NullCheck(pvVar19);
                        CastclassClass(pIVar16,*(Il2CppClass **)puVar5);
                        pvVar19 = (void *)RuntimeMethodInfo_SerializationToString_m73CF6CC68B5AB3B8F61A2EF43A51BB35C21C5F1C
                                                    ();
                        uVar12 = *(undefined8 *)(param_1 + 0x28);
                        NullCheck(pvVar19);
                        bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D
                                           (pvVar19,uVar12,0);
                      }
                      if ((bVar10 & 1) != 0) break;
                    }
                  }
                }
              }
            }
          }
          local_88 = pIVar16;
          bVar10 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(local_88,0);
          if ((bVar10 & 1) != 0) {
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
            pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
            pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
            NullCheck(pIVar17);
            ArrayElementTypeCheck(pIVar17,pIVar16);
            ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                      ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
            uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
            uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                               (uVar12,pIVar17);
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
            pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
            SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0)
            ;
            pMVar15 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          NullCheck(local_88);
          bVar10 = VirtualFuncInvoker0<bool>::Invoke(0x1d,local_88);
          if ((bVar10 & 1) == 0) {
            local_28 = local_88;
          }
          else if (this_03 == (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)0x0) {
            local_28 = local_88;
          }
          else {
            NullCheck(this_03);
            uVar12 = TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::GetAt(this_03,0);
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uVar12,0);
            if ((bVar10 & 1) == 0) {
              NullCheck(local_88);
              local_28 = (Il2CppObject *)
                         VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
                         ::Invoke(0x2c,local_88,this_03);
            }
            else {
              local_28 = (Il2CppObject *)0x0;
            }
          }
        }
        else {
          if (iVar1 != 0x10) goto LAB_0273922c;
          pIVar16 = *(Il2CppObject **)(param_1 + 0x18);
          pSVar18 = *(String_t **)(param_1 + 0x10);
          NullCheck(pIVar16);
          pIVar16 = (Il2CppObject *)
                    VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                    ::Invoke(0x5e,pIVar16,pSVar18,0x10,0x4003c);
          this_01 = (PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7 *)
                    IsInst(pIVar16,*(Il2CppClass **)Method_System_Net_FtpWebRequest_TimerCallback__)
          ;
          NullCheck(this_01);
          if (*(long *)(this_01 + 0x18) == 0) {
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
            pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
            pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
            NullCheck(pIVar17);
            ArrayElementTypeCheck(pIVar17,pIVar16);
            ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                      ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
            uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
            uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                               (uVar12,pIVar17);
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
            pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
            SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0)
            ;
            pMVar15 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          NullCheck(this_01);
          if ((int)*(undefined8 *)(this_01 + 0x18) != 1) {
            NullCheck(this_01);
            if (1 < (int)*(undefined8 *)(this_01 + 0x18)) {
              for (local_6c = 0; NullCheck(this_01), local_6c < (int)*(undefined8 *)(this_01 + 0x18)
                  ; local_6c = il2cpp_codegen_add<int,int>(local_6c,1)) {
                if (*(long *)(param_1 + 0x28) == 0) {
                  NullCheck(this_01);
                  pIVar16 = (Il2CppObject *)
                            PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                                      (this_01,(long)local_6c);
                  NullCheck(pIVar16);
                  pvVar19 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar16);
                  uVar12 = *(undefined8 *)(param_1 + 0x20);
                  NullCheck(pvVar19);
                  bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0)
                  ;
                  if ((bVar10 & 1) != 0) {
                    NullCheck(this_01);
                    pIVar16 = (Il2CppObject *)
                              PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                                        (this_01,(long)local_6c);
                    return pIVar16;
                  }
                }
                else {
                  NullCheck(this_01);
                  pIVar16 = (Il2CppObject *)
                            PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                                      (this_01,(long)local_6c);
                  pvVar19 = (void *)CastclassClass(pIVar16,*(Il2CppClass **)puVar7);
                  NullCheck(pvVar19);
                  CastclassClass(pIVar16,*(Il2CppClass **)puVar7);
                  pvVar19 = (void *)RuntimePropertyInfo_SerializationToString_m959607B5AE65F49664CF92D4A269F867B68E0345
                                              ();
                  uVar12 = *(undefined8 *)(param_1 + 0x28);
                  NullCheck(pvVar19);
                  bVar10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(pvVar19,uVar12,0)
                  ;
                  if ((bVar10 & 1) != 0) {
                    NullCheck(this_01);
                    pIVar16 = (Il2CppObject *)
                              PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                                        (this_01,(long)local_6c);
                    return pIVar16;
                  }
                }
              }
            }
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
            pIVar17 = (Il2CppArray *)SZArrayNew(pIVar13,1);
            pIVar16 = *(Il2CppObject **)(param_1 + 0x10);
            NullCheck(pIVar17);
            ArrayElementTypeCheck(pIVar17,pIVar16);
            ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                      ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar16);
            uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
            uVar12 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                               (uVar12,pIVar17);
            pIVar13 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
            pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
            SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0)
            ;
            pMVar15 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar15);
          }
          NullCheck(this_01);
          local_28 = (Il2CppObject *)
                     PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt(this_01,0);
        }
      }
      return local_28;
    }
  }
  il2cpp_codegen_initialize_runtime_metadata_inline
            ((ulong *)Method_System_IO_FileStream_set_Position__);
  uVar12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
  pIVar13 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar4);
  pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar13);
  SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar14,uVar12,0);
  pMVar15 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar9);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar14,pMVar15);
}


