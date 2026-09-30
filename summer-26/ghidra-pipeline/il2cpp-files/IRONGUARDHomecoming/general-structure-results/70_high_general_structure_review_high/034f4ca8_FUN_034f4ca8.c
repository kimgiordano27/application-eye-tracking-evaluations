/*
FUNCTION_NAME: FUN_034f4ca8
ENTRY_POINT: 034f4ca8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_18;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_18
*/


void FUN_034f4ca8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_04832e6a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_Words_ToFixedString<FixedString512Bytes>__
                      );
    thunk_FUN_01efb3a4(Method_Meta_WitAi_WitService_OnMicStoppedListening__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
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
    DAT_04832e6a = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetFixedString<FixedString128Bytes>__;
  puVar3 = Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar11,uVar10);
    uVar10 = thunk_FUN_01efb3a4(
                               Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_CheckTypeForwardedFrom__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,uVar10);
  }
  uVar11 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  plVar7 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar2,uVar11,0);
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_WordStorage_GetOrCreateIndex<FixedString32Bytes>__;
  puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (plVar7 != (long *)0x0) {
    if (*(long *)(*plVar7 + 0x40) ==
        *(long *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0x40)) {
      puVar8 = (undefined8 *)thunk_FUN_01f11920();
      *(undefined8 *)(param_1 + 0x10) = *puVar8;
      uVar11 = FUN_03579868(*(undefined8 *)puVar3,0);
      plVar7 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar11,0);
      puVar4 = Method_Meta_WitAi_WitService_OnTranscriptionMicLevelChanged__;
      puVar3 = Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
      if (plVar7 == (long *)0x0) goto LAB_034f5074;
      if (*(long *)(*plVar7 + 0x40) == *(long *)(*(long *)puVar2 + 0x40)) {
        puVar8 = (undefined8 *)thunk_FUN_01f11920();
        *(undefined8 *)(param_1 + 0x18) = *puVar8;
        uVar11 = FUN_03579868(*(undefined8 *)puVar3,0);
        plVar7 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar11,0);
        puVar5 = Method_Unity_Collections_LowLevel_Unsafe_Words_ToFixedString<FixedString512Bytes>__
        ;
        puVar4 = Method_Meta_WitAi_WitService_OnPartialTranscription__;
        puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        if (plVar7 == (long *)0x0) goto LAB_034f5074;
        if (*(long *)(*plVar7 + 0x40) ==
            *(long *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                     + 0x40)) {
          puVar8 = (undefined8 *)thunk_FUN_01f11920();
          *(undefined8 *)(param_1 + 0x20) = *puVar8;
          uVar11 = FUN_03579868(*(undefined8 *)puVar5,0);
          plVar7 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar11,0);
          puVar6 = Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<WitResponseNode>__;
          puVar4 = Method_Meta_WitAi_WitService_OnMicStoppedListening__;
          if (plVar7 == (long *)0x0) goto LAB_034f5074;
          if (*(long *)(*plVar7 + 0x40) ==
              *(long *)(*(long *)Method_Meta_WitAi_WitService_OnMicStoppedListening__ + 0x40)) {
            puVar8 = (undefined8 *)thunk_FUN_01f11920();
            uVar10 = *puVar8;
            uVar11 = puVar8[2];
            *(undefined8 *)(param_1 + 0x30) = puVar8[1];
            *(undefined8 *)(param_1 + 0x28) = uVar10;
            *(undefined8 *)(param_1 + 0x38) = uVar11;
            uVar11 = FUN_03579868(*(undefined8 *)puVar5,0);
            plVar7 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar6,uVar11,0);
            puVar5 = Method_Meta_WitAi_Requests_WitVRequest_RequestWitGet<WitResponseNode>__;
            if (plVar7 == (long *)0x0) goto LAB_034f5074;
            if (*(long *)(*plVar7 + 0x40) == *(long *)(*(long *)puVar4 + 0x40)) {
              puVar8 = (undefined8 *)thunk_FUN_01f11920();
              uVar10 = *puVar8;
              uVar11 = puVar8[2];
              *(undefined8 *)(param_1 + 0x48) = puVar8[1];
              *(undefined8 *)(param_1 + 0x40) = uVar10;
              *(undefined8 *)(param_1 + 0x50) = uVar11;
              uVar11 = FUN_03579868(*(undefined8 *)puVar3,0);
              plVar7 = (long *)FUN_03489390(param_2,*(undefined8 *)puVar5,uVar11,0);
              if (plVar7 != (long *)0x0) {
                if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                goto LAB_034f5070;
                puVar8 = (undefined8 *)thunk_FUN_01f11920();
                *(undefined8 *)(param_1 + 0x58) = *puVar8;
              }
              puVar3 = 
              Method_Unity_Collections_LowLevel_Unsafe_WordStorage_Contains<FixedString512Bytes>__;
              uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              plVar7 = (long *)FUN_03489390(param_2,*(undefined8 *)puVar3,uVar11,0);
              if (plVar7 != (long *)0x0) {
                if (*(long *)(*plVar7 + 0x40) !=
                    *(long *)(*(long *)
                               Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                             + 0x40)) goto LAB_034f5070;
                puVar9 = (undefined1 *)thunk_FUN_01f11920();
                *(undefined1 *)(param_1 + 0x60) = *puVar9;
              }
              return;
            }
          }
        }
      }
    }
LAB_034f5070:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
LAB_034f5074:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


