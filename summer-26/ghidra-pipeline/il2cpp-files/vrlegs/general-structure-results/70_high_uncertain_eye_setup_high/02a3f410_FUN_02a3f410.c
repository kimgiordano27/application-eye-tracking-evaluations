/*
FUNCTION_NAME: FUN_02a3f410
ENTRY_POINT: 02a3f410
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


/* WARNING: Removing unreachable block (ram,0x02a3f6a0) */

void FUN_02a3f410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char local_3c [4];
  long local_38;
  
  if ((DAT_04128218 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d0b3d8);
    FUN_01ab69ac(PTR_DAT_03d0b3e0);
    FUN_01ab69ac(PTR_DAT_03cffb00);
    FUN_01ab69ac(PTR_DAT_03d0bef8);
    FUN_01ab69ac(PTR_DAT_03cd1a80);
    DAT_04128218 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_02789ac0(param_1,0);
  puVar1 = PTR_DAT_03cd1a80;
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar6 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0b3f8);
    FUN_027a794c(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0bf08);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar5);
  }
  lVar4 = *(long *)PTR_DAT_03cd1a80;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  local_3c[0] = '\0';
  FUN_027e0bd8(uVar6,local_3c,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_0219c130(**(long **)(lVar4 + 0xb8),param_1,*(undefined8 *)PTR_DAT_03d0b3d8);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_03d0b3e0;
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b634(**(long **)(lVar4 + 0xb8),param_1,&local_38,*(undefined8 *)PTR_DAT_03d0b3e0);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_02216960(local_38,param_2,*(undefined8 *)PTR_DAT_03cffb00);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        FUN_0219b634(**(long **)(lVar4 + 0xb8),param_1,&local_38,*(undefined8 *)puVar2);
        if (local_38 != 0) {
          FUN_02218bd8(local_38,param_2,*(undefined8 *)PTR_DAT_03d0bef8);
          if (local_3c[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd8d10);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02a5ebc4(param_1,0,0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d0bf00);
  uVar6 = FUN_025be86c(uVar5,param_2,uVar6,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar5 = thunk_FUN_01a89e68();
  FUN_026b274c(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d0bf08);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar6);
}


