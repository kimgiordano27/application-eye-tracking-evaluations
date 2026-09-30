/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 07c64834
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(long *param_1,float param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar3 = unaff_s11 * unaff_s11 + param_2 + param_3;
  fVar4 = **(float **)(*param_1 + 0xb8);
  if (fVar4 <= fVar3) {
    fVar5 = (fStack0000000000000008 - unaff_s15) * unaff_s11 +
            (unaff_s12 - unaff_s14) * unaff_s10 + (unaff_s13 - unaff_s8) * unaff_s9;
    fVar4 = unaff_s10 * fVar5;
    fVar6 = fVar4 / fVar3;
    fVar7 = (unaff_s9 * fVar5) / fVar3;
    fVar3 = (unaff_s11 * fVar5) / fVar3;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar3 = fVar3 * fVar3;
  fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3);
  fVar6 = (float)FUN_095380e0();
  if ((fStack0000000000000008 - unaff_s15) * fVar4 +
      (unaff_s12 - unaff_s14) * fVar6 + (unaff_s13 - unaff_s8) * fVar3 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar3 = 1.0;
  if (fVar5 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar5;
  if (fStack000000000000000c != fVar3) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07c6499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


