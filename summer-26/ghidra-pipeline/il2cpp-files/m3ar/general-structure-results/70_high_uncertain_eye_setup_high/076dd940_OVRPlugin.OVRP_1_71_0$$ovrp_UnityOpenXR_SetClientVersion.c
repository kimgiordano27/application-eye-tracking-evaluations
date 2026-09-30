/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 076dd940
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float in_stack_00000030;
  float in_stack_00000040;
  
  fVar4 = (unaff_s10 - unaff_s12) + 0.0;
  if (*(char *)(unaff_x24 + 0xe19) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x24 + 0xe19) = 1;
  }
  fVar4 = SQRT((unaff_s9 - unaff_s14) * (unaff_s9 - unaff_s14) +
               (in_stack_00000040 - unaff_s15) * (in_stack_00000040 - unaff_s15) + fVar4 * fVar4) /
          in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar11 = unaff_s9 - (unaff_s13 + in_stack_00000030);
  in_stack_00000040 = in_stack_00000040 - (unaff_s11 + unaff_s8);
  fVar9 = 0.0 - (unaff_s12 + unaff_s10);
  fVar11 = fVar11 * fVar11;
  fVar9 = fVar9 * fVar9;
  in_stack_00000010 =
       SQRT(fVar11 + in_stack_00000040 * in_stack_00000040 + fVar9) / in_stack_00000010;
  uVar8 = FUN_0853dbe0(fVar4,&stack0x00000058,0);
  fVar10 = fVar9;
  fVar12 = fVar11;
  fVar5 = (float)FUN_0853dbe0(in_stack_00000010,&stack0x00000058,0);
  if ((fStack000000000000000c <= 0.0) ||
     (fVar6 = (float)FUN_076dd2c0(fVar4), fVar6 <= fStack000000000000000c)) {
    fVar6 = *(float *)(unaff_x20 + 0x2c);
    bVar1 = false;
    bVar2 = false;
    if (fVar6 * 0.5 < ABS(fVar9)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 == 0.0;
        bVar2 = 0.0 <= fVar6;
      }
    }
    bVar2 = bVar2 && !bVar1;
    if (0.0 < fStack000000000000000c) goto LAB_076dda74;
LAB_076dda94:
    if (0.0 < fVar6) {
      bVar1 = fVar6 * 0.5 < ABS(fVar10);
      goto LAB_076ddab0;
    }
    if (!(bool)(unaff_w21 == 1 | bVar2)) goto LAB_076ddb88;
LAB_076ddad4:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar4 = fVar12;
    uVar7 = FUN_08596980(fVar5,lVar3,0);
    *unaff_x19 = uVar7;
    unaff_x19[1] = fVar10;
    unaff_x19[2] = fVar4;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar11 = SQRT(fVar12 * fVar12 + fVar5 * fVar5);
    if (fVar11 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar4 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar4 = 0.0 / fVar11;
      fVar11 = -fVar12 / fVar11;
    }
  }
  else {
    bVar2 = true;
LAB_076dda74:
    fVar6 = (float)FUN_076dd2c0(in_stack_00000010);
    if (fVar6 <= fStack000000000000000c) {
      fVar6 = *(float *)(unaff_x20 + 0x2c);
      goto LAB_076dda94;
    }
    bVar1 = true;
LAB_076ddab0:
    if ((unaff_w21 == 1) || (bVar2)) {
      if (bVar1) {
        return 0;
      }
      goto LAB_076ddad4;
    }
LAB_076ddb88:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 == 0)) goto LAB_076ddcdc;
    fVar10 = fVar11;
    uVar7 = FUN_08596980(uVar8,lVar3,0);
    *unaff_x19 = uVar7;
    unaff_x19[1] = fVar9;
    unaff_x19[2] = fVar10;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_076ddcdc;
    lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x22 + 0xe18) == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      *(undefined1 *)(unaff_x22 + 0xe18) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar10 = SQRT(fVar11 * fVar11 + (float)uVar8 * (float)uVar8);
    in_stack_00000010 = fVar4;
    if (fVar10 <= fStack0000000000000008) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar4 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar4 = 0.0 / fVar10;
      fVar11 = fVar11 / fVar10;
    }
  }
  if (lVar3 != 0) {
    uVar7 = FUN_08599d5c(lVar3,0);
    unaff_x19[3] = uVar7;
    unaff_x19[4] = fVar4;
    unaff_x19[5] = fVar11;
    uVar7 = FUN_076dd2c0(in_stack_00000010);
    unaff_x19[6] = uVar7;
    return 1;
  }
LAB_076ddcdc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


