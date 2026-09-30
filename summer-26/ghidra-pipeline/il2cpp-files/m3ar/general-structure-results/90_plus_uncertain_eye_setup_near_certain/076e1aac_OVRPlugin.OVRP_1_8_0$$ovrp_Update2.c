/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 076e1aac
PROGRAM: m3ar-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_Update2(long param_1,float param_2,float param_3,float param_4)

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
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
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
  
  fVar3 = unaff_s8 * unaff_s8 + param_2 + param_3;
  if (**(float **)(param_1 + 0xb8) <= fVar3) {
    fVar4 = unaff_s9 * unaff_s8 +
            fStack0000000000000008 * unaff_s15 + fStack0000000000000004 * unaff_s10;
    param_4 = (unaff_s15 * fVar4) / fVar3;
    fStack0000000000000008 = fStack0000000000000008 - param_4;
    fStack0000000000000004 = fStack0000000000000004 - (unaff_s10 * fVar4) / fVar3;
    unaff_s9 = unaff_s9 - (unaff_s8 * fVar4) / fVar3;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = SQRT(unaff_s9 * unaff_s9 +
               fStack0000000000000008 * fStack0000000000000008 +
               fStack0000000000000004 * fStack0000000000000004);
  fVar3 = DAT_01a2ef28;
  if (fVar4 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
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
    fVar5 = (float)FUN_08598d98(*(long *)(unaff_x19 + 0x20),0);
    fVar3 = (float)FUN_08575d1c(fStack0000000000000008,fStack0000000000000004,fVar4,fVar5,fVar3,
                                param_4,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar7 = fStack0000000000000004;
      fVar9 = fVar4;
      fVar11 = fVar5;
      FUN_08596a20(*(long *)(unaff_x19 + 0x20),0);
      fVar6 = (float)FUN_08575760(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar3 * fVar9 + fStack0000000000000004 * fVar11 + fVar5 * fVar7) - fVar4 * fVar6;
      fVar10 = (fStack0000000000000004 * fVar6 + fVar4 * fVar11 + fVar5 * fVar9) - fVar3 * fVar7;
      fVar12 = ((fVar5 * fVar11 - fVar3 * fVar6) - fStack0000000000000004 * fVar7) - fVar4 * fVar9;
      fVar3 = (float)FUN_08575760((fVar4 * fVar7 + fVar3 * fVar11 + fVar5 * fVar6) -
                                  fStack0000000000000004 * fVar9,fVar8,fVar10,fVar12,0);
      if (lVar2 != 0) {
        fVar5 = (unaff_s12 * fVar3 + unaff_s11 * fVar12 + unaff_s14 * fVar10) - unaff_s13 * fVar8;
        fVar4 = (unaff_s13 * fVar10 + unaff_s12 * fVar12 + unaff_s14 * fVar8) - unaff_s11 * fVar3;
        FUN_08598b14((unaff_s11 * fVar8 + unaff_s13 * fVar12 + unaff_s14 * fVar3) -
                     unaff_s12 * fVar10,fVar4,fVar5,
                     ((unaff_s14 * fVar12 - unaff_s13 * fVar3) - unaff_s12 * fVar8) -
                     unaff_s11 * fVar10,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_08598884(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fStack000000000000000c = fStack000000000000000c + fVar5;
            in_stack_00000068 = in_stack_00000068 + fVar4;
            fVar7 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
            FUN_0859895c((fStack0000000000000000 + fVar3) - fVar7,in_stack_00000068 - fVar4,
                         fStack000000000000000c - fVar5,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


