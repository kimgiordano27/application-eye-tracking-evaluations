/*
FUNCTION_NAME: Oculus.Interaction.BestHoverInteractorGroup$$Enable
ENTRY_POINT: 0350a060
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void Oculus_Interaction_BestHoverInteractorGroup__Enable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 auStack_10 [2];
  
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
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__);
  *(undefined1 *)(unaff_x21 + 0xfad) = 1;
  FUN_034f7aa8();
  uVar5 = *unaff_x24;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar5,0);
  puVar2 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalSubDrawCall>__;
  if (unaff_x20 != 0) {
    plVar3 = (long *)FUN_03489498();
    puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
    if ((plVar3 != (long *)0x0) && (lVar4 = *(long *)(*(long *)puVar2 + 0x40), *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar3,lVar4);
    }
    thunk_FUN_01f11928(plVar3,*(long *)puVar2,auStack_10);
    *(undefined8 *)(unaff_x19 + 0xa0) = auStack_10[0];
    FUN_03579868(*(undefined8 *)puVar1,0);
    plVar3 = (long *)FUN_03489498();
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
    }
    else {
      lVar4 = *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      if ((*plVar3 != lVar4) || (*(long **)(unaff_x19 + 0x98) = plVar3, *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar3);
      }
    }
    thunk_FUN_01f51358(unaff_x19 + 0x98,plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


