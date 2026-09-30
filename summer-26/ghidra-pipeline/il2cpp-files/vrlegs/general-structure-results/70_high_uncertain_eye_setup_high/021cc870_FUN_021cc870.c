/*
FUNCTION_NAME: FUN_021cc870
ENTRY_POINT: 021cc870
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


/* WARNING: Removing unreachable block (ram,0x021ccbc0) */

void FUN_021cc870(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char local_34 [4];
  
  if ((DAT_041221c2 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb9c0);
    FUN_01ab69ac(PTR_DAT_03cdb9c8);
    FUN_01ab69ac(PTR_DAT_03cdb9d0);
    FUN_01ab69ac(PTR_DAT_03cdb9d8);
    DAT_041221c2 = 1;
  }
  local_34[0] = '\0';
  plVar1 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0x60);
  if (*plVar1 != 0) {
    puVar2 = (undefined8 *)
             thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                 0x80) + 0x60);
    uVar4 = *puVar2;
    local_34[0] = '\0';
    FUN_027e0bd8(uVar4,local_34,0);
    FUN_01883150(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0xc0,1);
    FUN_018820a8(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0xe0,0);
    FUN_021cba88(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
    plVar1 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x80) + 0x140);
    if (*plVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cdb9d0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *(long *)PTR_DAT_03cdb9c8;
      lVar3 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      plVar1 = (long *)**(undefined8 **)(lVar3 + 0xb8);
      puVar2 = (undefined8 *)
               thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                   0x80) + 0x140);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar1 + 0x188))(plVar1,*puVar2,0,*(undefined8 *)(*plVar1 + 400));
    }
    FUN_018820a8(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x140,0);
    plVar1 = (long *)thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x80) + 0x160);
    if (*plVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cdb9d8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *(long *)PTR_DAT_03cdb9c0;
      lVar3 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      plVar1 = (long *)**(undefined8 **)(lVar3 + 0xb8);
      puVar2 = (undefined8 *)
               thunk_FUN_01a59484(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                   0x80) + 0x160);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar1 + 0x188))(plVar1,*puVar2,0,*(undefined8 *)(*plVar1 + 400));
    }
    FUN_018820a8(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80) + 0x160,0);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
  }
  (**(code **)(*param_1 + 0x218))(param_1,param_2 & 1,*(undefined8 *)(*param_1 + 0x220));
  return;
}


