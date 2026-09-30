/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 076dd850
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__SetClientVersion(float param_1,float param_2,float param_3)

{
  char in_NG;
  bool in_ZR;
  bool bVar1;
  bool bVar2;
  char in_OV;
  long lVar3;
  char cVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float in_stack_00000040;
  
  if (in_ZR || in_NG != in_OV) {
    param_1 = param_3;
  }
  if (param_2 < param_1) {
    return 0;
  }
  fVar12 = (float)((ulong)in_stack_00000020 >> 0x20);
  if (unaff_s8 <= unaff_s15) {
    if (unaff_w21 == 2) {
      return 0;
    }
  }
  else if ((fVar12 * -0.0 - in_stack_00000040 * (float)in_stack_00000020) - unaff_s9 * unaff_s10 <
           0.0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
  fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
  fVar13 = SQRT(fVar5 * fVar5 - unaff_s14 * unaff_s14);
  fVar5 = fVar13 * (float)in_stack_00000020;
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar12 = fVar13 * fVar12;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    cVar4 = DAT_09539e19;
  }
  else {
    cVar4 = '\x01';
  }
  fVar11 = unaff_s9 - (unaff_s13 - unaff_s10 * fVar13);
  fVar6 = (fVar12 - unaff_s12) + 0.0;
  fVar10 = in_stack_00000040 - (unaff_s11 - fVar5);
  if (cVar4 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  fVar6 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar6 * fVar6) / in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar13 = unaff_s9 - (unaff_s13 + unaff_s10 * fVar13);
  in_stack_00000040 = in_stack_00000040 - (unaff_s11 + fVar5);
  fVar11 = 0.0 - (unaff_s12 + fVar12);
  fVar13 = fVar13 * fVar13;
  fVar11 = fVar11 * fVar11;
  in_stack_00000010 =
       SQRT(fVar13 + in_stack_00000040 * in_stack_00000040 + fVar11) / in_stack_00000010;
  uVar9 = FUN_0853dbe0(fVar6,&stack0x00000058,0);
  fVar12 = fVar11;
  fVar5 = fVar13;
  fVar10 = (float)FUN_0853dbe0(in_stack_00000010,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar7 = (float)FUN_076dd2c0(fVar6), fVar7 <= fStack000000000000000c)) {
    fVar7 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = false;
    bVar2 = false;
    if (fVar7 * 0.5 < ABS(fVar11)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar7)) {
        bVar1 = fVar7 == 0.0;
        bVar2 = 0.0 <= fVar7;
      }
    }
    bVar2 = bVar2 && !bVar1;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar7) {
      bVar1 = fVar7 * 0.5 < ABS(fVar12);
      goto LAB_076ddab0;
    }
    if ((bool)(unaff_w21 == 1 | bVar2)) goto LAB_076ddad4;
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar12 = fVar13;
    uVar8 = FUN_08596980(uVar9,lVar3,0);
    *unaff_x19 = uVar8;
    unaff_x19[1] = fVar11;
    unaff_x19[2] = fVar12;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar5 = SQRT(fVar13 * fVar13 + (float)uVar9 * (float)uVar9);
    in_stack_00000010 = fVar6;
    if (fVar5 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar12 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar12 = 0.0 / fVar5;
      fVar13 = fVar13 / fVar5;
    }
  }
  else {
    bVar2 = true;
LAB_076dda74:
    fVar7 = (float)FUN_076dd2c0(in_stack_00000010);
    if (fVar7 <= fStack000000000000000c) {
      fVar7 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar1 = true;
LAB_076ddab0:
    if ((unaff_w21 != 1) && (!bVar2)) goto LAB_076ddb88;
    if (bVar1) {
      return 0;
    }
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar13 = fVar5;
    uVar8 = FUN_08596980(fVar10,lVar3,0);
    *unaff_x19 = uVar8;
    unaff_x19[1] = fVar12;
    unaff_x19[2] = fVar13;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar13 = SQRT(fVar5 * fVar5 + fVar10 * fVar10);
    if (fVar13 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar12 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar12 = 0.0 / fVar13;
      fVar13 = -fVar5 / fVar13;
    }
  }
  if (lVar3 != 0) {
    uVar8 = FUN_08599d5c(lVar3,0);
    unaff_x19[3] = uVar8;
    unaff_x19[4] = fVar12;
    unaff_x19[5] = fVar13;
    uVar8 = FUN_076dd2c0(in_stack_00000010);
    unaff_x19[6] = uVar8;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


