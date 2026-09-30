/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 076e1a30
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  int unaff_w20;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000000c;
  
  if (unaff_w20 == 2) {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076e1f1c;
    fStack000000000000000c = unaff_s8;
    fVar3 = (float)FUN_08598e98(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e1f1c;
    fVar7 = param_2;
    fVar6 = param_3;
    fVar4 = (float)FUN_08598d98(*(long *)(unaff_x19 + 0x20),0);
    fVar11 = fVar6;
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar5) {
      fVar8 = param_3 * fVar6 + fVar3 * fVar4 + param_2 * fVar7;
      fVar11 = (fVar4 * fVar8) / fVar5;
      fVar3 = fVar3 - fVar11;
      param_2 = param_2 - (fVar7 * fVar8) / fVar5;
      param_3 = param_3 - (fVar6 * fVar8) / fVar5;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar6 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
    fVar7 = DAT_01a2ef28;
    if (fVar6 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar3 = *pfVar1;
      param_2 = pfVar1[1];
      param_3 = pfVar1[2];
    }
    else {
      fVar3 = fVar3 / fVar6;
      param_2 = param_2 / fVar6;
      param_3 = param_3 / fVar6;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e1f1c;
    fVar6 = (float)FUN_08598d98(*(long *)(unaff_x19 + 0x20),0);
    fVar3 = (float)FUN_08575d1c(fVar3,param_2,param_3,fVar6,fVar7,fVar11,0);
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e1f1c;
    fVar7 = param_2;
    fVar11 = param_3;
    fVar4 = fVar6;
    FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
    fVar5 = (float)FUN_08575760(0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    fVar8 = (fVar3 * fVar11 + param_2 * fVar4 + fVar6 * fVar7) - param_3 * fVar5;
    fVar9 = (param_2 * fVar5 + param_3 * fVar4 + fVar6 * fVar11) - fVar3 * fVar7;
    fVar10 = ((fVar6 * fVar4 - fVar3 * fVar5) - param_2 * fVar7) - param_3 * fVar11;
    fVar3 = (float)FUN_08575760((param_3 * fVar7 + fVar3 * fVar4 + fVar6 * fVar5) - param_2 * fVar11
                                ,fVar8,fVar9,fVar10,0);
    if (lVar2 == 0) goto LAB_076e1f1c;
    param_3 = (unaff_s12 * fVar3 + unaff_s11 * fVar10 + unaff_s14 * fVar9) - unaff_s13 * fVar8;
    param_2 = (unaff_s13 * fVar9 + unaff_s12 * fVar10 + unaff_s14 * fVar8) - unaff_s11 * fVar3;
    FUN_08598b14((unaff_s11 * fVar8 + unaff_s13 * fVar10 + unaff_s14 * fVar3) - unaff_s12 * fVar9,
                 param_2,param_3,
                 ((unaff_s14 * fVar10 - unaff_s13 * fVar3) - unaff_s12 * fVar8) - unaff_s11 * fVar9,
                 lVar2,0);
    unaff_s8 = fStack000000000000000c;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    fVar3 = (float)FUN_08598884(lVar2,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar6 = unaff_s8 + param_3;
      fVar11 = unaff_s9 + param_2;
      fVar7 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
      FUN_0859895c((unaff_s15 + fVar3) - fVar7,fVar11 - param_2,fVar6 - param_3,lVar2,0);
      return;
    }
  }
LAB_076e1f1c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


