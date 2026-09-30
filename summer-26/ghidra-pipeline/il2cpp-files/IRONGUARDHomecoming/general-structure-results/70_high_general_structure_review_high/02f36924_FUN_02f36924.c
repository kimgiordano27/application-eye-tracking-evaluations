/*
FUNCTION_NAME: FUN_02f36924
ENTRY_POINT: 02f36924
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_02f36924(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_28;
  int local_24;
  
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_24 = (int)param_2;
  if (-1 < local_24) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (local_24 < *(int *)(param_1 + 0x44)) {
      uVar3 = FUN_03bff090(param_1,param_2,0);
      uVar4 = FUN_03bff0a8(param_1,uVar3,0);
      local_40 = 0;
      uStack_38 = 0;
      FUN_026d3024(&local_40,param_1,uVar3,uVar4,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
      auVar1._8_8_ = uStack_38;
      auVar1._0_8_ = local_40;
      return auVar1;
    }
  }
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_24);
  FUN_01bc50c0(param_1);
  local_28 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = thunk_FUN_01efb3a4(puVar2);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_28);
  uVar6 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginWrite__);
  uVar4 = FUN_0340f2f0(uVar6,uVar4,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar5,uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_3);
}


