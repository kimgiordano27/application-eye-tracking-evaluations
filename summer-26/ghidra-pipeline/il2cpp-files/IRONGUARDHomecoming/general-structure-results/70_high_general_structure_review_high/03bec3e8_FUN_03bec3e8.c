/*
FUNCTION_NAME: FUN_03bec3e8
ENTRY_POINT: 03bec3e8
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


void FUN_03bec3e8(long *param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined4 local_38;
  int local_34;
  
  if ((DAT_04839a54 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13948);
    DAT_04839a54 = 1;
  }
  FUN_03bec554(param_2);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (-1 < param_3) {
    if (param_3 < (int)param_2[2]) {
      if (*param_2 != 0) {
        lVar5 = param_2[1];
        auVar7 = FUN_02f36924(*param_2,*(int *)((long)param_2 + 0x14) - param_3,
                              *(undefined8 *)StringLiteral_13948);
        param_1[2] = 0;
        pauVar6 = (undefined1 (*) [16])(param_1 + 1);
        *(long *)*pauVar6 = 0;
        *param_1 = lVar5;
        thunk_FUN_01f51358(param_1,lVar5);
        *pauVar6 = auVar7;
        thunk_FUN_01f51358(pauVar6,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  local_34 = param_3;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_34);
  local_38 = (undefined4)param_2[2];
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_38);
  uVar4 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginWrite__);
  uVar2 = FUN_0340f2f0(uVar4,uVar2,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_14005);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


