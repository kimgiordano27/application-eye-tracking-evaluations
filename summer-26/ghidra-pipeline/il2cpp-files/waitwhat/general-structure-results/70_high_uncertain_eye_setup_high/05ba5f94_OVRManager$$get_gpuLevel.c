/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 05ba5f94
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuLevel(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000004;
  float fStack0000000000000014;
  undefined8 in_stack_00000038;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  FUN_03188a78(*(undefined8 *)(param_4 + 0xa80));
  *(undefined1 *)(unaff_x21 + 0x7aa) = 1;
  puVar1 = PTR_DAT_070c1a80;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar16 = *(float *)(lVar2 + 0x18);
    fVar17 = *(float *)(lVar2 + 0x1c);
    fVar11 = *(float *)(lVar2 + 0x20);
    fVar3 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
        fVar5 = (float)FUN_069e6fbc(lVar2,0);
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (fVar10 = param_3, fVar9 = param_2, lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0),
           lVar2 != 0)) {
          fVar6 = (float)FUN_069e6fbc(lVar2,0);
          if (*(char *)(unaff_x21 + 0x7aa) == '\0') {
            FUN_03188a78(PTR_DAT_070c1a80);
            *(undefined1 *)(unaff_x21 + 0x7aa) = 1;
          }
          lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
          fVar12 = *(float *)(lVar2 + 0x18);
          fVar14 = *(float *)(lVar2 + 0x1c);
          fVar13 = *(float *)(lVar2 + 0x20);
          if (DAT_0754d684 == '\0') {
            FUN_03188a78(PTR_DAT_070cf060);
            DAT_0754d684 = '\x01';
          }
          fVar7 = fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14;
          fVar15 = fStack0000000000000088;
          if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar7) {
            fVar15 = fStack0000000000000088 -
                     (fVar14 * (in_stack_00000038._4_4_ * fVar13 +
                               fStack000000000000008c * fVar12 + fStack0000000000000088 * fVar14)) /
                     fVar7;
          }
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar4 = fVar3 * 0.5 - fVar4;
            fVar3 = 0.0;
            if (0.0 <= fVar4) {
              fVar3 = fVar4;
            }
            fVar11 = fVar11 * fVar3;
            fVar17 = fVar17 * fVar3;
            fVar16 = fVar16 * fVar3;
            uVar8 = FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
            fStack0000000000000004 = fStack0000000000000088;
            fStack0000000000000014 = fVar15;
            FUN_05ba6340(fVar6 - fVar16,fVar9 - fVar17,fVar10 - fVar11,fVar16 + fVar5,
                         fVar17 + param_2,fVar11 + param_3,uVar8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


