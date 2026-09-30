/*
FUNCTION_NAME: FUN_02a2aeb8
ENTRY_POINT: 02a2aeb8
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


/* WARNING: Removing unreachable block (ram,0x02a2b110) */

long FUN_02a2aeb8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char local_2c [4];
  long local_28;
  
  if ((DAT_0412821a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d0b3d8);
    FUN_01ab69ac(PTR_DAT_03d0b3e0);
    FUN_01ab69ac(PTR_DAT_03d0b2d8);
    FUN_01ab69ac(PTR_DAT_03d0b3e8);
                    /* try { // try from 02a2af0c to 02b2b0cb has its CatchHandler @ 02a2af0c
                       catch() { ... } // from try @ 02a2af0c with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b568 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b660 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b6a0 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b710 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b74c with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b828 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b854 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b8d4 with catch @ 02a2af0c
                       catch() { ... } // from try @ 02a2b91c with catch @ 02a2af0c */
    FUN_01ab69ac(PTR_DAT_03cfd798);
    FUN_01ab69ac(PTR_DAT_03d0b3f0);
    FUN_01ab69ac(PTR_DAT_03cd1a80);
    DAT_0412821a = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = FUN_02789ac0(param_1,0);
  puVar1 = PTR_DAT_03cd1a80;
  if ((uVar2 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar5 = thunk_FUN_01a89e68();
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d0b3f8);
    FUN_027a794c(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d0b400);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar4);
  }
  lVar3 = *(long *)PTR_DAT_03cd1a80;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  local_2c[0] = '\0';
  FUN_027e0bd8(uVar5,local_2c,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = FUN_0219c130(**(long **)(lVar3 + 0xb8),param_1,*(undefined8 *)PTR_DAT_03d0b3d8);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_03d0b2d8;
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_01a47054(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    local_28 = **(long **)(lVar3 + 0xb8);
  }
  else {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b634(**(long **)(lVar3 + 0xb8),param_1,&local_28,*(undefined8 *)PTR_DAT_03d0b3e0);
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd798);
    FUN_0225a3e8(uVar4,0,*(undefined8 *)PTR_DAT_03d0b3f0,0);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02218e1c(local_28,uVar4,*(undefined8 *)PTR_DAT_03d0b3e8);
  }
  if (local_2c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return local_28;
}


