/*
FUNCTION_NAME: FUN_061c64d0
ENTRY_POINT: 061c64d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


undefined1  [16]
FUN_061c64d0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double dStack_68;
  
  if ((DAT_06a83f0c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Niantic_Zeppelin_Scheduler_Extensions_SchedulerExtensions_<CoroutineRunEvery>c__Iterator1_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Zeppelin_Scheduler_Scheduler_RemoveCallback_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_ARDK_AR_Protobuf_ScanningFrameworkEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo);
    DAT_06a83f0c = 1;
  }
  puVar3 = Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo;
  puVar2 = Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo;
  dVar12 = DAT_0137f598;
  local_70 = 0.0;
  dStack_68 = 0.0;
  local_78 = 0.0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(char *)(param_4 + 0x19) == '\0') {
    switch(*(undefined1 *)(param_4 + 0x18)) {
    case 0:
      uVar14 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      FUN_061c3f4c(DAT_0137efb8,DAT_0137f598,&local_a0);
      break;
    case 1:
      uVar14 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      FUN_061c3f4c(DAT_0137f598,DAT_0137f620,&local_a0);
      break;
    case 2:
      if (*(int *)(*(long *)Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        uVar14 = *(undefined8 *)puVar2;
      }
      local_a0 = 0;
      uStack_98 = 0;
      FUN_061c3f4c(DAT_0137e740,DAT_0137df28,&local_a0);
      uVar14 = 0;
      dVar12 = DAT_0137efb0;
      break;
    case 3:
      local_a0 = 0;
      uStack_98 = 0;
      FUN_061c3f4c(DAT_0137f620,DAT_0137f160,&local_a0);
      uVar14 = 0;
      dVar12 = DAT_0137f598;
      break;
    case 4:
      local_a0 = 0;
      uStack_98 = 0;
      FUN_061c3f4c(DAT_0137f160,DAT_0137efb8,&local_a0);
      uVar14 = 0;
      dVar12 = DAT_0137f598;
      break;
    default:
      lVar6 = *(long *)Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar6 = *(long *)puVar2;
      }
      dVar12 = **(double **)(lVar6 + 0xb8);
      local_a0 = 0;
      uStack_98 = 0;
      uVar14 = 0;
      FUN_061c3f4c(DAT_0137e740,DAT_0137df28,&local_a0);
      dVar12 = -dVar12;
    }
    goto LAB_061c6784;
  }
  lVar6 = *(long *)(param_4 + 0x20);
  if (lVar6 == 0) {
LAB_061c694c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(uint *)(lVar6 + 0x18) == 0) {
LAB_061c6948:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  lVar5 = *(long *)(lVar6 + 0x20);
  if (lVar5 == 0) goto LAB_061c694c;
  if (((*(int *)(lVar5 + 0x18) == 1) || (*(int *)(lVar5 + 0x18) == 0)) ||
     (*(uint *)(lVar6 + 0x18) < 2)) goto LAB_061c6948;
  lVar6 = *(long *)(lVar6 + 0x28);
  if (lVar6 == 0) goto LAB_061c694c;
  if ((*(int *)(lVar6 + 0x18) == 1) || (*(int *)(lVar6 + 0x18) == 0)) goto LAB_061c6948;
  dVar15 = *(double *)(lVar5 + 0x20);
  dVar16 = *(double *)(lVar5 + 0x28);
  dVar12 = *(double *)(lVar6 + 0x20);
  dVar13 = *(double *)(lVar6 + 0x28);
  uVar1 = *(undefined1 *)(param_4 + 0x18);
  if (*(int *)(*(long *)Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo + 0xe0) ==
      0) {
    thunk_FUN_02cd038c();
  }
  dVar15 = dVar15 + dVar16;
  FUN_061e3ea0(uVar1,0);
  if (param_3 == 0.0) {
    if (0.0 <= dVar15) goto LAB_061c6640;
LAB_061c65e0:
    uVar7 = 1;
  }
  else {
    if (0.0 < dVar15) goto LAB_061c65e0;
LAB_061c6640:
    uVar7 = 0;
  }
  uVar1 = *(undefined1 *)(param_4 + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar3 = 
  Niantic_Zeppelin_Scheduler_Extensions_SchedulerExtensions_<CoroutineRunEvery>c__Iterator1_TypeInfo
  ;
  dVar12 = dVar12 + dVar13;
  FUN_061e3edc(uVar1,0);
  puVar2 = Niantic_ARDK_AR_Protobuf_ScanningFrameworkEvent_<>c_TypeInfo;
  if (param_3 == 0.0) {
    if (0.0 <= dVar12) goto LAB_061c6690;
LAB_061c6680:
    uVar8 = 1;
  }
  else {
    if (0.0 < dVar12) goto LAB_061c6680;
LAB_061c6690:
    uVar8 = 0;
  }
  dVar12 = (double)FUN_061c6950(param_4,uVar7,uVar8);
  dVar13 = (double)FUN_061c6950(param_4,uVar7 ^ 1,uVar8 ^ 1);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  dVar15 = dVar13;
  local_70 = dVar12;
  if (dVar12 <= dVar13) {
    dVar15 = dVar12;
    local_70 = dVar13;
  }
  dStack_68 = dVar15;
  local_80 = FUN_061c6a88(0x3cc0000000000000,&local_70);
  lVar6 = *(long *)puVar2;
  local_78 = dVar15;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar6 = *(long *)puVar2;
  }
  puVar2 = Niantic_Zeppelin_Scheduler_Scheduler_RemoveCallback_TypeInfo;
  dVar13 = *(double *)(*(long *)(lVar6 + 0xb8) + 0x28);
  auVar10 = FUN_061c6b14(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),&local_80);
  uVar14 = auVar10._8_8_;
  dVar12 = auVar10._0_8_;
  dStack_68 = dVar13;
  if (dVar13 != DAT_0137e9d8) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      local_70 = dVar12;
      thunk_FUN_02cd038c();
      auVar10._8_8_ = uVar14;
      auVar10._0_8_ = local_70;
    }
    uVar14 = auVar10._8_8_;
    local_70 = auVar10._0_8_;
    if (dVar12 != DAT_0137efb0) {
      uVar4 = FUN_061c6bdc(param_4,uVar7,uVar8 ^ 1);
      uVar9 = FUN_061c6bdc(param_4,uVar7 ^ 1,uVar8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      local_90 = FUN_061c4704(uVar4);
      uStack_88 = uVar9;
      FUN_061c51b4(0x3cc0000000000000,&local_90);
      goto LAB_061c6784;
    }
  }
  uVar14 = auVar10._8_8_;
  local_70 = auVar10._0_8_;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    uVar4 = *(undefined8 *)puVar2;
  }
LAB_061c6784:
  auVar11._8_8_ = uVar14;
  auVar11._0_8_ = dVar12;
  return auVar11;
}


