/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_GetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 076e68a4
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


void OVRPlugin_OVRP_1_57_0__ovrp_GetEyeFovPremultipliedAlphaMode
               (ulong param_1,ulong param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long unaff_x19;
  uint *unaff_x20;
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
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  uint uVar15;
  uint uVar16;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  
  while( true ) {
    fVar14 = param_3;
    fVar6 = (float)FUN_076e6ed8(param_1,param_2,fVar14,param_4,param_5,param_6);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076e6884 with catch @ 076e68b0
                       try { // try from 076e68b0 to 077e68c7 has its CatchHandler @ 076e6864 */
    if (*(char *)(unaff_x24 + 0xe17) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x24 + 0xe17) = unaff_w27;
    }
                    /* try { // try from 076e68c8 to 077e68df has its CatchHandler @ 076e6988 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
                    /* try { // try from 076e68e0 to 077e696b has its CatchHandler @ 076e6864 */
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_076e6af8;
    fVar13 = (float)param_2;
    *(ulong *)(lVar2 + unaff_x25 + 0x20) =
         CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * fVar13,
                  (float)in_stack_00000040 * fVar6);
    *(float *)(lVar2 + unaff_x25 + 0x28) = in_stack_00000038._4_4_ * fVar14;
    lVar2 = *(long *)(unaff_x19 + 0x68);
    if (lVar2 == 0) goto LAB_076e6afc;
    if (*(char *)(unaff_x28 + 0xe18) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x28 + 0xe18) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar10 = fVar14 - unaff_s13;
    fVar7 = fVar6 - unaff_s11;
    fVar9 = fVar13 - unaff_s12;
    fVar11 = fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9;
    fVar12 = SQRT(fVar11);
    if (fVar12 <= unaff_s10) {
      if (*(char *)(unaff_x29 + 0xc10) == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        *(undefined1 *)(unaff_x29 + 0xc10) = unaff_w27;
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar7 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
    }
    else {
      fVar7 = fVar7 / fVar12;
      fVar9 = fVar9 / fVar12;
      fVar10 = fVar10 / fVar12;
    }
    uVar8 = FUN_08575dd0(fVar7,0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_076e6af8;
    lVar2 = lVar2 + unaff_x25;
    unaff_s9 = unaff_s9 + fVar12;
    *(undefined4 *)(lVar2 + 0x2c) = uVar8;
    *(float *)(lVar2 + 0x30) = fVar9;
    unaff_x26 = unaff_x26 + 1;
    *(float *)(lVar2 + 0x34) = fVar10;
    *(float *)(lVar2 + 0x38) = fVar11;
    unaff_x25 = unaff_x25 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x26) break;
    uVar15 = *unaff_x20;
    uVar16 = unaff_x20[1];
    param_3 = (float)unaff_x20[2];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_1 = (ulong)uVar15;
    param_2 = (ulong)uVar16;
    param_4 = in_stack_00000060;
    param_5 = uStack000000000000005c;
    param_6 = uStack0000000000000058;
    unaff_s13 = fVar14;
    unaff_s11 = fVar6;
    unaff_s12 = fVar13;
  }
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
      fVar14 = *(float *)(lVar4 + -0x38);
      fVar13 = *(float *)(lVar4 + -0x34);
      fVar6 = *(float *)(lVar4 + -0x3c);
      fVar7 = *(float *)(lVar4 + -0x1c);
      fVar9 = *(float *)(lVar4 + -0x18);
      fVar10 = *(float *)(lVar4 + -0x14);
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
      fVar6 = fVar6 - fVar7;
      fVar14 = fVar14 - fVar9;
      pfVar3 = (float *)(lVar4 + lVar2);
      fVar13 = fVar13 - fVar10;
      iVar1 = *(int *)(unaff_x19 + 0x50);
      uVar5 = uVar5 + 1;
      lVar2 = lVar2 + 0x20;
      *pfVar3 = SQRT(fVar6 * fVar6 + fVar14 * fVar14 + fVar13 * fVar13) / unaff_s9 + pfVar3[-8];
    } while ((long)uVar5 < (long)iVar1);
  }
  return;
}


