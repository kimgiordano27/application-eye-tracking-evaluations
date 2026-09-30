/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 033683cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasVrFocus(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x21 + 0x5b0);
  if (in_w8 != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  puVar1 = PTR_DAT_04230a80;
  FUN_0336a274();
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03295500(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  uVar2 = FUN_032e8bf0(&stack0x00000008,0,uVar2,0);
  plVar3 = *(long **)(unaff_x19 + 0x68);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x208))
              (plVar3,*(undefined2 *)(unaff_x19 + 0x80),*(undefined8 *)(*plVar3 + 0x210));
    plVar3 = *(long **)(unaff_x19 + 0x68);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x238))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x240));
      plVar3 = *(long **)(unaff_x19 + 0x68);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x208))
                  (plVar3,*(undefined2 *)(unaff_x19 + 0x80),*(undefined8 *)(*plVar3 + 0x210));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


