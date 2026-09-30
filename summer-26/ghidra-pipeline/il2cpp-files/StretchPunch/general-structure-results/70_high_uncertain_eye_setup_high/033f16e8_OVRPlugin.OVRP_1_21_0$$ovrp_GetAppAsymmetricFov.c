/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetAppAsymmetricFov
ENTRY_POINT: 033f16e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_21_0__ovrp_GetAppAsymmetricFov
                (undefined8 param_1,uint param_2,uint param_3,ulong param_4,long param_5,
                undefined8 param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  uint uVar21;
  uint uStack000000000000000c;
  
  uVar21 = 0;
  uVar10 = param_2 & 0xffff | 0xff670000;
                    /* try { // try from 033f1710 to 034f172b has its CatchHandler @ 033f14e8 */
  uVar11 = param_3 & 0xffff | 0xfa0a0000;
  uVar2 = unaff_w27 & 0xffff | 0xc4650000;
  uStack000000000000000c = unaff_w26 - unaff_w25;
  uVar12 = param_4 & 0xffffffffffff | 0x44000000000000;
  puVar13 = (ushort *)(param_5 + 0xcd6);
                    /* try { // try from 033f172c to 034f173b has its CatchHandler @ 033f173c */
  uVar14 = param_7 & 0xffffffff | 0x28f5c28f00000000;
  uVar15 = param_8 & 0xffffffff | 0x20c49ba500000000;
                    /* catch() { ... } // from try @ 033f16a4 with catch @ 033f173c
                       catch() { ... } // from try @ 033f172c with catch @ 033f173c */
                    /* try { // try from 033f1740 to 034f1743 has its CatchHandler @ 033f174c */
                    /* try { // try from 033f1744 to 034f174f has its CatchHandler @ 033f14e8 */
  uVar17 = 0;
  do {
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f1740 with catch @ 033f174c
                        */
                    /* try { // try from 033f1750 to 034f17ff has its CatchHandler @ 033f1750
                       catch() { ... } // from try @ 033f1750 with catch @ 033f1750
                       catch() { ... } // from try @ 033f1808 with catch @ 033f1750
                       catch() { ... } // from try @ 033f184c with catch @ 033f1750
                       catch() { ... } // from try @ 033f1888 with catch @ 033f1750 */
      if (unaff_w25 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar12 = (*(code *)((ulong)puVar13[unaff_w25 - 1U] * 4 + 0x33f176c))();
        return uVar12;
      }
      if (*(int *)(*in_x15 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*in_x15,uVar10,uVar11,uVar12,puVar13,0xcccccccccccccccd,uVar14,uVar15);
        uVar15 = 0x20c49ba5e353f7cf;
        uVar14 = 0x28f5c28f5c28f5c3;
        puVar13 = &switchD_033f1768::switchdataD_00c4bcd6;
        uVar12 = 0x44b82fa09b5a53;
        uVar11 = 0xfa0a1f00;
        uVar10 = 0xff676980;
        in_x15 = (long *)StringLiteral_9323;
      }
      uVar18 = unaff_x20[unaff_w21];
      uVar3 = unaff_w21 - 1;
      uVar7 = (uint)((ulong)(uVar18 >> 9) * 0x44b83 >> 0x20);
      uVar16 = uVar7 >> 7;
      uVar18 = uVar18 + uVar16 * uVar2;
      if (-1 < (int)uVar3) {
        lVar19 = (ulong)uVar3 + 1;
        puVar20 = unaff_x20 + uVar3;
        do {
          uVar3 = *puVar20;
          lVar19 = lVar19 + -1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(uVar18,uVar3) >> 9;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar12;
          uVar18 = (uint)(SUB168(auVar5 * auVar6,8) >> 0xb);
          *puVar20 = uVar18;
          uVar18 = uVar3 + uVar18 * uVar2;
          puVar20 = puVar20 + -1;
        } while (0 < lVar19);
      }
      unaff_x20[unaff_w21] = uVar7 >> 7;
      uVar21 = uVar21 | uVar17;
      iVar4 = unaff_w25 + -9;
      unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar16 == 0);
      bVar1 = 8 < unaff_w25;
      unaff_w25 = iVar4;
      uVar17 = uVar18;
    } while (iVar4 != 0 && bVar1);
    if (unaff_w21 < 3) {
      if ((uVar18 < 500000000) ||
         (((uVar17 = *unaff_x20, uVar18 < 0x1dcd6501 && ((uVar17 & 1) == 0 && uVar21 == 0)) ||
          (*unaff_x20 = uVar17 + 1, uVar17 != 0xffffffff)))) {
LAB_033f20ac:
        return (ulong)uStack000000000000000c;
      }
      unaff_w21 = 0;
      do {
        unaff_w21 = unaff_w21 + 1;
        uVar21 = unaff_x20[unaff_w21];
        unaff_x20[unaff_w21] = uVar21 + 1;
      } while (0xfffffffe < uVar21);
      if (unaff_w21 < 3) goto LAB_033f20ac;
      if (uStack000000000000000c == 0) goto LAB_033f20d0;
      uVar17 = 0;
      uVar21 = 0;
    }
    else if (uStack000000000000000c == 0) {
LAB_033f20d0:
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar8 = thunk_FUN_01de27b8();
      uVar9 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar8,uVar9,0);
      uVar9 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,uVar9);
    }
    uStack000000000000000c = uStack000000000000000c - 1;
    unaff_w25 = 1;
  } while( true );
}


