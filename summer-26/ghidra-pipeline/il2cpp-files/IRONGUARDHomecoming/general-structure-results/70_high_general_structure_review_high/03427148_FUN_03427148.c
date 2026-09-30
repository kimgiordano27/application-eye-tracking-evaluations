/*
FUNCTION_NAME: FUN_03427148
ENTRY_POINT: 03427148
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03427148(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_0483279c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMixerPlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMotionXToDeltaPlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationPosePlayable>__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationScriptPlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimatorControllerPlayable>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                      );
    DAT_0483279c = 1;
  }
  puVar4 = 
  Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimatorControllerPlayable>__;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_034efd20(uVar10,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_Register__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar8);
  }
  uVar10 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_03579868(uVar10,0);
  plVar5 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar4,uVar10,0);
  puVar4 = Method_Oculus_Platform_CAPI_StringToNative__;
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) !=
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar6;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),0);
    uVar10 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03579868(uVar10,0);
    plVar5 = (long *)FUN_03489498(param_2,*(undefined8 *)
                                           Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationScriptPlayable>__
                                  ,uVar10,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar5 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar7 = (undefined1 *)thunk_FUN_01f11920();
    puVar3 = Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
    ;
    *(undefined1 *)(param_1 + 0x21) = *puVar7;
    uVar10 = FUN_03579868(*(undefined8 *)puVar3,0);
    plVar5 = (long *)FUN_03489498(param_2,*(undefined8 *)
                                           Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                                  ,uVar10,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      lVar9 = *(long *)
               Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationPosePlayable>__
      ;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      *(long **)(param_1 + 0x28) = plVar5;
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
    }
    thunk_FUN_01f51358(param_1 + 0x28,plVar5);
    uVar10 = FUN_03579868(*(undefined8 *)
                           Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMixerPlayable>__
                          ,0);
    plVar5 = (long *)FUN_03489498(param_2,*(undefined8 *)
                                           Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                                  ,uVar10,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar9 = *(long *)
               Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMotionXToDeltaPlayable>__
      ;
      bVar2 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      *(long **)(param_1 + 0x30) = plVar5;
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
    }
    thunk_FUN_01f51358(param_1 + 0x30,plVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


