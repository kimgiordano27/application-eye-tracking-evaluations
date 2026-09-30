/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 07ca374c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  puVar2 = PTR_DAT_09f4d930;
  if ((DAT_0a526a14 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4d930);
    FUN_04447ba8(PTR_DAT_09f25358);
    DAT_0a526a14 = 1;
  }
  lVar3 = FUN_04447c90(*(undefined8 *)puVar2,0x1a);
  plVar4 = (long *)(param_1 + 0x10);
  *plVar4 = lVar3;
  thunk_FUN_044bb4b4(plVar4,lVar3);
  lVar3 = FUN_04447c90(*(undefined8 *)puVar2,0x1a);
  plVar5 = (long *)(param_1 + 0x18);
  *plVar5 = lVar3;
  thunk_FUN_044bb4b4(plVar5,lVar3);
  FUN_07a80df4(param_1,0);
  puVar2 = PTR_DAT_09f25358;
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_095381c0(&local_a0,0);
        *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(param_1 + 0x20) = local_a0;
        *(undefined8 *)(param_1 + 0x34) = uStack_8c;
        *(ulong *)(param_1 + 0x2c) = CONCAT44(uStack_90,uStack_94);
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_095381c0(&local_60,0);
      local_80 = local_60;
      uStack_6c = uStack_4c;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_07ca3914:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar7);
      *(undefined8 *)((long)puVar1 + 0x14) = uStack_4c;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack_50,uStack_54);
      puVar1[1] = CONCAT44(uStack_54,uStack_58);
      *puVar1 = local_60;
      lVar3 = *plVar5;
      FUN_095381c0(&local_a0,0);
      local_60 = local_a0;
      uStack_4c = uStack_8c;
      uStack_58 = uStack_98;
      uStack_54 = uStack_94;
      uStack_50 = uStack_90;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_07ca3914;
      puVar1 = (undefined8 *)(lVar3 + lVar7);
      lVar7 = lVar7 + 0x1c;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack_8c;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack_90,uStack_94);
      puVar1[1] = CONCAT44(uStack_94,uStack_98);
      *puVar1 = local_a0;
      lVar3 = *plVar4;
      uVar6 = uVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


