/*
FUNCTION_NAME: FUN_02f0a39c
ENTRY_POINT: 02f0a39c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0a560) */

undefined8 FUN_02f0a39c(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  char local_24 [4];
  
  puVar2 = PTR_DAT_03d22250;
  if ((DAT_0412a902 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d22288);
    FUN_01ab69ac(PTR_DAT_03d22250);
    FUN_01ab69ac(PTR_DAT_03d22290);
    DAT_0412a902 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24[0] = '\0';
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_01a4b338();
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar7,local_24,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    thunk_FUN_01a4b338();
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d22290);
      FUN_02f0a5ec();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar5 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d22288);
      FUN_02f0a65c();
      puVar6 = (uint *)FUN_01ab69c8(*(undefined8 *)puVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(uint *)(lVar3 + 0x18) = *puVar6 & ((int)*puVar6 >> 0x1f ^ 0xffffffffU);
      uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
      thunk_FUN_01a4b338();
      FUN_02f0a6e4(lVar3,uVar1);
      lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02f0a78c(lVar8,lVar3);
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_01a4b338();
  return uVar7;
}


