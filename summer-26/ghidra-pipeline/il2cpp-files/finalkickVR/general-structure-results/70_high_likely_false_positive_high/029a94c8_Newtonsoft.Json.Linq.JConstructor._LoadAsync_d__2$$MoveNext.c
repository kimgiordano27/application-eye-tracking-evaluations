/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JConstructor.<LoadAsync>d__2$$MoveNext
ENTRY_POINT: 029a94c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Linq_JConstructor_<LoadAsync>d__2__MoveNext(ulong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  byte bStack0000000000000027;
  byte bStack0000000000000057;
  byte bStack00000000000000a7;
  byte bStack00000000000000d7;
  byte bStack0000000000000107;
  byte bStack000000000000014f;
  byte bStack0000000000000177;
  byte bStack00000000000001a7;
  byte bStack00000000000001d7;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
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
  *(undefined4 *)((long)in_stack_00000010 + 0x2b4) = 0;
  in_stack_00000010[0x55] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x55]);
  uVar3 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000010[0x55],(MethodInfo *)0x0);
  in_stack_00000010[0x54] = uVar3;
  bVar1 = CollectionUtils_IsNullOrEmpty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mEDBEB55BBE36C0239218433DE77CDE0554D7E13F
                    ((Il2CppObject *)in_stack_00000010[0x54],
                     *(MethodInfo **)
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_CheckForIntersect__)
  ;
  *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x31) & 1) == 0) {
    *(undefined4 *)((long)in_stack_00000010 + 0x2b4) = 0;
    while( true ) {
      *(undefined4 *)(in_stack_00000010 + 0x4b) = *(undefined4 *)((long)in_stack_00000010 + 0x2b4);
      in_stack_00000010[0x4a] = in_stack_00000010[0x58];
      NullCheck((void *)in_stack_00000010[0x4a]);
      uVar3 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                        ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                         in_stack_00000010[0x4a],(MethodInfo *)0x0);
      in_stack_00000010[0x49] = uVar3;
      NullCheck((void *)in_stack_00000010[0x49]);
      uVar2 = InterfaceFuncInvoker0<int>::Invoke
                        (0,*(Il2CppClass **)
                            Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_EdgeLeq__,
                         (Il2CppObject *)in_stack_00000010[0x49]);
      *(undefined4 *)((long)in_stack_00000010 + 0x244) = uVar2;
      if (*(int *)((long)in_stack_00000010 + 0x244) <= *(int *)(in_stack_00000010 + 0x4b)) break;
      in_stack_00000010[0x52] = in_stack_00000010[0x59];
      NullCheck((void *)in_stack_00000010[0x52]);
      uVar3 = VirtualFuncInvoker0<JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89*>
              ::Invoke(0x26,(Il2CppObject *)in_stack_00000010[0x52]);
      in_stack_00000010[0x51] = uVar3;
      *(undefined4 *)((long)in_stack_00000010 + 0x284) =
           *(undefined4 *)((long)in_stack_00000010 + 0x2b4);
      in_stack_00000010[0x4f] = in_stack_00000010[0x58];
      NullCheck((void *)in_stack_00000010[0x4f]);
      uVar3 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline
                        ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                         in_stack_00000010[0x4f],(MethodInfo *)0x0);
      in_stack_00000010[0x4e] = uVar3;
      *(undefined4 *)((long)in_stack_00000010 + 0x26c) =
           *(undefined4 *)((long)in_stack_00000010 + 0x2b4);
      NullCheck((void *)in_stack_00000010[0x4e]);
      uVar3 = InterfaceFuncInvoker1<JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*,int>::
              Invoke(0,*(Il2CppClass **)
                        Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_InitPriorityQ__,
                     (Il2CppObject *)in_stack_00000010[0x4e],
                     *(int *)((long)in_stack_00000010 + 0x26c));
      in_stack_00000010[0x4c] = uVar3;
      NullCheck((void *)in_stack_00000010[0x51]);
      Collection_1_Insert_m1DB9202EBD55D200EAA108533F0F9BF683605A7E
                ((Collection_1_t7961B8923F0E801A9FD6B5E01E1FBB05580AEF9F *)in_stack_00000010[0x51],
                 *(int *)((long)in_stack_00000010 + 0x284),
                 (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16 *)in_stack_00000010[0x4c],
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ConnectLeftDegenerate__)
      ;
      *(undefined4 *)((long)in_stack_00000010 + 0x25c) =
           *(undefined4 *)((long)in_stack_00000010 + 0x2b4);
      uVar2 = il2cpp_codegen_add<int,int>(*(int *)((long)in_stack_00000010 + 0x25c),1);
      *(undefined4 *)((long)in_stack_00000010 + 0x2b4) = uVar2;
    }
  }
  in_stack_00000010[0x47] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x47]);
  in_stack_00000010[0x46] = in_stack_00000010[0x47] + 200;
  bVar1 = Nullable_1_get_HasValue_m431ADD26BDB5D8A596F75234E2A5C79F720C472F_inline
                    ((Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 *)in_stack_00000010[0x46]
                     ,*(MethodInfo **)
                       Method_UnityEngine_UIElements_TextEditingManipulator_<OnFocusInEvent>b__10_0__
                    );
  *(byte *)(unaff_x29 + -0xa1) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0xa1) & 1) != 0) {
    in_stack_00000010[0x44] = in_stack_00000010[0x59];
    in_stack_00000010[0x43] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x43]);
    uVar2 = JsonSerializerSettings_get_TypeNameHandling_mF69B78BB41709BB8E6FAFB975955A86AAEFA9B6F
                      (in_stack_00000010[0x43],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x214) = uVar2;
    NullCheck((void *)in_stack_00000010[0x44]);
    VirtualActionInvoker1<int>::Invoke
              (0x11,(Il2CppObject *)in_stack_00000010[0x44],
               *(int *)((long)in_stack_00000010 + 0x214));
  }
  in_stack_00000010[0x41] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x41]);
  in_stack_00000010[0x40] = in_stack_00000010[0x41] + 0xd0;
  bVar1 = Nullable_1_get_HasValue_mE88C7FD764D1BAA43F542690D3A9D2570E1C7CF8_inline
                    ((Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE *)in_stack_00000010[0x40]
                     ,*(MethodInfo **)
                       Method_UnityEngine_TextCore_Text_TextGeneratorUtilities_ResizeInternalArray<TextProcessingElement>__
                    );
  *(byte *)(unaff_x29 + -0xd1) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0xd1) & 1) != 0) {
    in_stack_00000010[0x3e] = in_stack_00000010[0x59];
    in_stack_00000010[0x3d] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x3d]);
    uVar2 = JsonSerializerSettings_get_MetadataPropertyHandling_m84E3BB4BD1902EE4E071249487325C2547E8D829
                      (in_stack_00000010[0x3d],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x1e4) = uVar2;
    NullCheck((void *)in_stack_00000010[0x3e]);
    VirtualActionInvoker1<int>::Invoke
              (0x25,(Il2CppObject *)in_stack_00000010[0x3e],
               *(int *)((long)in_stack_00000010 + 0x1e4));
  }
  in_stack_00000010[0x3b] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x3b]);
  in_stack_00000010[0x3a] = in_stack_00000010[0x3b] + 0x6c;
  bVar1 = Nullable_1_get_HasValue_m6AF9C2D7130F62751A08F6F68B006970A6F92284_inline
                    ((Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F *)in_stack_00000010[0x3a]
                     ,*(MethodInfo **)Method_UnityEngine_UIElements_TextElement_CopyActionStatus__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x38] = in_stack_00000010[0x59];
    in_stack_00000010[0x37] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x37]);
    uVar2 = JsonSerializerSettings_get_TypeNameAssemblyFormatHandling_m28F88153AB2C36D8B60E8E13FD5CAF0C9BFF689C
                      (in_stack_00000010[0x37],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x1b4) = uVar2;
    NullCheck((void *)in_stack_00000010[0x38]);
    VirtualActionInvoker1<int>::Invoke
              (0x15,(Il2CppObject *)in_stack_00000010[0x38],
               *(int *)((long)in_stack_00000010 + 0x1b4));
  }
  in_stack_00000010[0x35] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x35]);
  in_stack_00000010[0x34] = in_stack_00000010[0x35] + 0x7c;
  bVar1 = Nullable_1_get_HasValue_mB4F59118F4C38F7F1BCCD1B414B9CF2ADF20D273_inline
                    ((Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 *)in_stack_00000010[0x34]
                     ,*(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Paste__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x32] = in_stack_00000010[0x59];
    in_stack_00000010[0x31] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x31]);
    uVar2 = JsonSerializerSettings_get_PreserveReferencesHandling_mEA96432AAD3AF1E1DB77E9ADC937F3B539A14DAE
                      (in_stack_00000010[0x31],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x184) = uVar2;
    NullCheck((void *)in_stack_00000010[0x32]);
    VirtualActionInvoker1<int>::Invoke
              (0x17,(Il2CppObject *)in_stack_00000010[0x32],
               *(int *)((long)in_stack_00000010 + 0x184));
  }
  in_stack_00000010[0x2f] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x2f]);
  in_stack_00000010[0x2e] = in_stack_00000010[0x2f] + 0x9c;
  bVar1 = Nullable_1_get_HasValue_mE1609B5D3C72B90FA50D506C4393933D9130089A_inline
                    ((Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 *)in_stack_00000010[0x2e]
                     ,*(MethodInfo **)Method_UnityEngine_UIElements_TextElement_PasteActionStatus__)
  ;
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x2c] = in_stack_00000010[0x59];
    in_stack_00000010[0x2b] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x2b]);
    uVar2 = JsonSerializerSettings_get_ReferenceLoopHandling_m6CD165186AB151BDCACD15E3AB0E10E9CCD9A4D5
                      (in_stack_00000010[0x2b],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x154) = uVar2;
    NullCheck((void *)in_stack_00000010[0x2c]);
    VirtualActionInvoker1<int>::Invoke
              (0x19,(Il2CppObject *)in_stack_00000010[0x2c],
               *(int *)((long)in_stack_00000010 + 0x154));
  }
  in_stack_00000010[0x29] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x29]);
  in_stack_00000010[0x28] = in_stack_00000010[0x29] + 0x94;
  bVar1 = Nullable_1_get_HasValue_mE218D5A9C3364280259C6098D9D779BB800747F3_inline
                    ((Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 *)in_stack_00000010[0x28]
                     ,*(MethodInfo **)Method_UnityEngine_InputSystem_LowLevel_TextEvent_From__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x26] = in_stack_00000010[0x59];
    in_stack_00000010[0x25] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x25]);
    uVar2 = JsonSerializerSettings_get_MissingMemberHandling_m3D682DB3B3BBEACC8F8F03909919CF0C29D41D1A
                      (in_stack_00000010[0x25],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x124) = uVar2;
    NullCheck((void *)in_stack_00000010[0x26]);
    VirtualActionInvoker1<int>::Invoke
              (0x1b,(Il2CppObject *)in_stack_00000010[0x26],
               *(int *)((long)in_stack_00000010 + 0x124));
  }
  in_stack_00000010[0x23] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x23]);
  in_stack_00000010[0x22] = in_stack_00000010[0x23] + 0x8c;
  bVar1 = Nullable_1_get_HasValue_mA6FE3C2E84F652C16AA5E5DF13E2428366389564_inline
                    ((Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D *)in_stack_00000010[0x22]
                     ,*(MethodInfo **)Method_UnityEngine_UIElements_TextElement_OnGeometryChanged__)
  ;
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x20] = in_stack_00000010[0x59];
    in_stack_00000010[0x1f] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x1f]);
    uVar2 = JsonSerializerSettings_get_ObjectCreationHandling_m323D50EB2D88E661942309B60B7CE067D0D4943F
                      (in_stack_00000010[0x1f],0);
    *(undefined4 *)((long)in_stack_00000010 + 0xf4) = uVar2;
    NullCheck((void *)in_stack_00000010[0x20]);
    VirtualActionInvoker1<int>::Invoke
              (0x21,(Il2CppObject *)in_stack_00000010[0x20],*(int *)((long)in_stack_00000010 + 0xf4)
              );
  }
  in_stack_00000010[0x1d] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x1d]);
  in_stack_00000010[0x1c] = in_stack_00000010[0x1d] + 0x84;
  bVar1 = Nullable_1_get_HasValue_m3273D6CDABABFD4B08847041446C901786649BB5_inline
                    ((Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 *)in_stack_00000010[0x1c]
                     ,*(MethodInfo **)Method_UnityEngine_TextAsset_GetData<byte>__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x1a] = in_stack_00000010[0x59];
    in_stack_00000010[0x19] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x19]);
    uVar2 = JsonSerializerSettings_get_NullValueHandling_m1116B9EE497A5CB9B178CD5DF886C73C4CAD32F0
                      (in_stack_00000010[0x19],0);
    *(undefined4 *)((long)in_stack_00000010 + 0xc4) = uVar2;
    NullCheck((void *)in_stack_00000010[0x1a]);
    VirtualActionInvoker1<int>::Invoke
              (0x1d,(Il2CppObject *)in_stack_00000010[0x1a],*(int *)((long)in_stack_00000010 + 0xc4)
              );
  }
  in_stack_00000010[0x17] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x17]);
  in_stack_00000010[0x16] = in_stack_00000010[0x17] + 0x74;
  bVar1 = Nullable_1_get_HasValue_m2260B32980E978EBEC393091DC29AF9DD7EE19CF_inline
                    ((Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 *)in_stack_00000010[0x16]
                     ,*(MethodInfo **)Method_TestSocketIO_TestError__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0x14] = in_stack_00000010[0x59];
    in_stack_00000010[0x13] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0x13]);
    uVar2 = JsonSerializerSettings_get_DefaultValueHandling_mD8D94E521F5739B4332D6DC4FD64A676535F6830
                      (in_stack_00000010[0x13],0);
    *(undefined4 *)((long)in_stack_00000010 + 0x94) = uVar2;
    NullCheck((void *)in_stack_00000010[0x14]);
    VirtualActionInvoker1<int>::Invoke
              (0x1f,(Il2CppObject *)in_stack_00000010[0x14],*(int *)((long)in_stack_00000010 + 0x94)
              );
  }
  in_stack_00000010[0x11] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0x11]);
  in_stack_00000010[0x10] = in_stack_00000010[0x11] + 0xc0;
  bVar1 = Nullable_1_get_HasValue_m5488A39D24CA895889FD9102BEF2FD7B0409DD39_inline
                    ((Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 *)in_stack_00000010[0x10]
                     ,*(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Copy__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[0xe] = in_stack_00000010[0x59];
    in_stack_00000010[0xd] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[0xd]);
    uVar2 = JsonSerializerSettings_get_ConstructorHandling_mA0F1F980A1D1894748432FBB58718B426D8D3F84
                      (in_stack_00000010[0xd],0);
    *(undefined4 *)((long)in_stack_00000010 + 100) = uVar2;
    NullCheck((void *)in_stack_00000010[0xe]);
    VirtualActionInvoker1<int>::Invoke
              (0x23,(Il2CppObject *)in_stack_00000010[0xe],*(int *)((long)in_stack_00000010 + 100));
  }
  in_stack_00000010[0xb] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000010[0xb]);
  in_stack_00000010[10] = in_stack_00000010[0xb] + 0xa8;
  bVar1 = Nullable_1_get_HasValue_mA17F655968AD8B406145013BAD4B9D5672856EFB_inline
                    ((Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A *)in_stack_00000010[10],
                     *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_CutActionStatus__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000010[8] = in_stack_00000010[0x59];
    in_stack_00000010[7] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000010[7]);
    auVar7 = JsonSerializerSettings_get_Context_m9F472C555FB0546B2EA8E1EE75A0762768FEBC24
                       (in_stack_00000010[7],0);
    *(undefined1 (*) [16])(in_stack_00000010 + 2) = auVar7;
    in_stack_00000010[5] = in_stack_00000010[3];
    in_stack_00000010[4] = in_stack_00000010[2];
    NullCheck((void *)in_stack_00000010[8]);
    in_stack_00000010[1] = in_stack_00000010[5];
    *in_stack_00000010 = in_stack_00000010[4];
    VirtualActionInvoker1<StreamingContext_t56760522A751890146EE45F82F866B55B7E33677>::Invoke
              ((VirtualActionInvoker1<StreamingContext_t56760522A751890146EE45F82F866B55B7E33677> *)
               0x2a,in_stack_00000010[8],*in_stack_00000010,in_stack_00000010[1]);
  }
  in_stack_00000018[0x52] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x52]);
  in_stack_00000018[0x51] = in_stack_00000018[0x52] + 0x50;
  bVar1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline
                    ((Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 *)in_stack_00000018[0x51]
                     ,*(MethodInfo **)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000018[0x4f] = in_stack_00000010[0x59];
    in_stack_00000018[0x4e] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x4e]);
    *(undefined2 *)((long)in_stack_00000018 + 0x26e) =
         *(undefined2 *)(in_stack_00000018[0x4e] + 0x50);
    NullCheck((void *)in_stack_00000018[0x4f]);
    *(undefined2 *)(in_stack_00000018[0x4f] + 0xc1) =
         *(undefined2 *)((long)in_stack_00000018 + 0x26e);
  }
  in_stack_00000018[0x4c] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x4c]);
  lVar4 = JsonSerializerSettings_get_Error_m02A88351C07F1B3821B5E8A161CDE90B7EBF2C89_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x4c],(MethodInfo *)0x0);
  in_stack_00000018[0x4b] = lVar4;
  if (in_stack_00000018[0x4b] != 0) {
    in_stack_00000018[0x4a] = in_stack_00000010[0x59];
    in_stack_00000018[0x49] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x49]);
    lVar4 = JsonSerializerSettings_get_Error_m02A88351C07F1B3821B5E8A161CDE90B7EBF2C89_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x49],(MethodInfo *)0x0);
    in_stack_00000018[0x48] = lVar4;
    NullCheck((void *)in_stack_00000018[0x4a]);
    VirtualActionInvoker1<EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380*>::Invoke
              (4,(Il2CppObject *)in_stack_00000018[0x4a],
               (EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380 *)in_stack_00000018[0x48]);
  }
  in_stack_00000018[0x47] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x47]);
  lVar4 = JsonSerializerSettings_get_ContractResolver_mC94CDBCF870E73DC5E8BBF374DF22DB7B864F75A_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x47],(MethodInfo *)0x0);
  in_stack_00000018[0x46] = lVar4;
  if (in_stack_00000018[0x46] != 0) {
    in_stack_00000018[0x45] = in_stack_00000010[0x59];
    in_stack_00000018[0x44] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x44]);
    lVar4 = JsonSerializerSettings_get_ContractResolver_mC94CDBCF870E73DC5E8BBF374DF22DB7B864F75A_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x44],(MethodInfo *)0x0);
    in_stack_00000018[0x43] = lVar4;
    NullCheck((void *)in_stack_00000018[0x45]);
    VirtualActionInvoker1<Il2CppObject*>::Invoke
              (0x28,(Il2CppObject *)in_stack_00000018[0x45],(Il2CppObject *)in_stack_00000018[0x43])
    ;
  }
  in_stack_00000018[0x42] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x42]);
  lVar4 = JsonSerializerSettings_get_ReferenceResolverProvider_m8525837E697E32E6B6F0D5132A6199BEEBAF217C_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x42],(MethodInfo *)0x0);
  in_stack_00000018[0x41] = lVar4;
  if (in_stack_00000018[0x41] != 0) {
    in_stack_00000018[0x40] = in_stack_00000010[0x59];
    in_stack_00000018[0x3f] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x3f]);
    lVar4 = JsonSerializerSettings_get_ReferenceResolverProvider_m8525837E697E32E6B6F0D5132A6199BEEBAF217C_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x3f],(MethodInfo *)0x0);
    in_stack_00000018[0x3e] = lVar4;
    NullCheck((void *)in_stack_00000018[0x3e]);
    lVar4 = Func_1_Invoke_m222CC01D7745737AD784649D39E1FBDB69034613_inline
                      ((Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2 *)in_stack_00000018[0x3e],
                       (MethodInfo *)0x0);
    in_stack_00000018[0x3d] = lVar4;
    NullCheck((void *)in_stack_00000018[0x40]);
    VirtualActionInvoker1<Il2CppObject*>::Invoke
              (7,(Il2CppObject *)in_stack_00000018[0x40],(Il2CppObject *)in_stack_00000018[0x3d]);
  }
  in_stack_00000018[0x3c] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x3c]);
  lVar4 = JsonSerializerSettings_get_TraceWriter_m60C8FFA8ABA33EEE8C2613FD882DEFB50DBED6FC_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x3c],(MethodInfo *)0x0);
  in_stack_00000018[0x3b] = lVar4;
  if (in_stack_00000018[0x3b] != 0) {
    in_stack_00000018[0x3a] = in_stack_00000010[0x59];
    in_stack_00000018[0x39] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x39]);
    lVar4 = JsonSerializerSettings_get_TraceWriter_m60C8FFA8ABA33EEE8C2613FD882DEFB50DBED6FC_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x39],(MethodInfo *)0x0);
    in_stack_00000018[0x38] = lVar4;
    NullCheck((void *)in_stack_00000018[0x3a]);
    VirtualActionInvoker1<Il2CppObject*>::Invoke
              (0xd,(Il2CppObject *)in_stack_00000018[0x3a],(Il2CppObject *)in_stack_00000018[0x38]);
  }
  in_stack_00000018[0x37] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x37]);
  lVar4 = JsonSerializerSettings_get_EqualityComparer_mBF43D33BBBCCF1A8BCFF1E12E47C2FBDA3FFDC6B_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x37],(MethodInfo *)0x0);
  in_stack_00000018[0x36] = lVar4;
  if (in_stack_00000018[0x36] != 0) {
    in_stack_00000018[0x35] = in_stack_00000010[0x59];
    in_stack_00000018[0x34] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x34]);
    lVar4 = JsonSerializerSettings_get_EqualityComparer_mBF43D33BBBCCF1A8BCFF1E12E47C2FBDA3FFDC6B_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x34],(MethodInfo *)0x0);
    in_stack_00000018[0x33] = lVar4;
    NullCheck((void *)in_stack_00000018[0x35]);
    VirtualActionInvoker1<Il2CppObject*>::Invoke
              (0xf,(Il2CppObject *)in_stack_00000018[0x35],(Il2CppObject *)in_stack_00000018[0x33]);
  }
  in_stack_00000018[0x32] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x32]);
  lVar4 = JsonSerializerSettings_get_SerializationBinder_m73166AD5FCC2B810E5A53B5F7BEB42D6664838D7_inline
                    ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                     in_stack_00000018[0x32],(MethodInfo *)0x0);
  in_stack_00000018[0x31] = lVar4;
  if (in_stack_00000018[0x31] != 0) {
    in_stack_00000018[0x30] = in_stack_00000010[0x59];
    in_stack_00000018[0x2f] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x2f]);
    lVar4 = JsonSerializerSettings_get_SerializationBinder_m73166AD5FCC2B810E5A53B5F7BEB42D6664838D7_inline
                      ((JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF *)
                       in_stack_00000018[0x2f],(MethodInfo *)0x0);
    in_stack_00000018[0x2e] = lVar4;
    NullCheck((void *)in_stack_00000018[0x30]);
    VirtualActionInvoker1<Il2CppObject*>::Invoke
              (0xb,(Il2CppObject *)in_stack_00000018[0x30],(Il2CppObject *)in_stack_00000018[0x2e]);
  }
  in_stack_00000018[0x2d] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x2d]);
  in_stack_00000018[0x2c] = in_stack_00000018[0x2d] + 0x10;
  bVar1 = Nullable_1_get_HasValue_m057A0B5FF959F8A0EE6E5C1E55F4B1B1FA1F9B27_inline
                    ((Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E *)in_stack_00000018[0x2c]
                     ,*(MethodInfo **)Method_TestSocketIO_TestBoop__);
  if ((bVar1 & 1) != 0) {
    in_stack_00000018[0x2a] = in_stack_00000010[0x59];
    in_stack_00000018[0x29] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x29]);
    in_stack_00000018[0x28] = *(long *)(in_stack_00000018[0x29] + 0x10);
    NullCheck((void *)in_stack_00000018[0x2a]);
    *(long *)(in_stack_00000018[0x2a] + 0x78) = in_stack_00000018[0x28];
  }
  in_stack_00000018[0x27] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x27]);
  in_stack_00000018[0x26] = in_stack_00000018[0x27] + 0x18;
  bStack00000000000001d7 =
       Nullable_1_get_HasValue_m6DCF2B6333A04690B7827C13BE852CBA979B41CC_inline
                 ((Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 *)in_stack_00000018[0x26],
                  *(MethodInfo **)Method_UnityEngine_UIElements_TextElement_Cut__);
  bStack00000000000001d7 = bStack00000000000001d7 & 1;
  if (bStack00000000000001d7 != 0) {
    in_stack_00000018[0x24] = in_stack_00000010[0x59];
    in_stack_00000018[0x23] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x23]);
    in_stack_00000018[0x22] = *(long *)(in_stack_00000018[0x23] + 0x18);
    NullCheck((void *)in_stack_00000018[0x24]);
    *(long *)(in_stack_00000018[0x24] + 0x80) = in_stack_00000018[0x22];
  }
  in_stack_00000018[0x21] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x21]);
  in_stack_00000018[0x20] = in_stack_00000018[0x21] + 0x20;
  bStack00000000000001a7 =
       Nullable_1_get_HasValue_mC8284E7BC5A0BC5FD0718B6B93B9CD8AA357BB55_inline
                 ((Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 *)in_stack_00000018[0x20],
                  *(MethodInfo **)
                   Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<Start>b__16_0__
                 );
  bStack00000000000001a7 = bStack00000000000001a7 & 1;
  if (bStack00000000000001a7 != 0) {
    in_stack_00000018[0x1e] = in_stack_00000010[0x59];
    in_stack_00000018[0x1d] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x1d]);
    in_stack_00000018[0x1c] = *(long *)(in_stack_00000018[0x1d] + 0x20);
    NullCheck((void *)in_stack_00000018[0x1e]);
    *(long *)(in_stack_00000018[0x1e] + 0x88) = in_stack_00000018[0x1c];
  }
  in_stack_00000018[0x1b] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x1b]);
  in_stack_00000018[0x1a] = in_stack_00000018[0x1b] + 0x28;
  bStack0000000000000177 =
       Nullable_1_get_HasValue_mEB8CB060CBB6BC228BA470891E2A8C58E3807AAE_inline
                 ((Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 *)in_stack_00000018[0x1a],
                  *(MethodInfo **)
                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_OnEndTeleportation__
                 );
  bStack0000000000000177 = bStack0000000000000177 & 1;
  if (bStack0000000000000177 != 0) {
    in_stack_00000018[0x18] = in_stack_00000010[0x59];
    in_stack_00000018[0x17] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x17]);
    in_stack_00000018[0x16] = *(long *)(in_stack_00000018[0x17] + 0x28);
    NullCheck((void *)in_stack_00000018[0x18]);
    *(long *)(in_stack_00000018[0x18] + 0x90) = in_stack_00000018[0x16];
  }
  in_stack_00000018[0x15] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0x15]);
  bStack000000000000014f = *(byte *)(in_stack_00000018[0x15] + 0x68) & 1;
  if (bStack000000000000014f != 0) {
    in_stack_00000018[0x13] = in_stack_00000010[0x59];
    in_stack_00000018[0x12] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0x12]);
    in_stack_00000018[0x11] = *(long *)(in_stack_00000018[0x12] + 0x60);
    NullCheck((void *)in_stack_00000018[0x13]);
    *(long *)(in_stack_00000018[0x13] + 200) = in_stack_00000018[0x11];
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_00000018[0x13] + 200),(void *)in_stack_00000018[0x11]);
    in_stack_00000018[0x10] = in_stack_00000010[0x59];
    in_stack_00000018[0xf] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[0xf]);
    bVar1 = *(byte *)(in_stack_00000018[0xf] + 0x68);
    NullCheck((void *)in_stack_00000018[0x10]);
    *(byte *)(in_stack_00000018[0x10] + 0xd0) = bVar1 & 1;
  }
  in_stack_00000018[0xd] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[0xd]);
  in_stack_00000018[0xc] = in_stack_00000018[0xd] + 0x30;
  bStack0000000000000107 =
       Nullable_1_get_HasValue_m1011C885149341D952EEB15937E8796363EC2997_inline
                 ((Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 *)in_stack_00000018[0xc],
                  *(MethodInfo **)Method_TestSocketIO_TestClose__);
  bStack0000000000000107 = bStack0000000000000107 & 1;
  if (bStack0000000000000107 != 0) {
    in_stack_00000018[10] = in_stack_00000010[0x59];
    in_stack_00000018[9] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[9]);
    in_stack_00000018[8] = *(long *)(in_stack_00000018[9] + 0x30);
    NullCheck((void *)in_stack_00000018[10]);
    *(long *)(in_stack_00000018[10] + 0x98) = in_stack_00000018[8];
  }
  in_stack_00000018[7] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[7]);
  in_stack_00000018[6] = in_stack_00000018[7] + 0x38;
  bStack00000000000000d7 =
       Nullable_1_get_HasValue_mA1E2FF8D68974D11E12F985D200C466BFDD13713_inline
                 ((Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B *)in_stack_00000018[6],
                  *(MethodInfo **)
                   Method_UnityEngine_UIElements_TextElement_OnGenerateVisualContent__);
  bStack00000000000000d7 = bStack00000000000000d7 & 1;
  if (bStack00000000000000d7 != 0) {
    in_stack_00000018[4] = in_stack_00000010[0x59];
    in_stack_00000018[3] = in_stack_00000010[0x58];
    NullCheck((void *)in_stack_00000018[3]);
    in_stack_00000018[2] = *(long *)(in_stack_00000018[3] + 0x38);
    NullCheck((void *)in_stack_00000018[4]);
    *(long *)(in_stack_00000018[4] + 0xa0) = in_stack_00000018[2];
  }
  in_stack_00000018[1] = in_stack_00000010[0x58];
  NullCheck((void *)in_stack_00000018[1]);
  *in_stack_00000018 = in_stack_00000018[1] + 0x40;
  bStack00000000000000a7 =
       Nullable_1_get_HasValue_m31175AFA7DFB0E471E2B408ACF258930E2AC2260_inline
                 ((Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 *)*in_stack_00000018,
                  *(MethodInfo **)Method_TestSocketIO_TestOpen__);
  bStack00000000000000a7 = bStack00000000000000a7 & 1;
  if (bStack00000000000000a7 != 0) {
    pvVar6 = (void *)in_stack_00000010[0x59];
    pvVar5 = (void *)in_stack_00000010[0x58];
    NullCheck(pvVar5);
    uVar3 = *(undefined8 *)((long)pvVar5 + 0x40);
    NullCheck(pvVar6);
    *(undefined8 *)((long)pvVar6 + 0xa8) = uVar3;
  }
  pvVar5 = (void *)in_stack_00000010[0x58];
  NullCheck(pvVar5);
  if (*(long *)((long)pvVar5 + 0x48) != 0) {
    pvVar6 = (void *)in_stack_00000010[0x59];
    pvVar5 = (void *)in_stack_00000010[0x58];
    NullCheck(pvVar5);
    pvVar5 = *(void **)((long)pvVar5 + 0x48);
    NullCheck(pvVar6);
    *(void **)((long)pvVar6 + 0xb0) = pvVar5;
    Il2CppCodeGenWriteBarrier((void **)((long)pvVar6 + 0xb0),pvVar5);
  }
  pvVar5 = (void *)in_stack_00000010[0x58];
  NullCheck(pvVar5);
  bStack0000000000000057 = *(byte *)((long)pvVar5 + 0x5c) & 1;
  if (bStack0000000000000057 != 0) {
    pvVar6 = (void *)in_stack_00000010[0x59];
    pvVar5 = (void *)in_stack_00000010[0x58];
    NullCheck(pvVar5);
    uVar3 = *(undefined8 *)((long)pvVar5 + 0x54);
    NullCheck(pvVar6);
    *(undefined8 *)((long)pvVar6 + 0xb8) = uVar3;
    pvVar6 = (void *)in_stack_00000010[0x59];
    pvVar5 = (void *)in_stack_00000010[0x58];
    NullCheck(pvVar5);
    bStack0000000000000027 = *(byte *)((long)pvVar5 + 0x5c) & 1;
    NullCheck(pvVar6);
    *(byte *)((long)pvVar6 + 0xc0) = bStack0000000000000027 & 1;
  }
  return;
}


