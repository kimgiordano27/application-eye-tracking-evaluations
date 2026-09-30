/*
FUNCTION_NAME: FUN_034f4a68
ENTRY_POINT: 034f4a68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14
*/


void FUN_034f4a68(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  
  if ((DAT_04832e69 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_OnMicStoppedListening__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_OnPartialTranscription__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_OnTranscriptionMicLevelChanged__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Requests_WitVRequest_RequestWitGet<WitResponseNode>__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<WitResponseNode>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_WordStorage_Contains<FixedString512Bytes>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetFixedString<FixedString128Bytes>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetOrCreateIndex<FixedString32Bytes>__
                      );
    DAT_04832e69 = 1;
  }
  puVar8 = 
  Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetOrCreateIndex<FixedString32Bytes>__;
  puVar7 = Method_Unity_Collections_LowLevel_Unsafe_WordStorage_Contains<FixedString512Bytes>__;
  puVar6 = Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<WitResponseNode>__;
  puVar5 = Method_Meta_WitAi_Requests_WitVRequest_RequestWitGet<WitResponseNode>__;
  puVar4 = Method_Meta_WitAi_WitService_OnTranscriptionMicLevelChanged__;
  puVar3 = Method_Meta_WitAi_WitService_OnPartialTranscription__;
  puVar2 = Method_Meta_WitAi_WitService_OnMicStoppedListening__;
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  if (param_2 != 0) {
    FUN_0348b0a8(param_2,*(undefined8 *)
                          Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetFixedString<FixedString128Bytes>__
                 ,*(undefined8 *)(param_1 + 0x10),0);
    FUN_0348b0a8(param_2,*(undefined8 *)puVar8,*(undefined8 *)(param_1 + 0x18),0);
    local_58 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_58);
    FUN_03477a2c(param_2,*(undefined8 *)puVar4,uVar9,0);
    local_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    local_80 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_80);
    FUN_03477a2c(param_2,*(undefined8 *)puVar3,uVar9,0);
    local_90 = *(undefined8 *)(param_1 + 0x50);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    local_a0 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_a0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar6,uVar9,0);
    local_a8 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_a8);
    FUN_03477a2c(param_2,*(undefined8 *)puVar5,uVar9,0);
    FUN_0348aba4(param_2,*(undefined8 *)puVar7,*(undefined1 *)(param_1 + 0x60),0);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar9 = thunk_FUN_01f117cc();
  uVar10 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
  FUN_034efd20(uVar9,uVar10);
  uVar10 = thunk_FUN_01efb3a4(
                             Method_Unity_Collections_LowLevel_Unsafe_Words_SetFixedString<FixedString512Bytes>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar10);
}


