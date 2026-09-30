/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvasPanel$$Setup
ENTRY_POINT: 0635ff7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvasPanel__Setup(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long unaff_x19;
  uint unaff_w20;
  int iVar7;
  long *unaff_x23;
  int iVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000190;
  ulong in_stack_00000198;
  
  if (*unaff_x23 != 0) {
    lVar4 = FUN_06317848(*unaff_x23,0);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) && (*unaff_x23 != 0)) {
      lVar4 = FUN_06317848(*unaff_x23,0);
      if (((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) && (*unaff_x23 != 0)) {
        lVar4 = FUN_063179f8(*unaff_x23,0);
        if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) && (*unaff_x23 != 0)) {
          lVar4 = FUN_063178b4(*unaff_x23,0);
          if (((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) && (*unaff_x23 != 0)) {
            lVar4 = FUN_063178b4(*unaff_x23,0);
            if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
              if (*unaff_x23 != 0) {
                lVar4 = FUN_06317848(*unaff_x23,0);
                if (lVar4 != 0) {
                  if ((DAT_086de93e & 1) == 0) {
                    FUN_0335b6c8(&DAT_083eb4b0,1);
                    DataMemoryBarrier(2,3);
                    DAT_086de93e = 1;
                  }
                  if (*(long *)(lVar4 + 0x18) == 0) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x30);
                  }
                  in_stack_00000190 = CONCAT44(unaff_s9,unaff_s8);
                  in_stack_00000198 = (ulong)unaff_w20;
                  auVar9 = FUN_04003bc0(&stack0x00000190,uVar6,0x40,
                                        *(undefined8 *)(unaff_x19 + 0xd0),
                                        *(undefined8 *)(unaff_x19 + 0xd8),DAT_0840ef50);
                  lVar4 = *(long *)(unaff_x19 + 0x20);
                  *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar9;
                  if ((lVar4 == 0) || (*(int *)(unaff_x19 + 0x18) < 1)) {
LAB_06360304:
                    if ((((*unaff_x23 != 0) && (lVar4 = FUN_0631798c(*unaff_x23,0), lVar4 != 0)) &&
                        (*(long *)(lVar4 + 0x18) != 0)) && (*unaff_x23 != 0)) {
                      lVar4 = FUN_0631798c(*unaff_x23,0);
                      if (((lVar4 != 0) && (*(long *)(lVar4 + 0x38) != 0)) && (*unaff_x23 != 0)) {
                        lVar4 = FUN_06317848(*unaff_x23,0);
                        if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) && (*unaff_x23 != 0)) {
                          lVar4 = FUN_06317848(*unaff_x23,0);
                          if (((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) && (*unaff_x23 != 0))
                          {
                            lVar4 = FUN_06317848(*unaff_x23,0);
                            if (((lVar4 != 0) && (*(long *)(lVar4 + 0x88) != 0)) &&
                               (*unaff_x23 != 0)) {
                              lVar4 = FUN_06317848(*unaff_x23,0);
                              if (lVar4 != 0) {
                                lVar1 = 0xd0;
                                if (*(int *)(lVar4 + 0xe0) != 0) {
                                  lVar1 = 0xd8;
                                }
                                if ((*(long *)(lVar4 + lVar1) != 0) && (*unaff_x23 != 0)) {
                                  lVar4 = FUN_06317848(*unaff_x23,0);
                                  if (lVar4 != 0) {
                                    lVar1 = 0xe8;
                                    if (*(int *)(lVar4 + 0xf8) != 0) {
                                      lVar1 = 0xf0;
                                    }
                                    if ((*(long *)(lVar4 + lVar1) != 0) && (*unaff_x23 != 0)) {
                                      lVar4 = FUN_06317848(*unaff_x23,0);
                                      if ((lVar4 != 0) &&
                                         ((*(long *)(lVar4 + 0x38) != 0 && (*unaff_x23 != 0)))) {
                                        lVar4 = FUN_06317848(*unaff_x23,0);
                                        if ((lVar4 != 0) &&
                                           ((*(long *)(lVar4 + 0x40) != 0 && (*unaff_x23 != 0)))) {
                                          lVar4 = FUN_06317848(*unaff_x23,0);
                                          if ((lVar4 != 0) &&
                                             ((*(long *)(lVar4 + 0xa8) != 0 && (*unaff_x23 != 0))))
                                          {
                                            lVar4 = FUN_06317848(*unaff_x23,0);
                                            if ((lVar4 != 0) &&
                                               ((*(long *)(lVar4 + 0xb8) != 0 && (*unaff_x23 != 0)))
                                               ) {
                                              lVar4 = FUN_06317848(*unaff_x23,0);
                                              if ((lVar4 != 0) &&
                                                 ((*(long *)(lVar4 + 0x30) != 0 && (*unaff_x23 != 0)
                                                  ))) {
                                                lVar4 = FUN_06317848(*unaff_x23,0);
                                                if ((lVar4 != 0) &&
                                                   ((*(long *)(lVar4 + 0x28) != 0 &&
                                                    (*unaff_x23 != 0)))) {
                                                  lVar4 = FUN_06317848(*unaff_x23,0);
                                                  if ((lVar4 != 0) &&
                                                     ((*(long *)(lVar4 + 0x50) != 0 &&
                                                      (*unaff_x23 != 0)))) {
                                                    lVar4 = FUN_06317848(*unaff_x23,0);
                                                    if ((lVar4 != 0) &&
                                                       ((*(long *)(lVar4 + 200) != 0 &&
                                                        (*unaff_x23 != 0)))) {
                                                      lVar4 = FUN_06317848(*unaff_x23,0);
                                                      if (lVar4 != 0) {
                                                        if (*(long *)(lVar4 + 0xb0) != 0) {
                                                          if (*unaff_x23 != 0) {
                                                            lVar4 = FUN_06317848(*unaff_x23,0);
                                                            if (lVar4 != 0) {
                                                              if ((DAT_086de93e & 1) == 0) {
                                                                FUN_0335b6c8(&DAT_083eb4b0,1);
                                                                DataMemoryBarrier(2,3);
                                                                DAT_086de93e = 1;
                                                              }
                                                              if (*(long *)(lVar4 + 0x18) == 0) {
                                                                uVar6 = 0;
                                                              }
                                                              else {
                                                                uVar6 = *(undefined4 *)
                                                                         (*(long *)(lVar4 + 0x18) +
                                                                         0x30);
                                                              }
                                                              in_stack_00000198 = (ulong)unaff_w20;
                                                              auVar9 = FUN_04003b30(&stack0x00000190
                                                                                    ,uVar6,0x40,
                                                                                    *(undefined8 *)
                                                                                     (unaff_x19 +
                                                                                     0xd0),*(
                                                  undefined8 *)(unaff_x19 + 0xd8),DAT_0840ef48);
                                                  *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar9;
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
                  else {
                    iVar8 = 0;
                    do {
                      in_stack_00000198 = 0;
                      in_stack_00000190 = 0;
                      FUN_05fd5ad4(&stack0x00000190,lVar4,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(DAT_083f34c8 + 0x20) + 0xc0) + 0x138));
                      in_stack_00000178 = in_stack_00000198;
                      in_stack_00000170 = in_stack_00000190;
                      in_stack_00000180 = (long *)0x0;
                      while (uVar5 = FUN_05fd5b44(&stack0x00000170,DAT_083e6fc0),
                            plVar2 = in_stack_00000180, (uVar5 & 1) != 0) {
                        if (in_stack_00000180 != (long *)0x0) {
                          iVar7 = 0;
                          while( true ) {
                            iVar3 = (**(code **)(*plVar2 + 0x1a8))
                                              (plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
                            if (iVar3 <= iVar7) break;
                            auVar9 = (**(code **)(*plVar2 + 0x1b8))
                                               (plVar2,unaff_w20,iVar7,
                                                *(undefined8 *)(unaff_x19 + 0xd0),
                                                *(undefined8 *)(unaff_x19 + 0xd8),
                                                *(undefined8 *)(*plVar2 + 0x1c0));
                            iVar7 = iVar7 + 1;
                            *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar9;
                          }
                        }
                      }
                      iVar8 = iVar8 + 1;
                      if (*(int *)(unaff_x19 + 0x18) <= iVar8) goto LAB_06360304;
                      lVar4 = *(long *)(unaff_x19 + 0x20);
                    } while (lVar4 != 0);
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
  FUN_033d1d3c();
}


