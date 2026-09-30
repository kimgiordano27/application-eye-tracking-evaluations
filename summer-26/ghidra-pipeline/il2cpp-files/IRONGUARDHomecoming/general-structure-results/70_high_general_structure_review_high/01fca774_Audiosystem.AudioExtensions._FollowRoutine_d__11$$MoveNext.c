/*
FUNCTION_NAME: Audiosystem.AudioExtensions.<FollowRoutine>d__11$$MoveNext
ENTRY_POINT: 01fca774
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Audiosystem_AudioExtensions_<FollowRoutine>d__11__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float fVar9;
  undefined8 unaff_d10;
  double dVar10;
  undefined8 unaff_d11;
  double dVar11;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  float unaff_s15;
  float fStack000000000000000c;
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
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x200));
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
  *(undefined1 *)(unaff_x20 + 0xd62) = 1;
  if ((((float)unaff_d13 != 0.0) || (unaff_s15 != 0.0)) || ((float)unaff_d14 != 0.0)) {
    if (unaff_s8 < 0.0) {
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
                    /* try { // try from 01fca7b0 to 020cac5b has its CatchHandler @ 01fca7b0
                       catch() { ... } // from try @ 01fca7b0 with catch @ 01fca7b0
                       catch() { ... } // from try @ 01fcac68 with catch @ 01fca7b0 */
    if (unaff_s8 != 0.0) {
      fStack000000000000000c = unaff_s9;
      FUN_03c7c6bc(0);
      uVar7 = 0;
      uVar3 = FUN_04067568(0);
      uVar4 = FUN_03c7c6bc(0);
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      FUN_04063d40(&stack0x00000050,uVar4,unaff_d11,unaff_d10,uVar3,unaff_d14,unaff_d13,uVar7,0);
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
      FUN_01fc5548();
      puVar2 = *(undefined4 **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__ + 0xb8);
      fVar9 = DAT_00c926a4 - fStack000000000000000c * DAT_00c92344;
      fVar8 = fStack000000000000000c * DAT_00c92344 + DAT_00c926a4;
      FUN_01fc6b74(*puVar2,puVar2[1],puVar2[2]);
      if (DAT_0482ee13 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee13 = '\x01';
      }
      puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar11 = (double)fVar9;
      dVar5 = cos(dVar11);
      if (DAT_0482ee14 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee14 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar11 = sin(dVar11);
      if (DAT_0482ee13 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee13 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar10 = (double)fVar8;
      dVar6 = cos(dVar10);
      if (DAT_0482ee14 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee14 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar10 = sin(dVar10);
      fVar8 = unaff_s8 * DAT_00c9275c;
      FUN_01fc63c4((float)dVar5 * unaff_s8,unaff_s8 * 0.0,(float)dVar11 * unaff_s8,0,0,fVar8);
      FUN_01fc63c4((float)dVar6 * unaff_s8,unaff_s8 * 0.0,(float)dVar10 * unaff_s8,0,0,fVar8);
      FUN_01fc611c();
    }
  }
  return;
}


