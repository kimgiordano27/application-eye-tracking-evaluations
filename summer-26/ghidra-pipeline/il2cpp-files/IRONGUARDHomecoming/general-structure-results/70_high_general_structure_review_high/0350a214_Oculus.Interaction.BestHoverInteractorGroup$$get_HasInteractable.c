/*
FUNCTION_NAME: Oculus.Interaction.BestHoverInteractorGroup$$get_HasInteractable
ENTRY_POINT: 0350a214
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_13
*/


void Oculus_Interaction_BestHoverInteractorGroup__get_HasInteractable
               (ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long unaff_x24;
  long *plVar6;
  long unaff_x25;
  undefined8 *puVar7;
  long unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar7 = *(undefined8 **)(unaff_x25 + 0x628);
  puVar5 = *(undefined8 **)(unaff_x23 + 0x400);
  plVar6 = *(long **)(unaff_x24 + 0xb38);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsSerializer_TryDeserialize<object>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalSubDrawCall>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__);
    *(undefined1 *)(unaff_x26 + 0xfae) = 1;
  }
  FUN_034f7b38(param_2,param_3,param_4,param_5,0);
  in_stack_00000008 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = thunk_FUN_01f113fc(*puVar7,&stack0x00000008);
  uVar4 = *puVar5;
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*plVar6);
  }
  uVar4 = FUN_03579868(uVar4,0);
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__;
  puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (param_3 != 0) {
    FUN_03489838(param_3,*(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                 ,uVar3,uVar4,0);
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = FUN_03579868(*(undefined8 *)puVar1,0);
    FUN_03489838(param_3,*(undefined8 *)puVar2,uVar4,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


