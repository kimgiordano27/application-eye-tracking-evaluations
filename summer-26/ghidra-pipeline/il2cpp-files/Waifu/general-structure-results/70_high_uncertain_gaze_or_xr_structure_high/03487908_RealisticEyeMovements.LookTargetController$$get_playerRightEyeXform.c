/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$get_playerRightEyeXform
ENTRY_POINT: 03487908
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_LookTargetController__get_playerRightEyeXform(void)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  FUN_07a85858();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_03488128();
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_03487bd8;
    fVar12 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x30);
    if (DAT_086d7cca == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cca = '\x01';
    }
    fVar13 = in_stack_00000008 * in_stack_00000008 +
             fStack0000000000000000 * fStack0000000000000000 +
             fStack0000000000000004 * fStack0000000000000004;
    if (fVar12 * fVar12 < fVar13) {
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar13 = SQRT(fVar13);
      fStack0000000000000000 = (fStack0000000000000000 / fVar13) * fVar12;
      fStack0000000000000004 = (fStack0000000000000004 / fVar13) * fVar12;
      in_stack_00000008 = (in_stack_00000008 / fVar13) * fVar12;
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a119fc(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x78);
      if (lVar5 == 0) goto LAB_03487bd8;
      if (DAT_086ef160 == (code *)0x0) {
        DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
      }
      uVar1 = (*DAT_086ef160)(lVar5);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_03487bd8;
        if (*(char *)(*(long *)(unaff_x19 + 0x78) + 0x34) == '\0') {
          lVar5 = *(long *)(unaff_x19 + 0x18);
          if (DAT_086d7cc6 == '\0') {
            FUN_0335b6c8(&DAT_083d2c90,1);
            DataMemoryBarrier(2,3);
            DAT_086d7cc6 = '\x01';
          }
          if (lVar5 == 0) goto LAB_03487bd8;
          uVar1 = (ulong)**(uint **)(DAT_083d2c90 + 0xb8);
          goto LAB_03487b64;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0x60) != 0) && (*(long *)(unaff_x19 + 0x80) != 0)) {
      fVar12 = *(float *)(*(long *)(unaff_x19 + 0x60) + 0x2c);
      FUN_07a8638c(fStack0000000000000000 * fVar12,fStack0000000000000004 * fVar12,
                   in_stack_00000008 * fVar12,*(long *)(unaff_x19 + 0x80),0,0);
      fVar13 = *(float *)(unaff_x19 + 0x98);
      fVar8 = *(float *)(unaff_x19 + 0x9c);
      fVar10 = *(float *)(unaff_x19 + 0xa0);
      lVar5 = *(long *)(unaff_x19 + 0x18);
      fVar12 = (float)FUN_07a00400(*(undefined4 *)(unaff_x19 + 0x94),fVar13,fVar8,fVar10,0);
      lVar3 = *(long *)(unaff_x19 + 0x18);
      if (lVar3 != 0) {
        pcVar2 = *(code **)(unaff_x21 + 0x188);
        fVar11 = fVar10;
        fVar7 = fVar13;
        fVar9 = fVar8;
        if (pcVar2 == (code *)0x0) {
          pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x21 + 0x188) = pcVar2;
        }
        lVar3 = (*pcVar2)(lVar3);
        if (lVar3 != 0) {
          FUN_07a172b0(lVar3,0);
          fVar6 = (float)FUN_07a00400(0);
          uVar1 = FUN_07a00c3c((fVar13 * fVar9 + fVar10 * fVar6 + fVar12 * fVar11) - fVar8 * fVar7,
                               (fVar8 * fVar6 + fVar10 * fVar7 + fVar13 * fVar11) - fVar12 * fVar9,
                               (fVar12 * fVar7 + fVar10 * fVar9 + fVar8 * fVar11) - fVar13 * fVar6,
                               ((fVar10 * fVar11 - fVar12 * fVar6) - fVar13 * fVar7) - fVar8 * fVar9
                               ,fStack0000000000000000,fStack0000000000000004,in_stack_00000008,0);
          if (lVar5 != 0) {
LAB_03487b64:
            FUN_07a8a3ac(uVar1,lVar5,0);
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


