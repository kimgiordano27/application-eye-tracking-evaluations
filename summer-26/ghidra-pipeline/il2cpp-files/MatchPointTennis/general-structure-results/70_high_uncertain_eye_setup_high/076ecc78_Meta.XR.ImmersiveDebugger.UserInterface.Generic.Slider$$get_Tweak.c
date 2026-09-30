/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$get_Tweak
ENTRY_POINT: 076ecc78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076ecc9c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__get_Tweak(float param_1,float param_2)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  fVar1 = unaff_s8 + param_1 * param_2;
  *(float *)(unaff_x19 + 0x30) = fVar1;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) {
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    fVar2 = (float)*(undefined8 *)(unaff_x19 + 0x34);
    fVar3 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x34) >> 0x20);
    FUN_09538e64(fVar2 + ((float)*(undefined8 *)(unaff_x19 + 0x28) - fVar2) * fVar1,
                 fVar3 + ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) - fVar3) * fVar1
                 ,*(long *)(unaff_x20 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),0);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


