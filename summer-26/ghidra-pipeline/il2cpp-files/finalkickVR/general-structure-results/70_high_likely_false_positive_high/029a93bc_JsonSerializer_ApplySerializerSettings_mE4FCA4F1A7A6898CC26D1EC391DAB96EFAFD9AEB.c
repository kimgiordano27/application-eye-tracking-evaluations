/*
FUNCTION_NAME: JsonSerializer_ApplySerializerSettings_mE4FCA4F1A7A6898CC26D1EC391DAB96EFAFD9AEB
ENTRY_POINT: 029a93bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void JsonSerializer_ApplySerializerSettings_mE4FCA4F1A7A6898CC26D1EC391DAB96EFAFD9AEB
               (Il2CppObject *param_1,
               JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *param_2)

{
  JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF JVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  Collection_1_t7961B8923F0E801A9FD6B5E01E1FBB05580AEF9F *pCVar6;
  JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16 *pJVar7;
  long lVar8;
  EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380 *pEVar9;
  Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2 *pFVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  int local_3c;
  
  if ((JsonSerializer_ApplySerializerSettings_mE4FCA4F1A7A6898CC26D1EC391DAB96EFAFD9AEB::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_CheckForIntersect__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ConnectLeftDegenerate__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_EdgeLeq__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_InitPriorityQ__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_TestSocketIO_TestBoop__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_TestSocketIO_TestClose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_TestSocketIO_TestError__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_TestSocketIO_TestOpen__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_TextAsset_GetData<byte>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__10_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_Copy__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_CopyActionStatus__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_Cut__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_CutActionStatus__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_OnGenerateVisualContent__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_OnGeometryChanged__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_Paste__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<Start>b__16_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TextElement_PasteActionStatus__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_LowLevel_TextEvent_From__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_TextCore_Text_TextGeneratorUtilities_ResizeInternalArray<TextProcessingElement>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_OnEndTeleportation__
              );
    JsonSerializer_ApplySerializerSettings_mE4FCA4F1A7A6898CC26D1EC391DAB96EFAFD9AEB::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_2);
  pIVar5 = (Il2CppObject *)
           JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                     (param_2,(MethodInfo *)0x0);
  bVar3 = CollectionUtils_IsNullOrEmpty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mEDBEB55BBE36C0239218433DE77CDE0554D7E13F
                    (pIVar5,*(MethodInfo **)
                             Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_CheckForIntersect__
                    );
  if ((bVar3 & 1) == 0) {
    local_3c = 0;
    while( true ) {
      NullCheck(param_2);
      pIVar5 = (Il2CppObject *)
               JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                         (param_2,(MethodInfo *)0x0);
      NullCheck(pIVar5);
      iVar4 = InterfaceFuncInvoker0<int>::Invoke
                        (0,*(Il2CppClass **)
                            Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_EdgeLeq__,
                         pIVar5);
      if (iVar4 <= local_3c) break;
      NullCheck(param_1);
      pCVar6 = (Collection_1_t7961B8923F0E801A9FD6B5E01E1FBB05580AEF9F *)
               VirtualFuncInvoker0<JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89*>
               ::Invoke(0x26,param_1);
      NullCheck(param_2);
      pIVar5 = (Il2CppObject *)
               JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                         (param_2,(MethodInfo *)0x0);
      NullCheck(pIVar5);
      pJVar7 = (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16 *)
               InterfaceFuncInvoker1<JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*,int>::
               Invoke(0,*(Il2CppClass **)
                         Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_InitPriorityQ__,
                      pIVar5,local_3c);
      NullCheck(pCVar6);
      Collection_1_Insert_m1DB9202EBD55D200EAA108533F0F9BF683605A7E
                (pCVar6,local_3c,pJVar7,
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ConnectLeftDegenerate__)
      ;
      local_3c = il2cpp_codegen_add<int,int>(local_3c,1);
    }
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m431ADD26BDB5D8A596F75234E2A5C79F720C472F_inline
                    ((Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 *)(param_2 + 200),
                     *(MethodInfo **)
                      Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__10_0__
                    );
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_TypeNameHandling_mF69B78BB41709BB8E6FAFB975955A86AAEFA9B6F
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x11,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mE88C7FD764D1BAA43F542690D3A9D2570E1C7CF8_inline
                    ((Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE *)(param_2 + 0xd0),
                     *(MethodInfo **)
                      Method_UnityEngine_TextCore_Text_TextGeneratorUtilities_ResizeInternalArray<TextProcessingElement>__
                    );
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_MetadataPropertyHandling_m84E3BB4BD1902EE4E071249487325C2547E8D829
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x25,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m6AF9C2D7130F62751A08F6F68B006970A6F92284_inline
                    ((Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F *)(param_2 + 0x6c),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_CopyActionStatus__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_TypeNameAssemblyFormatHandling_m28F88153AB2C36D8B60E8E13FD5CAF0C9BFF689C
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x15,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mB4F59118F4C38F7F1BCCD1B414B9CF2ADF20D273_inline
                    ((Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 *)(param_2 + 0x7c),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Paste__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_PreserveReferencesHandling_mEA96432AAD3AF1E1DB77E9ADC937F3B539A14DAE
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x17,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mE1609B5D3C72B90FA50D506C4393933D9130089A_inline
                    ((Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 *)(param_2 + 0x9c),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_PasteActionStatus__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_ReferenceLoopHandling_m6CD165186AB151BDCACD15E3AB0E10E9CCD9A4D5
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x19,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mE218D5A9C3364280259C6098D9D779BB800747F3_inline
                    ((Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 *)(param_2 + 0x94),
                     *(MethodInfo **)Method_UnityEngine_InputSystem_LowLevel_TextEvent_From__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_MissingMemberHandling_m3D682DB3B3BBEACC8F8F03909919CF0C29D41D1A
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x1b,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mA6FE3C2E84F652C16AA5E5DF13E2428366389564_inline
                    ((Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D *)(param_2 + 0x8c),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_OnGeometryChanged__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_ObjectCreationHandling_m323D50EB2D88E661942309B60B7CE067D0D4943F
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x21,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m3273D6CDABABFD4B08847041446C901786649BB5_inline
                    ((Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 *)(param_2 + 0x84),
                     *(MethodInfo **)Method_UnityEngine_TextAsset_GetData<byte>__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_NullValueHandling_m1116B9EE497A5CB9B178CD5DF886C73C4CAD32F0
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x1d,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m2260B32980E978EBEC393091DC29AF9DD7EE19CF_inline
                    ((Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 *)(param_2 + 0x74),
                     *(MethodInfo **)Method_TestSocketIO_TestError__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_DefaultValueHandling_mD8D94E521F5739B4332D6DC4FD64A676535F6830
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x1f,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m5488A39D24CA895889FD9102BEF2FD7B0409DD39_inline
                    ((Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 *)(param_2 + 0xc0),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Copy__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    iVar4 = JsonSerializerSettings_get_ConstructorHandling_mA0F1F980A1D1894748432FBB58718B426D8D3F84
                      (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<int>::Invoke(0x23,param_1,iVar4);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mA17F655968AD8B406145013BAD4B9D5672856EFB_inline
                    ((Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A *)(param_2 + 0xa8),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_CutActionStatus__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    auVar13 = JsonSerializerSettings_get_Context_m9F472C555FB0546B2EA8E1EE75A0762768FEBC24
                        (param_2,0);
    NullCheck(param_1);
    VirtualActionInvoker1<StreamingContext_t56760522A751890146EE45F82F866B55B7E33677>::Invoke
              ((VirtualActionInvoker1<StreamingContext_t56760522A751890146EE45F82F866B55B7E33677> *)
               0x2a,param_1,auVar13._0_8_,auVar13._8_8_);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline
                    (param_2 + 0x50,*(MethodInfo **)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__
                    );
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar2 = *(undefined2 *)(param_2 + 0x50);
    NullCheck(param_1);
    *(undefined2 *)(param_1 + 0xc1) = uVar2;
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_Error_m02A88351C07F1B3821B5E8A161CDE90B7EBF2C89_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pEVar9 = (EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380 *)
             JsonSerializerSettings_get_Error_m02A88351C07F1B3821B5E8A161CDE90B7EBF2C89_inline
                       (param_2,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380*>::Invoke
              (4,param_1,pEVar9);
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_ContractResolver_mC94CDBCF870E73DC5E8BBF374DF22DB7B864F75A_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pIVar5 = (Il2CppObject *)
             JsonSerializerSettings_get_ContractResolver_mC94CDBCF870E73DC5E8BBF374DF22DB7B864F75A_inline
                       (param_2,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0x28,param_1,pIVar5);
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_ReferenceResolverProvider_m8525837E697E32E6B6F0D5132A6199BEEBAF217C_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pFVar10 = (Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2 *)
              JsonSerializerSettings_get_ReferenceResolverProvider_m8525837E697E32E6B6F0D5132A6199BEEBAF217C_inline
                        (param_2,(MethodInfo *)0x0);
    NullCheck(pFVar10);
    pIVar5 = (Il2CppObject *)
             Func_1_Invoke_m222CC01D7745737AD784649D39E1FBDB69034613_inline
                       (pFVar10,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(7,param_1,pIVar5);
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_TraceWriter_m60C8FFA8ABA33EEE8C2613FD882DEFB50DBED6FC_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pIVar5 = (Il2CppObject *)
             JsonSerializerSettings_get_TraceWriter_m60C8FFA8ABA33EEE8C2613FD882DEFB50DBED6FC_inline
                       (param_2,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xd,param_1,pIVar5);
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_EqualityComparer_mBF43D33BBBCCF1A8BCFF1E12E47C2FBDA3FFDC6B_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pIVar5 = (Il2CppObject *)
             JsonSerializerSettings_get_EqualityComparer_mBF43D33BBBCCF1A8BCFF1E12E47C2FBDA3FFDC6B_inline
                       (param_2,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xf,param_1,pIVar5);
  }
  NullCheck(param_2);
  lVar8 = JsonSerializerSettings_get_SerializationBinder_m73166AD5FCC2B810E5A53B5F7BEB42D6664838D7_inline
                    (param_2,(MethodInfo *)0x0);
  if (lVar8 != 0) {
    NullCheck(param_2);
    pIVar5 = (Il2CppObject *)
             JsonSerializerSettings_get_SerializationBinder_m73166AD5FCC2B810E5A53B5F7BEB42D6664838D7_inline
                       (param_2,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,param_1,pIVar5);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m057A0B5FF959F8A0EE6E5C1E55F4B1B1FA1F9B27_inline
                    ((Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E *)(param_2 + 0x10),
                     *(MethodInfo **)Method_TestSocketIO_TestBoop__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0x78) = uVar12;
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m6DCF2B6333A04690B7827C13BE852CBA979B41CC_inline
                    ((Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 *)(param_2 + 0x18),
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Cut__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0x80) = uVar12;
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mC8284E7BC5A0BC5FD0718B6B93B9CD8AA357BB55_inline
                    ((Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 *)(param_2 + 0x20),
                     *(MethodInfo **)
                      Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<Start>b__16_0__
                    );
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0x88) = uVar12;
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mEB8CB060CBB6BC228BA470891E2A8C58E3807AAE_inline
                    ((Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 *)(param_2 + 0x28),
                     *(MethodInfo **)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_OnEndTeleportation__
                    );
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0x90) = uVar12;
  }
  NullCheck(param_2);
  if (((byte)param_2[0x68] & 1) != 0) {
    NullCheck(param_2);
    pvVar11 = *(void **)(param_2 + 0x60);
    NullCheck(param_1);
    *(void **)(param_1 + 200) = pvVar11;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 200),pvVar11);
    NullCheck(param_2);
    JVar1 = param_2[0x68];
    NullCheck(param_1);
    param_1[0xd0] = (Il2CppObject)((byte)JVar1 & 1);
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m1011C885149341D952EEB15937E8796363EC2997_inline
                    ((Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 *)(param_2 + 0x30),
                     *(MethodInfo **)Method_TestSocketIO_TestClose__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x30);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0x98) = uVar12;
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_mA1E2FF8D68974D11E12F985D200C466BFDD13713_inline
                    ((Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B *)(param_2 + 0x38),
                     *(MethodInfo **)
                      Method_UnityEngine_UIElements_TextElement_OnGenerateVisualContent__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0xa0) = uVar12;
  }
  NullCheck(param_2);
  bVar3 = Nullable_1_get_HasValue_m31175AFA7DFB0E471E2B408ACF258930E2AC2260_inline
                    ((Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 *)(param_2 + 0x40),
                     *(MethodInfo **)Method_TestSocketIO_TestOpen__);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0xa8) = uVar12;
  }
  NullCheck(param_2);
  if (*(long *)(param_2 + 0x48) != 0) {
    NullCheck(param_2);
    pvVar11 = *(void **)(param_2 + 0x48);
    NullCheck(param_1);
    *(void **)(param_1 + 0xb0) = pvVar11;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0xb0),pvVar11);
  }
  NullCheck(param_2);
  if (((byte)param_2[0x5c] & 1) != 0) {
    NullCheck(param_2);
    uVar12 = *(undefined8 *)(param_2 + 0x54);
    NullCheck(param_1);
    *(undefined8 *)(param_1 + 0xb8) = uVar12;
    NullCheck(param_2);
    JVar1 = param_2[0x5c];
    NullCheck(param_1);
    param_1[0xc0] = (Il2CppObject)((byte)JVar1 & 1);
  }
  return;
}


