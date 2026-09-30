/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 027ec7b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState2(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar2;
  long *unaff_x22;
  
  FUN_02060754();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d75ac(0);
  lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0330);
  FUN_027ec9a4();
  thunk_FUN_01a4b338();
  plVar2 = (long *)(unaff_x19 + 0x20);
  *plVar2 = lVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar1);
  lVar1 = *plVar2;
  thunk_FUN_01a4b338();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (lVar1 != 0) {
      FUN_027eca48(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x10));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


