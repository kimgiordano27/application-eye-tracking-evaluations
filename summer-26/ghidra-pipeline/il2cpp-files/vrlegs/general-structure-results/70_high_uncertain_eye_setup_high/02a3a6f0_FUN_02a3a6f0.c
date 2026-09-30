/*
FUNCTION_NAME: FUN_02a3a6f0
ENTRY_POINT: 02a3a6f0
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


/* WARNING: Removing unreachable block (ram,0x02a3a8a0) */

undefined8 FUN_02a3a6f0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char local_24 [4];
  
  puVar2 = PTR_DAT_03d0b7f8;
  if ((DAT_041281ef & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d0bc08);
    FUN_01ab69ac(PTR_DAT_03d0bc10);
    FUN_01ab69ac(PTR_DAT_03d0bc18);
    FUN_01ab69ac(PTR_DAT_03d0b7f8);
    DAT_041281ef = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24[0] = '\0';
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar6 + 0x38) != '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar7,local_24,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)PTR_DAT_03d0bc18;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
    }
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    uVar5 = FUN_02183bdc(lVar3,*(undefined8 *)PTR_DAT_03d0bc08);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar5,uVar5);
    }
    FUN_02216540(lVar6,uVar5,*(undefined8 *)PTR_DAT_03d0bc10);
    *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = 0;
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    lVar3 = *(long *)puVar2;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
}


