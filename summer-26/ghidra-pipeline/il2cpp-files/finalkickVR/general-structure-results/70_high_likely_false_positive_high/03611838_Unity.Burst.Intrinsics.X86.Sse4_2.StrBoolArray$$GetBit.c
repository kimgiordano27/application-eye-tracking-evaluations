/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_2.StrBoolArray$$GetBit
ENTRY_POINT: 03611838
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_4
*/


undefined4 Unity_Burst_Intrinsics_X86_Sse4_2_StrBoolArray__GetBit(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  MethodInfo *pMVar6;
  long lVar7;
  undefined8 uVar8;
  Exception_t *pEVar9;
  void *pvVar10;
  long unaff_x29;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  int *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong *in_stack_000000b0;
  byte bStack00000000000000d6;
  byte bStack00000000000000d7;
  
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined1 *)(unaff_x29 + -0x45) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_12015);
  in_stack_00000080[0x66] = uVar4;
  U3CU3Ec__DisplayClass31_0__ctor_mC80F22193462B0EF9A706D5ECFDADC54E5120638
            (in_stack_00000080[0x66],in_stack_00000078);
  in_stack_00000080[0x8b] = in_stack_00000080[0x66];
  in_stack_00000080[0x65] = in_stack_00000080[0x8b];
  NullCheck((void *)in_stack_00000080[0x65]);
  *(undefined8 *)(in_stack_00000080[0x65] + 0x10) = in_stack_00000080[0x91];
  Il2CppCodeGenWriteBarrier
            ((void **)(in_stack_00000080[0x65] + 0x10),(void *)in_stack_00000080[0x91]);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
  bVar1 = NetEventSource_get_IsEnabled_mCDF5C44FDAF5233434ECA169E62C20857366CF0D(in_stack_00000078);
  if ((bVar1 & 1) != 0) {
    uVar4 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                       ,2);
    in_stack_00000080[99] = uVar4;
    in_stack_00000080[0x62] = in_stack_00000080[99];
    in_stack_00000080[0x61] = in_stack_00000080[0x90];
    if (in_stack_00000080[0x61] == 0) {
      *(undefined4 *)((long)in_stack_00000080 + 0x40c) = 0;
      in_stack_00000080[0x80] = in_stack_00000080[0x62];
      in_stack_00000080[0x7f] = in_stack_00000080[0x62];
      in_stack_00000080[0x7e] = *in_stack_000000a8;
      in_stack_00000080[0x7d] = in_stack_00000080[0x91];
      in_stack_00000080[0x7c] = 0;
      *(undefined4 *)((long)in_stack_00000080 + 0x3dc) =
           *(undefined4 *)((long)in_stack_00000080 + 0x40c);
      in_stack_00000080[0x7a] = in_stack_00000080[0x80];
      in_stack_00000080[0x79] = in_stack_00000080[0x7f];
      in_stack_00000080[0x78] = in_stack_00000080[0x7e];
      in_stack_00000080[0x77] = in_stack_00000080[0x7d];
    }
    else {
      *(undefined4 *)((long)in_stack_00000080 + 0x434) = 0;
      in_stack_00000080[0x85] = in_stack_00000080[0x62];
      in_stack_00000080[0x84] = in_stack_00000080[0x62];
      in_stack_00000080[0x83] = *in_stack_000000a8;
      in_stack_00000080[0x82] = in_stack_00000080[0x91];
      in_stack_00000080[0x60] = in_stack_00000080[0x90];
      NullCheck((void *)in_stack_00000080[0x60]);
      in_stack_00000080[0x5f] = *(undefined8 *)(in_stack_00000080[0x60] + 0x10);
      in_stack_00000080[0x7c] = in_stack_00000080[0x5f];
      *(undefined4 *)((long)in_stack_00000080 + 0x3dc) =
           *(undefined4 *)((long)in_stack_00000080 + 0x434);
      in_stack_00000080[0x7a] = in_stack_00000080[0x85];
      in_stack_00000080[0x79] = in_stack_00000080[0x84];
      in_stack_00000080[0x78] = in_stack_00000080[0x83];
      in_stack_00000080[0x77] = in_stack_00000080[0x82];
    }
    NullCheck((void *)in_stack_00000080[0x7a]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_00000080[0x7a],(void *)in_stack_00000080[0x7c]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_00000080[0x7a],
               (long)*(int *)((long)in_stack_00000080 + 0x3dc),
               (Il2CppObject *)in_stack_00000080[0x7c]);
    in_stack_00000080[0x5e] = in_stack_00000080[0x79];
    in_stack_00000080[0x5d] = in_stack_00000080[0x8f];
    if (in_stack_00000080[0x5d] == 0) {
      *(undefined4 *)((long)in_stack_00000080 + 0x38c) = 1;
      in_stack_00000080[0x70] = in_stack_00000080[0x5e];
      in_stack_00000080[0x6f] = in_stack_00000080[0x5e];
      in_stack_00000080[0x6e] = in_stack_00000080[0x78];
      in_stack_00000080[0x6d] = in_stack_00000080[0x77];
      in_stack_00000080[0x6c] = 0;
      *(undefined4 *)((long)in_stack_00000080 + 0x35c) =
           *(undefined4 *)((long)in_stack_00000080 + 0x38c);
      in_stack_00000080[0x6a] = in_stack_00000080[0x70];
      in_stack_00000080[0x69] = in_stack_00000080[0x6f];
      in_stack_00000080[0x68] = in_stack_00000080[0x6e];
      in_stack_00000080[0x67] = in_stack_00000080[0x6d];
    }
    else {
      *(undefined4 *)((long)in_stack_00000080 + 0x3b4) = 1;
      in_stack_00000080[0x75] = in_stack_00000080[0x5e];
      in_stack_00000080[0x74] = in_stack_00000080[0x5e];
      in_stack_00000080[0x73] = in_stack_00000080[0x78];
      in_stack_00000080[0x72] = in_stack_00000080[0x77];
      in_stack_00000080[0x5c] = in_stack_00000080[0x8f];
      NullCheck((void *)in_stack_00000080[0x5c]);
      in_stack_00000080[0x5b] = *(undefined8 *)(in_stack_00000080[0x5c] + 0x18);
      in_stack_00000080[0x6c] = in_stack_00000080[0x5b];
      *(undefined4 *)((long)in_stack_00000080 + 0x35c) =
           *(undefined4 *)((long)in_stack_00000080 + 0x3b4);
      in_stack_00000080[0x6a] = in_stack_00000080[0x75];
      in_stack_00000080[0x69] = in_stack_00000080[0x74];
      in_stack_00000080[0x68] = in_stack_00000080[0x73];
      in_stack_00000080[0x67] = in_stack_00000080[0x72];
    }
    NullCheck((void *)in_stack_00000080[0x6a]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_00000080[0x6a],(void *)in_stack_00000080[0x6c]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_00000080[0x6a],
               (long)*(int *)((long)in_stack_00000080 + 0x35c),
               (Il2CppObject *)in_stack_00000080[0x6c]);
    uVar4 = FormattableStringFactory_Create_m249A363DE6E0E48E75DF2A771A43BA3CAE2CE27C
                      (in_stack_00000080[0x68],in_stack_00000080[0x69]);
    in_stack_00000080[0x5a] = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
    NetEventSource_Info_m9F8FBBB17D485F5C5A54BB3D08274516B7C4AD16
              (in_stack_00000080[0x67],in_stack_00000080[0x5a],*(undefined8 *)StringLiteral_12020,0)
    ;
  }
  in_stack_00000080[0x59] = in_stack_00000080[0x8f];
  if (in_stack_00000080[0x59] == 0) {
    *(undefined4 *)((long)in_stack_00000080 + 0x494) = 0;
    goto LAB_03612df4;
  }
  in_stack_00000080[0x58] = in_stack_00000080[0x8f];
  NullCheck((void *)in_stack_00000080[0x58]);
  *(undefined4 *)((long)in_stack_00000080 + 700) = *(undefined4 *)(in_stack_00000080[0x58] + 0x14);
  *(undefined4 *)((long)in_stack_00000080 + 0x454) = *(undefined4 *)((long)in_stack_00000080 + 700);
  *(undefined4 *)(in_stack_00000080 + 0x57) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
  if (*(int *)(in_stack_00000080 + 0x57) != 0xdd) {
    *(undefined4 *)((long)in_stack_00000080 + 0x2b4) =
         *(undefined4 *)((long)in_stack_00000080 + 0x454);
    *(undefined4 *)(in_stack_00000080[0x91] + 0x104) =
         *(undefined4 *)((long)in_stack_00000080 + 0x2b4);
    in_stack_00000080[0x55] = in_stack_00000080[0x8f];
    NullCheck((void *)in_stack_00000080[0x55]);
    in_stack_00000080[0x54] = *(undefined8 *)(in_stack_00000080[0x55] + 0x18);
    *(undefined8 *)(in_stack_00000080[0x91] + 0x108) = in_stack_00000080[0x54];
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_00000080[0x91] + 0x108),(void *)in_stack_00000080[0x54]);
  }
  in_stack_00000080[0x53] = in_stack_00000080[0x8f];
  NullCheck((void *)in_stack_00000080[0x53]);
  bVar1 = ResponseDescription_get_InvalidStatusCode_mCC93FF679EC42A75E4C1E07689BF1CBB5F537168
                    (in_stack_00000080[0x53],0);
  if ((bVar1 & 1) != 0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__
                       );
    uVar4 = il2cpp_codegen_object_new(pIVar5);
    in_stack_00000080[0x51] = uVar4;
    uVar8 = in_stack_00000080[0x51];
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_12026);
    WebException__ctor_m6C829021B5388956F84830FC249915324C1453A1(uVar8,uVar4,7,0);
    pEVar9 = (Exception_t *)in_stack_00000080[0x51];
    pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000000b0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar6);
  }
  *(undefined4 *)((long)in_stack_00000080 + 0x284) = *(undefined4 *)(in_stack_00000080[0x91] + 0x58)
  ;
  if (*(int *)((long)in_stack_00000080 + 0x284) == -1) {
    *(undefined4 *)(in_stack_00000080 + 0x50) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
    if (*(int *)(in_stack_00000080 + 0x50) == 0xdc) {
      uVar4 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
                        );
      in_stack_00000080[0x4f] = uVar4;
      StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(in_stack_00000080[0x4f]);
      *(undefined8 *)(in_stack_00000080[0x91] + 0xa0) = in_stack_00000080[0x4f];
      Il2CppCodeGenWriteBarrier
                ((void **)(in_stack_00000080[0x91] + 0xa0),(void *)in_stack_00000080[0x4f]);
      in_stack_00000080[0x4e] = *(undefined8 *)(in_stack_00000080[0x91] + 0xa0);
      in_stack_00000080[0x4d] = *(undefined8 *)(in_stack_00000080[0x91] + 0x108);
      NullCheck((void *)in_stack_00000080[0x4e]);
      uVar4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D
                        (in_stack_00000080[0x4e],in_stack_00000080[0x4d],0);
      in_stack_00000080[0x4c] = uVar4;
      *(undefined4 *)((long)in_stack_00000080 + 0x494) = 1;
    }
    else {
      *(undefined4 *)((long)in_stack_00000080 + 0x25c) =
           *(undefined4 *)((long)in_stack_00000080 + 0x454);
      if (*(int *)((long)in_stack_00000080 + 0x25c) != 0x78) {
        *(undefined4 *)(in_stack_00000080 + 0x4b) = *(undefined4 *)((long)in_stack_00000080 + 0x454)
        ;
        in_stack_00000080[0x4a] = in_stack_00000080[0x8f];
        NullCheck((void *)in_stack_00000080[0x4a]);
        in_stack_00000080[0x49] = *(undefined8 *)(in_stack_00000080[0x4a] + 0x18);
        uVar4 = CommandStream_GenerateException_m16AF53C8700B826E18BC10950729EE134C479E5B
                          (in_stack_00000080[0x91],*(undefined4 *)(in_stack_00000080 + 0x4b),
                           in_stack_00000080[0x49],0);
        in_stack_00000080[0x48] = uVar4;
        pEVar9 = (Exception_t *)in_stack_00000080[0x48];
        pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000000b0);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar9,pMVar6);
      }
      *(undefined4 *)((long)in_stack_00000080 + 0x494) = 3;
    }
    goto LAB_03612df4;
  }
  in_stack_00000080[0x47] = in_stack_00000080[0x90];
  NullCheck((void *)in_stack_00000080[0x47]);
  in_stack_00000080[0x46] = *(undefined8 *)(in_stack_00000080[0x47] + 0x10);
  bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                    (in_stack_00000080[0x46],*(undefined8 *)StringLiteral_12018,0);
  if ((bVar1 & 1) != 0) {
    in_stack_00000080[0x44] = in_stack_00000080[0x8f];
    NullCheck((void *)in_stack_00000080[0x44]);
    bVar1 = ResponseDescription_get_PositiveCompletion_mA8C5CB9FF0E386FAD10146736663344154E4D58C
                      (in_stack_00000080[0x44],0);
    if ((bVar1 & 1) == 0) {
      uVar4 = Encoding_get_Default_mB48FC92A61D1153AC33C2C59F01D7266DF7D155C();
      in_stack_00000080[0x41] = uVar4;
      CommandStream_set_Encoding_mE530EE55B34420E5E4BB74B91D65A6E88B2521FE
                (in_stack_00000080[0x91],in_stack_00000080[0x41],0);
    }
    else {
      uVar4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9();
      in_stack_00000080[0x42] = uVar4;
      CommandStream_set_Encoding_mE530EE55B34420E5E4BB74B91D65A6E88B2521FE
                (in_stack_00000080[0x91],in_stack_00000080[0x42],0);
    }
    *(undefined4 *)((long)in_stack_00000080 + 0x494) = 1;
    goto LAB_03612df4;
  }
  in_stack_00000080[0x40] = in_stack_00000080[0x90];
  NullCheck((void *)in_stack_00000080[0x40]);
  in_stack_00000080[0x3f] = *(undefined8 *)(in_stack_00000080[0x40] + 0x10);
  NullCheck((void *)in_stack_00000080[0x3f]);
  uVar2 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F
                    (in_stack_00000080[0x3f],*(undefined8 *)StringLiteral_12023,0);
  *(undefined4 *)((long)in_stack_00000080 + 500) = uVar2;
  if ((*(int *)((long)in_stack_00000080 + 500) != -1) &&
     (*(undefined4 *)(in_stack_00000080 + 0x3e) = *(undefined4 *)((long)in_stack_00000080 + 0x454),
     *(int *)(in_stack_00000080 + 0x3e) == 0xe6)) {
    *(undefined1 *)(in_stack_00000080[0x91] + 0x100) = 1;
    *(undefined4 *)((long)in_stack_00000080 + 0x1ec) =
         *(undefined4 *)(in_stack_00000080[0x91] + 0x58);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)((long)in_stack_00000080 + 0x1ec),1);
    *(undefined4 *)(in_stack_00000080[0x91] + 0x58) = uVar2;
  }
  in_stack_00000080[0x3c] = in_stack_00000080[0x8f];
  NullCheck((void *)in_stack_00000080[0x3c]);
  bVar1 = ResponseDescription_get_TransientFailure_m79235F6AAD03B39148D25332EB0784E5C4696807
                    (in_stack_00000080[0x3c],0);
  if ((bVar1 & 1) != 0) {
LAB_036120d8:
    *(undefined4 *)(in_stack_00000080 + 0x39) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
    if (*(int *)(in_stack_00000080 + 0x39) == 0x1a5) {
      CommandStream_MarkAsRecoverableFailure_m8577AAD7B31DAD61EAB4594E75EFEBB58B83E2B3
                (in_stack_00000080[0x91],0);
    }
    *(undefined4 *)((long)in_stack_00000080 + 0x1c4) =
         *(undefined4 *)((long)in_stack_00000080 + 0x454);
    in_stack_00000080[0x37] = in_stack_00000080[0x8f];
    NullCheck((void *)in_stack_00000080[0x37]);
    in_stack_00000080[0x36] = *(undefined8 *)(in_stack_00000080[0x37] + 0x18);
    uVar4 = CommandStream_GenerateException_m16AF53C8700B826E18BC10950729EE134C479E5B
                      (in_stack_00000080[0x91],*(undefined4 *)((long)in_stack_00000080 + 0x1c4),
                       in_stack_00000080[0x36],0);
    in_stack_00000080[0x35] = uVar4;
    pEVar9 = (Exception_t *)in_stack_00000080[0x35];
    pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000000b0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar6);
  }
  in_stack_00000080[0x3a] = in_stack_00000080[0x8f];
  NullCheck((void *)in_stack_00000080[0x3a]);
  bVar1 = ResponseDescription_get_PermanentFailure_mD250931175B99B4B6558297A889ED479FC292843
                    (in_stack_00000080[0x3a],0);
  if ((bVar1 & 1) != 0) goto LAB_036120d8;
  if (*(char *)(in_stack_00000080[0x91] + 0x100) != '\x01') {
    in_stack_00000080[0x33] = in_stack_00000080[0x90];
    NullCheck((void *)in_stack_00000080[0x33]);
    in_stack_00000080[0x32] = *(undefined8 *)(in_stack_00000080[0x33] + 0x10);
    NullCheck((void *)in_stack_00000080[0x32]);
    uVar2 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F
                      (in_stack_00000080[0x32],*(undefined8 *)StringLiteral_12019,0);
    *(undefined4 *)((long)in_stack_00000080 + 0x18c) = uVar2;
    if (*(int *)((long)in_stack_00000080 + 0x18c) != -1) {
      *(undefined4 *)(in_stack_00000080 + 0x31) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
      if ((*(int *)(in_stack_00000080 + 0x31) != 0x14c) &&
         (*(undefined4 *)((long)in_stack_00000080 + 0x184) =
               *(undefined4 *)((long)in_stack_00000080 + 0x454),
         *(int *)((long)in_stack_00000080 + 0x184) != 0xe6)) {
        *(undefined4 *)(in_stack_00000080 + 0x30) = *(undefined4 *)((long)in_stack_00000080 + 0x454)
        ;
        in_stack_00000080[0x2f] = in_stack_00000080[0x8f];
        NullCheck((void *)in_stack_00000080[0x2f]);
        in_stack_00000080[0x2e] = *(undefined8 *)(in_stack_00000080[0x2f] + 0x18);
        uVar4 = CommandStream_GenerateException_m16AF53C8700B826E18BC10950729EE134C479E5B
                          (in_stack_00000080[0x91],*(undefined4 *)(in_stack_00000080 + 0x30),
                           in_stack_00000080[0x2e],0);
        in_stack_00000080[0x2d] = uVar4;
        pEVar9 = (Exception_t *)in_stack_00000080[0x2d];
        pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000000b0);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar9,pMVar6);
      }
      *(undefined1 *)(in_stack_00000080[0x91] + 0x100) = 1;
    }
  }
  in_stack_00000080[0x2c] = in_stack_00000080[0x90];
  NullCheck((void *)in_stack_00000080[0x2c]);
  bVar1 = PipelineEntry_HasFlag_m1C72335CAD79960E9FCCB190541F222A76F00F96
                    (in_stack_00000080[0x2c],4,0);
  if ((bVar1 & 1) != 0) {
    in_stack_00000080[0x2a] = in_stack_00000080[0x8f];
    NullCheck((void *)in_stack_00000080[0x2a]);
    bVar1 = ResponseDescription_get_PositiveCompletion_mA8C5CB9FF0E386FAD10146736663344154E4D58C
                      (in_stack_00000080[0x2a],0);
    if ((bVar1 & 1) == 0) {
      in_stack_00000080[0x28] = in_stack_00000080[0x8f];
      NullCheck((void *)in_stack_00000080[0x28]);
      bVar1 = ResponseDescription_get_PositiveIntermediate_mEE58E298D3A383D8D2A8EB537B53AAC7A9B61348
                        (in_stack_00000080[0x28],0);
      if ((bVar1 & 1) == 0) goto LAB_036123f0;
    }
    in_stack_00000080[0x26] = in_stack_00000080[0x90];
    in_stack_00000080[0x25] = in_stack_00000080[0x8f];
    bVar1 = *(byte *)(unaff_x29 + -0x21);
    in_stack_00000080[0x23] = in_stack_00000080[0x8d];
    uVar2 = FtpControlStream_QueueOrCreateDataConection_m8B8FFECC845071AF8089070B306555E05701DBB4
                      (in_stack_00000080[0x91],in_stack_00000080[0x26],in_stack_00000080[0x25],
                       bVar1 & 1,in_stack_00000080[0x23],unaff_x29 + -0x45,0);
    *(undefined4 *)((long)in_stack_00000080 + 0x114) = uVar2;
    *(undefined4 *)((long)in_stack_00000080 + 0x44c) =
         *(undefined4 *)((long)in_stack_00000080 + 0x114);
    if ((*(byte *)(unaff_x29 + -0x45) & 1) == 0) {
      *(undefined4 *)((long)in_stack_00000080 + 0x10c) =
           *(undefined4 *)((long)in_stack_00000080 + 0x44c);
      *(undefined4 *)((long)in_stack_00000080 + 0x494) =
           *(undefined4 *)((long)in_stack_00000080 + 0x10c);
      goto LAB_03612df4;
    }
  }
LAB_036123f0:
  *(undefined4 *)(in_stack_00000080 + 0x21) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
  if ((*(int *)(in_stack_00000080 + 0x21) == 0x96) ||
     (*(undefined4 *)((long)in_stack_00000080 + 0x104) =
           *(undefined4 *)((long)in_stack_00000080 + 0x454),
     *(int *)((long)in_stack_00000080 + 0x104) == 0x7d)) {
    in_stack_00000080[0x1f] = *(undefined8 *)(in_stack_00000080[0x91] + 0x88);
    if (in_stack_00000080[0x1f] == 0) {
      *(undefined4 *)((long)in_stack_00000080 + 0x494) = 0;
    }
    else {
      in_stack_00000080[0x1e] = in_stack_00000080[0x90];
      NullCheck((void *)in_stack_00000080[0x1e]);
      bVar1 = PipelineEntry_HasFlag_m1C72335CAD79960E9FCCB190541F222A76F00F96
                        (in_stack_00000080[0x1e],2,0);
      if ((bVar1 & 1) == 0) {
        *(undefined4 *)(in_stack_00000080 + 0x1d) = *(undefined4 *)((long)in_stack_00000080 + 0x454)
        ;
        *(undefined4 *)((long)in_stack_00000080 + 0xe4) = *(undefined4 *)(in_stack_00000080 + 0x1d);
        uVar4 = Box(*(Il2CppClass **)StringLiteral_12013,&stack0x0000032c);
        in_stack_00000080[0x1b] = uVar4;
        in_stack_00000080[0x1a] = in_stack_00000080[0x90];
        NullCheck((void *)in_stack_00000080[0x1a]);
        in_stack_00000080[0x19] = *(undefined8 *)(in_stack_00000080[0x1a] + 0x10);
        uVar4 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02
                          (*(undefined8 *)StringLiteral_12017,in_stack_00000080[0x1b],
                           in_stack_00000080[0x19],0);
        in_stack_00000080[0x18] = uVar4;
        *(undefined8 *)(in_stack_00000080[0x91] + 0x68) = in_stack_00000080[0x18];
        Il2CppCodeGenWriteBarrier
                  ((void **)(in_stack_00000080[0x91] + 0x68),(void *)in_stack_00000080[0x18]);
        *(undefined4 *)((long)in_stack_00000080 + 0x494) = 0;
      }
      else {
        in_stack_00000080[0x17] = in_stack_00000080[0x8f];
        NullCheck((void *)in_stack_00000080[0x17]);
        in_stack_00000080[0x16] = *(undefined8 *)(in_stack_00000080[0x17] + 0x18);
        FtpControlStream_TryUpdateContentLength_mE2B8C5EC33E1F4D789FE5C6DE3825BB2952EB753
                  (in_stack_00000080[0x91],in_stack_00000080[0x16]);
        in_stack_00000080[0x15] = *(undefined8 *)(in_stack_00000080[0x91] + 0x40);
        uVar4 = CastclassSealed((Il2CppObject *)in_stack_00000080[0x15],
                                (Il2CppClass *)*in_stack_00000090);
        in_stack_00000080[0x88] = uVar4;
        in_stack_00000080[0x14] = in_stack_00000080[0x88];
        NullCheck((void *)in_stack_00000080[0x14]);
        uVar4 = FtpWebRequest_get_MethodInfo_m1916AEF829D24CCE147215A4CC8B5D12E35370EB_inline
                          ((FtpWebRequest_t9D2BE7BE1D0B56708DF62FB00D39571DF7B924A9 *)
                           in_stack_00000080[0x14],(MethodInfo *)0x0);
        in_stack_00000080[0x13] = uVar4;
        NullCheck((void *)in_stack_00000080[0x13]);
        bVar1 = FtpMethodInfo_get_ShouldParseForResponseUri_m7D40CD10C27151B72235705787C1FCBC62B6E60B
                          (in_stack_00000080[0x13],0);
        if ((bVar1 & 1) != 0) {
          in_stack_00000080[0x11] = in_stack_00000080[0x8f];
          NullCheck((void *)in_stack_00000080[0x11]);
          in_stack_00000080[0x10] = *(undefined8 *)(in_stack_00000080[0x11] + 0x18);
          in_stack_00000080[0xf] = in_stack_00000080[0x88];
          FtpControlStream_TryUpdateResponseUri_mA4514F22354FA2F4BEB3D73F24A7DEB5240E213F
                    (in_stack_00000080[0x91],in_stack_00000080[0x10],in_stack_00000080[0xf],0);
        }
        in_stack_00000080[0xe] = in_stack_00000080[0x8d];
        uVar2 = FtpControlStream_QueueOrCreateFtpDataStream_m37AFE4C4DA7DB36D34170261D3AC39D65C2A4AC0
                          (in_stack_00000080[0x91],in_stack_00000080[0xe],0);
        *(undefined4 *)((long)in_stack_00000080 + 0x6c) = uVar2;
        *(undefined4 *)((long)in_stack_00000080 + 0x494) =
             *(undefined4 *)((long)in_stack_00000080 + 0x6c);
      }
    }
    goto LAB_03612df4;
  }
  *(undefined4 *)(in_stack_00000080 + 0xd) = *(undefined4 *)((long)in_stack_00000080 + 0x454);
  if (*(int *)(in_stack_00000080 + 0xd) == 0xe6) {
    in_stack_00000080[0xc] = *(undefined8 *)(in_stack_00000080[0x91] + 0xa8);
    in_stack_00000080[0xb] = *(undefined8 *)(in_stack_00000080[0x91] + 0x108);
    NullCheck((void *)in_stack_00000080[0xc]);
    uVar4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D
                      (in_stack_00000080[0xc],in_stack_00000080[0xb],0);
    in_stack_00000080[10] = uVar4;
  }
  else {
    *(undefined4 *)((long)in_stack_00000080 + 0x4c) =
         *(undefined4 *)((long)in_stack_00000080 + 0x454);
    if (*(int *)((long)in_stack_00000080 + 0x4c) == 0xdd) {
      in_stack_00000080[8] = *(undefined8 *)(in_stack_00000080[0x91] + 0xb0);
      in_stack_00000080[7] = in_stack_00000080[0x8f];
      NullCheck((void *)in_stack_00000080[7]);
      in_stack_00000080[6] = *(undefined8 *)(in_stack_00000080[7] + 0x18);
      NullCheck((void *)in_stack_00000080[8]);
      uVar4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D
                        (in_stack_00000080[8],in_stack_00000080[6]);
      in_stack_00000080[5] = uVar4;
      NetworkStreamWrapper_CloseSocket_mAD2F12D01E0C1D3B6DD51D691F1C5CBA1A4D1467
                (in_stack_00000080[0x91],0);
    }
    else {
      *(undefined4 *)((long)in_stack_00000080 + 0x24) =
           *(undefined4 *)((long)in_stack_00000080 + 0x454);
      if (*(int *)((long)in_stack_00000080 + 0x24) == 0xea) {
        uVar4 = NetworkStreamWrapper_get_NetworkStream_m65DC14637198CEE4E9F9543EA3AC07168BA06488_inline
                          ((NetworkStreamWrapper_tE8C6B35509D3406DFB51F2D36E52CF6C5EFAB029 *)
                           in_stack_00000080[0x91],(MethodInfo *)0x0);
        in_stack_00000080[3] = uVar4;
        lVar7 = IsInstClass((Il2CppObject *)in_stack_00000080[3],(Il2CppClass *)*in_stack_000000a0);
        if (lVar7 == 0) {
          in_stack_00000080[2] = *(undefined8 *)(in_stack_00000080[0x91] + 0x40);
          uVar4 = CastclassSealed((Il2CppObject *)in_stack_00000080[2],
                                  (Il2CppClass *)*in_stack_00000090);
          in_stack_00000080[0x87] = uVar4;
          in_stack_00000080[1] = in_stack_00000080[0x8b];
          uVar4 = NetworkStreamWrapper_get_NetworkStream_m65DC14637198CEE4E9F9543EA3AC07168BA06488_inline
                            ((NetworkStreamWrapper_tE8C6B35509D3406DFB51F2D36E52CF6C5EFAB029 *)
                             in_stack_00000080[0x91],(MethodInfo *)0x0);
          *in_stack_00000080 = uVar4;
          uVar4 = NetworkStreamWrapper_get_Socket_m787036C2B47E611BD0F452A14DE461D8B5A30246
                            (in_stack_00000080[0x91],0);
          *(undefined8 *)(in_stack_00000088 + 0x3f) = uVar4;
          *(undefined8 *)(in_stack_00000088 + 0x3d) = in_stack_00000080[0x87];
          NullCheck(*(void **)(in_stack_00000088 + 0x3d));
          uVar4 = VirtualFuncInvoker0<Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*>::Invoke
                            (0xb,*(Il2CppObject **)(in_stack_00000088 + 0x3d));
          *(undefined8 *)(in_stack_00000088 + 0x3b) = uVar4;
          NullCheck(*(void **)(in_stack_00000088 + 0x3b));
          uVar4 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C
                            (*(undefined8 *)(in_stack_00000088 + 0x3b),0);
          *(undefined8 *)(in_stack_00000088 + 0x39) = uVar4;
          *(undefined8 *)(in_stack_00000088 + 0x37) = in_stack_00000080[0x87];
          NullCheck(*(void **)(in_stack_00000088 + 0x37));
          uVar4 = FtpWebRequest_get_ClientCertificates_mA566B0A04203FCA61A4C858073A0A9271AB73382
                            (*(undefined8 *)(in_stack_00000088 + 0x37),0);
          *(undefined8 *)(in_stack_00000088 + 0x35) = uVar4;
          uVar4 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_000000a0);
          *(undefined8 *)(in_stack_00000088 + 0x33) = uVar4;
          TlsStream__ctor_m92BDBF633326E74A389C3F979F7DA25991AA9575
                    (*(undefined8 *)(in_stack_00000088 + 0x33),*in_stack_00000080,
                     *(undefined8 *)(in_stack_00000088 + 0x3f),
                     *(undefined8 *)(in_stack_00000088 + 0x39),
                     *(undefined8 *)(in_stack_00000088 + 0x35),0);
          NullCheck((void *)in_stack_00000080[1]);
          *(undefined8 *)(in_stack_00000080[1] + 0x18) = *(undefined8 *)(in_stack_00000088 + 0x33);
          Il2CppCodeGenWriteBarrier
                    ((void **)(in_stack_00000080[1] + 0x18),*(void **)(in_stack_00000088 + 0x33));
          if ((*(byte *)(in_stack_00000080[0x91] + 0x48) & 1) != 0) {
            *(undefined8 *)(in_stack_00000088 + 0x2f) = in_stack_00000080[0x8b];
            NullCheck(*(void **)(in_stack_00000088 + 0x2f));
            *(undefined8 *)(in_stack_00000088 + 0x2d) =
                 *(undefined8 *)(*(long *)(in_stack_00000088 + 0x2f) + 0x18);
            *(undefined8 *)(in_stack_00000088 + 0x2b) = in_stack_00000080[0x8b];
            uVar4 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__
                              );
            *(undefined8 *)(in_stack_00000088 + 0x29) = uVar4;
            AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC
                      (*(undefined8 *)(in_stack_00000088 + 0x29),
                       *(undefined8 *)(in_stack_00000088 + 0x2b),*(undefined8 *)StringLiteral_12014)
            ;
            NullCheck(*(void **)(in_stack_00000088 + 0x2d));
            uVar4 = TlsStream_BeginAuthenticateAsClient_mCC4D883302E06680A9E5F3EE95B79C52BD0E2FF6
                              (*(undefined8 *)(in_stack_00000088 + 0x2d),
                               *(undefined8 *)(in_stack_00000088 + 0x29),0);
            *(undefined8 *)(in_stack_00000088 + 0x27) = uVar4;
            *(undefined4 *)((long)in_stack_00000080 + 0x494) = 2;
            goto LAB_03612df4;
          }
          *(undefined8 *)(in_stack_00000088 + 0x25) = in_stack_00000080[0x8b];
          NullCheck(*(void **)(in_stack_00000088 + 0x25));
          *(undefined8 *)(in_stack_00000088 + 0x23) =
               *(undefined8 *)(*(long *)(in_stack_00000088 + 0x25) + 0x18);
          NullCheck(*(void **)(in_stack_00000088 + 0x23));
          TlsStream_AuthenticateAsClient_m95AA6647436479C34D8149DA1989A3FE6BD6F2C0
                    (*(undefined8 *)(in_stack_00000088 + 0x23));
          *(undefined8 *)(in_stack_00000088 + 0x21) = in_stack_00000080[0x8b];
          NullCheck(*(void **)(in_stack_00000088 + 0x21));
          *(undefined8 *)(in_stack_00000088 + 0x1f) =
               *(undefined8 *)(*(long *)(in_stack_00000088 + 0x21) + 0x18);
          NetworkStreamWrapper_set_NetworkStream_m66A3B0C65E4DD88A79296C88CE4DC5912ED997A7_inline
                    ((NetworkStreamWrapper_tE8C6B35509D3406DFB51F2D36E52CF6C5EFAB029 *)
                     in_stack_00000080[0x91],
                     *(NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0 **)
                      (in_stack_00000088 + 0x1f),(MethodInfo *)0x0);
        }
      }
      else {
        in_stack_00000088[0x1e] = *(int *)((long)in_stack_00000080 + 0x454);
        if (in_stack_00000088[0x1e] == 0xd5) {
          *(undefined8 *)(in_stack_00000088 + 0x1b) =
               *(undefined8 *)(in_stack_00000080[0x91] + 0x40);
          *(undefined8 *)(in_stack_00000088 + 0x19) = in_stack_00000080[0x90];
          NullCheck(*(void **)(in_stack_00000088 + 0x19));
          *(undefined8 *)(in_stack_00000088 + 0x17) =
               *(undefined8 *)(*(long *)(in_stack_00000088 + 0x19) + 0x10);
          NullCheck(*(void **)(in_stack_00000088 + 0x17));
          bVar1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0
                            (*(undefined8 *)(in_stack_00000088 + 0x17),
                             *(undefined8 *)StringLiteral_12021,0);
          if ((bVar1 & 1) == 0) {
            *(undefined8 *)(in_stack_00000088 + 0xd) = in_stack_00000080[0x90];
            NullCheck(*(void **)(in_stack_00000088 + 0xd));
            *(undefined8 *)(in_stack_00000088 + 0xb) =
                 *(undefined8 *)(*(long *)(in_stack_00000088 + 0xd) + 0x10);
            NullCheck(*(void **)(in_stack_00000088 + 0xb));
            bVar1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0
                              (*(undefined8 *)(in_stack_00000088 + 0xb),
                               *(undefined8 *)StringLiteral_12024,0);
            if ((bVar1 & 1) != 0) {
              *(undefined8 *)(in_stack_00000088 + 7) = in_stack_00000080[0x8f];
              NullCheck(*(void **)(in_stack_00000088 + 7));
              *(undefined8 *)(in_stack_00000088 + 5) =
                   *(undefined8 *)(*(long *)(in_stack_00000088 + 7) + 0x18);
              uVar4 = FtpControlStream_GetLastModifiedFrom213Response_mFF3AD1F97838C9CEBC92D3A2C033962064ECEE79
                                (in_stack_00000080[0x91],*(undefined8 *)(in_stack_00000088 + 5),0);
              *(undefined8 *)(in_stack_00000088 + 1) = uVar4;
              *(undefined8 *)(in_stack_00000088 + 3) = *(undefined8 *)(in_stack_00000088 + 1);
              *(undefined8 *)(in_stack_00000080[0x91] + 0xd0) =
                   *(undefined8 *)(in_stack_00000088 + 3);
            }
          }
          else {
            *(undefined8 *)(in_stack_00000088 + 0x13) = in_stack_00000080[0x8f];
            NullCheck(*(void **)(in_stack_00000088 + 0x13));
            *(undefined8 *)(in_stack_00000088 + 0x11) =
                 *(undefined8 *)(*(long *)(in_stack_00000088 + 0x13) + 0x18);
            uVar4 = FtpControlStream_GetContentLengthFrom213Response_mC838EFD3A20DEA9A8DA867CF8496229CB076EB96
                              (in_stack_00000080[0x91],*(undefined8 *)(in_stack_00000088 + 0x11),0);
            *(undefined8 *)(in_stack_00000088 + 0xf) = uVar4;
            *(undefined8 *)(in_stack_00000080[0x91] + 200) =
                 *(undefined8 *)(in_stack_00000088 + 0xf);
          }
        }
        else {
          *in_stack_00000088 = *(int *)((long)in_stack_00000080 + 0x454);
          if (*in_stack_00000088 == 0x101) {
            pvVar10 = (void *)in_stack_00000080[0x90];
            NullCheck(pvVar10);
            bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                              (*(undefined8 *)((long)pvVar10 + 0x10),
                               *(undefined8 *)StringLiteral_12025,0);
            if ((bVar1 & 1) != 0) {
              pvVar10 = (void *)in_stack_00000080[0x90];
              NullCheck(pvVar10);
              bVar1 = PipelineEntry_HasFlag_m1C72335CAD79960E9FCCB190541F222A76F00F96(pvVar10,1,0);
              if ((bVar1 & 1) == 0) {
                pvVar10 = (void *)in_stack_00000080[0x8f];
                NullCheck(pvVar10);
                pvVar10 = (void *)FtpControlStream_GetLoginDirectory_m24BD744DF3263F2FD96A6B120FD5E014C759ABE9
                                            (in_stack_00000080[0x91],
                                             *(undefined8 *)((long)pvVar10 + 0x18),0);
                *(void **)(in_stack_00000080[0x91] + 0xe0) = pvVar10;
                Il2CppCodeGenWriteBarrier((void **)(in_stack_00000080[0x91] + 0xe0),pvVar10);
              }
            }
          }
          else {
            pvVar10 = (void *)in_stack_00000080[0x90];
            NullCheck(pvVar10);
            pvVar10 = *(void **)((long)pvVar10 + 0x10);
            NullCheck(pvVar10);
            iVar3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F
                              (pvVar10,*(undefined8 *)StringLiteral_12022,0);
            if (iVar3 != -1) {
              pvVar10 = *(void **)(in_stack_00000080[0x91] + 0xf0);
              *(void **)(in_stack_00000080[0x91] + 0xe8) = pvVar10;
              Il2CppCodeGenWriteBarrier((void **)(in_stack_00000080[0x91] + 0xe8),pvVar10);
            }
          }
        }
      }
    }
  }
  pvVar10 = (void *)in_stack_00000080[0x8f];
  NullCheck(pvVar10);
  bStack00000000000000d7 =
       ResponseDescription_get_PositiveIntermediate_mEE58E298D3A383D8D2A8EB537B53AAC7A9B61348
                 (pvVar10,0);
  bStack00000000000000d7 = bStack00000000000000d7 & 1;
  if (bStack00000000000000d7 == 0) {
    bStack00000000000000d6 =
         NetworkStreamWrapper_get_UsingSecureStream_m86E61049DC4265D855C187275D6536ACA6988A05
                   (in_stack_00000080[0x91],0);
    bStack00000000000000d6 = bStack00000000000000d6 & 1;
    if (bStack00000000000000d6 == 0) {
      pvVar10 = (void *)in_stack_00000080[0x90];
      NullCheck(pvVar10);
      bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                        (*(undefined8 *)((long)pvVar10 + 0x10),*(undefined8 *)StringLiteral_12016,0)
      ;
      if ((bVar1 & 1) != 0) goto LAB_03612dd8;
    }
    *(undefined4 *)((long)in_stack_00000080 + 0x494) = 1;
  }
  else {
LAB_03612dd8:
    *(undefined4 *)((long)in_stack_00000080 + 0x494) = 3;
  }
LAB_03612df4:
  return *(undefined4 *)((long)in_stack_00000080 + 0x494);
}


