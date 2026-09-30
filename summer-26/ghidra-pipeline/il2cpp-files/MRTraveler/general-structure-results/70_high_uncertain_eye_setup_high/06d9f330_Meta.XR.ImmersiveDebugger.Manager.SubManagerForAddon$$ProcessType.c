/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon$$ProcessType
ENTRY_POINT: 06d9f330
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_SubManagerForAddon__ProcessType
               (long param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(float *)(param_1 + 0x2c) = param_4 + *(float *)(unaff_x21 + 0x34);
  lVar8 = *(long *)(unaff_x20 + 0x88);
  if (lVar8 == 0) goto LAB_06d9f614;
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(float *)(lVar8 + 0x20) = param_2 + param_3;
    puVar5 = PTR_DAT_08e8fb88;
    if (*(int *)(lVar8 + 0x18) != 1) {
      *(float *)(lVar8 + 0x24) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c);
      lVar6 = *(long *)puVar5;
      fVar12 = *(float *)(param_1 + 0x20);
      fVar13 = *(float *)(param_1 + 0x24);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar6 = *(long *)puVar5;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
LAB_06d9f614:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((7 < uVar1) && (2 < *(uint *)(lVar8 + 0x18))) {
        *(float *)(lVar8 + 0x28) = (fVar12 - fVar13) * *(float *)(lVar6 + 0x3c);
        lVar8 = *(long *)(unaff_x20 + 0x80);
        if (lVar8 == 0) goto LAB_06d9f614;
        if (((2 < *(uint *)(lVar8 + 0x18)) && (*(uint *)(lVar8 + 0x18) != 3)) && (0x17 < uVar1)) {
          lVar7 = *(long *)(unaff_x20 + 0x88);
          if (lVar7 == 0) goto LAB_06d9f614;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (3 < uVar2) {
            fVar13 = (*(float *)(lVar8 + 0x28) - *(float *)(lVar8 + 0x2c)) *
                     *(float *)(lVar6 + 0x7c);
            *(float *)(lVar7 + 0x2c) = fVar13;
            fVar12 = DAT_018b0470;
            if (uVar2 != 4) {
              *(float *)(lVar7 + 0x30) = (*(float *)(lVar7 + 0x28) - fVar13) * DAT_018b0470;
              if (unaff_x19 == 0) goto LAB_06d9f614;
              uVar3 = *(uint *)(unaff_x19 + 0x18);
              if (((uVar3 != 0) &&
                  (*(float *)(unaff_x19 + 0x20) =
                        *(float *)(lVar7 + 0x20) + *(float *)(lVar7 + 0x24), 2 < uVar3)) &&
                 ((*(float *)(unaff_x19 + 0x28) =
                        *(float *)(lVar7 + 0x28) + *(float *)(lVar7 + 0x2c) +
                        *(float *)(lVar7 + 0x30), 4 < uVar3 &&
                  (*(float *)(unaff_x19 + 0x30) =
                        (*(float *)(lVar7 + 0x20) - *(float *)(lVar7 + 0x24)) * fVar12, 6 < uVar3)))
                 ) {
                *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(lVar7 + 0x30);
                if ((*(uint *)(unaff_x21 + 0x18) != 0) && (7 < *(uint *)(unaff_x21 + 0x18))) {
                  lVar8 = *(long *)(unaff_x20 + 0x90);
                  if (lVar8 == 0) goto LAB_06d9f614;
                  uVar4 = *(uint *)(lVar8 + 0x18);
                  if (uVar4 != 0) {
                    fVar13 = (*(float *)(unaff_x21 + 0x20) - *(float *)(unaff_x21 + 0x3c)) *
                             *(float *)(lVar6 + 0x2c);
                    *(float *)(lVar8 + 0x20) = fVar13;
                    if ((((uVar4 != 1) &&
                         (*(float *)(lVar8 + 0x24) =
                               (*(float *)(unaff_x21 + 0x24) - *(float *)(unaff_x21 + 0x38)) *
                               *(float *)(lVar6 + 0x4c), 2 < uVar4)) &&
                        (*(float *)(lVar8 + 0x28) =
                              (*(float *)(unaff_x21 + 0x28) - *(float *)(unaff_x21 + 0x34)) *
                              *(float *)(lVar6 + 0x6c), 0x1b < uVar1)) && (3 < uVar4)) {
                      fVar9 = (*(float *)(unaff_x21 + 0x2c) - *(float *)(unaff_x21 + 0x30)) *
                              *(float *)(lVar6 + 0x8c);
                      fVar13 = fVar9 + fVar13;
                      *(float *)(lVar8 + 0x2c) = fVar9;
                      *(float *)(lVar7 + 0x20) = fVar13;
                      fVar9 = *(float *)(lVar8 + 0x24) + *(float *)(lVar8 + 0x28);
                      *(float *)(lVar7 + 0x24) = fVar9;
                      fVar10 = (*(float *)(lVar8 + 0x20) - *(float *)(lVar8 + 0x2c)) *
                               *(float *)(lVar6 + 0x3c);
                      *(float *)(lVar7 + 0x28) = fVar10;
                      fVar11 = (*(float *)(lVar8 + 0x24) - *(float *)(lVar8 + 0x28)) *
                               *(float *)(lVar6 + 0x7c);
                      *(float *)(lVar7 + 0x2c) = fVar11;
                      *(float *)(lVar7 + 0x30) = fVar11 + fVar10;
                      if (5 < uVar2) {
                        *(float *)(lVar7 + 0x34) = (fVar10 - fVar11) * fVar12;
                        lVar8 = *(long *)(unaff_x20 + 0x98);
                        if (lVar8 == 0) goto LAB_06d9f614;
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 != 0) {
                          fVar13 = fVar13 + fVar9;
                          *(float *)(lVar8 + 0x20) = fVar13;
                          if (uVar1 != 1) {
                            fVar9 = *(float *)(lVar7 + 0x30) + *(float *)(lVar7 + 0x34);
                            *(float *)(lVar8 + 0x24) = fVar9;
                            if (2 < uVar1) {
                              *(float *)(lVar8 + 0x28) =
                                   (*(float *)(lVar7 + 0x20) - *(float *)(lVar7 + 0x24)) * fVar12;
                              if (uVar1 != 3) {
                                *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(lVar7 + 0x34);
                                *(float *)(unaff_x19 + 0x24) = fVar13 + fVar9;
                                *(float *)(unaff_x19 + 0x2c) =
                                     *(float *)(lVar8 + 0x24) + *(float *)(lVar8 + 0x28);
                                *(float *)(unaff_x19 + 0x34) =
                                     *(float *)(lVar8 + 0x28) + *(float *)(lVar8 + 0x2c);
                                if (7 < uVar3) {
                                  *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(lVar8 + 0x2c);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


