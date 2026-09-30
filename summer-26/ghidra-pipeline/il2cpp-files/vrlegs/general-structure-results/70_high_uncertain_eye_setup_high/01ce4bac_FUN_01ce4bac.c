/*
FUNCTION_NAME: FUN_01ce4bac
ENTRY_POINT: 01ce4bac
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


/* WARNING: Removing unreachable block (ram,0x01ce4da4) */

long FUN_01ce4bac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  char local_44 [4];
  long local_38;
  
  puVar1 = PTR_DAT_03cc74f0;
  if ((DAT_041206d9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc7f38);
    FUN_01ab69ac(PTR_DAT_03cc7f40);
    FUN_01ab69ac(PTR_DAT_03cc7f48);
    FUN_01ab69ac(PTR_DAT_03cc74f0);
    FUN_01ab69ac(PTR_DAT_03cc7f50);
    DAT_041206d9 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar7,local_44,0);
  puVar4 = PTR_DAT_03cc7f50;
  puVar3 = PTR_DAT_03cc7f48;
  puVar2 = PTR_DAT_03cc7f38;
  iVar8 = 0;
  while( true ) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar5 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar6 + 0x18) <= iVar8) goto LAB_01ce4d18;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar6,iVar8,&local_38,*(undefined8 *)puVar3);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(local_38 + 0x28) == '\0') break;
    iVar8 = iVar8 + 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02215a88(**(long **)(lVar5 + 0xb8),iVar8,&local_38,*(undefined8 *)puVar3);
  lVar5 = local_38;
  if (local_38 == 0) {
LAB_01ce4d18:
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    FUN_01ce7f44();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar1;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(**(long **)(lVar6 + 0xb8),lVar5,*(undefined8 *)puVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  *(undefined1 *)(lVar5 + 0x28) = 1;
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return lVar5;
}


