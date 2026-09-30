/*
FUNCTION_NAME: FUN_07e87f88
ENTRY_POINT: 07e87f88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07e87f88(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int local_a0 [24];
  
  piVar6 = local_a0;
  if ((DAT_0899aa70 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_0899aa70 = 1;
  }
  lVar8 = *(long *)(param_2 + 0x10);
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  if (lVar8 == 0) {
    return;
  }
  memcpy(local_a0,(void *)(param_3 + 4),0x60);
  iVar1 = *(int *)(param_3 + 100);
  lVar7 = 0;
  lVar4 = 0x28;
  do {
    if (*(int *)(lVar8 + 0x18) <= lVar7) {
      return;
    }
    if (iVar1 <= lVar7) {
      return;
    }
    if (lVar4 + 0x10 == 0x78) {
      uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo;
      thunk_FUN_03af1434(PTR_DAT_0848daa8);
      uVar2 = thunk_FUN_03ac74bc();
      uVar3 = thunk_FUN_03af1434(PTR_DAT_08486d40);
      FUN_0674c1e8(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2,uVar5);
    }
    if (*piVar6 == 1) {
      if (*(long *)(param_1 + 0x28) == 0) break;
      FUN_07c60e40(piVar6[2],piVar6[3],piVar6[4],piVar6[5],*(long *)(param_1 + 0x28),
                   *(undefined8 *)(lVar8 + lVar4),0);
    }
    else if (*piVar6 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) break;
      FUN_07c60d84(piVar6[1],*(long *)(param_1 + 0x28),*(undefined8 *)(lVar8 + lVar4),0);
    }
    lVar8 = *(long *)(param_2 + 0x10);
    piVar6 = piVar6 + 6;
    lVar7 = lVar7 + 1;
    lVar4 = lVar4 + 0x10;
  } while (lVar8 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


