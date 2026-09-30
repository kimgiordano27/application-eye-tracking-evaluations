/*
FUNCTION_NAME: _Common.Gameplay.Scripts.TagGame.TagGameManager$$TickStateAuthority
ENTRY_POINT: 01d2e8d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01d2e944) */
/* WARNING: Removing unreachable block (ram,0x01d2e90c) */

void _Common_Gameplay_Scripts_TagGame_TagGameManager__TickStateAuthority(void)

{
  long *plVar1;
  long unaff_x19;
  int unaff_w22;
  long lVar2;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000048;
  
  FUN_021b51c4(&stack0x00000020,*unaff_x24);
  if (unaff_w22 != 1) {
    if (in_stack_00000048._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000048._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  if (*(char *)(unaff_x19 + 0x55) == '\0') {
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  }
  return;
}


