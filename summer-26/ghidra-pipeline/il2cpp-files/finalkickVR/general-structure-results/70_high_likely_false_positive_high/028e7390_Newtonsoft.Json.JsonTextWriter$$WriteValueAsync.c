/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValueAsync
ENTRY_POINT: 028e7390
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_12;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_JsonTextWriter__WriteValueAsync(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *pLVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  Type_t *pTVar9;
  Il2CppObject *pIVar10;
  MethodBase_t *pMVar11;
  Il2CppClass *pIVar12;
  MethodInfo *pMVar13;
  undefined8 uVar14;
  Exception_t *pEVar15;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *pOVar16;
  Il2CppArray *pIVar17;
  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *pCVar18;
  undefined8 uVar19;
  MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A *pMVar20;
  CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 *pCVar21;
  Il2CppObject *pIVar22;
  Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 *pBVar23;
  long unaff_x29;
  uint uStack00000000000000dc;
  ulong *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong *in_stack_00000210;
  long in_stack_00000478;
  
  pLVar5 = (List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *)
           il2cpp_codegen_object_new((Il2CppClass *)*param_1);
  List_1__ctor_mEEF22AC26AE205203056978BCAE72F690C774C36
            (pLVar5,(int)*(undefined8 *)(in_stack_00000478 + 0x18),
             *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_ParseProperty__);
  *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60) = pLVar5;
  uVar6 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
                     ,*(uint *)(unaff_x29 + -0x4c));
  *(undefined8 *)(unaff_x29 + -0x68) = uVar6;
  *(undefined4 *)(unaff_x29 + -0x84) = 0;
  while (*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x4c)) {
    pOVar16 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
    iVar1 = *(int *)(unaff_x29 + -0x84);
    NullCheck(pOVar16);
    lVar7 = ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar16,(long)iVar1);
    if (lVar7 != 0) {
      pIVar17 = *(Il2CppArray **)(unaff_x29 + -0x68);
      iVar1 = *(int *)(unaff_x29 + -0x84);
      pOVar16 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
      iVar2 = *(int *)(unaff_x29 + -0x84);
      NullCheck(pOVar16);
      pvVar8 = (void *)ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt
                                 (pOVar16,(long)iVar2);
      NullCheck(pvVar8);
      pTVar9 = (Type_t *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(pvVar8,0);
      NullCheck(pIVar17);
      ArrayElementTypeCheck(pIVar17,pTVar9);
      TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::SetAt
                ((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)pIVar17,(long)iVar1,pTVar9)
      ;
    }
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x84),1);
    *(undefined4 *)(unaff_x29 + -0x84) = uVar3;
  }
  *(undefined4 *)(unaff_x29 + -0x88) = 0;
  while (iVar1 = *(int *)(unaff_x29 + -0x88), pvVar8 = *(void **)(unaff_x29 + -0x58),
        NullCheck(pvVar8), iVar1 < (int)*(undefined8 *)((long)pvVar8 + 0x18)) {
    pCVar18 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
               (unaff_x29 + -0x58);
    iVar1 = *(int *)(unaff_x29 + -0x88);
    NullCheck(pCVar18);
    pIVar10 = (Il2CppObject *)
              ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                        (pCVar18,(long)iVar1);
    uVar3 = *(undefined4 *)(unaff_x29 + -0xc);
    uVar19 = *(undefined8 *)(unaff_x29 + -0x68);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
    uVar6 = CastclassClass(pIVar10,*(Il2CppClass **)
                                    Method_System_Net_FtpWebRequest_EndGetRequestStream__);
    uVar4 = RuntimeType_FilterApplyConstructorInfo_mB90D5464AE4D3ABF62C40C253A40311810C1CC27
                      (uVar6,uVar3,3,uVar19,0);
    if ((uVar4 & 1) != 0) {
      pLVar5 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
      pCVar18 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                 (unaff_x29 + -0x58);
      iVar1 = *(int *)(unaff_x29 + -0x88);
      NullCheck(pCVar18);
      pMVar11 = (MethodBase_t *)
                ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                          (pCVar18,(long)iVar1);
      NullCheck(pLVar5);
      List_1_Add_m646A66E0C29997C99AAAFD6DAA14D42193CD48B3_inline
                (pLVar5,pMVar11,
                 *(MethodInfo **)Method_System_Text_RegularExpressions_RegexInterpreter_Go__);
    }
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x88),1);
    *(undefined4 *)(unaff_x29 + -0x88) = uVar3;
  }
  pLVar5 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
  NullCheck(pLVar5);
  uVar4 = List_1_get_Count_m49EB9ADF0DA87C3D5BE3FC6DAEF2347B441A50DB_inline
                    (pLVar5,*(MethodInfo **)
                             Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
  uVar6 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Text_RegularExpressions_RegexParser_ScanBasicBackslash__,uVar4);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
  pLVar5 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
  pMVar20 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
  NullCheck(pLVar5);
  List_1_CopyTo_mBD9A522C2106562AC93065597CDF8F5CEF62D8F5
            (pLVar5,pMVar20,
             *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_AddGroup__);
  if ((*(long *)(unaff_x29 + -0x70) != 0) &&
     (pvVar8 = *(void **)(unaff_x29 + -0x70), NullCheck(pvVar8), *(long *)((long)pvVar8 + 0x18) == 0
     )) {
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
  }
  if (*(long *)(unaff_x29 + -0x70) == 0) {
    pIVar12 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                        );
    pIVar17 = (Il2CppArray *)SZArrayNew(pIVar12,1);
    pIVar10 = (Il2CppObject *)
              VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
    NullCheck(pIVar17);
    ArrayElementTypeCheck(pIVar17,pIVar10);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar10);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
    uVar6 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(uVar6,pIVar17,0)
    ;
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
  pMVar20 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
  pCVar21 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
  NullCheck(pIVar10);
  uVar6 = VirtualFuncInvoker7<MethodBase_t*,int,MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*,StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*,Il2CppObject**>
          ::Invoke(5,pIVar10,iVar1,pMVar20,
                   (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
                   (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 *)0x0,pCVar21,
                   (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0,
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
    pIVar17 = (Il2CppArray *)SZArrayNew(pIVar12,1);
    pIVar10 = (Il2CppObject *)
              VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
    NullCheck(pIVar17);
    ArrayElementTypeCheck(pIVar17,pIVar10);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar17,0,pIVar10);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
    uVar6 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(uVar6,pIVar17,0)
    ;
    pIVar12 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar12);
    MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar15,uVar6,0);
    pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar13);
  }
  pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x78);
  NullCheck(pIVar10);
  pvVar8 = (void *)VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                   ::Invoke(0x28,pIVar10);
  NullCheck(pvVar8);
  if (*(long *)((long)pvVar8 + 0x18) == 0) {
    pvVar8 = *(void **)(unaff_x29 + -0x20);
    NullCheck(pvVar8);
    if (*(long *)((long)pvVar8 + 0x18) != 0) {
      pIVar12 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                          );
      il2cpp_codegen_runtime_class_init_inline(pIVar12);
      uVar6 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
      uVar19 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanCharClass__
                         );
      uVar19 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(uVar19,0);
      pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000001f8);
      uVar14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                         (pMVar13);
      uVar6 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(uVar6,uVar19,uVar14,0);
      pIVar12 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__);
      pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar12);
      NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(pEVar15,uVar6,0);
      pMVar13 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
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
    pBVar23 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x18);
    pOVar16 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
    pCVar21 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
    pvVar8 = (void *)CastclassClass(pIVar10,(Il2CppClass *)*in_stack_00000200);
    NullCheck(pvVar8);
    pIVar10 = (Il2CppObject *)CastclassClass(pIVar10,(Il2CppClass *)*in_stack_00000200);
    uVar6 = VirtualFuncInvoker4<Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
            ::Invoke(0x29,pIVar10,iVar1,pBVar23,pOVar16,pCVar21);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar6;
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      pIVar10 = *(Il2CppObject **)(unaff_x29 + -0x18);
      pIVar22 = *(Il2CppObject **)(unaff_x29 + -0x80);
      NullCheck(pIVar10);
      VirtualActionInvoker2<ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,Il2CppObject*>
      ::Invoke(7,pIVar10,
               (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
               pIVar22);
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x48);
}


