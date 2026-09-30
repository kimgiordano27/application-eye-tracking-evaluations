/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_GetHandState3
ENTRY_POINT: 04f97cac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_103_0__ovrp_GetHandState3(void)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint in_w8;
  long lVar5;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  do {
    if (*(uint *)(in_x9 + 0x18) <= in_w8) {
LAB_04f97ddc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar5 = in_x9 + (ulong)in_w8 * (unaff_x27 & 0xffffffff);
    fVar9 = *(float *)(lVar5 + 0x30);
    auVar13 = ZEXT416(*(uint *)(lVar5 + 0x34));
    auVar15 = ZEXT416(*(uint *)(lVar5 + 0x38));
    fVar6 = (float)FUN_05c7b504(*(undefined4 *)(lVar5 + 0x2c),0);
    lVar5 = *unaff_x20;
    if (lVar5 == 0) {
LAB_04f97dd8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_04f97ddc;
    pauVar1 = (undefined1 (*) [12])(lVar5 + unaff_x25);
    fVar21 = (float)*(undefined8 *)(*pauVar1 + 8);
    fVar22 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
    fVar19 = (float)*(undefined8 *)*pauVar1;
    fVar20 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar14 = auVar15._0_4_;
    fVar10 = auVar13._0_4_;
    auVar11._4_4_ = fVar22;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar22;
    auVar11._12_4_ = fVar22;
    auVar12._12_4_ = fVar22;
    auVar12._0_12_ = *pauVar1;
                    /* try { // try from 04f97d10 to 05097d87 has its CatchHandler @ 04f97e54 */
    auVar12 = NEON_ext(auVar11,auVar12,4,1);
    fVar7 = fVar6 * fVar20;
    fVar8 = fVar9 * fVar20;
    fVar16 = fVar10 * fVar20;
    fVar17 = fVar6 * fVar21;
    fVar18 = fVar10 * fVar21;
    auVar13._4_4_ = fVar7;
    auVar13._0_4_ = fVar10 * fVar19;
    auVar13._8_4_ = fVar9 * fVar21;
    auVar13._12_4_ = fVar8;
    auVar15._4_4_ = fVar7;
    auVar15._0_4_ = fVar10 * fVar19;
    auVar15._8_4_ = fVar9 * fVar21;
    auVar15._12_4_ = fVar8;
    auVar13 = NEON_ext(auVar13,auVar15,4,1);
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar9 * fVar19;
    auVar3._8_4_ = fVar17;
    auVar3._12_4_ = fVar18;
    auVar4._4_4_ = fVar16;
    auVar4._0_4_ = fVar9 * fVar19;
    auVar4._8_4_ = fVar17;
    auVar4._12_4_ = fVar18;
    auVar15 = NEON_ext(auVar3,auVar4,0xc,1);
    fVar16 = (fVar19 * fVar14 + fVar6 * auVar12._0_4_ + auVar13._4_4_) - fVar16;
    fVar17 = (fVar20 * fVar14 + fVar9 * auVar12._4_4_ + auVar13._12_4_) - fVar17;
    fVar9 = (fVar21 * fVar14 + fVar10 * auVar12._8_4_ + fVar7) - auVar15._4_4_;
    fVar18 = ((fVar22 * fVar14 - fVar6 * auVar12._12_4_) - fVar8) - fVar18;
    while( true ) {
      if (unaff_x28 == 0) goto LAB_04f97dd8;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x23) goto LAB_04f97ddc;
      lVar5 = unaff_x28 + unaff_x23 * 0x10;
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 0x1c;
      *(ulong *)(lVar5 + 0x28) = CONCAT44(fVar18,fVar9);
      *(ulong *)(lVar5 + 0x20) = CONCAT44(fVar17,fVar16);
      if (unaff_x23 == 0x1a) {
        return 1;
      }
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *unaff_x24;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_04f97dd8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_04f97ddc;
      unaff_x28 = *(long *)(unaff_x19 + 0x48);
      in_w8 = *(uint *)(lVar5 + unaff_x23 * 4 + 0x20);
      if (-1 < (int)in_w8) break;
      if (*(char *)(unaff_x26 + 0xd9a) == '\0') {
        FUN_02b3c81c();
        *(undefined1 *)(unaff_x26 + 0xd9a) = unaff_w22;
      }
      uVar2 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      fVar9 = (float)uVar2;
      fVar18 = (float)((ulong)uVar2 >> 0x20);
      uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
      fVar16 = (float)uVar2;
      fVar17 = (float)((ulong)uVar2 >> 0x20);
    }
    in_x9 = *unaff_x20;
    if (in_x9 == 0) goto LAB_04f97dd8;
  } while( true );
}


