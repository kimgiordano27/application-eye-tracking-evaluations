/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 027ec72c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  (**(code **)(*unaff_x19 + 0x188))();
  puVar1 = PTR_DAT_03cfd3f0;
  if (in_stack_00000008._4_1_ == '\0') {
    if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined1 *)(unaff_x19[2] + 0x30) = 1;
    thunk_FUN_01a4b338();
    unaff_x19[4] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 4,0);
  }
  else {
    lVar2 = *(long *)PTR_DAT_03cfd3f0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
      FUN_02060754(lVar4,uVar5,*(undefined8 *)PTR_DAT_03cfd410,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar4);
    }
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d75ac(0);
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0330);
    FUN_027ec9a4(lVar2,lVar4);
    thunk_FUN_01a4b338();
    plVar3 = unaff_x19 + 4;
    *plVar3 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar2);
    lVar2 = *plVar3;
    thunk_FUN_01a4b338();
    if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027eca48(lVar2,*(undefined8 *)(unaff_x19[2] + 0x10));
  }
  return;
}


