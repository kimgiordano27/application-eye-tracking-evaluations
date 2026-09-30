/*
FUNCTION_NAME: File_Move_mBC9450111E0144A55D893A720F19E612D658AC37
ENTRY_POINT: 02771598
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(String_t *param_1,String_t *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  String_t *pSVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  Exception_t *pEVar8;
  MethodInfo *pMVar9;
  undefined1 auVar10 [16];
  
  puVar1 = Method_System_HashCode_Add<int>__;
  if ((File_Move_mBC9450111E0144A55D893A720F19E612D658AC37::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>__ctor__
              );
    File_Move_mBC9450111E0144A55D893A720F19E612D658AC37::s_Il2CppMethodInitialized = 1;
  }
  if (param_1 == (String_t *)0x0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_HashCode_Add<Material>__);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_HashCode_Add<Rect>__);
    ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(pEVar8,uVar6,uVar4,0);
    pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  if (param_2 == (String_t *)0x0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_HashCode_Add<float>__);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_HashCode_Add<Rect>__);
    ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(pEVar8,uVar6,uVar4,0);
    pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  NullCheck(param_1);
  iVar3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                    (param_1,(MethodInfo *)0x0);
  if (iVar3 != 0) {
    NullCheck(param_2);
    iVar3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (param_2,(MethodInfo *)0x0);
    if (iVar3 == 0) {
      pIVar7 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                         );
      pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
      uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_HashCode_Add<SpriteAsset>__);
      uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_HashCode_Add<float>__);
      ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar8,uVar6,uVar4,0);
      pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar8,pMVar9);
    }
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>__ctor__
              );
    pSVar5 = (String_t *)Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(param_1);
    uVar6 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(param_2,0);
    auVar10 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline
                        (pSVar5,(MethodInfo *)0x0);
    bVar2 = FileSystem_FileExists_mD0B309E15EF6F11673151E81540F5A1886DDDB36
                      (auVar10._0_8_,auVar10._8_8_,0);
    if ((bVar2 & 1) != 0) {
      FileSystem_MoveFile_m215E9967906ACB4FB02AE1107C1E18B61FF4079F(pSVar5,uVar6,0);
      return;
    }
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__);
    uVar6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(uVar6,pSVar5);
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                       );
    pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677(pEVar8,uVar6,pSVar5,0);
    pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar8,pMVar9);
  }
  pIVar7 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                     );
  pEVar8 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_HashCode_Add<SpriteAsset>__);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_HashCode_Add<Material>__);
  ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar8,uVar6,uVar4,0);
  pMVar9 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar8,pMVar9);
}


