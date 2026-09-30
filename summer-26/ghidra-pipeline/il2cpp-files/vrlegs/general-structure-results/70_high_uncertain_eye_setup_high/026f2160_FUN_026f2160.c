/*
FUNCTION_NAME: FUN_026f2160
ENTRY_POINT: 026f2160
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026f23e4) */
/* WARNING: Removing unreachable block (ram,0x026f2404) */

long FUN_026f2160(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char local_34 [4];
  
  if ((DAT_0412472b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cef968);
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03cf78f8);
    FUN_01ab69ac(PTR_DAT_03cf7900);
    FUN_01ab69ac(PTR_DAT_03cf7908);
    FUN_01ab69ac(PTR_DAT_03cf7910);
    FUN_01ab69ac(PTR_DAT_03cef598);
    FUN_01ab69ac(PTR_DAT_03cc16b0);
    DAT_0412472b = 1;
  }
  puVar2 = PTR_DAT_03cef968;
  plVar6 = (long *)(param_1 + 0x30);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_03cef968;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      puVar1 = PTR_DAT_03cc16b0;
      if (*(int *)(*(long *)PTR_DAT_03cc16b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0411f811 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc16b0);
        DAT_0411f811 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf7910);
      FUN_0219a51c(uVar3,uVar7,*(undefined8 *)PTR_DAT_03cf7900);
      FUN_01aa50f0(*(long *)(*(long *)puVar2 + 0xb8) + 8,uVar3,0);
      lVar5 = *(long *)puVar2;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar3,local_34,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = FUN_0219f8b8(lVar5,*(undefined8 *)(param_1 + 0x18),plVar6,
                         *(undefined8 *)PTR_DAT_03cf78f8);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0271d99c(uVar7,0);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cef598);
      FUN_025a4f80(lVar5,uVar7,0);
      *plVar6 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar5);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b83c(lVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)PTR_DAT_03cf7908);
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    lVar5 = *plVar6;
  }
  return lVar5;
}


