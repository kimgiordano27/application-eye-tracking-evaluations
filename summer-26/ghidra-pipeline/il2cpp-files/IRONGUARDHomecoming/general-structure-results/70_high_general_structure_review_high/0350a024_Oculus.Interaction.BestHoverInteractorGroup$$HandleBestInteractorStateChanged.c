/*
FUNCTION_NAME: Oculus.Interaction.BestHoverInteractorGroup$$HandleBestInteractorStateChanged
ENTRY_POINT: 0350a024
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_BestHoverInteractorGroup__HandleBestInteractorStateChanged
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_10 [2];
  
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_TryDeserialize<object>__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832fad & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsSerializer_TryDeserialize<object>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalSubDrawCall>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__);
    DAT_04832fad = 1;
  }
  FUN_034f7aa8(param_1,param_2,param_3,param_4,0);
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  puVar1 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalSubDrawCall>__;
  if (param_2 != 0) {
    plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)
                                           Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                                  ,uVar6,0);
    puVar3 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__;
    puVar2 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
    if ((plVar4 != (long *)0x0) && (lVar5 = *(long *)(*(long *)puVar1 + 0x40), *plVar4 != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4,lVar5);
    }
    thunk_FUN_01f11928(plVar4,*(long *)puVar1,auStack_10);
    *(undefined8 *)(param_1 + 0xa0) = auStack_10[0];
    uVar6 = FUN_03579868(*(undefined8 *)puVar2,0);
    plVar4 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar6,0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      lVar5 = *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      if ((*plVar4 != lVar5) || (*(long **)(param_1 + 0x98) = plVar4, *plVar4 != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar4);
      }
    }
    thunk_FUN_01f51358(param_1 + 0x98,plVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


