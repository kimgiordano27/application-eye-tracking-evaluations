/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcActivationMode
ENTRY_POINT: 076da6f8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__SetMrcActivationMode(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float fVar11;
  float in_stack_00000008;
  
  param_3 = param_3 / param_1;
  fVar8 = unaff_s10 - param_3;
  fVar9 = unaff_s11 - param_4 / param_1;
  fVar11 = unaff_s14 - param_2 / param_1;
  if ((*(long *)(unaff_x21 + 0x20) != 0) &&
     (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
                    /* try { // try from 076da72c to 077da7d3 has its CatchHandler @ 076da72c
                       catch() { ... } // from try @ 076da72c with catch @ 076da72c
                       catch() { ... } // from try @ 076da804 with catch @ 076da72c
                       catch() { ... } // from try @ 076da830 with catch @ 076da72c
                       catch() { ... } // from try @ 076da858 with catch @ 076da72c
                       catch() { ... } // from try @ 076da87c with catch @ 076da72c */
    fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11;
    fVar5 = (float)FUN_0859aca0(lVar3,0);
    puVar1 = PTR_DAT_08f65580;
    fVar6 = *(float *)(unaff_x21 + 0x28);
    fVar5 = fVar5 * fVar6;
    if (fVar5 * fVar5 < fVar7) {
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar7 = SQRT(fVar7);
      if (fVar7 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar4 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar8 = *pfVar4;
        fVar6 = pfVar4[1];
        param_3 = pfVar4[2];
      }
      else {
        fVar8 = fVar8 / fVar7;
        fVar6 = fVar9 / fVar7;
        param_3 = fVar11 / fVar7;
      }
      fVar8 = fVar5 * fVar8;
      fVar9 = fVar5 * fVar6;
      fVar11 = fVar5 * param_3;
    }
    if ((*(long *)(unaff_x21 + 0x20) != 0) &&
       (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
      fVar5 = (float)FUN_08598884(lVar3,0);
      fVar9 = fVar9 + fVar6;
      fVar11 = fVar11 + param_3;
      *unaff_x19 = fVar8 + fVar5;
      unaff_x19[1] = fVar9;
      unaff_x19[2] = fVar11;
      if ((*(long *)(unaff_x21 + 0x20) != 0) &&
         (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
        fVar7 = (float)FUN_08598e98(lVar3,0);
        cVar2 = DAT_09539e19;
        unaff_x19[3] = -fVar7;
        unaff_x19[4] = -fVar6;
        unaff_x19[5] = -param_3;
        fVar7 = *unaff_x20;
        fVar6 = unaff_x20[1];
        fVar10 = unaff_x20[2];
        if (cVar2 == '\0') {
          FUN_0403162c(PTR_DAT_08f65580);
          DAT_09539e19 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        fVar6 = fVar6 - fVar9;
        fVar7 = fVar7 - (fVar8 + fVar5);
        fVar10 = fVar10 - fVar11;
        fVar8 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar6 * fVar6);
        unaff_x19[6] = fVar8;
        return fVar8 <= in_stack_00000008 || in_stack_00000008 <= 0.0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


