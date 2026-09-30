/*
FUNCTION_NAME: FUN_034f1480
ENTRY_POINT: 034f1480
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_8
*/


void FUN_034f1480(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_58;
  
  if ((DAT_04832e42 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_HandleTimeoutMsTimer__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_HandleWriteStream__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_Deserialize__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedFile__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_<Write>b__94_0__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedStream__);
    DAT_04832e42 = 1;
  }
  puVar7 = Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedStream__;
  puVar6 = Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__;
  puVar5 = Method_Meta_WitAi_Json_WitResponseNode_Deserialize__;
  puVar4 = Method_Meta_WitAi_WitRequest_HandleWriteStream__;
  puVar3 = Method_Meta_WitAi_WitRequest_HandleTimeoutMsTimer__;
  puVar2 = Method_Meta_WitAi_WitRequest_<Write>b__94_0__;
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  if (param_2 != 0) {
    FUN_03477a2c(param_2,*(undefined8 *)
                          Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedFile__,
                 *(undefined8 *)(param_1 + 0x10),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar7,*(undefined8 *)(param_1 + 0x18),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x20),0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x28),0);
    local_58 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_58);
    FUN_03477a2c(param_2,*(undefined8 *)puVar4,uVar8,0);
    FUN_03477a2c(param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x40),0);
    FUN_0348aba4(param_2,*(undefined8 *)puVar2,*(undefined1 *)(param_1 + 0x38),0);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar8 = thunk_FUN_01f117cc();
  uVar9 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
  FUN_034efd20(uVar8,uVar9);
  uVar9 = thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_Parse__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


