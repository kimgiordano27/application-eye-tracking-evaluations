/*
FUNCTION_NAME: OVRPlugin.Media$$GetInitialized
ENTRY_POINT: 076da33c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetInitialized(undefined1 param_1 [16],float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float fVar13;
  float unaff_s12;
  float fVar14;
  float unaff_s13;
  float fVar15;
  float fVar16;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar14 = param_3;
  lVar4 = FUN_085849e0();
  if (lVar4 != 0) {
    fVar6 = (float)FUN_08598884(lVar4,0);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar7 = SQRT(param_3 * param_3 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
    fStack000000000000000c = unaff_s8;
    fStack0000000000000078 = fVar14;
    fStack000000000000007c = param_2;
    if (fVar7 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar14 = *pfVar5;
      fVar15 = pfVar5[1];
      param_3 = pfVar5[2];
    }
    else {
      fVar14 = unaff_s12 / fVar7;
      fVar15 = unaff_s13 / fVar7;
      param_3 = param_3 / fVar7;
    }
    fVar13 = unaff_x21[1];
    fVar7 = unaff_x21[2];
    fVar12 = *unaff_x21;
    fVar16 = param_3 * unaff_x21[5] + fVar14 * unaff_x21[3] + fVar15 * unaff_x21[4];
    if (DAT_09539e11 == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539e11 = '\x01';
    }
    fVar8 = ABS(fVar16);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar11 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
    fVar9 = fVar8 * DAT_01a2ee44;
    if (fVar8 * DAT_01a2ee44 <= fVar11) {
      fVar9 = fVar11;
    }
    if (fVar9 <= ABS(0.0 - fVar16)) {
      fVar12 = fVar14 * fVar12 + fVar15 * fVar13;
      fVar7 = param_3 * fVar7 + fVar12;
      fVar16 = ((fStack0000000000000078 * param_3 + fVar6 * fVar14 + fStack000000000000007c * fVar15
                ) - fVar7) / fVar16;
      if ((0.0 < fVar16) && ((fStack000000000000000c <= 0.0 || (fVar16 <= fStack000000000000000c))))
      {
        in_stack_00000018 = *(undefined8 *)(unaff_x21 + 2);
        in_stack_00000010 = *(undefined8 *)unaff_x21;
        in_stack_00000020 = *(undefined8 *)(unaff_x21 + 4);
        uVar10 = FUN_0853dbe0(fVar16,&stack0x00000010,0);
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) goto LAB_076da5a0;
        fVar6 = fVar7;
        fVar13 = (float)FUN_0859a4b4(uVar10,fVar7,fVar12,lVar4,0);
        fVar8 = *(float *)(unaff_x20 + 0x28);
        fVar6 = ABS(fVar6);
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if (ABS(fVar13) <= fVar8) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar6) && !NAN(fVar8)) {
            bVar1 = fVar6 < fVar8;
            bVar2 = fVar6 == fVar8;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
          *unaff_x19 = uVar10;
          unaff_x19[1] = fVar7;
          unaff_x19[2] = fVar12;
          unaff_x19[3] = fVar14;
          unaff_x19[4] = fVar15;
          unaff_x19[5] = param_3;
          unaff_x19[6] = fVar16;
          return 1;
        }
      }
    }
    return 0;
  }
LAB_076da5a0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


