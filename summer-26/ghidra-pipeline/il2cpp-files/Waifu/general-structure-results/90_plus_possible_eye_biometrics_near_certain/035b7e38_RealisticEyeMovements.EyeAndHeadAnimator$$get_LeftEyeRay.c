/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$get_LeftEyeRay
ENTRY_POINT: 035b7e38
PROGRAM: Waifu-libil2cpp.so
SCORE: 150
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;weak_vector_component_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035b7f2c) */

void RealisticEyeMovements_EyeAndHeadAnimator__get_LeftEyeRay
               (long param_1,undefined1 param_2 [16],float param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float unaff_w29;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float unaff_s13;
  float unaff_s14;
  float fVar20;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  do {
    *(float *)(unaff_x19 + 0x454) = param_3;
    if (*(char *)(param_1 + 0xc56) == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = 1;
    }
    fVar13 = fStack0000000000000054;
    fVar9 = fStack0000000000000050;
    fVar15 = fStack000000000000004c;
    lVar6 = *(long *)(DAT_083d2c90 + 0xb8);
    fVar20 = *(float *)(lVar6 + 0x18);
    fVar19 = *(float *)(lVar6 + 0x1c);
    fVar14 = *(float *)(lVar6 + 0x20);
    if (DAT_086d7cc8 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc8 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = (ulong)(uint)(fVar14 * fVar14);
    fVar8 = SQRT((fVar14 * fVar14 + fVar20 * fVar20 + fVar19 * fVar19) *
                 (fVar13 * fVar13 + fVar15 * fVar15 + fVar9 * fVar9));
    fVar11 = 0.0;
    if (fStack000000000000000c <= fVar8) {
      fVar8 = (fVar14 * fVar13 + fVar20 * fVar15 + fVar19 * fVar9) / fVar8;
      uVar5 = 0xbf800000;
      if (fVar8 < -1.0) {
        fVar8 = -1.0;
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      dVar10 = acos((double)fVar8);
      fVar11 = (float)dVar10 * fStack0000000000000008;
    }
    fVar13 = fStack0000000000000048;
    fVar9 = fStack0000000000000044;
    fVar15 = fStack0000000000000040;
    fVar14 = (float)uVar5;
    uVar12 = (ulong)(uint)fVar11;
    if (fVar11 <= (float)*(int *)(unaff_x19 + 0x400)) {
      *(float *)(unaff_x19 + 0x44c) = fStack0000000000000040;
      *(float *)(unaff_x19 + 0x450) = fStack0000000000000044;
      *(float *)(unaff_x19 + 0x454) = fStack0000000000000048;
      pcVar7 = *(code **)(unaff_x22 + 0x188);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68();
        *(code **)(unaff_x22 + 0x188) = pcVar7;
      }
      lVar6 = (*pcVar7)();
      if (lVar6 == 0) goto LAB_035b8154;
      fVar19 = (float)FUN_07a18d2c(lVar6,0);
      if (DAT_086d7ff6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7ff6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar13 = fVar13 - fVar14;
      uVar5 = (ulong)(uint)fVar13;
      lVar6 = *(long *)(unaff_x19 + 0x420);
      uVar12 = (ulong)(uint)(fVar13 * fVar13);
      fVar15 = SQRT(fVar13 * fVar13 +
                    (fVar15 - fVar19) * (fVar15 - fVar19) + (fVar9 - fVar11) * (fVar9 - fVar11));
      *(float *)(unaff_x19 + 0x458) = fVar15;
      if (lVar6 == 0) goto LAB_035b8154;
      pcVar7 = *(code **)(unaff_x28 + 0xe70);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
        *(code **)(unaff_x28 + 0xe70) = pcVar7;
      }
      fVar9 = (float)(*pcVar7)(lVar6);
      if ((fVar9 + unaff_s13 < fVar15) && (*(char *)(unaff_x19 + 0xdda) != '\0')) {
        lVar6 = *(long *)(unaff_x19 + 0x420);
        if (lVar6 == 0) goto LAB_035b8154;
        uVar16 = *(undefined4 *)(unaff_x19 + 0x454);
        uVar17 = *(undefined4 *)(unaff_x19 + 0x450);
        uVar18 = *(undefined4 *)(unaff_x19 + 0x44c);
        if (DAT_086ebf08 == (code *)0x0) {
          DAT_086ebf08 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_areaMask()");
        }
        uVar1 = (*DAT_086ebf08)(lVar6);
        uVar5 = FUN_0799a0d8(uVar18,uVar17,uVar16,0x40800000,&stack0x00000010,uVar1,0);
        uVar3 = DAT_0843cfe0;
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(unaff_x19 + 0xf78);
          if (lVar6 == 0) goto LAB_035b8154;
          if (DAT_086ec958 == (code *)0x0) {
            DAT_086ec958 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetBoolString(System.String,System.Boolean)"
                                               );
          }
          (*DAT_086ec958)(lVar6,uVar3,0);
          if (*(long *)(unaff_x19 + 0x420) == 0) {
LAB_035b8154:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          FUN_07998870(uStack0000000000000010,uStack0000000000000014,in_stack_00000018,
                       *(long *)(unaff_x19 + 0x420),0);
        }
        *(undefined4 *)(unaff_x19 + 0x458) = 0;
        return;
      }
    }
    do {
      do {
        fVar9 = (float)uVar5;
        fVar15 = (float)uVar12;
        lVar6 = *(long *)(unaff_x19 + 0x420);
        unaff_w26 = unaff_w26 + 1;
        if (lVar6 == 0) goto LAB_035b8154;
        pcVar7 = *(code **)(unaff_x28 + 0xe70);
        fVar13 = *(float *)(unaff_x19 + 0x458);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
          *(code **)(unaff_x28 + 0xe70) = pcVar7;
        }
        fVar14 = (float)(*pcVar7)(lVar6);
        if (10 < unaff_w26) {
          return;
        }
        if (fVar14 + unaff_s13 < fVar13) {
          return;
        }
        fVar14 = *(float *)(unaff_x19 + 0xf80);
        fVar20 = *(float *)(unaff_x19 + 0xf84);
        fVar19 = *(float *)(unaff_x19 + 0xf88);
        FUN_07a06ee0(0);
        FUN_07a06ee0(0);
        fVar13 = (float)*(int *)(unaff_x19 + 0x9f0);
        fVar15 = fVar15 * fVar13;
        fVar14 = fVar14 + fVar15;
        fVar20 = fVar20 + fVar13 * unaff_s14;
        fVar19 = fVar19 + fVar9 * fVar13;
        uVar5 = (ulong)(uint)fVar19;
        *(float *)(unaff_x19 + 0x44c) = fVar14;
        *(float *)(unaff_x19 + 0x450) = fVar20;
        *(float *)(unaff_x19 + 0x454) = fVar19;
        pcVar7 = *(code **)(unaff_x22 + 0x188);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68();
          *(code **)(unaff_x22 + 0x188) = pcVar7;
        }
        lVar6 = (*pcVar7)();
        if (lVar6 == 0) goto LAB_035b8154;
        fVar13 = (float)FUN_07a193bc(lVar6,0);
        uVar16 = *(undefined4 *)(unaff_x19 + 0x10dc);
        if (*(int *)(*(long *)(unaff_x23 + 0xcf8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar12 = (ulong)(uint)(fVar20 + unaff_w29);
        uVar2 = FUN_07a80464(fVar14,uVar12,uVar5,-fVar13,-fVar15,-fVar9,&stack0x00000040,uVar16,1,0)
        ;
      } while ((uVar2 & 1) == 0);
      uVar3 = FUN_07a84c20(&stack0x00000040,0);
      pcVar7 = *(code **)(unaff_x22 + 0x188);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68();
        *(code **)(unaff_x22 + 0x188) = pcVar7;
      }
      uVar4 = (*pcVar7)();
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083cf7d8);
      }
      uVar2 = FUN_07a0d2c4(uVar3,uVar4,0);
    } while ((uVar2 & 1) == 0);
    param_1 = 0x86d7000;
    *unaff_x27 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
    param_3 = fStack0000000000000048;
  } while( true );
}


