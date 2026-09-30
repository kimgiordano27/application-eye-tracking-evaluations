/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 05ba57f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_xrInstance(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (param_2 != 0) {
    fVar4 = (float)FUN_06a57638(param_2,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      param_1 = unaff_s12 * 0.5 - param_1;
      fVar7 = *(float *)(unaff_x20 + 0x28);
      fVar8 = unaff_s11 + unaff_s8 * param_1;
      fStack000000000000000c = fStack000000000000000c + unaff_s9 * param_1;
      fVar5 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
      uVar1 = FUN_05ba7648(unaff_s10 + unaff_s15 * param_1,fVar8,fStack000000000000000c,
                           fVar4 + fVar7,
                           fVar5 + *(float *)(unaff_x20 + 0x28) + fStack0000000000000008);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
        uVar6 = FUN_069e6fbc(lVar2,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar7 = *(float *)(unaff_x20 + 0x28);
            fVar5 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
            uVar3 = FUN_05ba7648(uVar6,fVar8,fStack000000000000000c,fVar4 + fVar7,
                                 fVar5 * 0.5 + *(float *)(unaff_x20 + 0x28) + fStack0000000000000008
                                );
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


