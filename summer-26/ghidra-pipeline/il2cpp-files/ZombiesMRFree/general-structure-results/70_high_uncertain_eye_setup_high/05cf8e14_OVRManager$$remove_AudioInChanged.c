/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 05cf8e14
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioInChanged(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x5d8));
  *(undefined1 *)(unaff_x21 + 0x662) = 1;
  lVar1 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
  fVar5 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar1 + 0x20);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  fVar2 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar3 = **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8);
  if (fVar3 <= fVar2) {
    fVar6 = unaff_s9 * fVar4 + unaff_s8 * fVar5 + unaff_s10 * fVar6;
    fVar3 = (fVar5 * fVar6) / fVar2;
    unaff_s8 = unaff_s8 - fVar3;
    unaff_s9 = unaff_s9 - (fVar4 * fVar6) / fVar2;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar4 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x28),0);
    if (*(char *)(unaff_x19 + 0xd5) == '\0') {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(unaff_x19 + 0x4c);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_06904354(unaff_s8 + fVar4,fVar5 + unaff_s15 + *(float *)(unaff_x19 + 0x48),
                   unaff_s9 + fVar3,*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05cf59f0(uStack000000000000001c,uStack0000000000000018,uStack0000000000000014,
                     *(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_05cf598c(uStack0000000000000010,uStack000000000000000c,uStack0000000000000008,
                       in_stack_00000000._4_4_,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


