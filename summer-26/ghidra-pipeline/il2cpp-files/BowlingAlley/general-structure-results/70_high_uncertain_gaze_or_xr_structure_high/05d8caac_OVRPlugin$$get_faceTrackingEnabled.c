/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 05d8caac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05d8cb7c) */

void OVRPlugin__get_faceTrackingEnabled(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_05987d14();
  puVar2 = PTR_DAT_072b18c8;
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(*(long *)PTR_DAT_072b18c8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (DAT_076d88fa == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072b18c8);
      DAT_076d88fa = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar2;
    }
    if (*(int *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
      uVar1 = *(undefined4 *)(unaff_x19 + 0x38);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_05d8bd60(uVar1);
    }
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_03313794();
  }
  return;
}


