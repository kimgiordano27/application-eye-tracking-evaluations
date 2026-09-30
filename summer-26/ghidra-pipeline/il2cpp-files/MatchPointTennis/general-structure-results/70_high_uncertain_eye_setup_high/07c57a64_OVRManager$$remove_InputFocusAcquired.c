/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 07c57a64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  
  lVar2 = *unaff_x23;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *unaff_x23;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4ffc8);
    FUN_071828e0(uVar3,uVar5,*(undefined8 *)PTR_DAT_09f4ffd8,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar4 = uVar3;
    thunk_FUN_044bb4b4(puVar4,uVar3);
  }
  puVar1 = PTR_DAT_09f4ffb8;
  if (unaff_x20 != 0) {
    uVar3 = FUN_04e4053c();
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    thunk_FUN_044bb4b4();
    uVar3 = thunk_FUN_04485110(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


