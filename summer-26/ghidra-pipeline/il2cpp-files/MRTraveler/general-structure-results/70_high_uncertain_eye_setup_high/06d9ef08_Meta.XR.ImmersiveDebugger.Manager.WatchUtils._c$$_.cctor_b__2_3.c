/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils.<>c$$<.cctor>b__2_3
ENTRY_POINT: 06d9ef08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c__<_cctor>b__2_3(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint in_w9;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar6;
  float fVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x60);
  if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_NumberOfValues;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (1 < uVar1) {
    fVar6 = *(float *)(unaff_x21 + 0x24);
    fVar7 = *(float *)(unaff_x21 + 0x58);
    *(float *)(lVar4 + 0x24) = fVar6 + fVar7;
    if (5 < in_w9) {
      lVar5 = *(long *)(unaff_x20 + 0x70);
      if (lVar5 == 0) goto Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_NumberOfValues;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (1 < uVar2) {
        *(float *)(lVar5 + 0x24) = (fVar6 - fVar7) * *(float *)(param_1 + 0x34);
        if (2 < uVar1) {
          fVar6 = *(float *)(unaff_x21 + 0x28);
          fVar7 = *(float *)(unaff_x21 + 0x54);
          *(float *)(lVar4 + 0x28) = fVar6 + fVar7;
          if ((9 < in_w9) && (2 < uVar2)) {
            *(float *)(lVar5 + 0x28) = (fVar6 - fVar7) * *(float *)(param_1 + 0x44);
            if (3 < uVar1) {
              fVar6 = *(float *)(unaff_x21 + 0x2c);
              fVar7 = *(float *)(unaff_x21 + 0x50);
              *(float *)(lVar4 + 0x2c) = fVar6 + fVar7;
              if ((0xd < in_w9) && (3 < uVar2)) {
                *(float *)(lVar5 + 0x2c) = (fVar6 - fVar7) * *(float *)(param_1 + 0x54);
                if (4 < uVar1) {
                  fVar6 = *(float *)(unaff_x21 + 0x30);
                  fVar7 = *(float *)(unaff_x21 + 0x4c);
                  *(float *)(lVar4 + 0x30) = fVar6 + fVar7;
                  if ((0x11 < in_w9) && (4 < uVar2)) {
                    *(float *)(lVar5 + 0x30) = (fVar6 - fVar7) * *(float *)(param_1 + 100);
                    if (5 < uVar1) {
                      fVar6 = *(float *)(unaff_x21 + 0x34);
                      fVar7 = *(float *)(unaff_x21 + 0x48);
                      *(float *)(lVar4 + 0x34) = fVar6 + fVar7;
                      if ((0x15 < in_w9) && (5 < uVar2)) {
                        *(float *)(lVar5 + 0x34) = (fVar6 - fVar7) * *(float *)(param_1 + 0x74);
                        if (6 < uVar1) {
                          fVar6 = *(float *)(unaff_x21 + 0x38);
                          fVar7 = *(float *)(unaff_x21 + 0x44);
                          *(float *)(lVar4 + 0x38) = fVar6 + fVar7;
                          if ((0x19 < in_w9) && (6 < uVar2)) {
                            *(float *)(lVar5 + 0x38) = (fVar6 - fVar7) * *(float *)(param_1 + 0x84);
                            if (7 < uVar1) {
                              fVar6 = *(float *)(unaff_x21 + 0x3c);
                              fVar7 = *(float *)(unaff_x21 + 0x40);
                              *(float *)(lVar4 + 0x3c) = fVar6 + fVar7;
                              if ((0x1d < in_w9) && (7 < uVar2)) {
                                *(float *)(lVar5 + 0x3c) =
                                     (fVar6 - fVar7) * *(float *)(param_1 + 0x94);
                                FUN_06d9f288();
                                FUN_06d9f288();
                                lVar4 = *(long *)(unaff_x20 + 0x68);
                                if (lVar4 == 0) {
Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_NumberOfValues:
                    /* WARNING: Subroutine does not return */
                                  FUN_03c8fb30();
                                }
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 != 0) {
                                  if (unaff_x19 == 0)
                                  goto 
                                  Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_NumberOfValues
                                  ;
                                  uVar2 = *(uint *)(unaff_x19 + 0x18);
                                  if (uVar2 != 0) {
                                    *(undefined4 *)(unaff_x19 + 0x20) =
                                         *(undefined4 *)(lVar4 + 0x20);
                                    lVar5 = *(long *)(unaff_x20 + 0x78);
                                    if (lVar5 == 0)
                                    goto 
                                    Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_NumberOfValues
                                    ;
                                    uVar3 = *(uint *)(lVar5 + 0x18);
                                    if (((uVar3 != 1) && (uVar3 != 0)) && (1 < uVar2)) {
                                      *(float *)(unaff_x19 + 0x24) =
                                           *(float *)(lVar5 + 0x20) + *(float *)(lVar5 + 0x24);
                                      if ((1 < uVar1) && (2 < uVar2)) {
                                        *(undefined4 *)(unaff_x19 + 0x28) =
                                             *(undefined4 *)(lVar4 + 0x24);
                                        if ((2 < uVar3) && (3 < uVar2)) {
                                          *(float *)(unaff_x19 + 0x2c) =
                                               *(float *)(lVar5 + 0x24) + *(float *)(lVar5 + 0x28);
                                          if ((2 < uVar1) && (4 < uVar2)) {
                                            *(undefined4 *)(unaff_x19 + 0x30) =
                                                 *(undefined4 *)(lVar4 + 0x28);
                                            if ((3 < uVar3) && (5 < uVar2)) {
                                              *(float *)(unaff_x19 + 0x34) =
                                                   *(float *)(lVar5 + 0x28) +
                                                   *(float *)(lVar5 + 0x2c);
                                              if ((3 < uVar1) && (6 < uVar2)) {
                                                *(undefined4 *)(unaff_x19 + 0x38) =
                                                     *(undefined4 *)(lVar4 + 0x2c);
                                                if ((4 < uVar3) && (7 < uVar2)) {
                                                  *(float *)(unaff_x19 + 0x3c) =
                                                       *(float *)(lVar5 + 0x2c) +
                                                       *(float *)(lVar5 + 0x30);
                                                  if ((4 < uVar1) && (8 < uVar2)) {
                                                    *(undefined4 *)(unaff_x19 + 0x40) =
                                                         *(undefined4 *)(lVar4 + 0x30);
                                                    if ((5 < uVar3) && (9 < uVar2)) {
                                                      *(float *)(unaff_x19 + 0x44) =
                                                           *(float *)(lVar5 + 0x30) +
                                                           *(float *)(lVar5 + 0x34);
                                                      if ((5 < uVar1) && (10 < uVar2)) {
                                                        *(undefined4 *)(unaff_x19 + 0x48) =
                                                             *(undefined4 *)(lVar4 + 0x34);
                                                        if ((6 < uVar3) && (0xb < uVar2)) {
                                                          *(float *)(unaff_x19 + 0x4c) =
                                                               *(float *)(lVar5 + 0x34) +
                                                               *(float *)(lVar5 + 0x38);
                                                          if ((6 < uVar1) && (0xc < uVar2)) {
                                                            *(undefined4 *)(unaff_x19 + 0x50) =
                                                                 *(undefined4 *)(lVar4 + 0x38);
                                                            if ((7 < uVar3) && (0xd < uVar2)) {
                                                              *(float *)(unaff_x19 + 0x54) =
                                                                   *(float *)(lVar5 + 0x38) +
                                                                   *(float *)(lVar5 + 0x3c);
                                                              if ((7 < uVar1) && (0xe < uVar2)) {
                                                                *(undefined4 *)(unaff_x19 + 0x58) =
                                                                     *(undefined4 *)(lVar4 + 0x3c);
                                                                if (uVar2 != 0xf) {
                                                                  *(undefined4 *)(unaff_x19 + 0x5c)
                                                                       = *(undefined4 *)
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


