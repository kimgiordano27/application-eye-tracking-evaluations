/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 056193d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05619438) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(void)

{
  bool in_ZR;
  long lVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long lVar4;
  long unaff_x29;
  
  if (!in_ZR) {
    lVar3 = *(long *)(*unaff_x19 + 0xc0);
    lVar1 = *(long *)(lVar3 + 0x158);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_032934b8();
      lVar3 = *(long *)(*unaff_x19 + 0xc0);
    }
    FUN_032d66d4(lVar1,*(undefined8 *)(lVar3 + 0x180),*(undefined8 *)(unaff_x29 + -0x48));
                    /* WARNING: Subroutine does not return */
    FUN_033a8ff4(*(undefined8 *)(unaff_x29 + -0x38));
  }
  plVar2 = (long *)__cxa_begin_catch(*(undefined8 *)(unaff_x29 + -0x38));
  lVar4 = *plVar2;
  __cxa_end_catch();
  lVar3 = *(long *)(*unaff_x19 + 0xc0);
  lVar1 = *(long *)(lVar3 + 0x158);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
    lVar3 = *(long *)(*unaff_x19 + 0xc0);
  }
  FUN_032d66d4(lVar1,*(undefined8 *)(lVar3 + 0x180),*(undefined8 *)(unaff_x29 + -0x48));
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar4);
  }
  lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x188))();
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


