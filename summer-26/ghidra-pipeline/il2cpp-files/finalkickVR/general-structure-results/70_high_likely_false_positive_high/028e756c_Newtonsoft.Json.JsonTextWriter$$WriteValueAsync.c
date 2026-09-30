/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValueAsync
ENTRY_POINT: 028e756c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_12;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_JsonTextWriter__WriteValueAsync(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  MethodBase_t *pMVar5;
  Il2CppArray *pIVar6;
  Il2CppClass *pIVar7;
  MethodInfo *pMVar8;
  undefined8 uVar9;
  Exception_t *pEVar10;
  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *pCVar11;
  undefined8 uVar12;
  void *pvVar13;
  List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *pLVar14;
  MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A *pMVar15;
  Il2CppObject *pIVar16;
  CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 *pCVar17;
  Il2CppObject *pIVar18;
  Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 *pBVar19;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *pOVar20;
  long unaff_x29;
  uint uStack00000000000000dc;
  Il2CppObject *in_stack_00000190;
  ulong *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong *in_stack_00000210;
  
  while( true ) {
    uVar3 = *(undefined4 *)(unaff_x29 + -0xc);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x68);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
    uVar4 = CastclassClass(in_stack_00000190,
                           *(Il2CppClass **)Method_System_Net_FtpWebRequest_EndGetRequestStream__);
    uVar2 = RuntimeType_FilterApplyConstructorInfo_mB90D5464AE4D3ABF62C40C253A40311810C1CC27
                      (uVar4,uVar3,3,uVar12,0);
    if ((uVar2 & 1) != 0) {
      pLVar14 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
      pCVar11 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                 (unaff_x29 + -0x58);
      iVar1 = *(int *)(unaff_x29 + -0x88);
      NullCheck(pCVar11);
      pMVar5 = (MethodBase_t *)
               ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                         (pCVar11,(long)iVar1);
      NullCheck(pLVar14);
      List_1_Add_m646A66E0C29997C99AAAFD6DAA14D42193CD48B3_inline
                (pLVar14,pMVar5,
                 *(MethodInfo **)Method_System_Text_RegularExpressions_RegexInterpreter_Go__);
    }
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x88),1);
    *(undefined4 *)(unaff_x29 + -0x88) = uVar3;
    iVar1 = *(int *)(unaff_x29 + -0x88);
    pvVar13 = *(void **)(unaff_x29 + -0x58);
    NullCheck(pvVar13);
    if ((int)*(undefined8 *)((long)pvVar13 + 0x18) <= iVar1) break;
    pCVar11 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
               (unaff_x29 + -0x58);
    iVar1 = *(int *)(unaff_x29 + -0x88);
    NullCheck(pCVar11);
    in_stack_00000190 =
         (Il2CppObject *)
         ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt(pCVar11,(long)iVar1)
    ;
  }
  pLVar14 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
  NullCheck(pLVar14);
  uVar2 = List_1_get_Count_m49EB9ADF0DA87C3D5BE3FC6DAEF2347B441A50DB_inline
                    (pLVar14,*(MethodInfo **)
                              Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
  uVar4 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Text_RegularExpressions_RegexParser_ScanBasicBackslash__,uVar2);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
  pLVar14 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
  pMVar15 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
  NullCheck(pLVar14);
  List_1_CopyTo_mBD9A522C2106562AC93065597CDF8F5CEF62D8F5
            (pLVar14,pMVar15,
             *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_AddGroup__);
  if ((*(long *)(unaff_x29 + -0x70) != 0) &&
     (pvVar13 = *(void **)(unaff_x29 + -0x70), NullCheck(pvVar13),
     *(long *)((long)pvVar13 + 0x18) == 0)) {
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
  }
  if (*(long *)(unaff_x29 + -0x70) == 0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                       );
    pIVar6 = (Il2CppArray *)SZArrayNew(pIVar7,1);
    pIVar16 = (Il2CppObject *)
              VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
    NullCheck(pIVar6);
    ArrayElementTypeCheck(pIVar6,pIVar16);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar6,0,pIVar16);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
    uVar4 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(uVar4,pIVar6,0);
    pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar10,uVar4,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar8);
  }
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x18);
  iVar1 = *(int *)(unaff_x29 + -0xc);
  pMVar15 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0x70);
  pCVar17 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
  NullCheck(pIVar16);
  uVar4 = VirtualFuncInvoker7<MethodBase_t*,int,MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*,StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*,Il2CppObject**>
          ::Invoke(5,pIVar16,iVar1,pMVar15,
                   (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
                   (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 *)0x0,pCVar17,
                   (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0,
                   (Il2CppObject **)(unaff_x29 + -0x80));
  *(undefined8 *)(unaff_x29 + -0x78) = uVar4;
  uStack00000000000000dc =
       MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD
                 (*(undefined8 *)(unaff_x29 + -0x78),0);
  if ((uStack00000000000000dc & 1) != 0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                       );
    pIVar6 = (Il2CppArray *)SZArrayNew(pIVar7,1);
    pIVar16 = (Il2CppObject *)
              VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
    NullCheck(pIVar6);
    ArrayElementTypeCheck(pIVar6,pIVar16);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar6,0,pIVar16);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__);
    uVar4 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(uVar4,pIVar6,0);
    pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar10,uVar4,0);
    pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar8);
  }
  pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x78);
  NullCheck(pIVar16);
  pvVar13 = (void *)VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                    ::Invoke(0x28,pIVar16);
  NullCheck(pvVar13);
  if (*(long *)((long)pvVar13 + 0x18) == 0) {
    pvVar13 = *(void **)(unaff_x29 + -0x20);
    NullCheck(pvVar13);
    if (*(long *)((long)pvVar13 + 0x18) != 0) {
      pIVar7 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                         );
      il2cpp_codegen_runtime_class_init_inline(pIVar7);
      uVar4 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
      uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanCharClass__
                         );
      uVar12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(uVar12,0);
      pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000001f8);
      uVar9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(pMVar8);
      uVar4 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(uVar4,uVar12,uVar9,0);
      pIVar7 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__);
      pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
      NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(pEVar10,uVar4,0);
      pMVar8 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar10,pMVar8);
    }
    uVar4 = Activator_CreateInstance_m09F9CF47F0DBCC75F924E38D323229E45615F190
                      (*(undefined8 *)(unaff_x29 + -8),1,*(byte *)(unaff_x29 + -0x4e) & 1,0);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar4;
  }
  else {
    pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x78);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    pBVar19 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x18);
    pOVar20 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
    pCVar17 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
    pvVar13 = (void *)CastclassClass(pIVar16,(Il2CppClass *)*in_stack_00000200);
    NullCheck(pvVar13);
    pIVar16 = (Il2CppObject *)CastclassClass(pIVar16,(Il2CppClass *)*in_stack_00000200);
    uVar4 = VirtualFuncInvoker4<Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
            ::Invoke(0x29,pIVar16,iVar1,pBVar19,pOVar20,pCVar17);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar4;
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x18);
      pIVar18 = *(Il2CppObject **)(unaff_x29 + -0x80);
      NullCheck(pIVar16);
      VirtualActionInvoker2<ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,Il2CppObject*>
      ::Invoke(7,pIVar16,
               (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20),
               pIVar18);
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x48);
}


