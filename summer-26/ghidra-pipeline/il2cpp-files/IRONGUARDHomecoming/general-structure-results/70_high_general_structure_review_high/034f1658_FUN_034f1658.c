/*
FUNCTION_NAME: FUN_034f1658
ENTRY_POINT: 034f1658
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_15;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034f1658(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_04832e43 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedBase64__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_<HandleWriteStream>b__93_1__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_HandleTimeoutMsTimer__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_HandleWriteStream__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_Deserialize__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedFile__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitRequest_<Write>b__94_0__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedStream__);
    DAT_04832e43 = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar3 = Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedFile__;
  puVar2 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar10,uVar8);
    uVar8 = thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedFile__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar8);
  }
  uVar10 = *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  uVar10 = FUN_03579868(uVar10,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    lVar9 = *(long *)puVar1;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x10) = plVar4, *plVar4 != lVar9))
    goto LAB_034f190c;
  }
  puVar3 = Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedStream__;
  thunk_FUN_01f51358(param_1 + 0x10,plVar4);
  uVar10 = FUN_03579868(*(undefined8 *)puVar2,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar9 = *(long *)puVar1;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x18) = plVar4, *plVar4 != lVar9))
    goto LAB_034f190c;
  }
  puVar3 = Method_Meta_WitAi_Json_WitResponseNode_Deserialize__;
  thunk_FUN_01f51358(param_1 + 0x18,plVar4);
  uVar10 = FUN_03579868(*(undefined8 *)puVar2,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar9 = *(long *)puVar1;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x20) = plVar4, *plVar4 != lVar9))
    goto LAB_034f190c;
  }
  puVar3 = Method_Meta_WitAi_WitRequest_HandleTimeoutMsTimer__;
  thunk_FUN_01f51358(param_1 + 0x20,plVar4);
  uVar10 = FUN_03579868(*(undefined8 *)puVar2,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar9 = *(long *)puVar1;
    if ((*plVar4 != lVar9) || (*(long **)(param_1 + 0x28) = plVar4, *plVar4 != lVar9)) {
LAB_034f190c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4);
    }
  }
  puVar3 = Method_Meta_WitAi_WitRequest_HandleWriteStream__;
  puVar2 = Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
  thunk_FUN_01f51358(param_1 + 0x28,plVar4);
  uVar10 = FUN_03579868(*(undefined8 *)puVar2,0);
  plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
  puVar3 = Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedBase64__;
  puVar2 = Method_Meta_WitAi_Json_WitResponseNode_LoadFromCompressedBase64__;
  if (plVar4 == (long *)0x0) {
LAB_034f1a80:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(*plVar4 + 0x40) ==
      *(long *)(*(long *)
                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
               + 0x40)) {
    puVar5 = (undefined8 *)thunk_FUN_01f11920();
    *(undefined8 *)(param_1 + 0x30) = *puVar5;
    uVar10 = FUN_03579868(*(undefined8 *)puVar3,0);
    lVar9 = FUN_03489498(param_2,*(undefined8 *)puVar2,uVar10,0);
    puVar2 = Method_Meta_WitAi_WitRequest_<HandleWriteStream>b__93_1__;
    if (lVar9 == 0) {
      lVar6 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      uVar10 = *(undefined8 *)Method_Meta_WitAi_WitRequest_<HandleWriteStream>b__93_1__;
      lVar6 = thunk_FUN_01f116d0(lVar9,uVar10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar9,uVar10);
      }
      *(long *)(param_1 + 0x40) = lVar6;
      uVar10 = *(undefined8 *)puVar2;
      lVar6 = thunk_FUN_01f116d0(lVar9,uVar10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar9,uVar10);
      }
    }
    puVar3 = Method_Meta_WitAi_WitRequest_<Write>b__94_0__;
    puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
    thunk_FUN_01f51358(param_1 + 0x40,lVar6);
    uVar10 = FUN_03579868(*(undefined8 *)puVar2,0);
    plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_034f1a80;
    if (*(long *)(*plVar4 + 0x40) ==
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) {
      puVar7 = (undefined1 *)thunk_FUN_01f11920();
      *(undefined1 *)(param_1 + 0x38) = *puVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc();
}


