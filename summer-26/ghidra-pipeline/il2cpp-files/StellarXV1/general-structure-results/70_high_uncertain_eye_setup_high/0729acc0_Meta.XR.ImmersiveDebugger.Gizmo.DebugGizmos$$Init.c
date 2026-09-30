/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$Init
ENTRY_POINT: 0729acc0
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


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__Init(void)

{
  int iVar1;
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
  
  puVar5 = PTR_DAT_092c2230;
  if (unaff_x21 != 0) {
    if ((*(uint *)(unaff_x21 + 0x18) != 0) && (0xf < *(uint *)(unaff_x21 + 0x18))) {
      lVar7 = *(long *)(unaff_x20 + 0x60);
      if (lVar7 == 0) goto LAB_0729b0d8;
      if (*(int *)(lVar7 + 0x18) != 0) {
        fVar9 = *(float *)(unaff_x21 + 0x20);
        fVar10 = *(float *)(unaff_x21 + 0x5c);
        lVar8 = *(long *)(unaff_x20 + 0x70);
        lVar6 = *(long *)PTR_DAT_092c2230;
        iVar1 = *(int *)(lVar6 + 0xe4);
        *(float *)(lVar7 + 0x20) = fVar9 + fVar10;
        if (iVar1 == 0) {
          thunk_FUN_040d65a8();
          lVar6 = *(long *)puVar5;
        }
        lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_0729b0d8;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (1 < uVar2) {
          if (lVar8 == 0) goto LAB_0729b0d8;
          if (*(int *)(lVar8 + 0x18) != 0) {
            uVar3 = *(uint *)(unaff_x21 + 0x18);
            *(float *)(lVar8 + 0x20) = (fVar9 - fVar10) * *(float *)(lVar7 + 0x24);
            if ((1 < uVar3) && (0xe < uVar3)) {
              lVar6 = *(long *)(unaff_x20 + 0x60);
              if (lVar6 == 0) goto LAB_0729b0d8;
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (1 < uVar3) {
                fVar9 = *(float *)(unaff_x21 + 0x24);
                fVar10 = *(float *)(unaff_x21 + 0x58);
                *(float *)(lVar6 + 0x24) = fVar9 + fVar10;
                if (5 < uVar2) {
                  lVar8 = *(long *)(unaff_x20 + 0x70);
                  if (lVar8 == 0) goto LAB_0729b0d8;
                  uVar4 = *(uint *)(lVar8 + 0x18);
                  if (1 < uVar4) {
                    *(float *)(lVar8 + 0x24) = (fVar9 - fVar10) * *(float *)(lVar7 + 0x34);
                    if (uVar3 != 2) {
                      fVar9 = *(float *)(unaff_x21 + 0x28);
                      fVar10 = *(float *)(unaff_x21 + 0x54);
                      *(float *)(lVar6 + 0x28) = fVar9 + fVar10;
                      if ((9 < uVar2) && (uVar4 != 2)) {
                        *(float *)(lVar8 + 0x28) = (fVar9 - fVar10) * *(float *)(lVar7 + 0x44);
                        if (3 < uVar3) {
                          fVar9 = *(float *)(unaff_x21 + 0x2c);
                          fVar10 = *(float *)(unaff_x21 + 0x50);
                          *(float *)(lVar6 + 0x2c) = fVar9 + fVar10;
                          if ((0xd < uVar2) && (3 < uVar4)) {
                            *(float *)(lVar8 + 0x2c) = (fVar9 - fVar10) * *(float *)(lVar7 + 0x54);
                            if (uVar3 != 4) {
                              fVar9 = *(float *)(unaff_x21 + 0x30);
                              fVar10 = *(float *)(unaff_x21 + 0x4c);
                              *(float *)(lVar6 + 0x30) = fVar9 + fVar10;
                              if ((0x11 < uVar2) && (uVar4 != 4)) {
                                *(float *)(lVar8 + 0x30) =
                                     (fVar9 - fVar10) * *(float *)(lVar7 + 100);
                                if (5 < uVar3) {
                                  fVar9 = *(float *)(unaff_x21 + 0x34);
                                  fVar10 = *(float *)(unaff_x21 + 0x48);
                                  *(float *)(lVar6 + 0x34) = fVar9 + fVar10;
                                  if ((0x15 < uVar2) && (5 < uVar4)) {
                                    *(float *)(lVar8 + 0x34) =
                                         (fVar9 - fVar10) * *(float *)(lVar7 + 0x74);
                                    if (uVar3 != 6) {
                                      fVar9 = *(float *)(unaff_x21 + 0x38);
                                      fVar10 = *(float *)(unaff_x21 + 0x44);
                                      *(float *)(lVar6 + 0x38) = fVar9 + fVar10;
                                      if ((0x19 < uVar2) && (uVar4 != 6)) {
                                        *(float *)(lVar8 + 0x38) =
                                             (fVar9 - fVar10) * *(float *)(lVar7 + 0x84);
                                        if (7 < uVar3) {
                                          fVar9 = *(float *)(unaff_x21 + 0x3c);
                                          fVar10 = *(float *)(unaff_x21 + 0x40);
                                          *(float *)(lVar6 + 0x3c) = fVar9 + fVar10;
                                          if ((0x1d < uVar2) && (7 < uVar4)) {
                                            *(float *)(lVar8 + 0x3c) =
                                                 (fVar9 - fVar10) * *(float *)(lVar7 + 0x94);
                                            FUN_0729b0dc();
                                            FUN_0729b0dc();
                                            lVar7 = *(long *)(unaff_x20 + 0x68);
                                            if (lVar7 == 0) goto LAB_0729b0d8;
                                            uVar2 = *(uint *)(lVar7 + 0x18);
                                            if (uVar2 != 0) {
                                              if (unaff_x19 == 0) goto LAB_0729b0d8;
                                              uVar3 = *(uint *)(unaff_x19 + 0x18);
                                              if (uVar3 != 0) {
                                                lVar6 = *(long *)(unaff_x20 + 0x78);
                                                *(undefined4 *)(unaff_x19 + 0x20) =
                                                     *(undefined4 *)(lVar7 + 0x20);
                                                if (lVar6 == 0) goto LAB_0729b0d8;
                                                uVar4 = *(uint *)(lVar6 + 0x18);
                                                if (((uVar4 != 1) && (uVar4 != 0)) && (uVar3 != 1))
                                                {
                                                  *(float *)(unaff_x19 + 0x24) =
                                                       *(float *)(lVar6 + 0x20) +
                                                       *(float *)(lVar6 + 0x24);
                                                  if ((uVar2 != 1) && (2 < uVar3)) {
                                                    *(undefined4 *)(unaff_x19 + 0x28) =
                                                         *(undefined4 *)(lVar7 + 0x24);
                                                    if ((2 < uVar4) && (uVar3 != 3)) {
                                                      *(float *)(unaff_x19 + 0x2c) =
                                                           *(float *)(lVar6 + 0x24) +
                                                           *(float *)(lVar6 + 0x28);
                                                      if ((2 < uVar2) && (4 < uVar3)) {
                                                        *(undefined4 *)(unaff_x19 + 0x30) =
                                                             *(undefined4 *)(lVar7 + 0x28);
                                                        if ((uVar4 != 3) && (uVar3 != 5)) {
                                                          *(float *)(unaff_x19 + 0x34) =
                                                               *(float *)(lVar6 + 0x28) +
                                                               *(float *)(lVar6 + 0x2c);
                                                          if ((uVar2 != 3) && (6 < uVar3)) {
                                                            *(undefined4 *)(unaff_x19 + 0x38) =
                                                                 *(undefined4 *)(lVar7 + 0x2c);
                                                            if ((4 < uVar4) && (uVar3 != 7)) {
                                                              *(float *)(unaff_x19 + 0x3c) =
                                                                   *(float *)(lVar6 + 0x2c) +
                                                                   *(float *)(lVar6 + 0x30);
                                                              if ((4 < uVar2) && (8 < uVar3)) {
                                                                *(undefined4 *)(unaff_x19 + 0x40) =
                                                                     *(undefined4 *)(lVar7 + 0x30);
                                                                if ((uVar4 != 5) && (uVar3 != 9)) {
                                                                  *(float *)(unaff_x19 + 0x44) =
                                                                       *(float *)(lVar6 + 0x30) +
                                                                       *(float *)(lVar6 + 0x34);
                                                                  if ((uVar2 != 5) && (10 < uVar3))
                                                                  {
                                                                    *(undefined4 *)
                                                                     (unaff_x19 + 0x48) =
                                                                         *(undefined4 *)
                                                                          (lVar7 + 0x34);
                                                                    if ((6 < uVar4) &&
                                                                       (uVar3 != 0xb)) {
                                                                      *(float *)(unaff_x19 + 0x4c) =
                                                                           *(float *)(lVar6 + 0x34)
                                                                           + *(float *)(lVar6 + 0x38
                                                                                       );
                                                                      if ((6 < uVar2) &&
                                                                         (0xc < uVar3)) {
                                                                        *(undefined4 *)
                                                                         (unaff_x19 + 0x50) =
                                                                             *(undefined4 *)
                                                                              (lVar7 + 0x38);
                                                                        if ((uVar4 != 7) &&
                                                                           (uVar3 != 0xd)) {
                                                                          *(float *)(unaff_x19 +
                                                                                    0x54) =
                                                                               *(float *)(lVar6 + 
                                                  0x38) + *(float *)(lVar6 + 0x3c);
                                                  if ((uVar2 != 7) && (0xe < uVar3)) {
                                                    *(undefined4 *)(unaff_x19 + 0x58) =
                                                         *(undefined4 *)(lVar7 + 0x3c);
                                                    if (uVar3 != 0xf) {
                                                      *(undefined4 *)(unaff_x19 + 0x5c) =
                                                           *(undefined4 *)(lVar6 + 0x3c);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0729b0d8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


