/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$.ctor
ENTRY_POINT: 0729b150
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor(long param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool in_ZR;
  long lVar7;
  uint in_w9;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (!in_ZR) {
    fVar10 = *(float *)(unaff_x21 + 0x2c) + *(float *)(unaff_x21 + 0x30);
    *(float *)(param_1 + 0x24) = fVar10;
    if ((2 < in_w9) &&
       (*(float *)(param_1 + 0x28) = *(float *)(unaff_x21 + 0x24) + *(float *)(unaff_x21 + 0x38),
       in_w9 != 3)) {
      lVar9 = *(long *)(unaff_x20 + 0x88);
      *(float *)(param_1 + 0x2c) = *(float *)(unaff_x21 + 0x28) + *(float *)(unaff_x21 + 0x34);
      if (lVar9 == 0) goto LAB_0729b468;
      if (*(int *)(lVar9 + 0x18) != 0) {
        *(float *)(lVar9 + 0x20) = param_2 + fVar10;
        puVar6 = PTR_DAT_092c2230;
        if (*(int *)(lVar9 + 0x18) != 1) {
          lVar7 = *(long *)PTR_DAT_092c2230;
          iVar1 = *(int *)(lVar7 + 0xe4);
          *(float *)(lVar9 + 0x24) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c);
          fVar10 = *(float *)(param_1 + 0x20);
          fVar14 = *(float *)(param_1 + 0x24);
          if (iVar1 == 0) {
            thunk_FUN_040d65a8();
            lVar7 = *(long *)puVar6;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) {
LAB_0729b468:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          if ((7 < uVar2) && (2 < *(uint *)(lVar9 + 0x18))) {
            lVar8 = *(long *)(unaff_x20 + 0x80);
            *(float *)(lVar9 + 0x28) = (fVar10 - fVar14) * *(float *)(lVar7 + 0x3c);
            if (lVar8 == 0) goto LAB_0729b468;
            if (((2 < *(uint *)(lVar8 + 0x18)) && (*(uint *)(lVar8 + 0x18) != 3)) && (0x17 < uVar2))
            {
              lVar9 = *(long *)(unaff_x20 + 0x88);
              if (lVar9 == 0) goto LAB_0729b468;
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (3 < uVar3) {
                fVar14 = (*(float *)(lVar8 + 0x28) - *(float *)(lVar8 + 0x2c)) *
                         *(float *)(lVar7 + 0x7c);
                *(float *)(lVar9 + 0x2c) = fVar14;
                fVar10 = DAT_01aebb7c;
                if (uVar3 != 4) {
                  *(float *)(lVar9 + 0x30) = (*(float *)(lVar9 + 0x28) - fVar14) * DAT_01aebb7c;
                  if (unaff_x19 == 0) goto LAB_0729b468;
                  uVar4 = *(uint *)(unaff_x19 + 0x18);
                  if (((uVar4 != 0) &&
                      (*(float *)(unaff_x19 + 0x20) =
                            *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x24), 2 < uVar4)) &&
                     ((*(float *)(unaff_x19 + 0x28) =
                            *(float *)(lVar9 + 0x28) + *(float *)(lVar9 + 0x2c) +
                            *(float *)(lVar9 + 0x30), 4 < uVar4 &&
                      (*(float *)(unaff_x19 + 0x30) =
                            (*(float *)(lVar9 + 0x20) - *(float *)(lVar9 + 0x24)) * fVar10,
                      6 < uVar4)))) {
                    uVar5 = *(uint *)(unaff_x21 + 0x18);
                    *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(lVar9 + 0x30);
                    if ((uVar5 != 0) && (7 < uVar5)) {
                      lVar8 = *(long *)(unaff_x20 + 0x90);
                      if (lVar8 == 0) goto LAB_0729b468;
                      uVar5 = *(uint *)(lVar8 + 0x18);
                      if (uVar5 != 0) {
                        fVar14 = *(float *)(lVar7 + 0x2c) *
                                 (*(float *)(unaff_x21 + 0x20) - *(float *)(unaff_x21 + 0x3c));
                        *(float *)(lVar8 + 0x20) = fVar14;
                        if ((((uVar5 != 1) &&
                             (*(float *)(lVar8 + 0x24) =
                                   (*(float *)(unaff_x21 + 0x24) - *(float *)(unaff_x21 + 0x38)) *
                                   *(float *)(lVar7 + 0x4c), 2 < uVar5)) &&
                            (*(float *)(lVar8 + 0x28) =
                                  (*(float *)(unaff_x21 + 0x28) - *(float *)(unaff_x21 + 0x34)) *
                                  *(float *)(lVar7 + 0x6c), 0x1b < uVar2)) && (uVar5 != 3)) {
                          fVar11 = (*(float *)(unaff_x21 + 0x2c) - *(float *)(unaff_x21 + 0x30)) *
                                   *(float *)(lVar7 + 0x8c);
                          fVar14 = fVar14 + fVar11;
                          *(float *)(lVar8 + 0x2c) = fVar11;
                          *(float *)(lVar9 + 0x20) = fVar14;
                          fVar11 = *(float *)(lVar8 + 0x24) + *(float *)(lVar8 + 0x28);
                          *(float *)(lVar9 + 0x24) = fVar11;
                          fVar12 = (*(float *)(lVar8 + 0x20) - *(float *)(lVar8 + 0x2c)) *
                                   *(float *)(lVar7 + 0x3c);
                          *(float *)(lVar9 + 0x28) = fVar12;
                          fVar13 = (*(float *)(lVar8 + 0x24) - *(float *)(lVar8 + 0x28)) *
                                   *(float *)(lVar7 + 0x7c);
                          *(float *)(lVar9 + 0x2c) = fVar13;
                          *(float *)(lVar9 + 0x30) = fVar12 + fVar13;
                          if (5 < uVar3) {
                            lVar7 = *(long *)(unaff_x20 + 0x98);
                            *(float *)(lVar9 + 0x34) = (fVar12 - fVar13) * fVar10;
                            if (lVar7 == 0) goto LAB_0729b468;
                            uVar2 = *(uint *)(lVar7 + 0x18);
                            if (uVar2 != 0) {
                              fVar14 = fVar14 + fVar11;
                              *(float *)(lVar7 + 0x20) = fVar14;
                              if (uVar2 != 1) {
                                fVar11 = *(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x34);
                                *(float *)(lVar7 + 0x24) = fVar11;
                                if (2 < uVar2) {
                                  *(float *)(lVar7 + 0x28) =
                                       (*(float *)(lVar9 + 0x20) - *(float *)(lVar9 + 0x24)) *
                                       fVar10;
                                  if (uVar2 != 3) {
                                    *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar9 + 0x34);
                                    *(float *)(unaff_x19 + 0x24) = fVar14 + fVar11;
                                    *(float *)(unaff_x19 + 0x2c) =
                                         *(float *)(lVar7 + 0x24) + *(float *)(lVar7 + 0x28);
                                    *(float *)(unaff_x19 + 0x34) =
                                         *(float *)(lVar7 + 0x28) + *(float *)(lVar7 + 0x2c);
                                    if (uVar4 != 7) {
                                      *(undefined4 *)(unaff_x19 + 0x3c) =
                                           *(undefined4 *)(lVar7 + 0x2c);
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
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


