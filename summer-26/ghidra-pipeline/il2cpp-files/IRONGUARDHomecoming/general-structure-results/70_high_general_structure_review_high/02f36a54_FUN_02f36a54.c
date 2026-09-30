/*
FUNCTION_NAME: FUN_02f36a54
ENTRY_POINT: 02f36a54
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


void FUN_02f36a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_40 = 0;
  uStack_38 = 0;
  iVar6 = (int)param_2;
  if (-1 < iVar6) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (iVar6 < *(int *)(param_1 + 0x44)) {
      uVar2 = FUN_03bff090(param_1,param_2,0);
      uVar3 = FUN_03bff0a8(param_1,uVar2,0);
      local_58 = 0;
      uStack_50 = 0;
      FUN_026d3024(&local_58,param_1,uVar2,uVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
      uStack_38 = uStack_50;
      local_40 = local_58;
      FUN_026d33a8(&local_40,param_3,param_4,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38));
      return;
    }
  }
  local_58 = CONCAT44(local_58._4_4_,iVar6);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_58);
  FUN_01bc50c0(param_1);
  local_44 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_44);
  uVar5 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginWrite__);
  uVar3 = FUN_0340f2f0(uVar5,uVar3,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar4,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_5);
}


