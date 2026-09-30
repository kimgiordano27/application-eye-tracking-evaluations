/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 033f1d64
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
                (undefined8 param_1,uint param_2,uint param_3,ulong param_4,long param_5,
                ulong param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  long *in_x15;
  uint in_w17;
  uint *unaff_x20;
  ulong unaff_x21;
  int iVar20;
  int unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  
  uVar12 = param_8 & 0xffffffffffff | 0x20c4000000000000;
  uVar11 = param_7 & 0xffffffffffff | 0x28f5000000000000;
  uVar10 = param_6 & 0xffffffffffff0000 | 0xcccd;
  puVar9 = (ushort *)(param_5 + 0xcd6);
  uVar8 = param_4 & 0xffffffffffff | 0x44000000000000;
  uVar7 = param_3 & 0xffff | 0xfa0a0000;
  uVar6 = param_2 & 0xffff | 0xff670000;
  uVar17 = in_w17 & 0xffff | 0xfff00000;
  puVar13 = unaff_x20 + (unaff_x21 & 0xffffffff);
  uVar16 = *puVar13;
  uVar1 = (int)unaff_x21 - 1;
  uVar15 = (ulong)uVar16 / 1000000;
  uVar16 = uVar16 + (uVar16 / 1000000) * uVar17;
  if (-1 < (int)uVar1) {
    lVar18 = (ulong)uVar1 + 1;
    puVar19 = unaff_x20 + uVar1;
    do {
      uVar1 = *puVar19;
      lVar18 = lVar18 + -1;
      uVar16 = (uint)(CONCAT44(uVar16,uVar1) / 1000000);
      *puVar19 = uVar16;
      uVar16 = uVar1 + uVar16 * uVar17;
      puVar19 = puVar19 + -1;
    } while (0 < lVar18);
  }
  uVar17 = 500000;
  do {
    *puVar13 = (uint)uVar15;
    unaff_w28 = unaff_w28 | unaff_w26;
    iVar20 = unaff_w25 + -9;
    uVar1 = (int)unaff_x21 - (uint)((int)unaff_x21 != 0 && (uint)uVar15 == 0);
    unaff_x21 = (ulong)uVar1;
    unaff_w26 = uVar16;
    if (iVar20 == 0 || unaff_w25 < 9) {
      if (uVar1 < 3) {
        if ((uVar16 < uVar17) ||
           (((uVar1 = *unaff_x20, uVar16 <= uVar17 && ((uVar1 & 1) == 0 && unaff_w28 == 0)) ||
            (*unaff_x20 = uVar1 + 1, uVar1 != 0xffffffff)))) {
LAB_033f20ac:
          return (ulong)param_10._4_4_;
        }
        unaff_x21 = 0;
        do {
          uVar16 = (int)unaff_x21 + 1;
          unaff_x21 = (ulong)uVar16;
          uVar17 = unaff_x20[unaff_x21];
          unaff_x20[unaff_x21] = uVar17 + 1;
        } while (0xfffffffe < uVar17);
        if (uVar16 < 3) goto LAB_033f20ac;
        if (param_10._4_4_ == 0) goto LAB_033f20d0;
        unaff_w26 = 0;
        unaff_w28 = 0;
      }
      else if (param_10._4_4_ == 0) {
LAB_033f20d0:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar4 = thunk_FUN_01de27b8();
        uVar5 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01dd295c(StringLiteral_9351);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4,uVar5);
      }
      param_10._4_4_ = param_10._4_4_ - 1;
      iVar20 = 1;
    }
    if (iVar20 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x033f1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)((ulong)puVar9[iVar20 - 1U] * 4 + 0x33f176c))();
      return uVar8;
    }
    if (*(int *)(*in_x15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*in_x15,uVar6,uVar7,uVar8,puVar9,uVar10,uVar11,uVar12);
      uVar12 = 0x20c49ba5e353f7cf;
      uVar11 = 0x28f5c28f5c28f5c3;
      uVar10 = 0xcccccccccccccccd;
      puVar9 = &switchD_033f1768::switchdataD_00c4bcd6;
      uVar8 = 0x44b82fa09b5a53;
      uVar7 = 0xfa0a1f00;
      uVar6 = 0xff676980;
      in_x15 = (long *)StringLiteral_9323;
    }
    puVar13 = unaff_x20 + unaff_x21;
    uVar17 = (int)unaff_x21 - 1;
    uVar14 = (ulong)(*puVar13 >> 9) * 0x44b83;
    uVar15 = uVar14 >> 0x27;
    uVar16 = *puVar13 + (uint)(uVar14 >> 0x27) * unaff_w27;
    if (-1 < (int)uVar17) {
      lVar18 = (ulong)uVar17 + 1;
      puVar19 = unaff_x20 + uVar17;
      do {
        uVar17 = *puVar19;
        lVar18 = lVar18 + -1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(uVar16,uVar17) >> 9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar8;
        uVar16 = (uint)(SUB168(auVar2 * auVar3,8) >> 0xb);
        *puVar19 = uVar16;
        uVar16 = uVar17 + uVar16 * unaff_w27;
        puVar19 = puVar19 + -1;
      } while (0 < lVar18);
    }
    uVar17 = 500000000;
    unaff_w25 = iVar20;
  } while( true );
}


