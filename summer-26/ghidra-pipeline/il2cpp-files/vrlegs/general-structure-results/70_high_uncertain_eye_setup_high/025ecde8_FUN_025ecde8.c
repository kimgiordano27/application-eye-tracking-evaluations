/*
FUNCTION_NAME: FUN_025ecde8
ENTRY_POINT: 025ecde8
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


/* WARNING: Removing unreachable block (ram,0x025ecf88) */

undefined8 FUN_025ecde8(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char local_24 [4];
  
  puVar1 = PTR_DAT_03cf0878;
  if ((DAT_04123e02 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf0878);
    FUN_01ab69ac(PTR_DAT_03cc7f60);
    DAT_04123e02 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_24[0] = '\0';
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  thunk_FUN_01a4b338();
  if (lVar2 == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar4,local_24,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    thunk_FUN_01a4b338();
    if (lVar2 == 0) {
      plVar3 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc7f60);
      *(undefined1 *)((long)plVar3 + 0x21) = 1;
      FUN_027b3d9c(plVar3,0);
      *(undefined4 *)(plVar3 + 2) = 0xfde9;
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined2 *)(plVar3 + 7) = 0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar3);
      lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
      thunk_FUN_01a4b338();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined1 *)(lVar2 + 0x21) = 1;
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_01a4b338();
  return uVar4;
}


