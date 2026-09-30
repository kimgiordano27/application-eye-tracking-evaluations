/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Root
ENTRY_POINT: 0729ad54
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Root(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint in_w9;
  uint in_w10;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar6;
  float fVar7;
  
  if (0xe < in_w10) {
    lVar4 = *(long *)(unaff_x20 + 0x60);
    if (lVar4 == 0) goto LAB_0729b0d8;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (1 < uVar1) {
      fVar6 = *(float *)(unaff_x21 + 0x24);
      fVar7 = *(float *)(unaff_x21 + 0x58);
      *(float *)(lVar4 + 0x24) = fVar6 + fVar7;
      if (5 < in_w9) {
        lVar5 = *(long *)(unaff_x20 + 0x70);
        if (lVar5 == 0) goto LAB_0729b0d8;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (1 < uVar2) {
          *(float *)(lVar5 + 0x24) = (fVar6 - fVar7) * *(float *)(param_1 + 0x34);
          if (uVar1 != 2) {
            fVar6 = *(float *)(unaff_x21 + 0x28);
            fVar7 = *(float *)(unaff_x21 + 0x54);
            *(float *)(lVar4 + 0x28) = fVar6 + fVar7;
            if ((9 < in_w9) && (uVar2 != 2)) {
              *(float *)(lVar5 + 0x28) = (fVar6 - fVar7) * *(float *)(param_1 + 0x44);
              if (3 < uVar1) {
                fVar6 = *(float *)(unaff_x21 + 0x2c);
                fVar7 = *(float *)(unaff_x21 + 0x50);
                *(float *)(lVar4 + 0x2c) = fVar6 + fVar7;
                if ((0xd < in_w9) && (3 < uVar2)) {
                  *(float *)(lVar5 + 0x2c) = (fVar6 - fVar7) * *(float *)(param_1 + 0x54);
                  if (uVar1 != 4) {
                    fVar6 = *(float *)(unaff_x21 + 0x30);
                    fVar7 = *(float *)(unaff_x21 + 0x4c);
                    *(float *)(lVar4 + 0x30) = fVar6 + fVar7;
                    if ((0x11 < in_w9) && (uVar2 != 4)) {
                      *(float *)(lVar5 + 0x30) = (fVar6 - fVar7) * *(float *)(param_1 + 100);
                      if (5 < uVar1) {
                        fVar6 = *(float *)(unaff_x21 + 0x34);
                        fVar7 = *(float *)(unaff_x21 + 0x48);
                        *(float *)(lVar4 + 0x34) = fVar6 + fVar7;
                        if ((0x15 < in_w9) && (5 < uVar2)) {
                          *(float *)(lVar5 + 0x34) = (fVar6 - fVar7) * *(float *)(param_1 + 0x74);
                          if (uVar1 != 6) {
                            fVar6 = *(float *)(unaff_x21 + 0x38);
                            fVar7 = *(float *)(unaff_x21 + 0x44);
                            *(float *)(lVar4 + 0x38) = fVar6 + fVar7;
                            if ((0x19 < in_w9) && (uVar2 != 6)) {
                              *(float *)(lVar5 + 0x38) =
                                   (fVar6 - fVar7) * *(float *)(param_1 + 0x84);
                              if (7 < uVar1) {
                                fVar6 = *(float *)(unaff_x21 + 0x3c);
                                fVar7 = *(float *)(unaff_x21 + 0x40);
                                *(float *)(lVar4 + 0x3c) = fVar6 + fVar7;
                                if ((0x1d < in_w9) && (7 < uVar2)) {
                                  *(float *)(lVar5 + 0x3c) =
                                       (fVar6 - fVar7) * *(float *)(param_1 + 0x94);
                                  FUN_0729b0dc();
                                  FUN_0729b0dc();
                                  lVar4 = *(long *)(unaff_x20 + 0x68);
                                  if (lVar4 == 0) {
LAB_0729b0d8:
                    /* WARNING: Subroutine does not return */
                                    FUN_04077830();
                                  }
                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                  if (uVar1 != 0) {
                                    if (unaff_x19 == 0) goto LAB_0729b0d8;
                                    uVar2 = *(uint *)(unaff_x19 + 0x18);
                                    if (uVar2 != 0) {
                                      lVar5 = *(long *)(unaff_x20 + 0x78);
                                      *(undefined4 *)(unaff_x19 + 0x20) =
                                           *(undefined4 *)(lVar4 + 0x20);
                                      if (lVar5 == 0) goto LAB_0729b0d8;
                                      uVar3 = *(uint *)(lVar5 + 0x18);
                                      if (((uVar3 != 1) && (uVar3 != 0)) && (uVar2 != 1)) {
                                        *(float *)(unaff_x19 + 0x24) =
                                             *(float *)(lVar5 + 0x20) + *(float *)(lVar5 + 0x24);
                                        if ((uVar1 != 1) && (2 < uVar2)) {
                                          *(undefined4 *)(unaff_x19 + 0x28) =
                                               *(undefined4 *)(lVar4 + 0x24);
                                          if ((2 < uVar3) && (uVar2 != 3)) {
                                            *(float *)(unaff_x19 + 0x2c) =
                                                 *(float *)(lVar5 + 0x24) + *(float *)(lVar5 + 0x28)
                                            ;
                                            if ((2 < uVar1) && (4 < uVar2)) {
                                              *(undefined4 *)(unaff_x19 + 0x30) =
                                                   *(undefined4 *)(lVar4 + 0x28);
                                              if ((uVar3 != 3) && (uVar2 != 5)) {
                                                *(float *)(unaff_x19 + 0x34) =
                                                     *(float *)(lVar5 + 0x28) +
                                                     *(float *)(lVar5 + 0x2c);
                                                if ((uVar1 != 3) && (6 < uVar2)) {
                                                  *(undefined4 *)(unaff_x19 + 0x38) =
                                                       *(undefined4 *)(lVar4 + 0x2c);
                                                  if ((4 < uVar3) && (uVar2 != 7)) {
                                                    *(float *)(unaff_x19 + 0x3c) =
                                                         *(float *)(lVar5 + 0x2c) +
                                                         *(float *)(lVar5 + 0x30);
                                                    if ((4 < uVar1) && (8 < uVar2)) {
                                                      *(undefined4 *)(unaff_x19 + 0x40) =
                                                           *(undefined4 *)(lVar4 + 0x30);
                                                      if ((uVar3 != 5) && (uVar2 != 9)) {
                                                        *(float *)(unaff_x19 + 0x44) =
                                                             *(float *)(lVar5 + 0x30) +
                                                             *(float *)(lVar5 + 0x34);
                                                        if ((uVar1 != 5) && (10 < uVar2)) {
                                                          *(undefined4 *)(unaff_x19 + 0x48) =
                                                               *(undefined4 *)(lVar4 + 0x34);
                                                          if ((6 < uVar3) && (uVar2 != 0xb)) {
                                                            *(float *)(unaff_x19 + 0x4c) =
                                                                 *(float *)(lVar5 + 0x34) +
                                                                 *(float *)(lVar5 + 0x38);
                                                            if ((6 < uVar1) && (0xc < uVar2)) {
                                                              *(undefined4 *)(unaff_x19 + 0x50) =
                                                                   *(undefined4 *)(lVar4 + 0x38);
                                                              if ((uVar3 != 7) && (uVar2 != 0xd)) {
                                                                *(float *)(unaff_x19 + 0x54) =
                                                                     *(float *)(lVar5 + 0x38) +
                                                                     *(float *)(lVar5 + 0x3c);
                                                                if ((uVar1 != 7) && (0xe < uVar2)) {
                                                                  *(undefined4 *)(unaff_x19 + 0x58)
                                                                       = *(undefined4 *)
                                                                          (lVar4 + 0x3c);
                                                                  if (uVar2 != 0xf) {
                                                                    *(undefined4 *)
                                                                     (unaff_x19 + 0x5c) =
                                                                         *(undefined4 *)
                                                                          (lVar5 + 0x3c);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


