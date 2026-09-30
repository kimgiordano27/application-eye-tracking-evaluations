/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 033f17ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                ushort *param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long *in_x15;
  int unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar15;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  puVar8 = unaff_x20 + unaff_w21;
  uVar11 = *puVar8;
                    /* try { // try from 033f1800 to 034f1807 has its CatchHandler @ 033f181c */
  uVar12 = unaff_w21 - 1;
                    /* try { // try from 033f1808 to 034f1833 has its CatchHandler @ 033f1750 */
  uVar9 = (ulong)uVar11 / 10;
  uVar11 = uVar11 + (uVar11 / 10) * unaff_w19;
  if (-1 < (int)uVar12) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033f1800 with catch @ 033f181c
                        */
    lVar13 = (ulong)uVar12 + 1;
    puVar14 = unaff_x20 + uVar12;
    do {
      uVar12 = *puVar14;
      lVar13 = lVar13 + -1;
      auVar2._4_4_ = uVar11;
      auVar2._0_4_ = uVar12;
                    /* try { // try from 033f1834 to 034f184b has its CatchHandler @ 033f1880 */
      auVar2._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_6;
      uVar11 = (uint)(SUB168(auVar2 * auVar4,8) >> 3);
      *puVar14 = uVar11;
      uVar11 = uVar12 + uVar11 * unaff_w19;
      puVar14 = puVar14 + -1;
    } while (0 < lVar13);
  }
                    /* try { // try from 033f184c to 034f186f has its CatchHandler @ 033f1750 */
  uVar12 = 5;
  do {
    *puVar8 = (uint)uVar9;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar15 = unaff_w25 + -9;
    unaff_w21 = unaff_w21 - (unaff_w21 != 0 && (uint)uVar9 == 0);
    unaff_w26 = uVar11;
    if (iVar15 == 0 || unaff_w25 < 9) {
      if (unaff_w21 < 3) {
        if ((uVar11 < uVar12) ||
           (((uVar1 = *unaff_x20, uVar11 <= uVar12 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_10._4_4_;
        }
        unaff_w21 = 0;
        do {
          unaff_w21 = unaff_w21 + 1;
          uVar11 = unaff_x20[unaff_w21];
          unaff_x20[unaff_w21] = uVar11 + 1;
        } while (0xfffffffe < uVar11);
        if (unaff_w21 < 3) goto LAB_033f20ac;
        if (param_10._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_10._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar6 = thunk_FUN_01de27b8();
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,uVar7);
      }
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar15 = 1;
    }
    if (iVar15 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)((ulong)param_5[iVar15 - 1U] * 4 + 0x33f176c))();
      return uVar9;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*in_x15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      param_8 = 0x20c49ba5e353f7cf;
      param_7 = 0x28f5c28f5c28f5c3;
      param_6 = 0xcccccccccccccccd;
      param_5 = &switchD_033f1768::switchdataD_00c4bcd6;
      param_4 = 0x44b82fa09b5a53;
      param_3 = 0xfa0a1f00;
      param_2 = 0xff676980;
      in_x15 = (long *)StringLiteral_9323;
    }
    puVar8 = unaff_x20 + unaff_w21;
    uVar12 = unaff_w21 - 1;
    uVar10 = (ulong)(*puVar8 >> 9) * 0x44b83;
    uVar9 = uVar10 >> 0x27;
    uVar11 = *puVar8 + (uint)(uVar10 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar12) {
      lVar13 = (ulong)uVar12 + 1;
      puVar14 = unaff_x20 + uVar12;
      do {
        uVar12 = *puVar14;
        lVar13 = lVar13 + -1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(uVar11,uVar12) >> 9;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_4;
        uVar11 = (uint)(SUB168(auVar3 * auVar5,8) >> 0xb);
        *puVar14 = uVar11;
        uVar11 = uVar12 + uVar11 * unaff_w27;
        puVar14 = puVar14 + -1;
      } while (0 < lVar13);
    }
    uVar12 = 500000000;
    unaff_w25 = iVar15;
  } while( true );
}


