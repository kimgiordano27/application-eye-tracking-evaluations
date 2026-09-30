/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 05baf6b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000068;
  
                    /* try { // try from 05baf6c0 to 05caf6c7 has its CatchHandler @ 05baf840 */
  fVar6 = param_3;
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
                    /* try { // try from 05baf700 to 05caf703 has its CatchHandler @ 05baf7f4 */
  fVar3 = param_3 * param_3 + unaff_s15 * unaff_s15 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar3) {
    fVar4 = unaff_s9 * param_3 +
            fStack0000000000000008 * unaff_s15 + fStack0000000000000004 * param_2;
    fVar6 = (unaff_s15 * fVar4) / fVar3;
    fStack0000000000000008 = fStack0000000000000008 - fVar6;
    fStack0000000000000004 = fStack0000000000000004 - (param_2 * fVar4) / fVar3;
    unaff_s9 = unaff_s9 - (param_3 * fVar4) / fVar3;
  }
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = SQRT(unaff_s9 * unaff_s9 +
               fStack0000000000000008 * fStack0000000000000008 +
               fStack0000000000000004 * fStack0000000000000004);
  fVar3 = DAT_012e3cb4;
  if (fVar4 <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fStack0000000000000008 = *pfVar1;
    fStack0000000000000004 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar4;
    fStack0000000000000004 = fStack0000000000000004 / fVar4;
    fVar4 = unaff_s9 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar5 = (float)FUN_069e74e4(*(long *)(unaff_x19 + 0x20),0);
    fVar6 = (float)FUN_069c54a4(fStack0000000000000008,fStack0000000000000004,fVar4,fVar5,fVar3,
                                fVar6,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar3 = fStack0000000000000004;
      fVar9 = fVar4;
      fVar11 = fVar5;
      FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
      fVar7 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar6 * fVar9 + fStack0000000000000004 * fVar11 + fVar5 * fVar3) - fVar4 * fVar7;
      fVar10 = (fStack0000000000000004 * fVar7 + fVar4 * fVar11 + fVar5 * fVar9) - fVar6 * fVar3;
      fVar12 = ((fVar5 * fVar11 - fVar6 * fVar7) - fStack0000000000000004 * fVar3) - fVar4 * fVar9;
      fVar6 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                               ((fVar4 * fVar3 + fVar6 * fVar11 + fVar5 * fVar7) -
                                fStack0000000000000004 * fVar9,fVar8,fVar10,fVar12,0);
      if (lVar2 != 0) {
        fVar4 = (unaff_s12 * fVar6 + unaff_s11 * fVar12 + unaff_s14 * fVar10) - unaff_s13 * fVar8;
        fVar3 = (unaff_s13 * fVar10 + unaff_s12 * fVar12 + unaff_s14 * fVar8) - unaff_s11 * fVar6;
        FUN_069e7254((unaff_s11 * fVar8 + unaff_s13 * fVar12 + unaff_s14 * fVar6) -
                     unaff_s12 * fVar10,fVar3,fVar4,
                     ((unaff_s14 * fVar12 - unaff_s13 * fVar6) - unaff_s12 * fVar8) -
                     unaff_s11 * fVar10,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar6 = (float)FUN_069e6fbc(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fStack000000000000000c = fStack000000000000000c + fVar4;
            in_stack_00000068 = in_stack_00000068 + fVar3;
            fVar5 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
            FUN_069e7098((fStack0000000000000000 + fVar6) - fVar5,in_stack_00000068 - fVar3,
                         fStack000000000000000c - fVar4,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


