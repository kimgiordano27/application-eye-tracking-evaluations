/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetKeyboardOverlayUV
ENTRY_POINT: 076e6920
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


void OVRPlugin_OVRP_1_57_0__ovrp_SetKeyboardOverlayUV(void)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long lVar4;
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
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar12;
  uint uVar13;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  float in_stack_00000080;
  ulong in_stack_00000090;
  
  do {
    FUN_0403162c();
    *(undefined1 *)(unaff_x28 + 0xe18) = unaff_w27;
    fVar9 = unaff_s13;
    fVar6 = unaff_s11;
    fVar8 = unaff_s12;
    do {
      unaff_s11 = in_stack_00000080;
      unaff_s13 = unaff_s14;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar9 = unaff_s13 - fVar9;
      fVar6 = unaff_s11 - fVar6;
      unaff_s12 = (float)in_stack_00000090;
      fVar8 = unaff_s12 - fVar8;
      fVar10 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar11 = SQRT(fVar10);
      if (fVar11 <= unaff_s10) {
                    /* try { // try from 076e697c to 077e698b has its CatchHandler @ 076e6864 */
        if (*(char *)(unaff_x29 + 0xc10) == '\0') {
                    /* catch() { ... } // from try @ 076e68c8 with catch @ 076e6988
                       catch() { ... } // from try @ 076e696c with catch @ 076e6988 */
          FUN_0403162c(PTR_DAT_08f65568);
                    /* try { // try from 076e698c to 077e698f has its CatchHandler @ 076e6998 */
          *(undefined1 *)(unaff_x29 + 0xc10) = unaff_w27;
        }
                    /* try { // try from 076e6990 to 077e699b has its CatchHandler @ 076e6864 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 076e698c with catch @ 076e6998
                        */
                    /* try { // try from 076e699c to 077e6f4f has its CatchHandler @ 076e699c
                       catch() { ... } // from try @ 076e699c with catch @ 076e699c
                       catch() { ... } // from try @ 076e70f4 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7450 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7c74 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7cb8 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7cec with catch @ 076e699c
                       catch() { ... } // from try @ 076e7dbc with catch @ 076e699c
                       catch() { ... } // from try @ 076e7e70 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7ef4 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7f14 with catch @ 076e699c
                       catch() { ... } // from try @ 076e7f78 with catch @ 076e699c
                       catch() { ... } // from try @ 076e8074 with catch @ 076e699c
                       catch() { ... } // from try @ 076e80ac with catch @ 076e699c
                       catch() { ... } // from try @ 076e80d0 with catch @ 076e699c
                       catch() { ... } // from try @ 076e8104 with catch @ 076e699c
                       catch() { ... } // from try @ 076e816c with catch @ 076e699c
                       catch() { ... } // from try @ 076e81b8 with catch @ 076e699c
                       catch() { ... } // from try @ 076e8200 with catch @ 076e699c */
        pfVar2 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar6 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
      }
      else {
        fVar6 = fVar6 / fVar11;
                    /* try { // try from 076e696c to 077e697b has its CatchHandler @ 076e6988 */
        fVar8 = fVar8 / fVar11;
        fVar9 = fVar9 / fVar11;
      }
      uVar7 = FUN_08575dd0(fVar6,0);
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) goto LAB_076e6af8;
      lVar4 = unaff_x21 + unaff_x25;
      unaff_s9 = unaff_s9 + fVar11;
      *(undefined4 *)(lVar4 + 0x2c) = uVar7;
      *(float *)(lVar4 + 0x30) = fVar8;
      unaff_x26 = unaff_x26 + 1;
      *(float *)(lVar4 + 0x34) = fVar9;
      *(float *)(lVar4 + 0x38) = fVar10;
      unaff_x25 = unaff_x25 + 0x20;
      if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x26) {
        if (*(int *)(unaff_x19 + 0x50) < 2) {
          return;
        }
        lVar3 = *(long *)(unaff_x19 + 0x68);
        lVar4 = 0x5c;
        uVar5 = 1;
        goto LAB_076e6a0c;
      }
      uVar7 = *unaff_x20;
      uVar13 = unaff_x20[1];
      unaff_s14 = (float)unaff_x20[2];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      in_stack_00000090 = (ulong)uVar13;
      in_stack_00000080 =
           (float)FUN_076e6ed8(uVar7,in_stack_00000090,unaff_s14,in_stack_00000060,
                               uStack000000000000005c,uStack0000000000000058);
      if (*(char *)(unaff_x24 + 0xe17) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe17) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (lVar4 == 0) goto LAB_076e6afc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x26) goto LAB_076e6af8;
      *(ulong *)(lVar4 + unaff_x25 + 0x20) =
           CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * (float)in_stack_00000090,
                    (float)in_stack_00000040 * in_stack_00000080);
      *(float *)(lVar4 + unaff_x25 + 0x28) = in_stack_00000038._4_4_ * unaff_s14;
      unaff_x21 = *(long *)(unaff_x19 + 0x68);
      if (unaff_x21 == 0) goto LAB_076e6afc;
      fVar9 = unaff_s13;
      fVar6 = unaff_s11;
      fVar8 = unaff_s12;
    } while (*(char *)(unaff_x28 + 0xe18) != '\0');
  } while( true );
LAB_076e6a0c:
  if (lVar3 == 0) {
LAB_076e6afc:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  lVar3 = lVar3 + lVar4;
  fVar6 = *(float *)(lVar3 + -0x38);
  fVar8 = *(float *)(lVar3 + -0x34);
  fVar9 = *(float *)(lVar3 + -0x3c);
  fVar10 = *(float *)(lVar3 + -0x1c);
  fVar11 = *(float *)(lVar3 + -0x18);
  fVar12 = *(float *)(lVar3 + -0x14);
  if (*(char *)(unaff_x24 + 0xe17) == '\0') {
    FUN_0403162c();
    *(undefined1 *)(unaff_x24 + 0xe17) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar3 = *(long *)(unaff_x19 + 0x68);
  if (lVar3 == 0) goto LAB_076e6afc;
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar5))
  goto LAB_076e6af8;
  fVar9 = fVar9 - fVar10;
  fVar6 = fVar6 - fVar11;
  pfVar2 = (float *)(lVar3 + lVar4);
  fVar8 = fVar8 - fVar12;
  iVar1 = *(int *)(unaff_x19 + 0x50);
  uVar5 = uVar5 + 1;
  lVar4 = lVar4 + 0x20;
  *pfVar2 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8) / unaff_s9 + pfVar2[-8];
  if ((long)iVar1 <= (long)uVar5) {
    return;
  }
  goto LAB_076e6a0c;
}


