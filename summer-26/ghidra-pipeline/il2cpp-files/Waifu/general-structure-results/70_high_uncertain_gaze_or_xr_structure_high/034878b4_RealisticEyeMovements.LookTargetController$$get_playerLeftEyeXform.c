/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$get_playerLeftEyeXform
ENTRY_POINT: 034878b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_LookTargetController__get_playerLeftEyeXform
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  long lVar4;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float fVar19;
  float fStack0000000000000004;
  ulong uVar14;
  
  fVar11 = param_2;
  fVar6 = param_3;
  fVar5 = (float)FUN_07a84f74(param_5,0);
  fVar5 = (param_1 - fVar5) / unaff_s8;
  fStack0000000000000004 = (param_2 - fVar11) / unaff_s8;
  uVar1 = (ulong)(uint)fStack0000000000000004;
  fVar11 = (param_3 - fVar6) / unaff_s8;
  uVar14 = (ulong)(uint)fVar11;
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    uVar8 = FUN_07a85b48(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_03487bd8;
    uVar10 = uVar1;
    uVar15 = uVar14;
    fVar6 = (float)FUN_07a85858(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_03487bd8;
    fVar16 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x18);
    FUN_03488128(uVar8,uVar1,uVar14,param_4,fVar6 * fVar16,(float)uVar10 * fVar16,
                 (float)uVar15 * fVar16);
    fVar6 = fStack0000000000000004;
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_03487bd8;
    fVar16 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
    if (DAT_086d7cca == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cca = '\x01';
    }
    fVar19 = fVar11 * fVar11 + fVar5 * fVar5 + fVar6 * fVar6;
    if (fVar16 * fVar16 < fVar19) {
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = SQRT(fVar19);
      fVar5 = (fVar5 / fVar19) * fVar16;
      fVar6 = (fVar6 / fVar19) * fVar16;
      fVar11 = (fVar11 / fVar19) * fVar16;
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x78);
    fStack0000000000000004 = fVar6;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a119fc(uVar8,0,0);
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x78);
      if (lVar4 == 0) goto LAB_03487bd8;
      if (DAT_086ef160 == (code *)0x0) {
        DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
      }
      uVar1 = (*DAT_086ef160)(lVar4);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_03487bd8;
        if (*(char *)(*(long *)(unaff_x19 + 0x78) + 0x34) == '\0') {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (DAT_086d7cc6 == '\0') {
            FUN_0335b6c8(&DAT_083d2c90,1);
            DataMemoryBarrier(2,3);
            DAT_086d7cc6 = '\x01';
          }
          if (lVar4 == 0) goto LAB_03487bd8;
          uVar1 = (ulong)**(uint **)(DAT_083d2c90 + 0xb8);
          goto LAB_03487b64;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0x60) != 0) && (*(long *)(unaff_x19 + 0x80) != 0)) {
      fVar16 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
      FUN_07a8638c(fVar5 * fVar16,fVar6 * fVar16,fVar11 * fVar16,*(long *)(unaff_x19 + 0x80),0,0);
      fVar19 = *(float *)(unaff_x19 + 0x98);
      fVar12 = *(float *)(unaff_x19 + 0x9c);
      fVar17 = *(float *)(unaff_x19 + 0xa0);
      lVar4 = *(long *)(unaff_x19 + 0x18);
      fVar16 = (float)FUN_07a00400(*(undefined4 *)(unaff_x19 + 0x94),fVar19,fVar12,fVar17,0);
      lVar3 = *(long *)(unaff_x19 + 0x18);
      if (lVar3 != 0) {
        pcVar2 = *(code **)(unaff_x21 + 0x188);
        fVar18 = fVar17;
        fVar9 = fVar19;
        fVar13 = fVar12;
        if (pcVar2 == (code *)0x0) {
          pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x21 + 0x188) = pcVar2;
        }
        lVar3 = (*pcVar2)(lVar3);
        if (lVar3 != 0) {
          FUN_07a172b0(lVar3,0);
          fVar7 = (float)FUN_07a00400(0);
          uVar1 = FUN_07a00c3c((fVar19 * fVar13 + fVar17 * fVar7 + fVar16 * fVar18) - fVar12 * fVar9
                               ,(fVar12 * fVar7 + fVar17 * fVar9 + fVar19 * fVar18) -
                                fVar16 * fVar13,
                               (fVar16 * fVar9 + fVar17 * fVar13 + fVar12 * fVar18) - fVar19 * fVar7
                               ,((fVar17 * fVar18 - fVar16 * fVar7) - fVar19 * fVar9) -
                                fVar12 * fVar13,fVar5,fVar6,fVar11,0);
          if (lVar4 != 0) {
LAB_03487b64:
            FUN_07a8a3ac(uVar1,lVar4,0);
            return;
          }
        }
      }
    }
  }
LAB_03487bd8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


