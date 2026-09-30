/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 0530aaa8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x21 + 0x16c) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb46e8 == '\0') {
    FUN_02f08768(PTR_DAT_067cbb68);
    DAT_06bb46e8 = '\x01';
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *unaff_x20;
  }
  puVar1 = PTR_DAT_067cbb78;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    uVar3 = FUN_052aa4c0(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar1);
    }
    uVar3 = FUN_0527c9a8(uVar3);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


