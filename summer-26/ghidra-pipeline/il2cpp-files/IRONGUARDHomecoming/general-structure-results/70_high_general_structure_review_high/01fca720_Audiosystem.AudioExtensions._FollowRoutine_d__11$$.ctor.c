/*
FUNCTION_NAME: Audiosystem.AudioExtensions.<FollowRoutine>d__11$$.ctor
ENTRY_POINT: 01fca720
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


void Audiosystem_AudioExtensions_<FollowRoutine>d__11___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,float param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined4 *puVar2;
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
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_0482ed62 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
    DAT_0482ed62 = 1;
  }
  if ((((float)param_6 != 0.0) || ((float)param_4 != 0.0)) || ((float)param_5 != 0.0)) {
    fVar8 = (float)param_7;
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
      FUN_03c7c6bc(param_4,param_5,param_6,0);
      uVar7 = 0;
      uVar3 = FUN_04067568(0);
      uVar4 = FUN_03c7c6bc(param_1,param_2,param_3,0);
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      FUN_04063d40(&local_f0,uVar4,param_2,param_3,uVar3,param_5,param_6,uVar7,0);
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uStack_128 = uStack_a8;
      local_130 = local_b0;
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      local_110 = local_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      FUN_01fc5548(param_9,&local_130);
      puVar2 = *(undefined4 **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__ + 0xb8);
      fVar10 = DAT_00c926a4 - param_8 * DAT_00c92344;
      fVar9 = param_8 * DAT_00c92344 + DAT_00c926a4;
      FUN_01fc6b74(*puVar2,puVar2[1],puVar2[2],param_7,fVar10,fVar9,param_9);
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
      FUN_01fc63c4((float)dVar5 * fVar8,fVar8 * 0.0,(float)dVar12 * fVar8,0,0,fVar9,param_9);
      FUN_01fc63c4((float)dVar6 * fVar8,fVar8 * 0.0,(float)dVar11 * fVar8,0,0,fVar9,param_9);
      FUN_01fc611c(param_9);
    }
  }
  return;
}


