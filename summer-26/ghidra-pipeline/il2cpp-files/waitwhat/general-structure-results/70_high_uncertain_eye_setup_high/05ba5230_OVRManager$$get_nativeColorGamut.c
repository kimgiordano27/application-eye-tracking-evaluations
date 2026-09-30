/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 05ba5230
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_nativeColorGamut(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 05ba5230 to 05ca5237 has its CatchHandler @ 05ba5240 */
  lVar2 = *(long *)(*param_1 + 0xb8);
                    /* try { // try from 05ba5238 to 05ca5243 has its CatchHandler @ 05ba4cbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba5230 with catch @ 05ba5240
                        */
  fVar5 = in_s3 * *(float *)(lVar2 + 0x20);
  fVar4 = in_s3 * *(float *)(lVar2 + 0x1c);
  uVar1 = FUN_05ba535c(in_s3 * *(float *)(lVar2 + 0x18),fVar4,fVar5);
  if ((uVar1 & 1) != 0) {
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ - *(float *)(unaff_x19 + 0x28);
    fVar4 = 0.0;
    in_stack_00000020 = 0.0;
    if (0.0 <= in_stack_00000030._4_4_) {
      in_stack_00000020 = in_stack_00000030._4_4_;
    }
  }
  if (unaff_s9 < ABS(in_stack_00000020)) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_06a57874(unaff_s8 + in_stack_00000020,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar3 = (float)FUN_069e6fbc(lVar2,0);
        if (DAT_075457aa == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457aa = '\x01';
        }
        uVar6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x18);
        fVar4 = fVar4 + (float)((ulong)uVar6 >> 0x20) * in_stack_00000020 * 0.5;
        FUN_069e7098(CONCAT44(fVar4,fVar3 + (float)uVar6 * in_stack_00000020 * 0.5),fVar4,
                     fVar5 + in_stack_00000020 *
                             *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x20) * 0.5,
                     lVar2,0);
        FUN_05ba4f84();
        goto LAB_05ba5338;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_05ba5338:
  return unaff_s9 < ABS(in_stack_00000020);
}


