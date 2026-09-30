/*
FUNCTION_NAME: FUN_07508d24
ENTRY_POINT: 07508d24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075090b0) */
/* WARNING: Removing unreachable block (ram,0x07508f68) */
/* WARNING: Removing unreachable block (ram,0x07509050) */
/* WARNING: Removing unreachable block (ram,0x07509054) */
/* WARNING: Removing unreachable block (ram,0x075090c8) */
/* WARNING: Removing unreachable block (ram,0x075091ac) */

void FUN_07508d24(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_07ef4aed & 1) == 0) {
    FUN_03642964(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    FUN_03642964(PTR_DAT_07a1db08);
    FUN_03642964(PTR_DAT_07a1db10);
    FUN_03642964(PTR_DAT_07a1db18);
    FUN_03642964(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__);
    FUN_03642964(PTR_DAT_07a1db30);
    FUN_03642964(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetException__);
    FUN_03642964(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4aed = 1;
  }
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  puVar3 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__;
  puVar4 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar8 = FUN_03d9b548(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__);
  FUN_074ee0ac((uVar8 ^ 0xffffffff) & 1);
  uVar8 = FUN_03d9b548(param_3,*(undefined8 *)puVar3);
  FUN_074ee0ac((uVar8 ^ 0xffffffff) & 1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  local_68 = FUN_03fc4a88(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_07a1db30;
  local_a8 = &local_68;
  local_b0 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0459fb44(&local_c8,param_3,*(undefined8 *)PTR_DAT_07a1db30);
  puVar6 = 
  Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
  ;
  puVar5 = 
  Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
  ;
  puVar2 = PTR_DAT_07a1db10;
  puVar1 = PTR_DAT_07a1db08;
  puStack_78 = puStack_c0;
  local_80 = local_c8;
  local_70 = local_b8;
  puStack_c0 = &local_80;
  local_c8 = 0;
  while (uVar9 = FUN_05897b28(&local_80,*(undefined8 *)puVar2), uVar7 = local_70, (uVar9 & 1) != 0)
  {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    auVar12 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),param_2,local_70,
                         *(undefined8 *)(param_4 + 0x28));
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(0,auVar12._8_8_,auVar12._0_8_);
    }
    FUN_056af3c0(local_68,uVar7,auVar12._0_8_,*(undefined8 *)puVar6);
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(char *)(lVar11 + 0x11) == '\0') {
      if (*(char *)(lVar11 + 0x10) != '\0') {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_07536db8(*(long *)(param_2 + 0x40),uVar7,0);
      }
    }
    else {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_07536e64(*(long *)(param_2 + 0x40),uVar7,0);
    }
  }
  FUN_05897b24(&local_80,*(undefined8 *)puVar1);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0459fb44(&local_c8,lVar11,*(undefined8 *)puVar3);
  local_70 = local_b8;
  puStack_78 = puStack_c0;
  local_80 = local_c8;
  while (uVar9 = FUN_05897b28(&local_80,*(undefined8 *)puVar2), uVar7 = local_70, (uVar9 & 1) != 0)
  {
    FUN_0459fb44(&local_c8,param_3,*(undefined8 *)puVar3);
    local_a0 = local_c8;
    local_c8 = 0;
    puStack_98 = puStack_c0;
    local_90 = local_b8;
    puStack_c0 = &local_a0;
    while (uVar9 = FUN_05897b28(&local_a0,*(undefined8 *)puVar2), uVar10 = local_90,
          (uVar9 & 1) != 0) {
      uVar9 = FUN_0750ab98(param_1,local_90,uVar7);
      if ((uVar9 & 1) != 0) {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar10 = FUN_056af354(local_68,uVar10,*(undefined8 *)puVar5);
        FUN_0750a480(param_1,param_2,uVar7,uVar10);
      }
    }
    FUN_05897b24(&local_a0,*(undefined8 *)puVar1);
  }
  FUN_05897b24(&local_80,*(undefined8 *)puVar1);
  puVar3 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetException__;
  lVar11 = *local_a8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_03fc44d8(lVar11,*(undefined8 *)puVar3);
  if (local_b0 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


