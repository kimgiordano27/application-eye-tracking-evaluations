/*
FUNCTION_NAME: FUN_0408e9e0
ENTRY_POINT: 0408e9e0
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


undefined4 FUN_0408e9e0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  uint local_24;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_2 < 6) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 0x10 + 0x2d4);
  }
  local_24 = param_2;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
  local_28 = 6;
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_28);
  uVar4 = thunk_FUN_01efb3a4(PTR_DAT_045879b0);
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  uVar2 = FUN_0340f334(uVar4,uVar5,uVar2,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(PTR_DAT_045879c0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


