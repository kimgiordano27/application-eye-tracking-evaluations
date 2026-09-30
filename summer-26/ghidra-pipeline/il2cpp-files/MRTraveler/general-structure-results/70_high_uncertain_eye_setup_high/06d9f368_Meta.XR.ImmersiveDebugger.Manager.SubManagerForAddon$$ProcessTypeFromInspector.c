/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon$$ProcessTypeFromInspector
ENTRY_POINT: 06d9f368
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_SubManagerForAddon__ProcessTypeFromInspector
               (long param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(float *)(unaff_x22 + 0x24) = param_2 + param_3;
  lVar5 = *unaff_x23;
  fVar11 = *(float *)(param_1 + 0x20);
  fVar12 = *(float *)(param_1 + 0x24);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *unaff_x23;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((7 < uVar1) && (2 < *(uint *)(unaff_x22 + 0x18))) {
      *(float *)(unaff_x22 + 0x28) = (fVar11 - fVar12) * *(float *)(lVar5 + 0x3c);
      lVar7 = *(long *)(unaff_x20 + 0x80);
      if (lVar7 == 0) goto LAB_06d9f614;
      if (((2 < *(uint *)(lVar7 + 0x18)) && (*(uint *)(lVar7 + 0x18) != 3)) && (0x17 < uVar1)) {
        lVar6 = *(long *)(unaff_x20 + 0x88);
        if (lVar6 == 0) goto LAB_06d9f614;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (3 < uVar2) {
          fVar12 = (*(float *)(lVar7 + 0x28) - *(float *)(lVar7 + 0x2c)) * *(float *)(lVar5 + 0x7c);
          *(float *)(lVar6 + 0x2c) = fVar12;
          fVar11 = DAT_018b0470;
          if (uVar2 != 4) {
            *(float *)(lVar6 + 0x30) = (*(float *)(lVar6 + 0x28) - fVar12) * DAT_018b0470;
            if (unaff_x19 == 0) goto LAB_06d9f614;
            uVar3 = *(uint *)(unaff_x19 + 0x18);
            if (((uVar3 != 0) &&
                (*(float *)(unaff_x19 + 0x20) = *(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x24),
                2 < uVar3)) &&
               ((*(float *)(unaff_x19 + 0x28) =
                      *(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x2c) + *(float *)(lVar6 + 0x30)
                , 4 < uVar3 &&
                (*(float *)(unaff_x19 + 0x30) =
                      (*(float *)(lVar6 + 0x20) - *(float *)(lVar6 + 0x24)) * fVar11, 6 < uVar3))))
            {
              *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(lVar6 + 0x30);
              if ((*(uint *)(unaff_x21 + 0x18) != 0) && (7 < *(uint *)(unaff_x21 + 0x18))) {
                lVar7 = *(long *)(unaff_x20 + 0x90);
                if (lVar7 == 0) goto LAB_06d9f614;
                uVar4 = *(uint *)(lVar7 + 0x18);
                if (uVar4 != 0) {
                  fVar12 = (*(float *)(unaff_x21 + 0x20) - *(float *)(unaff_x21 + 0x3c)) *
                           *(float *)(lVar5 + 0x2c);
                  *(float *)(lVar7 + 0x20) = fVar12;
                  if ((((uVar4 != 1) &&
                       (*(float *)(lVar7 + 0x24) =
                             (*(float *)(unaff_x21 + 0x24) - *(float *)(unaff_x21 + 0x38)) *
                             *(float *)(lVar5 + 0x4c), 2 < uVar4)) &&
                      (*(float *)(lVar7 + 0x28) =
                            (*(float *)(unaff_x21 + 0x28) - *(float *)(unaff_x21 + 0x34)) *
                            *(float *)(lVar5 + 0x6c), 0x1b < uVar1)) && (3 < uVar4)) {
                    fVar8 = (*(float *)(unaff_x21 + 0x2c) - *(float *)(unaff_x21 + 0x30)) *
                            *(float *)(lVar5 + 0x8c);
                    fVar12 = fVar8 + fVar12;
                    *(float *)(lVar7 + 0x2c) = fVar8;
                    *(float *)(lVar6 + 0x20) = fVar12;
                    fVar8 = *(float *)(lVar7 + 0x24) + *(float *)(lVar7 + 0x28);
                    *(float *)(lVar6 + 0x24) = fVar8;
                    fVar9 = (*(float *)(lVar7 + 0x20) - *(float *)(lVar7 + 0x2c)) *
                            *(float *)(lVar5 + 0x3c);
                    *(float *)(lVar6 + 0x28) = fVar9;
                    fVar10 = (*(float *)(lVar7 + 0x24) - *(float *)(lVar7 + 0x28)) *
                             *(float *)(lVar5 + 0x7c);
                    *(float *)(lVar6 + 0x2c) = fVar10;
                    *(float *)(lVar6 + 0x30) = fVar10 + fVar9;
                    if (5 < uVar2) {
                      *(float *)(lVar6 + 0x34) = (fVar9 - fVar10) * fVar11;
                      lVar5 = *(long *)(unaff_x20 + 0x98);
                      if (lVar5 == 0) goto LAB_06d9f614;
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 != 0) {
                        fVar12 = fVar12 + fVar8;
                        *(float *)(lVar5 + 0x20) = fVar12;
                        if (uVar1 != 1) {
                          fVar8 = *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x34);
                          *(float *)(lVar5 + 0x24) = fVar8;
                          if (2 < uVar1) {
                            *(float *)(lVar5 + 0x28) =
                                 (*(float *)(lVar6 + 0x20) - *(float *)(lVar6 + 0x24)) * fVar11;
                            if (uVar1 != 3) {
                              *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar6 + 0x34);
                              *(float *)(unaff_x19 + 0x24) = fVar12 + fVar8;
                              *(float *)(unaff_x19 + 0x2c) =
                                   *(float *)(lVar5 + 0x24) + *(float *)(lVar5 + 0x28);
                              *(float *)(unaff_x19 + 0x34) =
                                   *(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x2c);
                              if (7 < uVar3) {
                                *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(lVar5 + 0x2c);
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
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06d9f614:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


