/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskMin$$.ctor
ENTRY_POINT: 04c70e58
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_SceneDecorator_CompositeMaskMin___ctor(void)

{
  undefined *puVar1;
  long *plVar2;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04c6722c();
  FUN_03428244();
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x1e8))();
  if ((plVar2 == (long *)0x0) ||
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390)),
     plVar2 == (long *)0x0)) {
LAB_04c70f6c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x198))();
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      if (plVar2 == (long *)0x0) goto LAB_04c70f6c;
      (**(code **)(*plVar2 + 0x3a8))
                (plVar2,*(long *)(unaff_x20 + 0x10),*(undefined8 *)(*plVar2 + 0x3b0));
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) goto LAB_04c70f3c;
  }
  puVar1 = PTR_DAT_065de3a0;
  if (*(int *)(*(long *)PTR_DAT_065de3a0 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a697b3 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de3a0);
    DAT_06a697b3 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
LAB_04c70f3c:
  FUN_03523904();
  return plVar2;
}


