/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 05ba271c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_InputFocusAcquired(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  if (param_2 != 0) {
    fVar4 = (float)FUN_06a57638(param_2,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba26d8 with catch @ 05ba2744
                        */
      fVar8 = *(float *)(unaff_x20 + 0x28);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba26fc with catch @ 05ba2748
                        */
      param_1 = unaff_s11 * 0.5 - param_1;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba26c8 with catch @ 05ba274c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba26b8 with catch @ 05ba2750
                        */
      fVar7 = unaff_s10 + unaff_s15 * param_1;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_s8 * param_1;
      fVar5 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
                    /* try { // try from 05ba276c to 05ca276f has its CatchHandler @ 05ba2778 */
                    /* catch() { ... } // from try @ 05ba276c with catch @ 05ba2778 */
                    /* try { // try from 05ba277c to 05ca2783 has its CatchHandler @ 05ba278c */
                    /* try { // try from 05ba2784 to 05ca278f has its CatchHandler @ 05ba2654 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba277c with catch @ 05ba278c
                        */
      uVar1 = FUN_05ba40cc(unaff_s9 + unaff_s14 * param_1,fVar7,in_stack_00000008._4_4_,
                           fVar4 + fVar8,fVar5 + *(float *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
        uVar6 = FUN_069e6fbc(lVar2,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar8 = *(float *)(unaff_x20 + 0x28);
            fVar5 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
            uVar3 = FUN_05ba40cc(uVar6,fVar7,in_stack_00000008._4_4_,fVar4 + fVar8,
                                 fVar5 * 0.5 + *(float *)(unaff_x20 + 0x28));
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


