/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 06aa9ab8
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar2 = (float)FUN_07a00400();
  if (unaff_x20 != 0) {
    fVar5 = (unaff_s12 * fVar2 + unaff_s13 * param_4 + unaff_s11 * param_3) - unaff_s14 * param_2;
    fVar4 = (unaff_s14 * param_3 + unaff_s12 * param_4 + unaff_s11 * param_2) - unaff_s13 * fVar2;
    FUN_07a1914c((unaff_s13 * param_2 + unaff_s14 * param_4 + unaff_s11 * fVar2) -
                 unaff_s12 * param_3,fVar4,fVar5,
                 ((unaff_s11 * param_4 - unaff_s14 * fVar2) - unaff_s12 * param_2) -
                 unaff_s13 * param_3);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_07a18d2c(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fStack0000000000000018 = fStack0000000000000018 + fVar5;
        fStack000000000000001c = fStack000000000000001c + fVar4;
        fVar3 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x28),0);
        FUN_07a18dcc((in_stack_00000008._4_4_ + fVar2) - fVar3,fStack000000000000001c - fVar4,
                     fStack0000000000000018 - fVar5,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


