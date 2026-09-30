/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 0531fab4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSystemHeadsetType(void)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  FUN_02f08768(PTR_DAT_067c8f78);
  *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
  pfVar2 = *(float **)(*unaff_x21 + 0xb8);
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  fVar4 = pfVar2[2];
  fVar3 = (float)FUN_0531f10c();
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  puVar1 = PTR_DAT_067c8f80;
  fStack000000000000002c = unaff_s15;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
  if (fVar3 < fVar7) {
    if (DAT_06bb42bf == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42bf = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (fVar7 <= DAT_011b06e4) {
      if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar4 = pfVar2[2];
    }
    else {
      fVar5 = fVar5 / fVar7;
      fVar6 = fVar6 / fVar7;
      fVar4 = fVar4 / fVar7;
    }
    fVar5 = fVar3 * fVar5;
    fVar6 = fVar3 * fVar6;
    fVar4 = fVar3 * fVar4;
  }
  if (unaff_s10 * fVar4 + fStack000000000000002c * fVar5 + unaff_s9 * fVar6 < 0.0) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000024 + fVar6);
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000028 + fVar5);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + fVar4);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar3 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar3) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar3) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar3) / unaff_s8;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar3 <= DAT_011b06e4) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    fStack0000000000000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  fVar6 = (float)FUN_0531ec70();
  fVar4 = (float)FUN_0526fc7c(0);
  fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
  fVar3 = 360.0;
  if (fVar4 <= 360.0) {
    fVar3 = fVar4;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar4) {
    fVar7 = fVar3;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar3 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar3 < fVar7) && (fStack0000000000000018 = fVar6, ABS(fVar7 - fVar3) < ABS(360.0 - fVar7))
       ) {
      fStack0000000000000018 = (float)FUN_0531ed1c();
    }
    fVar3 = (float)FUN_0531ef30();
    return in_stack_00000028 + fVar5 + fStack0000000000000018 * fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


