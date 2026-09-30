/*
FUNCTION_NAME: FUN_03bff1c0
ENTRY_POINT: 03bff1c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_03bff1c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x44))) {
    iVar1 = *(int *)(param_1 + 0x48);
    param_2 = *(int *)(param_1 + 0x50) + param_2;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2 / iVar1;
    }
    param_2 = param_2 - iVar2 * iVar1;
    uVar4 = FUN_03bff0a8(param_1,param_2);
    local_50 = 0;
    uStack_48 = 0;
    FUN_03bff180(&local_50,param_1,param_2,uVar4);
    uStack_38 = uStack_48;
    local_40 = local_50;
    FUN_03bff2f8(&local_40,param_3,param_4);
    return;
  }
  local_40 = CONCAT44(local_40._4_4_,param_2);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_40);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x44));
  uVar5 = thunk_FUN_01efb3a4(puVar3);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_50);
  uVar6 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginWrite__);
  uVar4 = FUN_0340f2f0(uVar6,uVar4,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar5,uVar4,uVar6,0);
  uVar4 = thunk_FUN_01efb3a4(StringLiteral_14294);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar4);
}


