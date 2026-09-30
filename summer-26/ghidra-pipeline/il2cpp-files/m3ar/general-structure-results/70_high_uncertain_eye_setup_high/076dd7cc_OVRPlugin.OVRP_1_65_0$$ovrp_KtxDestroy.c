/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 076dd7cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(float param_1,float param_2)

{
  bool bVar1;
  bool in_ZR;
  bool bVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  int in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float in_stack_00000040;
  
  param_1 = param_1 + param_2;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (in_ZR) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(unaff_s8) && !NAN(unaff_s15)) {
      bVar1 = unaff_s8 < unaff_s15;
      bVar2 = unaff_s8 == unaff_s15;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    in_w9 = 1;
  }
  fVar14 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + param_1 * param_1);
  if (unaff_s15 < fVar14) {
    return 0;
  }
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar6 = ABS(in_stack_00000010);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar12 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  fVar7 = fVar6 * DAT_01a2ee44;
  if (fVar6 * DAT_01a2ee44 <= fVar12) {
    fVar7 = fVar12;
  }
  if (ABS(0.0 - in_stack_00000010) < fVar7) {
    return 0;
  }
  fVar6 = (float)((ulong)in_stack_00000020 >> 0x20);
  if (unaff_s8 <= unaff_s15) {
    if (in_w9 == 2) {
      return 0;
    }
  }
  else if ((fVar6 * -0.0 - in_stack_00000040 * (float)in_stack_00000020) - unaff_s9 * unaff_s10 <
           0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar7 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar7 = SQRT(fVar7 * fVar7 - fVar14 * fVar14);
  fVar14 = fVar7 * (float)in_stack_00000020;
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar6 = fVar7 * fVar6;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    cVar5 = DAT_09539e19;
  }
  else {
    cVar5 = '\x01';
  }
  fVar13 = unaff_s9 - (unaff_s13 - unaff_s10 * fVar7);
  fVar12 = (fVar6 - param_1) + 0.0;
  fVar11 = in_stack_00000040 - (unaff_s11 - fVar14);
  if (cVar5 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar12 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) / in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar7 = unaff_s9 - (unaff_s13 + unaff_s10 * fVar7);
  in_stack_00000040 = in_stack_00000040 - (unaff_s11 + fVar14);
  fVar13 = 0.0 - (param_1 + fVar6);
  fVar7 = fVar7 * fVar7;
  fVar13 = fVar13 * fVar13;
  in_stack_00000010 =
       SQRT(fVar7 + in_stack_00000040 * in_stack_00000040 + fVar13) / in_stack_00000010;
  uVar10 = FUN_0853dbe0(fVar12,&stack0x00000058,0);
  fVar14 = fVar13;
  fVar6 = fVar7;
  fVar11 = (float)FUN_0853dbe0(in_stack_00000010,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar8 = (float)FUN_076dd2c0(fVar12), fVar8 <= fStack000000000000000c)) {
    fVar8 = *(float *)(unaff_x20 + 0x2c);
    bVar2 = false;
    bVar1 = false;
    if (fVar8 * 0.5 < ABS(fVar13)) {
      bVar2 = false;
      bVar1 = true;
      if (!NAN(fVar8)) {
        bVar2 = fVar8 == 0.0;
        bVar1 = 0.0 <= fVar8;
      }
    }
    bVar1 = bVar1 && !bVar2;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar8) {
      bVar2 = fVar8 * 0.5 < ABS(fVar14);
      goto LAB_076ddab0;
    }
    if ((bool)(in_w9 == 1 | bVar1)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) goto LAB_076ddcdc;
    fVar14 = fVar7;
    uVar9 = FUN_08596980(uVar10,lVar4,0);
    *unaff_x19 = uVar9;
    unaff_x19[1] = fVar13;
    unaff_x19[2] = fVar14;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar6 = SQRT(fVar7 * fVar7 + (float)uVar10 * (float)uVar10);
    in_stack_00000010 = fVar12;
    if (fVar6 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar14 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar7 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar14 = 0.0 / fVar6;
      fVar7 = fVar7 / fVar6;
    }
  }
  else {
    bVar1 = true;
LAB_076dda74:
    fVar8 = (float)FUN_076dd2c0(in_stack_00000010);
    if (fVar8 <= fStack000000000000000c) {
      fVar8 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar2 = true;
LAB_076ddab0:
    if ((in_w9 != 1) && (!bVar1)) goto LAB_076ddb88;
    if (bVar2) {
      return 0;
    }
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) goto LAB_076ddcdc;
    fVar7 = fVar6;
    uVar9 = FUN_08596980(fVar11,lVar4,0);
    *unaff_x19 = uVar9;
    unaff_x19[1] = fVar14;
    unaff_x19[2] = fVar7;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar7 = SQRT(fVar6 * fVar6 + fVar11 * fVar11);
    if (fVar7 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar14 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar7 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar14 = 0.0 / fVar7;
      fVar7 = -fVar6 / fVar7;
    }
  }
  if (lVar4 != 0) {
    uVar9 = FUN_08599d5c(lVar4,0);
    unaff_x19[3] = uVar9;
    unaff_x19[4] = fVar14;
    unaff_x19[5] = fVar7;
    uVar9 = FUN_076dd2c0(in_stack_00000010);
    unaff_x19[6] = uVar9;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


