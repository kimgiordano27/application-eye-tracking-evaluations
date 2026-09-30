/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$.cctor
ENTRY_POINT: 033f2044
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_30_0___cctor
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                ushort *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_w10;
  uint in_w11;
  long lVar12;
  uint *puVar13;
  long *in_x15;
  uint *unaff_x20;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int unaff_w27;
  uint unaff_w28;
  
  while ((in_w11 <= in_w10 &&
         (((uVar10 = *unaff_x20, in_w11 < in_w10 || ((uVar10 & 1) != 0 || unaff_w28 != 0)) &&
          (*unaff_x20 = uVar10 + 1, uVar10 == 0xffffffff))))) {
    uVar15 = 0;
    do {
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar10;
      uVar2 = unaff_x20[uVar15];
      unaff_x20[uVar15] = uVar2 + 1;
    } while (0xfffffffe < uVar2);
    if (uVar10 < 3) break;
    if (param_10._4_4_ == 0) {
LAB_033f20d0:
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar7 = thunk_FUN_01de27b8();
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
    in_w10 = 0;
    unaff_w28 = 0;
    while( true ) {
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar16 = 1;
      uVar10 = in_w10;
      do {
        if (iVar16 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)((ulong)param_5[iVar16 - 1U] * 4 + 0x33f176c))();
          return uVar15;
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
        uVar2 = unaff_x20[uVar15];
        iVar14 = (int)uVar15;
        uVar11 = iVar14 - 1;
        uVar6 = (uint)((ulong)(uVar2 >> 9) * 0x44b83 >> 0x20);
        uVar9 = uVar6 >> 7;
        in_w10 = uVar2 + uVar9 * unaff_w27;
        if (-1 < (int)uVar11) {
          lVar12 = (ulong)uVar11 + 1;
          puVar13 = unaff_x20 + uVar11;
          do {
            uVar2 = *puVar13;
            lVar12 = lVar12 + -1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = CONCAT44(in_w10,uVar2) >> 9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = param_4;
            uVar11 = (uint)(SUB168(auVar4 * auVar5,8) >> 0xb);
            *puVar13 = uVar11;
            in_w10 = uVar2 + uVar11 * unaff_w27;
            puVar13 = puVar13 + -1;
          } while (0 < lVar12);
        }
        in_w11 = 500000000;
        unaff_x20[uVar15] = uVar6 >> 7;
        unaff_w28 = unaff_w28 | uVar10;
        iVar3 = iVar16 + -9;
        uVar2 = iVar14 - (uint)(iVar14 != 0 && uVar9 == 0);
        uVar15 = (ulong)uVar2;
        bVar1 = 8 < iVar16;
        iVar16 = iVar3;
        uVar10 = in_w10;
      } while (iVar3 != 0 && bVar1);
      if (uVar2 < 3) break;
      if (param_10._4_4_ == 0) goto LAB_033f20d0;
    }
  }
  return (ulong)param_10._4_4_;
}


