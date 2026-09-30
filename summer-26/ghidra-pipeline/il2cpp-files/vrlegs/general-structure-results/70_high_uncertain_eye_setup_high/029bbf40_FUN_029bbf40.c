/*
FUNCTION_NAME: FUN_029bbf40
ENTRY_POINT: 029bbf40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bc108) */

undefined4 FUN_029bbf40(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char local_34 [4];
  long local_28;
  
  puVar1 = PTR_DAT_03cc9f98;
  if ((DAT_04127dc1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08748);
    FUN_01ab69ac(PTR_DAT_03d08750);
    FUN_01ab69ac(PTR_DAT_03d08758);
    FUN_01ab69ac(PTR_DAT_03cc9f98);
    DAT_04127dc1 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar5,local_34,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar3 + 0xb8);
  if (lVar4 != 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    if ((int)(uint)param_1 < *(int *)(lVar4 + 0x18)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      puVar2 = PTR_DAT_03d08750;
      FUN_02215a88(lVar4,param_1,&local_28,*(undefined8 *)PTR_DAT_03d08750);
      if (local_28 != 0) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *(long *)puVar1;
        }
        if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(**(long **)(lVar3 + 0xb8),param_1,&local_28,*(undefined8 *)puVar2);
        if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027e3250(local_28,0);
        if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215b6c(**(long **)(*(long *)puVar1 + 0xb8),param_1,0,*(undefined8 *)PTR_DAT_03d08758);
        uVar6 = 1;
        goto LAB_029bc0d8;
      }
    }
  }
  uVar6 = 0;
LAB_029bc0d8:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return uVar6;
}


