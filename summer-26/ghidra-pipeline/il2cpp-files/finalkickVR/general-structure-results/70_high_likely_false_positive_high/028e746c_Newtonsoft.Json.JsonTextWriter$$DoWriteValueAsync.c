/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$DoWriteValueAsync
ENTRY_POINT: 028e746c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_12;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  Type_t *pTVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  MethodBase_t *pMVar9;
  Il2CppArray *pIVar10;
  Il2CppClass *pIVar11;
  MethodInfo *pMVar12;
  undefined8 uVar13;
  Exception_t *pEVar14;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *pOVar15;
  ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A *pCVar16;
  undefined8 uVar17;
  List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C *pLVar18;
  MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A *pMVar19;
  CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 *pCVar20;
  Il2CppObject *pIVar21;
  Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 *pBVar22;
  long unaff_x29;
  uint uStack00000000000000dc;
  ulong *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong *in_stack_00000210;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *in_stack_00000430;
  int in_stack_0000043c;
  Il2CppArray *in_stack_00000440;
  
  do {
    iVar1 = *(int *)(unaff_x29 + -0x84);
    NullCheck(in_stack_00000430);
    pvVar5 = (void *)ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt
                               (in_stack_00000430,(long)iVar1);
    NullCheck(pvVar5);
    pTVar6 = (Type_t *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(pvVar5,0);
    NullCheck(in_stack_00000440);
    ArrayElementTypeCheck(in_stack_00000440,pTVar6);
    TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::SetAt
              ((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)in_stack_00000440,
               (long)in_stack_0000043c,pTVar6);
    do {
      uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x84),1);
      *(undefined4 *)(unaff_x29 + -0x84) = uVar2;
      if (*(int *)(unaff_x29 + -0x4c) <= *(int *)(unaff_x29 + -0x84)) {
        *(undefined4 *)(unaff_x29 + -0x88) = 0;
        while (iVar1 = *(int *)(unaff_x29 + -0x88), pvVar5 = *(void **)(unaff_x29 + -0x58),
              NullCheck(pvVar5), iVar1 < (int)*(undefined8 *)((long)pvVar5 + 0x18)) {
          pCVar16 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                     (unaff_x29 + -0x58);
          iVar1 = *(int *)(unaff_x29 + -0x88);
          NullCheck(pCVar16);
          pIVar7 = (Il2CppObject *)
                   ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                             (pCVar16,(long)iVar1);
          uVar2 = *(undefined4 *)(unaff_x29 + -0xc);
          uVar17 = *(undefined8 *)(unaff_x29 + -0x68);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_Oculus_Platform_Message<UserDataStoreUpdateResponse>_get_Data__);
          uVar8 = CastclassClass(pIVar7,*(Il2CppClass **)
                                         Method_System_Net_FtpWebRequest_EndGetRequestStream__);
          uVar3 = RuntimeType_FilterApplyConstructorInfo_mB90D5464AE4D3ABF62C40C253A40311810C1CC27
                            (uVar8,uVar2,3,uVar17,0);
          if ((uVar3 & 1) != 0) {
            pLVar18 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
            pCVar16 = *(ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A **)
                       (unaff_x29 + -0x58);
            iVar1 = *(int *)(unaff_x29 + -0x88);
            NullCheck(pCVar16);
            pMVar9 = (MethodBase_t *)
                     ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A::GetAt
                               (pCVar16,(long)iVar1);
            NullCheck(pLVar18);
            List_1_Add_m646A66E0C29997C99AAAFD6DAA14D42193CD48B3_inline
                      (pLVar18,pMVar9,
                       *(MethodInfo **)Method_System_Text_RegularExpressions_RegexInterpreter_Go__);
          }
          uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x88),1);
          *(undefined4 *)(unaff_x29 + -0x88) = uVar2;
        }
        pLVar18 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
        NullCheck(pLVar18);
        uVar3 = List_1_get_Count_m49EB9ADF0DA87C3D5BE3FC6DAEF2347B441A50DB_inline
                          (pLVar18,*(MethodInfo **)
                                    Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
        uVar8 = SZArrayNew(*(Il2CppClass **)
                            Method_System_Text_RegularExpressions_RegexParser_ScanBasicBackslash__,
                           uVar3);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
        pLVar18 = *(List_1_tA22346D6457821DDF56CE824E14F6D842A0F665C **)(unaff_x29 + -0x60);
        pMVar19 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)
                   (unaff_x29 + -0x70);
        NullCheck(pLVar18);
        List_1_CopyTo_mBD9A522C2106562AC93065597CDF8F5CEF62D8F5
                  (pLVar18,pMVar19,
                   *(MethodInfo **)Method_System_Text_RegularExpressions_RegexParser_AddGroup__);
        if ((*(long *)(unaff_x29 + -0x70) != 0) &&
           (pvVar5 = *(void **)(unaff_x29 + -0x70), NullCheck(pvVar5),
           *(long *)((long)pvVar5 + 0x18) == 0)) {
          *(undefined8 *)(unaff_x29 + -0x70) = 0;
        }
        if (*(long *)(unaff_x29 + -0x70) == 0) {
          pIVar11 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline
                              ((ulong *)
                               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                              );
          pIVar10 = (Il2CppArray *)SZArrayNew(pIVar11,1);
          pIVar7 = (Il2CppObject *)
                   VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
          NullCheck(pIVar10);
          ArrayElementTypeCheck(pIVar10,pIVar7);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar10,0,pIVar7);
          uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__)
          ;
          uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                            (uVar8,pIVar10,0);
          pIVar11 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar11);
          MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar14,uVar8,0);
          pMVar12 = (MethodInfo *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar12);
        }
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x18);
        iVar1 = *(int *)(unaff_x29 + -0xc);
        pMVar19 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)
                   (unaff_x29 + -0x70);
        pCVar20 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
        NullCheck(pIVar7);
        uVar8 = VirtualFuncInvoker7<MethodBase_t*,int,MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*,StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*,Il2CppObject**>
                ::Invoke(5,pIVar7,iVar1,pMVar19,
                         (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)
                         (unaff_x29 + -0x20),
                         (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 *)0x0,
                         pCVar20,(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0,
                         (Il2CppObject **)(unaff_x29 + -0x80));
        *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
        uStack00000000000000dc =
             MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD
                       (*(undefined8 *)(unaff_x29 + -0x78),0);
        if ((uStack00000000000000dc & 1) != 0) {
          pIVar11 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline
                              ((ulong *)
                               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                              );
          pIVar10 = (Il2CppArray *)SZArrayNew(pIVar11,1);
          pIVar7 = (Il2CppObject *)
                   VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -8));
          NullCheck(pIVar10);
          ArrayElementTypeCheck(pIVar10,pIVar7);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar10,0,pIVar7);
          uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_System_Text_RegularExpressions_RegexParser_ScanBlank__)
          ;
          uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                            (uVar8,pIVar10,0);
          pIVar11 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000208);
          pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar11);
          MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(pEVar14,uVar8,0);
          pMVar12 = (MethodInfo *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar14,pMVar12);
        }
        pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x78);
        NullCheck(pIVar7);
        pvVar5 = (void *)VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                         ::Invoke(0x28,pIVar7);
        NullCheck(pvVar5);
        if (*(long *)((long)pvVar5 + 0x18) == 0) {
          pvVar5 = *(void **)(unaff_x29 + -0x20);
          NullCheck(pvVar5);
          if (*(long *)((long)pvVar5 + 0x18) != 0) {
            pIVar11 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline
                                ((ulong *)
                                 Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                                );
            il2cpp_codegen_runtime_class_init_inline(pIVar11);
            uVar8 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
            uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline
                               ((ulong *)
                                Method_System_Text_RegularExpressions_RegexParser_ScanCharClass__);
            uVar17 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058
                               (uVar17,0);
            pMVar12 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000001f8);
            uVar13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                               (pMVar12);
            uVar8 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(uVar8,uVar17,uVar13,0);
            pIVar11 = (Il2CppClass *)
                      il2cpp_codegen_initialize_runtime_metadata_inline
                                ((ulong *)
                                 Method_System_Collections_Generic_Dictionary<object,_Transform>__ctor__
                                );
            pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar11);
            NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(pEVar14,uVar8,0);
            pMVar12 = (MethodInfo *)
                      il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000210);
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar14,pMVar12);
          }
          uVar8 = Activator_CreateInstance_m09F9CF47F0DBCC75F924E38D323229E45615F190
                            (*(undefined8 *)(unaff_x29 + -8),1,*(byte *)(unaff_x29 + -0x4e) & 1,0);
          *(undefined8 *)(unaff_x29 + -0x48) = uVar8;
        }
        else {
          pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x78);
          iVar1 = *(int *)(unaff_x29 + -0xc);
          pBVar22 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x18);
          pOVar15 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
          pCVar20 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x28);
          pvVar5 = (void *)CastclassClass(pIVar7,(Il2CppClass *)*in_stack_00000200);
          NullCheck(pvVar5);
          pIVar7 = (Il2CppObject *)CastclassClass(pIVar7,(Il2CppClass *)*in_stack_00000200);
          uVar8 = VirtualFuncInvoker4<Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
                  ::Invoke(0x29,pIVar7,iVar1,pBVar22,pOVar15,pCVar20);
          *(undefined8 *)(unaff_x29 + -0x48) = uVar8;
          if (*(long *)(unaff_x29 + -0x80) != 0) {
            pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x18);
            pIVar21 = *(Il2CppObject **)(unaff_x29 + -0x80);
            NullCheck(pIVar7);
            VirtualActionInvoker2<ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,Il2CppObject*>
            ::Invoke(7,pIVar7,(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)
                              (unaff_x29 + -0x20),pIVar21);
          }
        }
        return *(undefined8 *)(unaff_x29 + -0x48);
      }
      pOVar15 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
      iVar1 = *(int *)(unaff_x29 + -0x84);
      NullCheck(pOVar15);
      lVar4 = ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar15,(long)iVar1);
    } while (lVar4 == 0);
    in_stack_00000440 = *(Il2CppArray **)(unaff_x29 + -0x68);
    in_stack_0000043c = *(int *)(unaff_x29 + -0x84);
    in_stack_00000430 =
         *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x20);
  } while( true );
}


