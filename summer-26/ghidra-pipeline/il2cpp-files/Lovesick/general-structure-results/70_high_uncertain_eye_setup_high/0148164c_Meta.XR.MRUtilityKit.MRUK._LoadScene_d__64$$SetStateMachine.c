/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadScene>d__64$$SetStateMachine
ENTRY_POINT: 0148164c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<LoadScene>d__64__SetStateMachine(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  float fVar8;
  float fVar9;
  
  puVar4 = StringLiteral_9740;
  fVar8 = *(float *)(unaff_x21 + 0x20);
  fVar9 = *(float *)(unaff_x21 + 0x5c);
  *(float *)(param_1 + 0x20) = fVar8 + fVar9;
  lVar5 = *(long *)puVar4;
  lVar7 = *(long *)(unaff_x20 + 0x70);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar4;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (1 < uVar1) {
      if (lVar7 == 0) goto LAB_01481a40;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(float *)(lVar7 + 0x20) = (fVar8 - fVar9) * *(float *)(lVar5 + 0x24);
        if ((1 < *(uint *)(unaff_x21 + 0x18)) && (0xe < *(uint *)(unaff_x21 + 0x18))) {
          lVar7 = *(long *)(unaff_x20 + 0x60);
          if (lVar7 == 0) goto LAB_01481a40;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (1 < uVar2) {
            fVar8 = *(float *)(unaff_x21 + 0x24);
            fVar9 = *(float *)(unaff_x21 + 0x58);
            *(float *)(lVar7 + 0x24) = fVar8 + fVar9;
            if (5 < uVar1) {
              lVar6 = *(long *)(unaff_x20 + 0x70);
              if (lVar6 == 0) goto LAB_01481a40;
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (1 < uVar3) {
                *(float *)(lVar6 + 0x24) = (fVar8 - fVar9) * *(float *)(lVar5 + 0x34);
                if (2 < uVar2) {
                  fVar8 = *(float *)(unaff_x21 + 0x28);
                  fVar9 = *(float *)(unaff_x21 + 0x54);
                  *(float *)(lVar7 + 0x28) = fVar8 + fVar9;
                  if ((9 < uVar1) && (2 < uVar3)) {
                    *(float *)(lVar6 + 0x28) = (fVar8 - fVar9) * *(float *)(lVar5 + 0x44);
                    if (3 < uVar2) {
                      fVar8 = *(float *)(unaff_x21 + 0x2c);
                      fVar9 = *(float *)(unaff_x21 + 0x50);
                      *(float *)(lVar7 + 0x2c) = fVar8 + fVar9;
                      if ((0xd < uVar1) && (3 < uVar3)) {
                        *(float *)(lVar6 + 0x2c) = (fVar8 - fVar9) * *(float *)(lVar5 + 0x54);
                        if (4 < uVar2) {
                          fVar8 = *(float *)(unaff_x21 + 0x30);
                          fVar9 = *(float *)(unaff_x21 + 0x4c);
                          *(float *)(lVar7 + 0x30) = fVar8 + fVar9;
                          if ((0x11 < uVar1) && (4 < uVar3)) {
                            *(float *)(lVar6 + 0x30) = (fVar8 - fVar9) * *(float *)(lVar5 + 100);
                            if (5 < uVar2) {
                              fVar8 = *(float *)(unaff_x21 + 0x34);
                              fVar9 = *(float *)(unaff_x21 + 0x48);
                              *(float *)(lVar7 + 0x34) = fVar8 + fVar9;
                              if ((0x15 < uVar1) && (5 < uVar3)) {
                                *(float *)(lVar6 + 0x34) =
                                     (fVar8 - fVar9) * *(float *)(lVar5 + 0x74);
                                if (6 < uVar2) {
                                  fVar8 = *(float *)(unaff_x21 + 0x38);
                                  fVar9 = *(float *)(unaff_x21 + 0x44);
                                  *(float *)(lVar7 + 0x38) = fVar8 + fVar9;
                                  if ((0x19 < uVar1) && (6 < uVar3)) {
                                    *(float *)(lVar6 + 0x38) =
                                         (fVar8 - fVar9) * *(float *)(lVar5 + 0x84);
                                    if (7 < uVar2) {
                                      fVar8 = *(float *)(unaff_x21 + 0x3c);
                                      fVar9 = *(float *)(unaff_x21 + 0x40);
                                      *(float *)(lVar7 + 0x3c) = fVar8 + fVar9;
                                      if ((0x1d < uVar1) && (7 < uVar3)) {
                                        *(float *)(lVar6 + 0x3c) =
                                             (fVar8 - fVar9) * *(float *)(lVar5 + 0x94);
                                        FUN_01481a44();
                                        FUN_01481a44();
                                        lVar5 = *(long *)(unaff_x20 + 0x68);
                                        if (lVar5 == 0) goto LAB_01481a40;
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        if (uVar1 != 0) {
                                          if (unaff_x19 == 0) goto LAB_01481a40;
                                          uVar2 = *(uint *)(unaff_x19 + 0x18);
                                          if (uVar2 != 0) {
                                            *(undefined4 *)(unaff_x19 + 0x20) =
                                                 *(undefined4 *)(lVar5 + 0x20);
                                            lVar7 = *(long *)(unaff_x20 + 0x78);
                                            if (lVar7 == 0) goto LAB_01481a40;
                                            uVar3 = *(uint *)(lVar7 + 0x18);
                                            if (((uVar3 != 1) && (uVar3 != 0)) && (1 < uVar2)) {
                                              *(float *)(unaff_x19 + 0x24) =
                                                   *(float *)(lVar7 + 0x20) +
                                                   *(float *)(lVar7 + 0x24);
                                              if (((1 < uVar1) && (2 < uVar2)) &&
                                                 ((*(undefined4 *)(unaff_x19 + 0x28) =
                                                        *(undefined4 *)(lVar5 + 0x24), 2 < uVar3 &&
                                                  (3 < uVar2)))) {
                                                *(float *)(unaff_x19 + 0x2c) =
                                                     *(float *)(lVar7 + 0x24) +
                                                     *(float *)(lVar7 + 0x28);
                                                if (((2 < uVar1) && (4 < uVar2)) &&
                                                   ((*(undefined4 *)(unaff_x19 + 0x30) =
                                                          *(undefined4 *)(lVar5 + 0x28), 3 < uVar3
                                                    && (5 < uVar2)))) {
                                                  *(float *)(unaff_x19 + 0x34) =
                                                       *(float *)(lVar7 + 0x28) +
                                                       *(float *)(lVar7 + 0x2c);
                                                  if ((((3 < uVar1) && (6 < uVar2)) &&
                                                      (*(undefined4 *)(unaff_x19 + 0x38) =
                                                            *(undefined4 *)(lVar5 + 0x2c), 4 < uVar3
                                                      )) && (7 < uVar2)) {
                                                    *(float *)(unaff_x19 + 0x3c) =
                                                         *(float *)(lVar7 + 0x2c) +
                                                         *(float *)(lVar7 + 0x30);
                                                    if (((4 < uVar1) && (8 < uVar2)) &&
                                                       ((*(undefined4 *)(unaff_x19 + 0x40) =
                                                              *(undefined4 *)(lVar5 + 0x30),
                                                        5 < uVar3 && (9 < uVar2)))) {
                                                      *(float *)(unaff_x19 + 0x44) =
                                                           *(float *)(lVar7 + 0x30) +
                                                           *(float *)(lVar7 + 0x34);
                                                      if (((5 < uVar1) && (10 < uVar2)) &&
                                                         ((*(undefined4 *)(unaff_x19 + 0x48) =
                                                                *(undefined4 *)(lVar5 + 0x34),
                                                          6 < uVar3 && (0xb < uVar2)))) {
                                                        *(float *)(unaff_x19 + 0x4c) =
                                                             *(float *)(lVar7 + 0x34) +
                                                             *(float *)(lVar7 + 0x38);
                                                        if ((((6 < uVar1) && (0xc < uVar2)) &&
                                                            (*(undefined4 *)(unaff_x19 + 0x50) =
                                                                  *(undefined4 *)(lVar5 + 0x38),
                                                            7 < uVar3)) && (0xd < uVar2)) {
                                                          *(float *)(unaff_x19 + 0x54) =
                                                               *(float *)(lVar7 + 0x38) +
                                                               *(float *)(lVar7 + 0x3c);
                                                          if ((7 < uVar1) && (0xe < uVar2)) {
                                                            *(undefined4 *)(unaff_x19 + 0x58) =
                                                                 *(undefined4 *)(lVar5 + 0x3c);
                                                            if (uVar2 != 0xf) {
                                                              *(undefined4 *)(unaff_x19 + 0x5c) =
                                                                   *(undefined4 *)(lVar7 + 0x3c);
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
    FUN_00da5194();
  }
LAB_01481a40:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


