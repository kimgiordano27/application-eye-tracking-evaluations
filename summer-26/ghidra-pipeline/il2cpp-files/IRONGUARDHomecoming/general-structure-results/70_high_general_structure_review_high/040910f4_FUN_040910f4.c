/*
FUNCTION_NAME: FUN_040910f4
ENTRY_POINT: 040910f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_040910f4(long param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04575218;
  if ((DAT_0483ef6c & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04575218);
    DAT_0483ef6c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04575218;
  if ((-1 < (int)param_2) && ((int)param_2 < **(int **)(lVar2 + 0xb8))) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x60) = param_3;
    return;
  }
  thunk_FUN_01efb3a4(PTR_DAT_04575218);
  FUN_01bc4c70();
  lVar2 = thunk_FUN_01efb3a4(puVar1);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_34 = **(undefined4 **)(lVar2 + 0xb8);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_34);
  local_38 = param_2;
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_38);
  uVar5 = thunk_FUN_01efb3a4(PTR_DAT_04587a10);
  uVar3 = FUN_0340f2f0(uVar5,uVar3,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04587a20);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


