/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 076da67c
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


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(void)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float unaff_s12;
  float fVar10;
  float unaff_s13;
  float unaff_s14;
  float fVar11;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (*(char *)(unaff_x22 + 3999) == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    *(undefined1 *)(unaff_x22 + 3999) = 1;
  }
  fVar9 = unaff_s15 - unaff_s11;
  fVar11 = unaff_s8 - unaff_s14;
  fVar8 = fStack000000000000000c - unaff_s10;
  fVar5 = unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar5) {
    fVar6 = fVar11 * unaff_s12 + fVar8 * unaff_s13 + fVar9 * unaff_s9;
    fStack000000000000000c = (unaff_s13 * fVar6) / fVar5;
    fVar8 = fVar8 - fStack000000000000000c;
    fVar9 = fVar9 - (unaff_s9 * fVar6) / fVar5;
    fVar11 = fVar11 - (unaff_s12 * fVar6) / fVar5;
  }
  if ((*(long *)(unaff_x21 + 0x20) != 0) &&
     (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
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
        fStack000000000000000c = pfVar4[2];
      }
      else {
        fVar8 = fVar8 / fVar7;
        fVar6 = fVar9 / fVar7;
        fStack000000000000000c = fVar11 / fVar7;
      }
      fVar8 = fVar5 * fVar8;
      fVar9 = fVar5 * fVar6;
      fVar11 = fVar5 * fStack000000000000000c;
    }
    if ((*(long *)(unaff_x21 + 0x20) != 0) &&
       (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
      fVar5 = (float)FUN_08598884(lVar3,0);
      fVar9 = fVar9 + fVar6;
      fVar11 = fVar11 + fStack000000000000000c;
      *unaff_x19 = fVar8 + fVar5;
      unaff_x19[1] = fVar9;
      unaff_x19[2] = fVar11;
      if ((*(long *)(unaff_x21 + 0x20) != 0) &&
         (lVar3 = FUN_085849e0(*(long *)(unaff_x21 + 0x20),0), lVar3 != 0)) {
        fVar7 = (float)FUN_08598e98(lVar3,0);
        cVar2 = DAT_09539e19;
        unaff_x19[3] = -fVar7;
        unaff_x19[4] = -fVar6;
        unaff_x19[5] = -fStack000000000000000c;
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
        fVar5 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar6 * fVar6);
        unaff_x19[6] = fVar5;
        return fVar5 <= fStack0000000000000008 || fStack0000000000000008 <= 0.0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


