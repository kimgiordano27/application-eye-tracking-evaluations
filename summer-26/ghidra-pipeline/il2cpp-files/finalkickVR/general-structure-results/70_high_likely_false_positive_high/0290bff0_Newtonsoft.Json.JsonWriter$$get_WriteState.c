/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$get_WriteState
ENTRY_POINT: 0290bff0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


undefined8 Newtonsoft_Json_JsonWriter__get_WriteState(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  Il2CppArray *this;
  void *pvVar9;
  Il2CppClass *pIVar10;
  Exception_t *pEVar11;
  MethodInfo *pMVar12;
  CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 *pCVar13;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *this_00;
  Il2CppObject *pIVar14;
  PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7 *pPVar15;
  List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB *pLVar16;
  MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 *pMVar17;
  MethodInfo_t *pMVar18;
  Il2CppObject *pIVar19;
  MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A *pMVar20;
  ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 *pPVar21;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *pSVar22;
  undefined8 uVar23;
  Il2CppObject *pIVar24;
  Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 *pBVar25;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *pOVar26;
  long unaff_x29;
  undefined8 *in_stack_00000280;
  undefined8 *in_stack_00000288;
  undefined8 *in_stack_00000290;
  undefined8 *in_stack_00000298;
  undefined8 *in_stack_000002a0;
  undefined8 *in_stack_000002a8;
  undefined8 *in_stack_000002b0;
  undefined8 *in_stack_000002b8;
  undefined8 *in_stack_000002c0;
  undefined8 *in_stack_000002c8;
  undefined8 *in_stack_000002d0;
  undefined8 *in_stack_000002d8;
  ulong *in_stack_000002e0;
  ulong *in_stack_000002e8;
  ulong *in_stack_000002f0;
  ulong *in_stack_00000300;
  Il2CppObject *in_stack_00000b40;
  int in_stack_00000b4c;
  FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8 *in_stack_00000b50;
  Il2CppObject *in_stack_00000b58;
  
  pCVar13 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x48);
  NullCheck(in_stack_00000b40);
  uVar6 = VirtualFuncInvoker4<FieldInfo_t*,int,FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*,Il2CppObject*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
          ::Invoke(4,in_stack_00000b40,in_stack_00000b4c,in_stack_00000b50,in_stack_00000b58,pCVar13
                  );
  *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
  bVar2 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B
                    (*(undefined8 *)(unaff_x29 + -0x78),0);
  if ((bVar2 & 1) == 0) {
    if ((*(uint *)(unaff_x29 + -0x1c) & 0xfff300) == 0) {
      uVar6 = VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -0x10));
      uVar23 = *(undefined8 *)(unaff_x29 + -0x18);
      pIVar10 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Runtime_Remoting_RemotingServices_GetMethodBaseFromMethodMessage__
                          );
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      MissingFieldException__ctor_m24E215239967EC6B86046A5BB7F1877EC4777B36(pEVar11,uVar6,uVar23,0);
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    *(bool *)(unaff_x29 + -0x5f) = (*(uint *)(unaff_x29 + -0x1c) & 0x1000) != 0;
    *(bool *)(unaff_x29 + -0x60) = (*(uint *)(unaff_x29 + -0x1c) & 0x2000) != 0;
    if ((*(byte *)(unaff_x29 + -0x5f) & 1) != 0 || (*(byte *)(unaff_x29 + -0x60) & 1) != 0) {
      if ((*(byte *)(unaff_x29 + -0x5f) & 1) == 0) {
        if ((*(uint *)(unaff_x29 + -0x1c) >> 8 & 1) != 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_WebSocketSharp_Net_ResponseStream_EndWrite__);
          uVar6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          pIVar10 = (Il2CppClass *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e0);
          pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
          uVar23 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e8);
          ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar11,uVar6,uVar23,0);
          pMVar12 = (MethodInfo *)
                    il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar11,pMVar12);
        }
      }
      else if ((*(byte *)(unaff_x29 + -0x60) & 1) != 0) {
        il2cpp_codegen_initialize_runtime_metadata_inline
                  ((ulong *)Method_WebSocketSharp_Net_ResponseStream_EndRead__);
        uVar6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
        pIVar10 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e0);
        pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
        uVar23 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e8);
        ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar11,uVar6,uVar23,0);
        pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0)
        ;
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar11,pMVar12);
      }
    }
    *(undefined8 *)(unaff_x29 + -0x68) = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    if ((*(uint *)(unaff_x29 + -0x1c) >> 8 & 1) != 0) {
      pIVar19 = (Il2CppObject *)
                VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                ::Invoke(0x5e,*(Il2CppObject **)(unaff_x29 + -0x10),
                         *(String_t **)(unaff_x29 + -0x18),8,*(int *)(unaff_x29 + -0x1c));
      uVar6 = IsInst(pIVar19,(Il2CppClass *)*in_stack_000002b0);
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0;
      *(undefined4 *)(unaff_x29 + -0xb4) = 0;
      while (iVar1 = *(int *)(unaff_x29 + -0xb4), pvVar9 = *(void **)(unaff_x29 + -0xa8),
            NullCheck(pvVar9), iVar1 < (int)*(undefined8 *)((long)pvVar9 + 0x18)) {
        pMVar17 = *(MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 **)
                   (unaff_x29 + -0xa8);
        iVar1 = *(int *)(unaff_x29 + -0xb4);
        NullCheck(pMVar17);
        uVar6 = MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::GetAt
                          (pMVar17,(long)iVar1);
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
        pIVar19 = *(Il2CppObject **)(unaff_x29 + -0xc0);
        uVar4 = *(undefined4 *)(unaff_x29 + -0x1c);
        uVar6 = SZArrayNew((Il2CppClass *)*in_stack_000002d0,*(uint *)(unaff_x29 + -0x5c));
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000002c8);
        uVar23 = CastclassClass(pIVar19,(Il2CppClass *)*in_stack_000002c0);
        bVar2 = RuntimeType_FilterApplyMethodInfo_m31BFFFB6DA0955CF8CAD0822E2D2944E3888A215
                          (uVar23,uVar4,3,uVar6,0);
        if ((bVar2 & 1) != 0) {
          bVar2 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1
                            (*(undefined8 *)(unaff_x29 + -0x70),0);
          if ((bVar2 & 1) == 0) {
            if (*(long *)(unaff_x29 + -0xb0) == 0) {
              pvVar9 = *(void **)(unaff_x29 + -0xa8);
              NullCheck(pvVar9);
              pLVar16 = (List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB *)
                        il2cpp_codegen_object_new((Il2CppClass *)*in_stack_000002a8);
              List_1__ctor_mDBBA12803E29C5AA7B51AF137690A226F1E8A99F
                        (pLVar16,(int)*(undefined8 *)((long)pvVar9 + 0x18),
                         (MethodInfo *)*in_stack_00000298);
              *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xb0) = pLVar16;
              pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xb0);
              pMVar18 = *(MethodInfo_t **)(unaff_x29 + -0x70);
              NullCheck(pLVar16);
              List_1_Add_mF8C65449AF6B15906CE1E82754FA5D89CADEB217_inline
                        (pLVar16,pMVar18,(MethodInfo *)*in_stack_00000288);
            }
            pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xb0);
            pMVar18 = *(MethodInfo_t **)(unaff_x29 + -0xc0);
            NullCheck(pLVar16);
            List_1_Add_mF8C65449AF6B15906CE1E82754FA5D89CADEB217_inline
                      (pLVar16,pMVar18,(MethodInfo *)*in_stack_00000288);
          }
          else {
            *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xc0);
          }
        }
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xb4),1);
        *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
      }
      if (*(long *)(unaff_x29 + -0xb0) != 0) {
        pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xb0);
        NullCheck(pLVar16);
        uVar5 = List_1_get_Count_m3B4EC7BA118AE7ABFF9EFFA5B5E389FE66AEEA46_inline
                          (pLVar16,(MethodInfo *)*in_stack_000002a0);
        uVar6 = SZArrayNew((Il2CppClass *)*in_stack_000002b0,uVar5);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar6;
        pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xb0);
        pMVar17 = *(MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 **)
                   (unaff_x29 + -0x68);
        NullCheck(pLVar16);
        List_1_CopyTo_m277C8656E1F2552D5BAE74EAD2AE09B7DEC53FA1
                  (pLVar16,pMVar17,(MethodInfo *)*in_stack_00000290);
      }
    }
    bVar2 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1
                      (*(undefined8 *)(unaff_x29 + -0x70),0);
    if ((bVar2 & 1 & *(byte *)(unaff_x29 + -0x5f) & 1) != 0 ||
        (*(byte *)(unaff_x29 + -0x60) & 1) != 0) {
      pIVar19 = (Il2CppObject *)
                VirtualFuncInvoker3<MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*,String_t*,int,int>
                ::Invoke(0x5e,*(Il2CppObject **)(unaff_x29 + -0x10),
                         *(String_t **)(unaff_x29 + -0x18),0x10,*(int *)(unaff_x29 + -0x1c));
      uVar6 = IsInst(pIVar19,*(Il2CppClass **)Method_System_Net_FtpWebRequest_TimerCallback__);
      *(undefined8 *)(unaff_x29 + -200) = uVar6;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0;
      *(undefined4 *)(unaff_x29 + -0xd4) = 0;
      while (iVar1 = *(int *)(unaff_x29 + -0xd4), pvVar9 = *(void **)(unaff_x29 + -200),
            NullCheck(pvVar9), iVar1 < (int)*(undefined8 *)((long)pvVar9 + 0x18)) {
        *(undefined8 *)(unaff_x29 + -0xe0) = 0;
        if ((*(byte *)(unaff_x29 + -0x60) & 1) == 0) {
          pPVar15 = *(PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7 **)
                     (unaff_x29 + -200);
          iVar1 = *(int *)(unaff_x29 + -0xd4);
          NullCheck(pPVar15);
          pIVar19 = (Il2CppObject *)
                    PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                              (pPVar15,(long)iVar1);
          NullCheck(pIVar19);
          uVar6 = VirtualFuncInvoker1<MethodInfo_t*,bool>::Invoke(0x18,pIVar19,true);
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
        }
        else {
          pPVar15 = *(PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7 **)
                     (unaff_x29 + -200);
          iVar1 = *(int *)(unaff_x29 + -0xd4);
          NullCheck(pPVar15);
          pIVar19 = (Il2CppObject *)
                    PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7::GetAt
                              (pPVar15,(long)iVar1);
          NullCheck(pIVar19);
          uVar6 = VirtualFuncInvoker1<MethodInfo_t*,bool>::Invoke(0x1a,pIVar19,true);
          *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
        }
        bVar2 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1
                          (*(undefined8 *)(unaff_x29 + -0xe0),0);
        if ((bVar2 & 1) == 0) {
          pIVar19 = *(Il2CppObject **)(unaff_x29 + -0xe0);
          uVar4 = *(undefined4 *)(unaff_x29 + -0x1c);
          uVar6 = SZArrayNew((Il2CppClass *)*in_stack_000002d0,*(uint *)(unaff_x29 + -0x5c));
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000002c8);
          uVar23 = CastclassClass(pIVar19,(Il2CppClass *)*in_stack_000002c0);
          bVar2 = RuntimeType_FilterApplyMethodInfo_m31BFFFB6DA0955CF8CAD0822E2D2944E3888A215
                            (uVar23,uVar4,3,uVar6,0);
          if ((bVar2 & 1) != 0) {
            bVar2 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1
                              (*(undefined8 *)(unaff_x29 + -0x70),0);
            if ((bVar2 & 1) == 0) {
              if (*(long *)(unaff_x29 + -0xd0) == 0) {
                pvVar9 = *(void **)(unaff_x29 + -200);
                NullCheck(pvVar9);
                pLVar16 = (List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB *)
                          il2cpp_codegen_object_new((Il2CppClass *)*in_stack_000002a8);
                List_1__ctor_mDBBA12803E29C5AA7B51AF137690A226F1E8A99F
                          (pLVar16,(int)*(undefined8 *)((long)pvVar9 + 0x18),
                           (MethodInfo *)*in_stack_00000298);
                *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xd0) = pLVar16;
                pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xd0);
                pMVar18 = *(MethodInfo_t **)(unaff_x29 + -0x70);
                NullCheck(pLVar16);
                List_1_Add_mF8C65449AF6B15906CE1E82754FA5D89CADEB217_inline
                          (pLVar16,pMVar18,(MethodInfo *)*in_stack_00000288);
              }
              pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xd0);
              pMVar18 = *(MethodInfo_t **)(unaff_x29 + -0xe0);
              NullCheck(pLVar16);
              List_1_Add_mF8C65449AF6B15906CE1E82754FA5D89CADEB217_inline
                        (pLVar16,pMVar18,(MethodInfo *)*in_stack_00000288);
            }
            else {
              *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xe0);
            }
          }
        }
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xd4),1);
        *(undefined4 *)(unaff_x29 + -0xd4) = uVar4;
      }
      if (*(long *)(unaff_x29 + -0xd0) != 0) {
        pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xd0);
        NullCheck(pLVar16);
        uVar5 = List_1_get_Count_m3B4EC7BA118AE7ABFF9EFFA5B5E389FE66AEEA46_inline
                          (pLVar16,(MethodInfo *)*in_stack_000002a0);
        uVar6 = SZArrayNew((Il2CppClass *)*in_stack_000002b0,uVar5);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar6;
        pLVar16 = *(List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB **)(unaff_x29 + -0xd0);
        pMVar17 = *(MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 **)
                   (unaff_x29 + -0x68);
        NullCheck(pLVar16);
        List_1_CopyTo_m277C8656E1F2552D5BAE74EAD2AE09B7DEC53FA1
                  (pLVar16,pMVar17,(MethodInfo *)*in_stack_00000290);
      }
    }
    bVar2 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8
                      (*(undefined8 *)(unaff_x29 + -0x70),0);
    if ((bVar2 & 1) == 0) {
      uVar6 = VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -0x10));
      uVar23 = *(undefined8 *)(unaff_x29 + -0x18);
      pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000300);
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      MissingMethodException__ctor_m040179DA0A2D26E2BE9BE03657D3801969DB5A52(pEVar11,uVar6,uVar23,0)
      ;
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    if ((*(long *)(unaff_x29 + -0x68) == 0) && (*(int *)(unaff_x29 + -0x5c) == 0)) {
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x70);
      NullCheck(pIVar19);
      pvVar9 = (void *)VirtualFuncInvoker0<ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*>
                       ::Invoke(0x28,pIVar19);
      NullCheck(pvVar9);
      if ((*(long *)((long)pvVar9 + 0x18) == 0) && ((*(uint *)(unaff_x29 + -0x1c) >> 0x12 & 1) == 0)
         ) {
        pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x70);
        pIVar24 = *(Il2CppObject **)(unaff_x29 + -0x30);
        iVar1 = *(int *)(unaff_x29 + -0x1c);
        pBVar25 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x28);
        pOVar26 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38);
        pCVar13 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x48);
        NullCheck(pIVar19);
        uVar6 = VirtualFuncInvoker5<Il2CppObject*,Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
                ::Invoke(0x21,pIVar19,pIVar24,iVar1,pBVar25,pOVar26,pCVar13);
        *(undefined8 *)(unaff_x29 + -8) = uVar6;
        goto LAB_0290d470;
      }
    }
    if (*(long *)(unaff_x29 + -0x68) == 0) {
      this = (Il2CppArray *)SZArrayNew((Il2CppClass *)*in_stack_000002b0,1);
      pMVar18 = *(MethodInfo_t **)(unaff_x29 + -0x70);
      NullCheck(this);
      ArrayElementTypeCheck(this,pMVar18);
      MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265::SetAt
                ((MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265 *)this,0,pMVar18);
      *(Il2CppArray **)(unaff_x29 + -0x68) = this;
    }
    if (*(long *)(unaff_x29 + -0x38) == 0) {
      uVar6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                        (*(MethodInfo **)
                          Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
      *(undefined8 *)(unaff_x29 + -0x38) = uVar6;
    }
    *(undefined8 *)(unaff_x29 + -0xe8) = 0;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0;
    pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x28);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x68);
    pMVar20 = *(MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A **)(unaff_x29 + -0xf8);
    pPVar21 = *(ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364 **)
               (unaff_x29 + -0x40);
    pCVar13 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x48);
    pSVar22 = *(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(unaff_x29 + -0x50);
    NullCheck(pIVar19);
    uVar6 = VirtualFuncInvoker7<MethodBase_t*,int,MethodBaseU5BU5D_t15BC560E259082DA6062445EE4E6C3BEE6C7AD8A*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*,StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*,Il2CppObject**>
            ::Invoke(5,pIVar19,iVar1,pMVar20,
                     (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38),
                     pPVar21,pCVar13,pSVar22,(Il2CppObject **)(unaff_x29 + -0xe8));
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
    bVar2 = MethodBase_op_Equality_mB075E658C5D8860D1707CFF2D430D05284FD2EAD
                      (*(undefined8 *)(unaff_x29 + -0xf0),0);
    if ((bVar2 & 1) != 0) {
      uVar6 = VirtualFuncInvoker0<String_t*>::Invoke(0x1c,*(Il2CppObject **)(unaff_x29 + -0x10));
      uVar23 = *(undefined8 *)(unaff_x29 + -0x18);
      pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000300);
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      MissingMethodException__ctor_m040179DA0A2D26E2BE9BE03657D3801969DB5A52(pEVar11,uVar6,uVar23,0)
      ;
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    pIVar19 = *(Il2CppObject **)(unaff_x29 + -0xf0);
    pIVar24 = *(Il2CppObject **)(unaff_x29 + -0x30);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pBVar25 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x28);
    pOVar26 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38);
    pCVar13 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x48);
    pvVar9 = (void *)CastclassClass(pIVar19,(Il2CppClass *)*in_stack_000002b8);
    NullCheck(pvVar9);
    pIVar19 = (Il2CppObject *)CastclassClass(pIVar19,(Il2CppClass *)*in_stack_000002b8);
    uVar6 = VirtualFuncInvoker5<Il2CppObject*,Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
            ::Invoke(0x21,pIVar19,pIVar24,iVar1,pBVar25,pOVar26,pCVar13);
    if (*(long *)(unaff_x29 + -0xe8) != 0) {
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x28);
      pIVar24 = *(Il2CppObject **)(unaff_x29 + -0xe8);
      NullCheck(pIVar19);
      VirtualActionInvoker2<ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**,Il2CppObject*>
      ::Invoke(7,pIVar19,
               (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38),
               pIVar24);
    }
    *(undefined8 *)(unaff_x29 + -8) = uVar6;
    goto LAB_0290d470;
  }
  pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x78);
  NullCheck(pIVar19);
  pvVar9 = (void *)VirtualFuncInvoker0<Type_t*>::Invoke(0x13,pIVar19);
  NullCheck(pvVar9);
  bVar2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(pvVar9,0);
  if ((bVar2 & 1) == 0) {
    pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x78);
    NullCheck(pIVar19);
    lVar7 = VirtualFuncInvoker0<Type_t*>::Invoke(0x13,pIVar19);
    uVar6 = *(undefined8 *)
             Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_Init__;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000002d8);
    lVar8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar6,0);
    if (lVar7 == lVar8) goto LAB_0290c108;
  }
  else {
LAB_0290c108:
    if ((*(uint *)(unaff_x29 + -0x1c) >> 10 & 1) == 0) {
      uVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x5c),1);
      *(undefined4 *)(unaff_x29 + -0x84) = uVar4;
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x5c);
    }
    if (0 < *(int *)(unaff_x29 + -0x84)) {
      uVar6 = SZArrayNew(*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>__ctor__
                         ,*(uint *)(unaff_x29 + -0x84));
      *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
      *(undefined4 *)(unaff_x29 + -0x9c) = 0;
      while (*(int *)(unaff_x29 + -0x9c) < *(int *)(unaff_x29 + -0x84)) {
        this_00 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x90);
        iVar1 = *(int *)(unaff_x29 + -0x9c);
        pOVar26 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38);
        iVar3 = *(int *)(unaff_x29 + -0x9c);
        NullCheck(pOVar26);
        pIVar19 = (Il2CppObject *)
                  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar26,(long)iVar3)
        ;
        pvVar9 = (void *)Castclass(pIVar19,(Il2CppClass *)*in_stack_00000280);
        NullCheck(pvVar9);
        pIVar10 = (Il2CppClass *)*in_stack_00000280;
        pIVar19 = (Il2CppObject *)Castclass(pIVar19,(Il2CppClass *)*in_stack_00000280);
        iVar3 = InterfaceFuncInvoker1<int,Il2CppObject*>::Invoke
                          (7,pIVar10,pIVar19,(Il2CppObject *)0x0);
        NullCheck(this_00);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(this_00,(long)iVar1,iVar3);
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x9c),1);
        *(undefined4 *)(unaff_x29 + -0x9c) = uVar4;
      }
      pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x78);
      pIVar24 = *(Il2CppObject **)(unaff_x29 + -0x30);
      NullCheck(pIVar19);
      pIVar19 = (Il2CppObject *)
                VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke(0x1b,pIVar19,pIVar24);
      uVar6 = CastclassClass(pIVar19,*(Il2CppClass **)
                                      Method_System_Collections_Generic_List<InputEventPtr>_get_Count__
                            );
      *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
      if ((*(uint *)(unaff_x29 + -0x1c) >> 10 & 1) == 0) {
        pvVar9 = *(void **)(unaff_x29 + -0x98);
        pOVar26 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38);
        iVar1 = *(int *)(unaff_x29 + -0x84);
        NullCheck(pOVar26);
        uVar6 = ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar26,(long)iVar1);
        uVar23 = *(undefined8 *)(unaff_x29 + -0x90);
        NullCheck(pvVar9);
        Array_SetValue_m71595F7B1BD3262D3BE2D03B3F8A7A0F51482917(pvVar9,uVar6,uVar23,0);
        *(undefined8 *)(unaff_x29 + -8) = 0;
      }
      else {
        pvVar9 = *(void **)(unaff_x29 + -0x98);
        uVar6 = *(undefined8 *)(unaff_x29 + -0x90);
        NullCheck(pvVar9);
        uVar6 = Array_GetValue_m577622C9D6176FAC9F6143011DA3F1CF85146FE0(pvVar9,uVar6,0);
        *(undefined8 *)(unaff_x29 + -8) = uVar6;
      }
      goto LAB_0290d470;
    }
  }
  if ((*(byte *)(unaff_x29 + -0x5d) & 1) == 0) {
    if (*(int *)(unaff_x29 + -0x5c) != 1) {
      il2cpp_codegen_initialize_runtime_metadata_inline
                ((ulong *)Method_WebSocketSharp_Net_ResponseStream_BeginWrite__);
      uVar6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
      pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e0);
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      uVar23 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e8);
      ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar11,uVar6,uVar23,0);
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    pIVar24 = *(Il2CppObject **)(unaff_x29 + -0x78);
    pIVar14 = *(Il2CppObject **)(unaff_x29 + -0x30);
    pOVar26 = *(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x38);
    NullCheck(pOVar26);
    pIVar19 = (Il2CppObject *)
              ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::GetAt(pOVar26,0);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pBVar25 = *(Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235 **)(unaff_x29 + -0x28);
    pCVar13 = *(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0 **)(unaff_x29 + -0x48);
    NullCheck(pIVar24);
    VirtualActionInvoker5<Il2CppObject*,Il2CppObject*,int,Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*,CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*>
    ::Invoke(0x1d,pIVar24,pIVar14,pIVar19,iVar1,pBVar25,pCVar13);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    if (*(int *)(unaff_x29 + -0x5c) != 0) {
      il2cpp_codegen_initialize_runtime_metadata_inline
                ((ulong *)Method_WebSocketSharp_Net_ResponseStream_BeginRead__);
      uVar6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
      pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e0);
      pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
      uVar23 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002e8);
      ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar11,uVar6,uVar23,0);
      pMVar12 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000002f0);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar11,pMVar12);
    }
    pIVar19 = *(Il2CppObject **)(unaff_x29 + -0x78);
    pIVar24 = *(Il2CppObject **)(unaff_x29 + -0x30);
    NullCheck(pIVar19);
    uVar6 = VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke(0x1b,pIVar19,pIVar24);
    *(undefined8 *)(unaff_x29 + -8) = uVar6;
  }
LAB_0290d470:
  return *(undefined8 *)(unaff_x29 + -8);
}


