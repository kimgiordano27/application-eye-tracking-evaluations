/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 076e67ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_56_0___cctor(float param_1,float param_2,float param_3)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s11;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uVar17;
  float unaff_s15;
  float fVar18;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float in_stack_00000080;
  float in_stack_00000090;
  
  fVar16 = DAT_01a2ef28;
  fVar15 = 0.0;
  lVar4 = 0;
  uVar5 = 0;
  uVar10 = NEON_fmov(0x3f800000,4);
  fVar6 = SQRT(param_1 + param_2 + unaff_s8 * unaff_s8);
  fStack000000000000003c = 1.0 / param_3;
  fVar8 = in_stack_00000038 - unaff_s14;
  fVar9 = fStack0000000000000034 - unaff_s15;
  fVar11 = fStack0000000000000030 - in_stack_00000028._4_4_;
  do {
    uVar17 = *unaff_x20;
    fVar18 = (float)unaff_x20[1];
    fVar13 = (float)unaff_x20[2];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar7 = (float)FUN_076e6ed8(uVar17,fVar18,fVar13,
                                in_stack_00000080 + in_stack_00000090 * fVar6 * unaff_s12,
                                fStack000000000000005c + in_stack_00000090 * fVar6 * unaff_s13,
                                fStack0000000000000058 + in_stack_00000090 * fVar6 * unaff_s11);
    if (*(char *)(unaff_x24 + 0xe17) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x24 + 0xe17) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_076e6af8;
    *(ulong *)(lVar2 + lVar4 + 0x20) =
         CONCAT44(((float)((ulong)uVar10 >> 0x20) / in_stack_00000040) * fVar18,
                  ((float)uVar10 / in_stack_00000060) * fVar7);
    *(float *)(lVar2 + lVar4 + 0x28) = fStack000000000000003c * fVar13;
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
    if (DAT_09539e18 == '\0') {
      FUN_0403162c();
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar11 = fVar13 - fVar11;
    fVar8 = fVar7 - fVar8;
    fVar9 = fVar18 - fVar9;
    fVar12 = fVar11 * fVar11 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar14 = SQRT(fVar12);
    if (fVar14 <= fVar16) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar11 = pfVar3[2];
    }
    else {
      fVar8 = fVar8 / fVar14;
      fVar9 = fVar9 / fVar14;
      fVar11 = fVar11 / fVar14;
    }
    uVar17 = FUN_08575dd0(fVar8,0);
    if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_076e6af8;
    lVar2 = lVar2 + lVar4;
    fVar15 = fVar15 + fVar14;
    *(undefined4 *)(lVar2 + 0x2c) = uVar17;
    *(float *)(lVar2 + 0x30) = fVar9;
    uVar5 = uVar5 + 1;
    *(float *)(lVar2 + 0x34) = fVar11;
    *(float *)(lVar2 + 0x38) = fVar12;
    lVar4 = lVar4 + 0x20;
    fVar8 = fVar7;
    fVar9 = fVar18;
    fVar11 = fVar13;
  } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar2 = *(long *)(unaff_x19 + 0x68);
    lVar4 = 0x5c;
    uVar5 = 1;
    do {
      if (lVar2 == 0) {
LAB_076e6afc:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar5)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar2 = lVar2 + lVar4;
      fVar8 = *(float *)(lVar2 + -0x38);
      fVar9 = *(float *)(lVar2 + -0x34);
      fVar16 = *(float *)(lVar2 + -0x3c);
      fVar11 = *(float *)(lVar2 + -0x1c);
      fVar6 = *(float *)(lVar2 + -0x18);
      fVar18 = *(float *)(lVar2 + -0x14);
      if (*(char *)(unaff_x24 + 0xe17) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe17) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar2 = *(long *)(unaff_x19 + 0x68);
      if (lVar2 == 0) goto LAB_076e6afc;
      if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar5))
      goto LAB_076e6af8;
      fVar16 = fVar16 - fVar11;
      fVar8 = fVar8 - fVar6;
      pfVar3 = (float *)(lVar2 + lVar4);
      fVar9 = fVar9 - fVar18;
      iVar1 = *(int *)(unaff_x19 + 0x50);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
      *pfVar3 = SQRT(fVar16 * fVar16 + fVar8 * fVar8 + fVar9 * fVar9) / fVar15 + pfVar3[-8];
    } while ((long)uVar5 < (long)iVar1);
  }
  return;
}


