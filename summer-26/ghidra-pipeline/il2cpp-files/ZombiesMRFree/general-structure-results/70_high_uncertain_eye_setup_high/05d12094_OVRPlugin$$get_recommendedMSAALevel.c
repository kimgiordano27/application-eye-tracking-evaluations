/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 05d12094
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_recommendedMSAALevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  ulong unaff_x20;
  long lVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  long lStack0000000000000018;
  
  puVar2 = PTR_DAT_06fb87a0;
  puVar1 = PTR_DAT_06fb8798;
  lStack0000000000000018 = 0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_04430ce4(&stack0x00000008);
  fVar6 = -INFINITY;
  lVar5 = 0;
  while( true ) {
    uVar4 = FUN_05506d10(&stack0x00000008,*(undefined8 *)puVar2);
    lVar3 = lStack0000000000000018;
    if ((uVar4 & 1) == 0) {
      FUN_05506d0c(&stack0x00000008,*(undefined8 *)puVar1);
      return lVar5;
    }
    if (lStack0000000000000018 == 0) break;
    fVar7 = (float)FUN_05d1235c(lStack0000000000000018);
    if ((unaff_s8 < fVar7) || ((unaff_x20 & 1) != 0)) {
      if ((fVar6 < fVar7) && ((fVar7 < unaff_s8 && ((unaff_x20 & 1) != 0)))) {
        fVar6 = fVar7;
        lVar5 = lVar3;
      }
    }
    else if (fVar6 < fVar7) {
      fVar6 = fVar7;
      lVar5 = lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


