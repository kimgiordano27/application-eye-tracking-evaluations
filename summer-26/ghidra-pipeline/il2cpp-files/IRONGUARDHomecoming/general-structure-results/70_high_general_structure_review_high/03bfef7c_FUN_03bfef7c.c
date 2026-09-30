/*
FUNCTION_NAME: FUN_03bfef7c
ENTRY_POINT: 03bfef7c
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


undefined1  [16] FUN_03bfef7c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x44))) {
    iVar1 = *(int *)(param_1 + 0x48);
    param_2 = *(int *)(param_1 + 0x50) + param_2;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2 / iVar1;
    }
    param_2 = param_2 - iVar2 * iVar1;
    uVar5 = FUN_03bff0a8(param_1,param_2);
    local_30 = 0;
    uStack_28 = 0;
    FUN_03bff180(&local_30,param_1,param_2,uVar5);
    auVar3._8_8_ = uStack_28;
    auVar3._0_8_ = local_30;
    return auVar3;
  }
  local_34 = param_2;
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_34);
  local_38 = *(undefined4 *)(param_1 + 0x44);
  uVar6 = thunk_FUN_01efb3a4(puVar4);
  uVar6 = thunk_FUN_01f113fc(uVar6,&local_38);
  uVar7 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginWrite__);
  uVar5 = FUN_0340f2f0(uVar7,uVar5,uVar6,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar6,uVar5,uVar7,0);
  uVar5 = thunk_FUN_01efb3a4(StringLiteral_14291);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar5);
}


