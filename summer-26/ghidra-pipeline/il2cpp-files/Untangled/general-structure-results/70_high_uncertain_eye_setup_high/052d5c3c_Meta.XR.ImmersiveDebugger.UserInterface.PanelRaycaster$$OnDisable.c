/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnDisable
ENTRY_POINT: 052d5c3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnDisable(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06743fdc(param_1,*(undefined8 *)(unaff_x19 + 0x78),0);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* catch() { ... } // from try @ 052d5c38 with catch @ 052d5c54 */
  FUN_06744404(*unaff_x20,0,0);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar4 = *(float *)(unaff_x19 + 0x2cc);
  fVar3 = *(float *)(unaff_x19 + 0x2c8);
  FUN_067441f8(*(undefined4 *)(unaff_x19 + 0x2c4),fVar3,fVar4,*unaff_x20,0);
  if (*(char *)(unaff_x19 + 0x270) != '\0') {
    lVar1 = *(long *)(unaff_x19 + 0x408);
                    /* try { // try from 052d5c8c to 053d5cb3 has its CatchHandler @ 052d5cc8 */
    fVar2 = (float)FUN_052cfe78();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_067441f8(fVar2 + *(float *)(unaff_x19 + 0x34c),fVar3 + *(float *)(unaff_x19 + 0x350),
                 fVar4 + *(float *)(unaff_x19 + 0x354),lVar1,0);
  }
  if (*unaff_x20 != 0) {
    FUN_06744330(*(undefined4 *)(unaff_x19 + 0x2d0),*(undefined4 *)(unaff_x19 + 0x2d4),
                 *(undefined4 *)(unaff_x19 + 0x2d8),*unaff_x20,0);
    FUN_0529a940(0,0,0,*(undefined8 *)(unaff_x19 + 0x430),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


