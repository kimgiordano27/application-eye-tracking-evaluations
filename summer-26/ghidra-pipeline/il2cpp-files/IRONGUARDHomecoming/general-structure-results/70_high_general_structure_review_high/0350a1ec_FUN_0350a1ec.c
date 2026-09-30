/*
FUNCTION_NAME: FUN_0350a1ec
ENTRY_POINT: 0350a1ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_16
*/


void FUN_0350a1ec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_TryDeserialize<object>__;
  puVar2 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalSubDrawCall>__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832fae & 1) == 0) {
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
    DAT_04832fae = 1;
  }
  FUN_034f7b38(param_1,param_2,param_3,param_4,0);
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_48);
  uVar5 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar5 = FUN_03579868(uVar5,0);
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_AddConverter__;
  puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  if (param_2 != 0) {
    FUN_03489838(param_2,*(undefined8 *)
                          Method_Unity_VisualScripting_FullSerializer_fsSerializer_TrySerialize<object>__
                 ,uVar4,uVar5,0);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = FUN_03579868(*(undefined8 *)puVar1,0);
    FUN_03489838(param_2,*(undefined8 *)puVar2,uVar5,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


