/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValueAsync
ENTRY_POINT: 028e7044
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_14;strong_file_logging_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_JsonTextWriter__WriteValueAsync
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *pLVar7;
  long lVar8;
  Type_t *pTVar9;
  Il2CppObject *pIVar10;
  MethodBase_t *pMVar11;
  Il2CppClass *pIVar12;
  MethodInfo *pMVar13;
  undefined8 uVar14;
  Exception_t *pEVar15;
  void *pvVar16;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *pOVar17;
  Il2CppArray *pIVar18;
  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *pCVar19;
  undefined8 uVar20;
  MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A *pMVar21;
  CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 *pCVar22;
  Il2CppObject *pIVar23;
  Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 *pBVar24;
  long unaff_x29;
  uint uStack00000000000000dc;
  ulong *in_stack_000001f8;
  ulong *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong *in_stack_00000210;
  
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  *(undefined8 *)(unaff_x29 + -0x20) = param_4;
  *(undefined8 *)(unaff_x29 + -0x28) = param_5;
  *(undefined8 *)(unaff_x29 + -0x30) = param_6;
  *(undefined8 *)(unaff_x29 + -0x38) = param_7;
  *(undefined8 *)(unaff_x29 + -0x40) = param_8;
  if ((RuntimeType_CreateInstanceImpl_m48A94EB8AE812F52EF3915AFCA7B432699C3E28A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_000001f8);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000200);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexInterpreter_Go__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexParser_AddGroup__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ParseProperty__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBackslash__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBasicBackslash__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpWebRequest_EndGetRequestStream__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    RuntimeType_CreateInstanceImpl_m48A94EB8AE812F52EF3915AFCA7B432699C3E28A::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  *(undefined1 *)(unaff_x29 + -0x4d) = 0;
  *(undefined1 *)(unaff_x29 + -0x4e) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined4 *)(unaff_x29 + -0x84) = 0;
  *(undefined4 *)(unaff_x29 + -0x88) = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,2>::ExceptionSupportStack
            ((ExceptionSupportStack<Il2CppObject*,2> *)(unaff_x29 + -0xa0));
  RuntimeType_CreateInstanceCheckThis_m608D04294F22CACD1D07206423C3D631E75B2F65
            (*(undefined8 *)(unaff_x29 + -8),0);
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x20);
  if (*(long *)(unaff_x29 + -0xa8) == 0) {
    uVar6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                      ((MethodInfo *)*in_stack_000001f8);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0xb0);
  }
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x20);
  NullCheck(*(void **)(unaff_x29 + -200));
  *(int *)(unaff_x29 + -0x4c) = (int)*(undefined8 *)(*(long *)(unaff_x29 + -200) + 0x18);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x18);
  if (*(long *)(unaff_x29 + -0xd0) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    uVar6 = Type_get_DefaultBinder_m21450212064618B602E0586BFB1CA9B777C46C7F(0);
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0xd8);
  }
  *(undefined4 *)(unaff_x29 + -0xdc) = *(undefined4 *)(unaff_x29 + -0xc);
  *(bool *)(unaff_x29 + -0x4d) = (*(uint *)(unaff_x29 + -0xdc) & 0x20) == 0;
  *(undefined4 *)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0xc);
  *(bool *)(unaff_x29 + -0x4e) = (*(uint *)(unaff_x29 + -0xe0) & 0x2000000) == 0;
  *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x4c);
  if (((*(int *)(unaff_x29 + -0xe4) == 0) &&
      (*(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0xc),
      (*(uint *)(unaff_x29 + -0xe8) >> 4 & 1) != 0)) &&
     (*(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xc),
     (*(uint *)(unaff_x29 + -0xec) >> 2 & 1) != 0)) {
    bVar3 = RuntimeType_IsGenericCOMObjectImpl_mD12CA396DD79525FC77EB81D74725D3EF99FFA8F
                      (*(undefined8 *)(unaff_x29 + -8),0);
    *(byte *)(unaff_x29 + -0xed) = bVar3 & 1;
    if ((*(byte *)(unaff_x29 + -0xed) & 1) == 0) {
      bVar3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318
                        (*(undefined8 *)(unaff_x29 + -8),0);
      *(byte *)(unaff_x29 + -0xee) = bVar3 & 1;
      if ((*(byte *)(unaff_x29 + -0xee) & 1) == 0) goto LAB_028e7348;
    }
    *(byte *)(unaff_x29 + -0xef) = *(byte *)(unaff_x29 + -0x4d) & 1;
    *(byte *)(unaff_x29 + -0xf0) = *(byte *)(unaff_x29 + -0x4e) & 1;
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x38);
    uVar6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6
                      (*(undefined8 *)(unaff_x29 + -8),*(byte *)(unaff_x29 + -0xef) & 1,0,1,
                       *(byte *)(unaff_x29 + -0xf0) & 1,*(undefined8 *)(unaff_x29 + -0xf8),0);
    *(undefined8 *)(unaff_x29 + -0x100) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x100);
  }
  else {
LAB_028e7348:
    uVar6 = VirtualFuncInvoker1<ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A*,int>
            ::Invoke(0x54,*(Il2CppObject **)(unaff_x29 + -8),*(int *)(unaff_x29 + -0xc));
    *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
    pvVar16 = *(void **)(unaff_x29 + -0x58);
    NullCheck(pvVar16);
    pLVar7 = (List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_System_Text_RegularExpressions_RegexParser_ScanBackslash__);
    List_1__ctor_mEEF22AC26AE205203056978BCAE72F690C774C36
              (pLVar7,(int)*(undefined8 *)((long)pvVar16 + 0x18),
               *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_ParseProperty__);
    *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60) = pLVar7;
    uVar6 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
                       ,*(uint *)(unaff_x29 + -0x4c));
    *(undefined8 *)(unaff_x29 + -0x68) = uVar6;
    *(undefined4 *)(unaff_x29 + -0x84) = 0;
    while (*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x4c)) {
      pOVar17 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
      iVar1 = *(int *)(unaff_x29 + -0x84);
      NullCheck(pOVar17);
      lVar8 = ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar17,(long)iVar1);
      if (lVar8 != 0) {
        pIVar18 = *(Il2CppArray **)(unaff_x29 + -0x68);
        iVar1 = *(int *)(unaff_x29 + -0x84);
        pOVar17 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
        iVar2 = *(int *)(unaff_x29 + -0x84);
        NullCheck(pOVar17);
        pvVar16 = (void *)ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt
                                    (pOVar17,(long)iVar2);
        NullCheck(pvVar16);
        pTVar9 = (Type_t *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(pvVar16,0);
        NullCheck(pIVar18);
        ArrayElementTypeCheck(pIVar18,pTVar9);
        TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::SetAt
                  ((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)pIVar18,(long)iVar1,
                   pTVar9);
      }
      uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x84),1);
      *(undefined4 *)(unaff_x29 + -0x84) = uVar4;
    }
    *(undefined4 *)(unaff_x29 + -0x88) = 0;
    while (iVar1 = *(int *)(unaff_x29 + -0x88), pvVar16 = *(void **)(unaff_x29 + -0x58),
          NullCheck(pvVar16), iVar1 < (int)*(undefined8 *)((long)pvVar16 + 0x18)) {
      pCVar19 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                 (unaff_x29 + -0x58);
      iVar1 = *(int *)(unaff_x29 + -0x88);
      NullCheck(pCVar19);
      pIVar10 = (Il2CppObject *)
                ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                          (pCVar19,(long)iVar1);
      uVar4 = *(undefined4 *)(unaff_x29 + -0xc);
      uVar20 = *(undefined8 *)(unaff_x29 + -0x68);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
      uVar6 = CastclassClass(pIVar10,*(Il2CppClass **)
                                      Method_System_Net_FtpWebRequest_EndGetRequestStream__);
      uVar5 = RuntimeType_FilterApplyConstructorInfo_mB90D5464AE4D3ABF62C40C253A40311810C1CC27
                        (uVar6,uVar4,3,uVar20,0);
      if ((uVar5 & 1) != 0) {
        pLVar7 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
        pCVar19 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                   (unaff_x29 + -0x58);
        iVar1 = *(int *)(unaff_x29 + -0x88);
        NullCheck(pCVar19);
        pMVar11 = (MethodBase_t *)
                  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                            (pCVar19,(long)iVar1);
        NullCheck(pLVar7);
        List_1_Add_m646A66E0C29997C99AAAFD6DAA14D42193CD48B3_inline
                  (pLVar7,pMVar11,
                   *(MethodInfo **)Method_System_Text_RegularExpressions_RegexInterpreter_Go__);
      }
      uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x88),1);
      *(undefined4 *)(unaff_x29 + -0x88) = uVar4;
    }
    pLVar7 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
    NullCheck(pLVar7);
    uVar5 = List_1_get_Count_m49EB9ADF0DA87C3D5BE3FC6DAEF2347B441A50DB_inline
                      (pLVar7,*(MethodInfo **)
                               Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
    uVar6 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Text_RegularExpressions_RegexParser_ScanBasicBackslash__,uVar5
                      );
    *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
    pLVar7 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
    pMVar21 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
    NullCheck(pLVar7);
    List_1_CopyTo_mBD9A522C2106562AC93065597CDF8F5CEF62D8F5
              (pLVar7,pMVar21,
               *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_AddGroup__);
    if ((*(long *)(unaff_x29 + -0x70) != 0) &&
       (pvVar16 = *(void **)(unaff_x29 + -0x70), NullCheck(pvVar16),
       *(long *)((long)pvVar16 + 0x18) == 0)) {
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
    }
    if (*(long *)(unaff_x29 + -0x70) == 0) {
      pIVar12 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                          );
      pIVar18 = (Il2CppArray *)SZArrayNew(pIVar12,1);
      pIVar10 = (Il2CppObject *)
                VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
      NullCheck(pIVar18);
      ArrayElementTypeCheck(pIVar18,pIVar10);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar18,0,pIVar10);
      uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
      uVar6 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                        (uVar6,pIVar18,0);
      pIVar12 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
      pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar12);
      MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar15,uVar6,0);
      pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar15,pMVar13);
    }
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    pMVar21 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
    pCVar22 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
    NullCheck(pIVar10);
    uVar6 = VirtualFuncInvoker7<MethodBase_t*,int,MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*,StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*,Il2CppObject**>
            ::Invoke(5,pIVar10,iVar1,pMVar21,
                     (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
                     (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 *)0x0,
                     pCVar22,(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0,
                     (Il2CppObject **)(unaff_x29 + -0x80));
    *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
    uStack00000000000000dc =
         MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD
                   (*(undefined8 *)(unaff_x29 + -0x78),0);
    if ((uStack00000000000000dc & 1) != 0) {
      pIVar12 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                          );
      pIVar18 = (Il2CppArray *)SZArrayNew(pIVar12,1);
      pIVar10 = (Il2CppObject *)
                VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
      NullCheck(pIVar18);
      ArrayElementTypeCheck(pIVar18,pIVar10);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar18,0,pIVar10);
      uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
      uVar6 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                        (uVar6,pIVar18,0);
      pIVar12 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
      pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar12);
      MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar15,uVar6,0);
      pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar15,pMVar13);
    }
    pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x78);
    NullCheck(pIVar10);
    pvVar16 = (void *)VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                      ::Invoke(0x28,pIVar10);
    NullCheck(pvVar16);
    if (*(long *)((long)pvVar16 + 0x18) == 0) {
      pvVar16 = *(void **)(unaff_x29 + -0x20);
      NullCheck(pvVar16);
      if (*(long *)((long)pvVar16 + 0x18) != 0) {
        pIVar12 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                            );
        il2cpp_codegen_runtime_class_init_inline(pIVar12);
        uVar6 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
        uVar20 = il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_System_Text_RegularExpressions_RegexParser_ScanCharClass__);
        uVar20 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(uVar20,0);
        pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000001f8)
        ;
        uVar14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                           (pMVar13);
        uVar6 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(uVar6,uVar20,uVar14,0);
        pIVar12 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__
                            );
        pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar12);
        NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(pEVar15,uVar6,0);
        pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210)
        ;
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar15,pMVar13);
      }
      uVar6 = Activator_CreateInstance_m09F9CF47F0DBCC75F924E38D323229E45615F190
                        (*(undefined8 *)(unaff_x29 + -8),1,*(byte *)(unaff_x29 + -0x4e) & 1,0);
      *(undefined8 *)(unaff_x29 + -0x48) = uVar6;
    }
    else {
      pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x78);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      pBVar24 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x18);
      pOVar17 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
      pCVar22 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
      pvVar16 = (void *)CastclassClass(pIVar10,(Il2CppClass *)*in_stack_00000200);
      NullCheck(pvVar16);
      pIVar10 = (Il2CppObject *)CastclassClass(pIVar10,(Il2CppClass *)*in_stack_00000200);
      uVar6 = VirtualFuncInvoker4<Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
              ::Invoke(0x29,pIVar10,iVar1,pBVar24,pOVar17,pCVar22);
      *(undefined8 *)(unaff_x29 + -0x48) = uVar6;
      if (*(long *)(unaff_x29 + -0x80) != 0) {
        pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x18);
        pIVar23 = *(Il2CppObject **)(unaff_x29 + -0x80);
        NullCheck(pIVar10);
        VirtualActionInvoker2<ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,Il2CppObject*>
        ::Invoke(7,pIVar10,
                 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
                 pIVar23);
      }
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x48);
}


