/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryVisible
ENTRY_POINT: 076e19cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  float *pfVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000006c;
  
  fStack000000000000006c = 0.0;
  fStack0000000000000018 = 0.0;
  _fStack0000000000000010 = 0;
  if (param_6 == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x28) == 0) goto LAB_076e1f1c;
  fVar17 = param_2;
  fVar15 = param_3;
  fVar18 = param_4;
  fVar3 = (float)FUN_08598884(*(long *)(param_5 + 0x28),0);
  if (param_6 == 1) {
    FUN_08575bb4(param_1,param_2,param_3,param_4,&stack0x00000010,&stack0x0000006c,0);
    fVar18 = fStack000000000000006c * DAT_01a2eb64;
    fStack000000000000006c = fVar18;
    fStack000000000000006c = (float)FUN_08594c28(0);
    fStack000000000000006c = fVar18 * fStack000000000000006c;
    lVar2 = *(long *)(param_5 + 0x20);
    fVar18 = fStack0000000000000010;
    fVar16 = fStack0000000000000014;
    fVar4 = fStack0000000000000018;
    fVar7 = (float)FUN_08575c64(fStack000000000000006c,fStack0000000000000010,fStack0000000000000014
                                ,fStack0000000000000018,0);
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (fVar8 = fVar18, fVar11 = fVar16, fVar5 = fVar4,
       fVar6 = (float)FUN_08596a20(*(long *)(param_5 + 0x20),0), lVar2 == 0)) goto LAB_076e1f1c;
    fVar13 = (fVar7 * fVar8 + fVar4 * fVar11 + fVar16 * fVar5) - fVar18 * fVar6;
    fVar10 = (fVar16 * fVar6 + fVar4 * fVar8 + fVar18 * fVar5) - fVar7 * fVar11;
    FUN_08598b14((fVar18 * fVar11 + fVar4 * fVar6 + fVar7 * fVar5) - fVar16 * fVar8,fVar10,fVar13,
                 ((fVar4 * fVar5 - fVar7 * fVar6) - fVar18 * fVar8) - fVar16 * fVar11,lVar2,0);
  }
  else if (param_6 == 3) {
    lVar2 = *(long *)(param_5 + 0x20);
    if (lVar2 == 0) goto LAB_076e1f1c;
    fVar16 = fVar17;
    fVar4 = fVar15;
    fVar7 = (float)FUN_08596a20(lVar2,0);
    fVar10 = (param_3 * fVar7 + param_4 * fVar16 + param_2 * fVar18) - param_1 * fVar4;
    fVar13 = (param_1 * fVar16 + param_4 * fVar4 + param_3 * fVar18) - param_2 * fVar7;
    FUN_08598b14((param_2 * fVar4 + param_4 * fVar7 + param_1 * fVar18) - param_3 * fVar16,fVar10,
                 fVar13,((param_4 * fVar18 - param_1 * fVar7) - param_2 * fVar16) - param_3 * fVar4,
                 lVar2,0);
  }
  else {
    fVar10 = fVar17;
    fVar13 = fVar15;
    if (param_6 == 2) {
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_076e1f1c;
      fVar18 = fVar17;
      fVar16 = fVar15;
      fVar4 = (float)FUN_08598e98(*(long *)(param_5 + 0x28),0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_076e1f1c;
      fVar7 = fVar18;
      fVar8 = fVar16;
      fVar5 = (float)FUN_08598d98(*(long *)(param_5 + 0x20),0);
      fVar11 = fVar8;
      if (DAT_09539f9f == '\0') {
        FUN_0403162c(PTR_DAT_08f67c68);
        DAT_09539f9f = '\x01';
      }
      fVar6 = fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7;
      if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar6) {
        fVar10 = fVar16 * fVar8 + fVar4 * fVar5 + fVar18 * fVar7;
        fVar11 = (fVar5 * fVar10) / fVar6;
        fVar4 = fVar4 - fVar11;
        fVar18 = fVar18 - (fVar7 * fVar10) / fVar6;
        fVar16 = fVar16 - (fVar8 * fVar10) / fVar6;
      }
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar8 = SQRT(fVar16 * fVar16 + fVar4 * fVar4 + fVar18 * fVar18);
      fVar7 = DAT_01a2ef28;
      if (fVar8 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar4 = *pfVar1;
        fVar18 = pfVar1[1];
        fVar16 = pfVar1[2];
      }
      else {
        fVar4 = fVar4 / fVar8;
        fVar18 = fVar18 / fVar8;
        fVar16 = fVar16 / fVar8;
      }
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_076e1f1c;
      fVar8 = (float)FUN_08598d98(*(long *)(param_5 + 0x20),0);
      fVar4 = (float)FUN_08575d1c(fVar4,fVar18,fVar16,fVar8,fVar7,fVar11,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_076e1f1c;
      fVar7 = fVar18;
      fVar11 = fVar16;
      fVar5 = fVar8;
      FUN_08596a20(*(long *)(param_5 + 0x20),0);
      fVar6 = (float)FUN_08575760(0);
      lVar2 = *(long *)(param_5 + 0x20);
      fVar9 = (fVar4 * fVar11 + fVar18 * fVar5 + fVar8 * fVar7) - fVar16 * fVar6;
      fVar12 = (fVar18 * fVar6 + fVar16 * fVar5 + fVar8 * fVar11) - fVar4 * fVar7;
      fVar14 = ((fVar8 * fVar5 - fVar4 * fVar6) - fVar18 * fVar7) - fVar16 * fVar11;
      fVar18 = (float)FUN_08575760((fVar16 * fVar7 + fVar4 * fVar5 + fVar8 * fVar6) -
                                   fVar18 * fVar11,fVar9,fVar12,fVar14,0);
      if (lVar2 == 0) goto LAB_076e1f1c;
      fVar13 = (param_2 * fVar18 + param_3 * fVar14 + param_4 * fVar12) - param_1 * fVar9;
      fVar10 = (param_1 * fVar12 + param_2 * fVar14 + param_4 * fVar9) - param_3 * fVar18;
      FUN_08598b14((param_3 * fVar9 + param_1 * fVar14 + param_4 * fVar18) - param_2 * fVar12,fVar10
                   ,fVar13,((param_4 * fVar14 - param_1 * fVar18) - param_2 * fVar9) -
                           param_3 * fVar12,lVar2,0);
    }
  }
  lVar2 = *(long *)(param_5 + 0x20);
  if (lVar2 != 0) {
    fVar18 = (float)FUN_08598884(lVar2,0);
    if (*(long *)(param_5 + 0x28) != 0) {
      fVar15 = fVar15 + fVar13;
      fVar17 = fVar17 + fVar10;
      fVar16 = (float)FUN_08598884(*(long *)(param_5 + 0x28),0);
      FUN_0859895c((fVar3 + fVar18) - fVar16,fVar17 - fVar10,fVar15 - fVar13,lVar2,0);
      return;
    }
  }
LAB_076e1f1c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


