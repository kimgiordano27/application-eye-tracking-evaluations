/*
FUNCTION_NAME: FUN_061808fc
ENTRY_POINT: 061808fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void FUN_061808fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar3 = 
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo;
  puVar2 = PTR_DAT_065c92b8;
  puVar1 = PTR_DAT_065c89e8;
  if ((DAT_06a83c03 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Api_Gax_Json_JsonToken_TokenType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_JsonToken_TokenType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Api_Gax_Json_JsonTokenizer_ContainerType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(InternalMarketingTelemetryWrapper_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Newtonsoft_Json_Linq_JContainer_<GetDescendants>d__36_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Newtonsoft_Json_Linq_JObject_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Interop_Sys_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Api_Gax_Json_JsonTokenizer_PushBackReader_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Api_Gax_Json_JsonTokenizer_State_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a83c03 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar13 = *(long *)(param_1 + 0xa8);
  plVar9 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,2);
  lVar12 = *(long *)puVar1;
  uVar14 = *(undefined8 *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar12);
  }
  lVar12 = FUN_04f3fb68(uVar14,0);
                    /* try { // try from 06180a4c to 06280a73 has its CatchHandler @ 06180b44 */
  if (plVar9 == (long *)0x0) goto LAB_06180e34;
  if ((lVar12 != 0) &&
     (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_06180e3c:
    uVar14 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar14,0);
  }
  puVar3 = Google_Api_Gax_Json_JsonTokenizer_PushBackReader_TypeInfo;
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar12;
                    /* try { // try from 06180a80 to 06280a87 has its CatchHandler @ 06180b48 */
                    /* try { // try from 06180a88 to 06280b03 has its CatchHandler @ 061804d0 */
    lVar12 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_06180e3c;
    if (1 < *(uint *)(plVar9 + 3)) {
      plVar9[5] = lVar12;
      if (((lVar13 != 0) && (lVar12 = FUN_0617bc20(lVar13,plVar9), lVar12 != 0)) &&
         (lVar12 = FUN_03397360(lVar12,*(undefined8 *)
                                        Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo
                               ), lVar12 != 0)) {
        thunk_FUN_0616c9e0(lVar12,param_1,0);
                    /* try { // try from 06180b04 to 06280b07 has its CatchHandler @ 06180d30 */
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (lVar12 = FUN_033af3b8(*(long *)(param_1 + 0xa8),
                                  *(undefined8 *)
                                   Google_Api_Gax_Json_JsonTokenizer_ContainerType_TypeInfo),
           lVar12 != 0)) {
                    /* try { // try from 06180b08 to 06280b0b has its CatchHandler @ 06180d2c */
                    /* try { // try from 06180b0c to 06280b0f has its CatchHandler @ 06180d38 */
          FUN_0616f94c(lVar12,0);
                    /* try { // try from 06180b10 to 06280b13 has its CatchHandler @ 06180c88 */
                    /* try { // try from 06180b14 to 06280b17 has its CatchHandler @ 06180c84 */
          if (*(long *)(param_1 + 0xa8) != 0) {
                    /* try { // try from 06180b18 to 06280b1b has its CatchHandler @ 06180c90 */
                    /* try { // try from 06180b1c to 06280b1f has its CatchHandler @ 06180b40 */
                    /* try { // try from 06180b20 to 06280b23 has its CatchHandler @ 06180b3c */
                    /* try { // try from 06180b24 to 06280b27 has its CatchHandler @ 06180be8 */
                    /* try { // try from 06180b28 to 06280b2b has its CatchHandler @ 06180b38 */
            FUN_033ad008(*(long *)(param_1 + 0xa8),0xffffffff,
                         *(undefined8 *)Google_Protobuf_JsonToken_TokenType_TypeInfo);
            puVar8 = Google_Api_Gax_Json_JsonTokenizer_State_TypeInfo;
            puVar7 = Google_Api_Gax_Json_JsonToken_TokenType_TypeInfo;
            puVar6 = OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo;
            puVar5 = Newtonsoft_Json_Linq_JContainer_<GetDescendants>d__36_TypeInfo;
            puVar4 = Interop_Sys_TypeInfo;
            puVar3 = 
            UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo;
                    /* try { // try from 06180b2c to 06280b2f has its CatchHandler @ 06180b34 */
                    /* try { // try from 06180b30 to 06280b33 has its CatchHandler @ 06180b48 */
            if (*(long *)(param_1 + 0xb0) != 0) {
                    /* catch() { ... } // from try @ 06180b2c with catch @ 06180b34
                       try { // try from 06180b34 to 06280b5f has its CatchHandler @ 061804d0 */
                    /* catch() { ... } // from try @ 06180b28 with catch @ 06180b38 */
                    /* catch() { ... } // from try @ 06180b20 with catch @ 06180b3c */
                    /* catch() { ... } // from try @ 06180b1c with catch @ 06180b40 */
                    /* catch() { ... } // from try @ 06180a4c with catch @ 06180b44 */
                    /* catch() { ... } // from try @ 06180a80 with catch @ 06180b48
                       catch() { ... } // from try @ 06180b30 with catch @ 06180b48 */
                    /* try { // try from 06180b60 to 06280b63 has its CatchHandler @ 06180b70 */
              FUN_03968dbc(&local_98,*(long *)(param_1 + 0xb0),
                           *(undefined8 *)OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo);
                    /* catch() { ... } // from try @ 06180b60 with catch @ 06180b70 */
              uStack_78 = uStack_90;
              local_80 = local_98;
              local_70 = local_88;
              while (uVar11 = FUN_0481f4e4(&local_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
                if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                FUN_06180fa4();
              }
                    /* try { // try from 06180bb0 to 06280be3 has its CatchHandler @ 06180ddc */
              FUN_0481f4e0(&local_80,
                           *(undefined8 *)
                            UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo
                          );
              FUN_0617b1a0(param_1,param_2);
              lVar13 = *(long *)(param_1 + 0xa8);
              plVar9 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,2);
              lVar12 = *(long *)puVar1;
              uVar14 = *(undefined8 *)puVar8;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 061807bc with catch @ 06180be4
                       catch() { ... } // from try @ 061808b0 with catch @ 06180be4
                       try { // try from 06180be4 to 06280bff has its CatchHandler @ 061804d0 */
                    /* catch() { ... } // from try @ 061808c4 with catch @ 06180be8
                       catch() { ... } // from try @ 06180b24 with catch @ 06180be8 */
                thunk_FUN_02cd038c(lVar12);
              }
              lVar12 = FUN_04f3fb68(uVar14,0);
              if (plVar9 != (long *)0x0) {
                    /* try { // try from 06180c00 to 06280c03 has its CatchHandler @ 06180c10 */
                    /* catch() { ... } // from try @ 06180c00 with catch @ 06180c10 */
                if ((lVar12 != 0) &&
                   (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0
                   )) goto LAB_06180e3c;
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar12;
                  lVar12 = FUN_04f3fb68(*(undefined8 *)puVar4,0);
                  if ((lVar12 != 0) &&
                     (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar10 == 0)) goto LAB_06180e3c;
                    /* try { // try from 06180c50 to 06280c83 has its CatchHandler @ 06180ddc */
                  if (1 < *(uint *)(plVar9 + 3)) {
                    plVar9[5] = lVar12;
                    if ((lVar13 != 0) && (lVar12 = FUN_0617bc20(lVar13,plVar9), lVar12 != 0)) {
                      lVar12 = FUN_03397360(lVar12,*(undefined8 *)puVar7);
                    /* catch() { ... } // from try @ 06180b14 with catch @ 06180c84
                       try { // try from 06180c84 to 06280ca7 has its CatchHandler @ 061804d0 */
                      uVar14 = FUN_05ef2cf0(param_1,0);
                    /* catch() { ... } // from try @ 06180b10 with catch @ 06180c88 */
                    /* catch() { ... } // from try @ 06180680 with catch @ 06180c8c
                       catch() { ... } // from try @ 06180840 with catch @ 06180c8c */
                    /* catch() { ... } // from try @ 06180854 with catch @ 06180c90
                       catch() { ... } // from try @ 06180b18 with catch @ 06180c90 */
                    /* try { // try from 06180ca8 to 06280cab has its CatchHandler @ 06180cb8 */
                      if ((lVar12 != 0) &&
                         ((lVar12 = FUN_06169e3c(lVar12,uVar14,0), lVar12 != 0 &&
                          (lVar12 = FUN_0616f94c(lVar12,0), lVar12 != 0)))) {
                        FUN_0616f8f0(lVar12,0);
                    /* catch() { ... } // from try @ 06180ca8 with catch @ 06180cb8 */
                        if ((*(long *)(param_1 + 0xa8) != 0) &&
                           (lVar12 = FUN_033ac628(*(long *)(param_1 + 0xa8),
                                                  *(undefined8 *)
                                                   InternalMarketingTelemetryWrapper_<>c_TypeInfo),
                           lVar12 != 0)) {
                          FUN_0616f94c(lVar12,0);
                          lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
                          if (lVar12 != 0) {
                    /* try { // try from 06180cf8 to 06280d2b has its CatchHandler @ 06180ddc */
                            (**(code **)(lVar12 + 0x18))
                                      (*(undefined8 *)(lVar12 + 0x40),
                                       *(undefined8 *)(param_1 + 0xa8),
                                       *(undefined8 *)(lVar12 + 0x28));
                            **(undefined8 **)(*(long *)puVar3 + 0xb8) = 0;
                          }
                          if (*(long *)(param_1 + 0xb0) != 0) {
                            FUN_03968dbc(&local_98,*(long *)(param_1 + 0xb0),*(undefined8 *)puVar6);
                            uStack_78 = uStack_90;
                            local_80 = local_98;
                            local_70 = local_88;
                    /* catch() { ... } // from try @ 06180b08 with catch @ 06180d2c
                       try { // try from 06180d2c to 06280d4f has its CatchHandler @ 061804d0 */
                    /* catch() { ... } // from try @ 06180b04 with catch @ 06180d30 */
                    /* catch() { ... } // from try @ 061805fc with catch @ 06180d34
                       catch() { ... } // from try @ 061806a0 with catch @ 06180d34 */
                    /* catch() { ... } // from try @ 061806b4 with catch @ 06180d38
                       catch() { ... } // from try @ 06180b0c with catch @ 06180d38 */
                            while (uVar11 = FUN_0481f4e4(&local_80,*(undefined8 *)puVar5),
                                  (uVar11 & 1) != 0) {
                              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02ce7c7c();
                              }
                    /* try { // try from 06180d50 to 06280d53 has its CatchHandler @ 06180d60 */
                              FUN_0617a9d0(local_70,*(undefined8 *)(local_70 + 0x38),
                                           *(undefined8 *)(local_70 + 0x40),
                                           *(undefined8 *)(local_70 + 0x20),
                                           *(undefined8 *)(local_70 + 0x28),
                                           *(undefined8 *)(local_70 + 0x30));
                            }
                    /* catch() { ... } // from try @ 06180d50 with catch @ 06180d60 */
                            FUN_0481f4e0(&local_80,
                                         *(undefined8 *)
                                          UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo
                                        );
                            FUN_0617a9d0(param_1,*(undefined8 *)(param_1 + 0x38),
                                         *(undefined8 *)(param_1 + 0x40),
                                         *(undefined8 *)(param_1 + 0x20),
                                         *(undefined8 *)(param_1 + 0x28),
                                         *(undefined8 *)(param_1 + 0x30));
                            if (*(long *)(param_1 + 0xb0) != 0) {
                              FUN_03968dbc(&local_98,*(long *)(param_1 + 0xb0),*(undefined8 *)puVar6
                                          );
                              uStack_78 = uStack_90;
                              local_80 = local_98;
                    /* try { // try from 06180da0 to 06280dc7 has its CatchHandler @ 06180ddc */
                              local_70 = local_88;
                              while( true ) {
                                uVar11 = FUN_0481f4e4(&local_80,*(undefined8 *)puVar5);
                                if ((uVar11 & 1) == 0) {
                    /* try { // try from 06180dc8 to 06280dd3 has its CatchHandler @ 061804d0 */
                    /* try { // try from 06180dd4 to 06280ddb has its CatchHandler @ 06180ddc */
                                  FUN_0481f4e0(&local_80,
                                               *(undefined8 *)
                                                UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo
                                              );
                    /* catch() { ... } // from try @ 06180bb0 with catch @ 06180ddc
                       catch() { ... } // from try @ 06180c50 with catch @ 06180ddc
                       catch() { ... } // from try @ 06180cf8 with catch @ 06180ddc
                       catch() { ... } // from try @ 06180da0 with catch @ 06180ddc
                       catch() { ... } // from try @ 06180dd4 with catch @ 06180ddc */
                                  lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                  if (lVar12 != 0) {
                                    (**(code **)(lVar12 + 0x18))
                                              (*(undefined8 *)(lVar12 + 0x40),
                                               *(undefined8 *)(param_1 + 0xa8),
                                               *(undefined8 *)(lVar12 + 0x28));
                                    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = 0;
                                  }
                                  return;
                                }
                                if (local_70 == 0) break;
                                FUN_06181034();
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_02ce7c7c();
                            }
                          }
                        }
                      }
                    }
                    goto LAB_06180e34;
                  }
                }
                goto LAB_06180e38;
              }
            }
          }
        }
      }
LAB_06180e34:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
LAB_06180e38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


