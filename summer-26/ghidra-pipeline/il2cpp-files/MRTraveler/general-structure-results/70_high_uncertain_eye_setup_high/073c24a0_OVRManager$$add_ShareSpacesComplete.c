/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 073c24a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_ShareSpacesComplete(long param_1)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long lVar3;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar4;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  
  while( true ) {
    unaff_x26 = unaff_x26 + 0x20;
    if (param_1 <= (long)unaff_x25) break;
    fVar8 = (float)unaff_x21[1];
    fVar6 = (float)unaff_x21[2];
    fVar10 = (float)FUN_073c2760(*unaff_x21,fVar8,fVar6,uStack000000000000003c);
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto LAB_073c25c4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_073c25c0;
    lVar3 = lVar3 + unaff_x26;
    *(float *)(lVar3 + -0x10) = fStack0000000000000030 * fVar6;
    *(float *)(lVar3 + -0x18) = fStack0000000000000038 * fVar10;
    *(float *)(lVar3 + -0x14) = fStack0000000000000034 * fVar8;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto LAB_073c25c4;
    if (*(char *)(unaff_x27 + 0xb4) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x27 + 0xb4) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar11 = fVar10 - unaff_s14;
    fVar12 = fVar8 - unaff_s15;
    fVar5 = fVar6 - unaff_s8;
    fVar7 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar12 * fVar12);
    fVar9 = in_stack_00000028._4_4_;
    if (fVar7 <= in_stack_00000028._4_4_) {
      if (*(char *)(unaff_x29 + 0xff5) == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        *(undefined1 *)(unaff_x29 + 0xff5) = unaff_w28;
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar5 = pfVar1[2];
    }
    else {
      fVar11 = fVar11 / fVar7;
      fVar12 = fVar12 / fVar7;
      fVar5 = fVar5 / fVar7;
    }
    fVar11 = (float)FUN_085d297c(fVar11,0);
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_073c25c0;
    pfVar1 = (float *)(lVar3 + unaff_x26);
    pfVar1[-3] = fVar11;
    pfVar1[-2] = fVar12;
    pfVar1[-1] = fVar5;
    *pfVar1 = fVar9;
    if (unaff_x26 != 0x38) {
      if (*(char *)(unaff_x24 + 0xb5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x24 + 0xb5) = unaff_w28;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      in_stack_00000040 = in_stack_00000040 + fVar7;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    unaff_x25 = unaff_x25 + 1;
    unaff_s14 = fVar10;
    unaff_s15 = fVar8;
    unaff_s8 = fVar6;
  }
  if (1 < (int)param_1) {
    lVar2 = *unaff_x20;
    lVar3 = 0x5c;
    uVar4 = 1;
    do {
      if (lVar2 == 0) {
LAB_073c25c4:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_073c25c0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar2 = lVar2 + lVar3;
      fVar8 = *(float *)(lVar2 + -0x38);
      fVar6 = *(float *)(lVar2 + -0x34);
      fVar10 = *(float *)(lVar2 + -0x3c);
      fVar12 = *(float *)(lVar2 + -0x1c);
      fVar11 = *(float *)(lVar2 + -0x18);
      fVar9 = *(float *)(lVar2 + -0x14);
      if (*(char *)(unaff_x24 + 0xb5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x24 + 0xb5) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar2 = *unaff_x20;
      if (lVar2 == 0) goto LAB_073c25c4;
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
      goto LAB_073c25c0;
      fVar10 = fVar10 - fVar12;
      fVar8 = fVar8 - fVar11;
      fVar6 = fVar6 - fVar9;
      *(float *)(lVar2 + lVar3) =
           SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6) / in_stack_00000040 +
           ((float *)(lVar2 + lVar3))[-8];
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


