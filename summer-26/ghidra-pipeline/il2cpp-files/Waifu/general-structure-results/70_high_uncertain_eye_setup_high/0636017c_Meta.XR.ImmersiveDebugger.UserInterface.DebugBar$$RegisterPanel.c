/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$RegisterPanel
ENTRY_POINT: 0636017c
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


void Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__RegisterPanel(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  long unaff_x19;
  uint unaff_w20;
  int iVar17;
  long *unaff_x23;
  int iVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000190;
  ulong in_stack_00000198;
  long *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  auVar19 = FUN_04003bc0();
  lVar16 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar19;
  if ((lVar16 == 0) || (*(int *)(unaff_x19 + 0x18) < 1)) {
LAB_06360304:
    if ((((*unaff_x23 != 0) && (lVar16 = FUN_0631798c(*unaff_x23,0), lVar16 != 0)) &&
        (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) && (*unaff_x23 != 0)) {
      uVar2 = *(undefined8 *)(lVar16 + 0x10);
      uVar7 = *(undefined8 *)(lVar16 + 0x18);
      lVar16 = FUN_0631798c(*unaff_x23,0);
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x38), lVar16 != 0)) && (*unaff_x23 != 0))
      {
        uVar3 = *(undefined8 *)(lVar16 + 0x10);
        uVar8 = *(undefined8 *)(lVar16 + 0x18);
        lVar16 = FUN_06317848(*unaff_x23,0);
        if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) && (*unaff_x23 != 0)
           ) {
          uVar4 = *(undefined8 *)(lVar16 + 0x10);
          uVar9 = *(undefined8 *)(lVar16 + 0x18);
          lVar16 = FUN_06317848(*unaff_x23,0);
          if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) &&
             (*unaff_x23 != 0)) {
            uVar5 = *(undefined8 *)(lVar16 + 0x10);
            uVar10 = *(undefined8 *)(lVar16 + 0x18);
            lVar16 = FUN_06317848(*unaff_x23,0);
            if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x88), lVar16 != 0)) &&
               (*unaff_x23 != 0)) {
              uVar6 = *(undefined8 *)(lVar16 + 0x10);
              uVar11 = *(undefined8 *)(lVar16 + 0x18);
              lVar16 = FUN_06317848(*unaff_x23,0);
              if (lVar16 != 0) {
                lVar1 = 0xd0;
                if (*(int *)(lVar16 + 0xe0) != 0) {
                  lVar1 = 0xd8;
                }
                if ((*(long *)(lVar16 + lVar1) != 0) && (*unaff_x23 != 0)) {
                  lVar16 = FUN_06317848(*unaff_x23,0);
                  if (lVar16 != 0) {
                    lVar1 = 0xe8;
                    if (*(int *)(lVar16 + 0xf8) != 0) {
                      lVar1 = 0xf0;
                    }
                    if ((*(long *)(lVar16 + lVar1) != 0) && (*unaff_x23 != 0)) {
                      lVar16 = FUN_06317848(*unaff_x23,0);
                      if ((lVar16 != 0) && ((*(long *)(lVar16 + 0x38) != 0 && (*unaff_x23 != 0)))) {
                        lVar16 = FUN_06317848(*unaff_x23,0);
                        if ((lVar16 != 0) && ((*(long *)(lVar16 + 0x40) != 0 && (*unaff_x23 != 0))))
                        {
                          lVar16 = FUN_06317848(*unaff_x23,0);
                          if ((lVar16 != 0) &&
                             ((*(long *)(lVar16 + 0xa8) != 0 && (*unaff_x23 != 0)))) {
                            lVar16 = FUN_06317848(*unaff_x23,0);
                            if ((lVar16 != 0) &&
                               ((*(long *)(lVar16 + 0xb8) != 0 && (*unaff_x23 != 0)))) {
                              lVar16 = FUN_06317848(*unaff_x23,0);
                              if ((lVar16 != 0) &&
                                 ((*(long *)(lVar16 + 0x30) != 0 && (*unaff_x23 != 0)))) {
                                lVar16 = FUN_06317848(*unaff_x23,0);
                                if ((lVar16 != 0) &&
                                   ((*(long *)(lVar16 + 0x28) != 0 && (*unaff_x23 != 0)))) {
                                  lVar16 = FUN_06317848(*unaff_x23,0);
                                  if ((lVar16 != 0) &&
                                     ((*(long *)(lVar16 + 0x50) != 0 && (*unaff_x23 != 0)))) {
                                    lVar16 = FUN_06317848(*unaff_x23,0);
                                    if ((lVar16 != 0) &&
                                       ((*(long *)(lVar16 + 200) != 0 && (*unaff_x23 != 0)))) {
                                      lVar16 = FUN_06317848(*unaff_x23,0);
                                      if (lVar16 != 0) {
                                        if (*(long *)(lVar16 + 0xb0) != 0) {
                                          if (*unaff_x23 != 0) {
                                            lVar16 = FUN_06317848(*unaff_x23,0);
                                            if (lVar16 != 0) {
                                              if ((DAT_086de93e & 1) == 0) {
                                                FUN_0335b6c8(&DAT_083eb4b0,1);
                                                DataMemoryBarrier(2,3);
                                                DAT_086de93e = 1;
                                              }
                                              if (*(long *)(lVar16 + 0x18) == 0) {
                                                uVar15 = 0;
                                              }
                                              else {
                                                uVar15 = *(undefined4 *)
                                                          (*(long *)(lVar16 + 0x18) + 0x30);
                                              }
                                              in_stack_00000198 = (ulong)unaff_w20;
                                              in_stack_000001a0 = (long *)uVar2;
                                              in_stack_000001a8 = uVar7;
                                              in_stack_000001b0 = uVar3;
                                              in_stack_000001b8 = uVar8;
                                              in_stack_000001c0 = uVar4;
                                              in_stack_000001c8 = uVar9;
                                              in_stack_000001d0 = uVar5;
                                              in_stack_000001d8 = uVar10;
                                              in_stack_000001e0 = uVar6;
                                              in_stack_000001e8 = uVar11;
                                              auVar19 = FUN_04003b30(&stack0x00000190,uVar15,0x40,
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0xd0),
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0xd8),
                                                                     DAT_0840ef48);
                                              *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar19;
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
    iVar18 = 0;
    do {
      in_stack_00000198 = 0;
      in_stack_000001a0 = (long *)0x0;
      in_stack_00000190 = 0;
      FUN_05fd5ad4(&stack0x00000190,lVar16,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f34c8 + 0x20) + 0xc0) + 0x138));
      in_stack_00000178 = in_stack_00000198;
      in_stack_00000170 = in_stack_00000190;
      in_stack_00000180 = in_stack_000001a0;
      while (uVar14 = FUN_05fd5b44(&stack0x00000170,DAT_083e6fc0), plVar12 = in_stack_00000180,
            (uVar14 & 1) != 0) {
        if (in_stack_00000180 != (long *)0x0) {
          iVar17 = 0;
          while( true ) {
            iVar13 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            if (iVar13 <= iVar17) break;
            auVar19 = (**(code **)(*plVar12 + 0x1b8))
                                (plVar12,unaff_w20,iVar17,*(undefined8 *)(unaff_x19 + 0xd0),
                                 *(undefined8 *)(unaff_x19 + 0xd8),*(undefined8 *)(*plVar12 + 0x1c0)
                                );
            iVar17 = iVar17 + 1;
            *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar19;
          }
        }
      }
      iVar18 = iVar18 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= iVar18) goto LAB_06360304;
      lVar16 = *(long *)(unaff_x19 + 0x20);
    } while (lVar16 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


