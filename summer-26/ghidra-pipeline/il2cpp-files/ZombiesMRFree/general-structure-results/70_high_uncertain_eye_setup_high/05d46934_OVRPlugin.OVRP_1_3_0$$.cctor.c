/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 05d46934
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0___cctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar3;
  
  lVar1 = FUN_03c732ac();
  if (lVar1 != 0) {
    FUN_06975de4(lVar1,*(undefined1 *)(unaff_x19 + 0x48),0);
    fVar3 = unaff_s15 - unaff_s10;
    FUN_068ed124(fVar3,0);
    if (DAT_0738e6c8 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e6c8 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar3 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar3 * fVar3 + (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) - ABS(unaff_s11);
    FUN_06976f40(lVar1,0);
    FUN_06976fc8(unaff_s12 + unaff_s12 + fVar3,lVar1,0);
    FUN_06977050(lVar1,2,0);
    if (DAT_0738e660 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e660 = '\x01';
    }
    fVar3 = unaff_s11 + fVar3 * 0.5;
    lVar2 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    FUN_06976e6c(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_068f5d7c(lVar1,0);
    if (lVar2 != 0) {
      FUN_06904d10();
      FUN_06904e58(lVar2,0);
      lVar2 = FUN_068f5db8(lVar1,0);
      if (lVar2 != 0) {
        FUN_068f8b00(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


