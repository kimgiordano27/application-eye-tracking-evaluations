/*
FUNCTION_NAME: Audiosystem.AudioExtensions.<PlayAndReturnRoutine>d__12$$.ctor
ENTRY_POINT: 01fca748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Audiosystem_AudioExtensions_<PlayAndReturnRoutine>d__12___ctor
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               float param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
    *(undefined1 *)(unaff_x20 + 0xd62) = 1;
  }
  if ((((float)param_7 != 0.0) || ((float)param_5 != 0.0)) || ((float)param_6 != 0.0)) {
    fVar8 = (float)param_8;
    if (fVar8 < 0.0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                                );
      FUN_034f7db4(uVar3,uVar4,0);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,uVar4);
    }
    if (fVar8 != 0.0) {
      fStack000000000000000c = param_9;
      FUN_03c7c6bc(param_5,param_6,param_7,0);
      uVar7 = 0;
      uVar3 = FUN_04067568(0);
      uVar4 = FUN_03c7c6bc(param_2,param_3,param_4,0);
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      FUN_04063d40(&stack0x00000050,uVar4,param_3,param_4,uVar3,param_6,param_7,uVar7,0);
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      in_stack_000000a8 = in_stack_00000068;
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_00000018 = in_stack_00000098;
      in_stack_00000010 = in_stack_00000090;
      in_stack_00000028 = in_stack_000000a8;
      in_stack_00000020 = in_stack_000000a0;
      in_stack_00000038 = in_stack_000000b8;
      in_stack_00000030 = in_stack_000000b0;
      in_stack_00000048 = in_stack_000000c8;
      in_stack_00000040 = in_stack_000000c0;
      FUN_01fc5548(param_10,&stack0x00000010);
      puVar2 = *(undefined4 **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__ + 0xb8);
      fVar10 = DAT_00c926a4 - fStack000000000000000c * DAT_00c92344;
      fVar9 = fStack000000000000000c * DAT_00c92344 + DAT_00c926a4;
      FUN_01fc6b74(*puVar2,puVar2[1],puVar2[2],param_8,fVar10,fVar9,param_10);
      if (DAT_0482ee13 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee13 = '\x01';
      }
      puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar12 = (double)fVar10;
      dVar5 = cos(dVar12);
      if (DAT_0482ee14 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee14 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar12 = sin(dVar12);
      if (DAT_0482ee13 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee13 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar11 = (double)fVar9;
      dVar6 = cos(dVar11);
      if (DAT_0482ee14 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee14 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar11 = sin(dVar11);
      fVar9 = fVar8 * DAT_00c9275c;
      FUN_01fc63c4((float)dVar5 * fVar8,fVar8 * 0.0,(float)dVar12 * fVar8,0,0,fVar9,param_10);
      FUN_01fc63c4((float)dVar6 * fVar8,fVar8 * 0.0,(float)dVar11 * fVar8,0,0,fVar9,param_10);
      FUN_01fc611c(param_10);
    }
  }
  return;
}


