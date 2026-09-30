/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 05d8d968
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceVisemesState(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x8e9) = 1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_06be9890(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar1 = FUN_06be9890(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x58) + 0x30) != 0) {
          FUN_05d8da24();
          FUN_05d8dac4();
        }
        FUN_05d8db3c();
        if (*(long *)(unaff_x19 + 0x58) != 0) {
          if (*(int *)(unaff_x19 + 0x50) == *(int *)(*(long *)(unaff_x19 + 0x58) + 0x3c)) {
            return;
          }
          FUN_05d8d018();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  return;
}


