/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 076e6828
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


void OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],undefined4 param_5
               )

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar5;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  undefined4 uVar13;
  float unaff_s15;
  float fVar14;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  float in_stack_00000058;
  float fStack000000000000005c;
  undefined4 uStack0000000000000060;
  
  fStack000000000000005c = param_2 + param_3;
  fVar7 = fStack0000000000000038 - unaff_s14;
  fVar8 = fStack0000000000000034 - unaff_s15;
  fVar9 = fStack0000000000000030 - in_stack_00000028._4_4_;
  uStack0000000000000060 = param_5;
  do {
    uVar13 = *unaff_x20;
    fVar14 = (float)unaff_x20[1];
    fVar11 = (float)unaff_x20[2];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 076e68b0 with catch @ 076e6864
                       catch() { ... } // from try @ 076e68e0 with catch @ 076e6864
                       catch() { ... } // from try @ 076e697c with catch @ 076e6864
                       catch() { ... } // from try @ 076e6990 with catch @ 076e6864 */
      thunk_FUN_0408f364();
    }
                    /* try { // try from 076e6884 to 077e68af has its CatchHandler @ 076e68b0 */
    fVar6 = (float)FUN_076e6ed8(uVar13,fVar14,fVar11,uStack0000000000000060,fStack000000000000005c,
                                in_stack_00000058 + param_1);
    if (*(char *)(unaff_x24 + 0xe17) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x24 + 0xe17) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_076e6af8;
    *(ulong *)(lVar2 + unaff_x25 + 0x20) =
         CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * fVar14,
                  (float)in_stack_00000040 * fVar6);
    *(float *)(lVar2 + unaff_x25 + 0x28) = fStack000000000000003c * fVar11;
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
    if (*(char *)(unaff_x28 + 0xe18) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x28 + 0xe18) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar9 = fVar11 - fVar9;
    fVar7 = fVar6 - fVar7;
    fVar8 = fVar14 - fVar8;
    fVar10 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
    fVar12 = SQRT(fVar10);
    if (fVar12 <= unaff_s10) {
      if (*(char *)(unaff_x29 + 0xc10) == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        *(undefined1 *)(unaff_x29 + 0xc10) = unaff_w27;
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar7 = *pfVar3;
      fVar8 = pfVar3[1];
      fVar9 = pfVar3[2];
    }
    else {
      fVar7 = fVar7 / fVar12;
      fVar8 = fVar8 / fVar12;
      fVar9 = fVar9 / fVar12;
    }
    uVar13 = FUN_08575dd0(fVar7,0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_076e6af8;
    lVar2 = lVar2 + unaff_x25;
    unaff_s9 = unaff_s9 + fVar12;
    *(undefined4 *)(lVar2 + 0x2c) = uVar13;
    *(float *)(lVar2 + 0x30) = fVar8;
    unaff_x26 = unaff_x26 + 1;
    *(float *)(lVar2 + 0x34) = fVar9;
    *(float *)(lVar2 + 0x38) = fVar10;
    unaff_x25 = unaff_x25 + 0x20;
    fVar7 = fVar6;
    fVar8 = fVar14;
    fVar9 = fVar11;
  } while ((long)unaff_x26 < (long)*(int *)(unaff_x19 + 0x50));
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar4 = *(long *)(unaff_x19 + 0x68);
    lVar2 = 0x5c;
    uVar5 = 1;
    do {
      if (lVar4 == 0) {
LAB_076e6afc:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar4 + 0x18) <= uVar5)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar4 = lVar4 + lVar2;
      fVar8 = *(float *)(lVar4 + -0x38);
      fVar9 = *(float *)(lVar4 + -0x34);
      fVar7 = *(float *)(lVar4 + -0x3c);
      fVar14 = *(float *)(lVar4 + -0x1c);
      fVar11 = *(float *)(lVar4 + -0x18);
      fVar6 = *(float *)(lVar4 + -0x14);
      if (*(char *)(unaff_x24 + 0xe17) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe17) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (lVar4 == 0) goto LAB_076e6afc;
      if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar4 + 0x18) <= uVar5))
      goto LAB_076e6af8;
      fVar7 = fVar7 - fVar14;
      fVar8 = fVar8 - fVar11;
      pfVar3 = (float *)(lVar4 + lVar2);
      fVar9 = fVar9 - fVar6;
      iVar1 = *(int *)(unaff_x19 + 0x50);
      uVar5 = uVar5 + 1;
      lVar2 = lVar2 + 0x20;
      *pfVar3 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) / unaff_s9 + pfVar3[-8];
    } while ((long)uVar5 < (long)iVar1);
  }
  return;
}


