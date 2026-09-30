/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 069691d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint in_w9;
  long unaff_x19;
  int unaff_w21;
  uint uVar5;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (unaff_w23 < in_w9) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0xc4);
    param_1 = param_1 + unaff_x26 * 0x10;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0xcc);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    lVar4 = *(long *)(unaff_x19 + 0x118);
    if (lVar4 == 0) {
LAB_0696943c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = (uint)unaff_x22;
    if (uVar5 < *(uint *)(lVar4 + 0x18)) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0xc4);
      lVar4 = lVar4 + unaff_x22 * 0x10;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0xcc);
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      lVar4 = *(long *)(unaff_x19 + 0x118);
      if (lVar4 == 0) goto LAB_0696943c;
      if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
        uVar6 = *(undefined8 *)(unaff_x19 + 0x7c);
        lVar4 = lVar4 + unaff_x27 * 0x10;
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0x84);
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        lVar4 = *(long *)(unaff_x19 + 0x118);
        if (lVar4 == 0) goto LAB_0696943c;
        if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
          uVar6 = *(undefined8 *)(unaff_x19 + 0x7c);
          lVar4 = lVar4 + unaff_x28 * 0x10;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0x84);
          *(undefined8 *)(lVar4 + 0x20) = uVar6;
          lVar4 = *(long *)(unaff_x19 + 0x140);
          if (lVar4 == 0) goto LAB_0696943c;
          if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + unaff_x26 * 8 + 0x20) = *(undefined8 *)(unaff_x19 + 0x28);
            lVar4 = *(long *)(unaff_x19 + 0x140);
            if (lVar4 == 0) goto LAB_0696943c;
            if (uVar5 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(unaff_x19 + 0x38);
              lVar4 = *(long *)(unaff_x19 + 0x140);
              if (lVar4 == 0) goto LAB_0696943c;
              if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + unaff_x27 * 8 + 0x20) = *(undefined8 *)(unaff_x19 + 0x30);
                lVar4 = *(long *)(unaff_x19 + 0x140);
                if (lVar4 == 0) goto LAB_0696943c;
                if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + unaff_x28 * 8 + 0x20) = *(undefined8 *)(unaff_x19 + 0x40);
                  lVar4 = *(long *)(unaff_x19 + 0x130);
                  if (lVar4 == 0) goto LAB_0696943c;
                  uVar2 = unaff_w21 * 3;
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar2 < uVar1) {
                    *(uint *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = unaff_w23;
                    if (uVar2 + 2 < uVar1) {
                      *(uint *)(lVar4 + (long)(int)(uVar2 + 2) * 4 + 0x20) = uVar5;
                      if (uVar2 + 1 < uVar1) {
                        *(uint *)(lVar4 + (long)(int)(uVar2 + 1) * 4 + 0x20) = unaff_w24;
                        if (uVar2 + 3 < uVar1) {
                          *(uint *)(lVar4 + (long)(int)(uVar2 + 3) * 4 + 0x20) = unaff_w24;
                          if (uVar2 + 5 < uVar1) {
                            *(uint *)(lVar4 + (long)(int)(uVar2 + 5) * 4 + 0x20) = uVar5;
                            if (uVar2 + 4 < uVar1) {
                              lVar3 = *(long *)(unaff_x19 + 0x100);
                              *(uint *)(lVar4 + (long)(int)(uVar2 + 4) * 4 + 0x20) = unaff_w25;
                              if (lVar3 != 0) {
                                FUN_07c72230(lVar3,*(undefined8 *)(unaff_x19 + 0x120),0);
                                if (*(long *)(unaff_x19 + 0x100) != 0) {
                                  FUN_07c722dc(*(long *)(unaff_x19 + 0x100),
                                               *(undefined8 *)(unaff_x19 + 0x128),0);
                                  if (*(long *)(unaff_x19 + 0x100) != 0) {
                                    FUN_07c72388(*(long *)(unaff_x19 + 0x100),
                                                 *(undefined8 *)(unaff_x19 + 0x138),0);
                                    if (*(long *)(unaff_x19 + 0x100) != 0) {
                                      FUN_07c73ad4(*(long *)(unaff_x19 + 0x100),
                                                   *(undefined8 *)(unaff_x19 + 0x130),0);
                                      if (*(long *)(unaff_x19 + 0x100) != 0) {
                                        FUN_07c72638(*(long *)(unaff_x19 + 0x100),
                                                     *(undefined8 *)(unaff_x19 + 0x118),0);
                                        if (*(long *)(unaff_x19 + 0x100) != 0) {
                                          FUN_07c72434(*(long *)(unaff_x19 + 0x100),
                                                       *(undefined8 *)(unaff_x19 + 0x140),0);
                                          if (*(long *)(unaff_x19 + 0x100) != 0) {
                                            in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x18);
                                            in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x10);
                                            in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x20);
                                            FUN_07c7142c(*(long *)(unaff_x19 + 0x100),
                                                         &stack0x00000010,0);
                                            if (*(long *)(unaff_x19 + 0xe0) != 0) {
                                              FUN_07c6df20(*(long *)(unaff_x19 + 0xe0),
                                                           *(undefined8 *)(unaff_x19 + 0x100),0);
                                              *(int *)(unaff_x19 + 0x148) =
                                                   *(int *)(unaff_x19 + 0x148) + 2;
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_0696943c;
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
  FUN_03a8a9c8();
}


