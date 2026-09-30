/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyConsoleLine$$Fill
ENTRY_POINT: 0635fb80
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


void Meta_XR_ImmersiveDebugger_UserInterface_ProxyConsoleLine__Fill(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined1 unaff_w22;
  int iVar18;
  long *plVar19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
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
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb160,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb7d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebd18,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebcd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb888,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb8c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebd78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ef48,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ef50,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f34c8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x8ec) = unaff_w22;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000180 = (long *)0x0;
  plVar19 = (long *)(unaff_x19 + 0x10);
  if ((*plVar19 != 0) && (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) {
    iVar13 = FUN_063619cc();
    if (iVar13 == 0) {
      return;
    }
    if ((((*plVar19 != 0) && (lVar15 = FUN_0631798c(*plVar19,0), lVar15 != 0)) &&
        (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) && (*plVar19 != 0)) {
      plVar2 = *(long **)(lVar15 + 0x10);
      uVar7 = *(undefined8 *)(lVar15 + 0x18);
      lVar15 = FUN_0631798c(*plVar19,0);
      if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x20), lVar15 != 0)) && (*plVar19 != 0)) {
        uVar3 = *(undefined8 *)(lVar15 + 0x10);
        uVar8 = *(undefined8 *)(lVar15 + 0x18);
        lVar15 = FUN_0631798c(*plVar19,0);
        if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x28), lVar15 != 0)) && (*plVar19 != 0))
        {
          uVar4 = *(undefined8 *)(lVar15 + 0x10);
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          lVar15 = FUN_0631798c(*plVar19,0);
          if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x30), lVar15 != 0)) && (*plVar19 != 0)
             ) {
            uVar5 = *(undefined8 *)(lVar15 + 0x10);
            uVar10 = *(undefined8 *)(lVar15 + 0x18);
            lVar15 = FUN_0631798c(*plVar19,0);
            if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x40), lVar15 != 0)) &&
               (*plVar19 != 0)) {
              uVar6 = *(undefined8 *)(lVar15 + 0x10);
              uVar11 = *(undefined8 *)(lVar15 + 0x18);
              lVar15 = FUN_0631798c(*plVar19,0);
              if (((((((lVar15 != 0) && (*(long *)(lVar15 + 0x50) != 0)) &&
                     ((*plVar19 != 0 &&
                      (((((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                          (*(long *)(lVar15 + 0x18) != 0)) && (*plVar19 != 0)) &&
                        ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                         (*(long *)(lVar15 + 0x20) != 0)))) && (*plVar19 != 0)))))) &&
                    ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                     (*(long *)(lVar15 + 0x88) != 0)))) && (*plVar19 != 0)) &&
                  ((((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                     (*(long *)(lVar15 + 0x68) != 0)) && (*plVar19 != 0)) &&
                   (((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                     (*(long *)(lVar15 + 0x70) != 0)) &&
                    ((*plVar19 != 0 &&
                     ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                      (*(long *)(lVar15 + 0x58) != 0)))))))))) &&
                 ((((*plVar19 != 0 &&
                    (((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                      (*(long *)(lVar15 + 0x60) != 0)) && (*plVar19 != 0)))) &&
                   ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                    (*(long *)(lVar15 + 0x78) != 0)))) &&
                  ((((*plVar19 != 0 &&
                     ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                      (*(long *)(lVar15 + 0x80) != 0)))) && (*plVar19 != 0)) &&
                   (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)))))) {
                lVar1 = 0xd0;
                if (*(int *)(lVar15 + 0xe0) != 0) {
                  lVar1 = 0xd8;
                }
                if (((*(long *)(lVar15 + lVar1) != 0) && (*plVar19 != 0)) &&
                   (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) {
                  lVar1 = 0xe8;
                  if (*(int *)(lVar15 + 0xf8) != 0) {
                    lVar1 = 0xf0;
                  }
                  if ((((((*(long *)(lVar15 + lVar1) != 0) && (*plVar19 != 0)) &&
                        ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                         ((*(long *)(lVar15 + 0x38) != 0 && (*plVar19 != 0)))))) &&
                       ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                        ((((*(long *)(lVar15 + 0x40) != 0 && (*plVar19 != 0)) &&
                          (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                         ((*(long *)(lVar15 + 0xa8) != 0 && (*plVar19 != 0)))))))) &&
                      (((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                        ((*(long *)(lVar15 + 0x28) != 0 && (*plVar19 != 0)))) &&
                       ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                        (((((*(long *)(lVar15 + 0x30) != 0 && (*plVar19 != 0)) &&
                           (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                          ((*(long *)(lVar15 + 0xb8) != 0 && (*plVar19 != 0)))) &&
                         (((lVar15 = FUN_063179f8(*plVar19,0), lVar15 != 0 &&
                           ((*(long *)(lVar15 + 0x18) != 0 && (*plVar19 != 0)))) &&
                          (lVar15 = FUN_063178b4(*plVar19,0), lVar15 != 0)))))))))) &&
                     ((((*(long *)(lVar15 + 0x28) != 0 && (*plVar19 != 0)) &&
                       (lVar15 = FUN_063178b4(*plVar19,0), lVar15 != 0)) &&
                      (((*(long *)(lVar15 + 0x30) != 0 && (*plVar19 != 0)) &&
                       (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)))))) {
                    if ((DAT_086de93e & 1) == 0) {
                      FUN_0335b6c8(&DAT_083eb4b0,1);
                      DataMemoryBarrier(2,3);
                      DAT_086de93e = 1;
                    }
                    if (*(long *)(lVar15 + 0x18) == 0) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x30);
                    }
                    in_stack_00000190 = CONCAT44(unaff_s9,unaff_s8);
                    in_stack_00000198 = (ulong)unaff_w20;
                    in_stack_000001a0 = plVar2;
                    in_stack_000001a8 = uVar7;
                    in_stack_000001b0 = uVar3;
                    in_stack_000001b8 = uVar8;
                    in_stack_000001c0 = uVar4;
                    in_stack_000001c8 = uVar9;
                    in_stack_000001d0 = uVar5;
                    in_stack_000001d8 = uVar10;
                    in_stack_000001e0 = uVar6;
                    in_stack_000001e8 = uVar11;
                    auVar20 = FUN_04003bc0(&stack0x00000190,uVar17,0x40,
                                           *(undefined8 *)(unaff_x19 + 0xd0),
                                           *(undefined8 *)(unaff_x19 + 0xd8),DAT_0840ef50);
                    lVar15 = *(long *)(unaff_x19 + 0x20);
                    *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar20;
                    if ((lVar15 == 0) || (*(int *)(unaff_x19 + 0x18) < 1)) {
LAB_06360304:
                      if ((((*plVar19 != 0) && (lVar15 = FUN_0631798c(*plVar19,0), lVar15 != 0)) &&
                          (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) && (*plVar19 != 0)) {
                        uVar7 = *(undefined8 *)(lVar15 + 0x10);
                        uVar3 = *(undefined8 *)(lVar15 + 0x18);
                        lVar15 = FUN_0631798c(*plVar19,0);
                        if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x38), lVar15 != 0)) &&
                           (*plVar19 != 0)) {
                          uVar8 = *(undefined8 *)(lVar15 + 0x10);
                          uVar4 = *(undefined8 *)(lVar15 + 0x18);
                          lVar15 = FUN_06317848(*plVar19,0);
                          if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) &&
                             (*plVar19 != 0)) {
                            uVar9 = *(undefined8 *)(lVar15 + 0x10);
                            uVar5 = *(undefined8 *)(lVar15 + 0x18);
                            lVar15 = FUN_06317848(*plVar19,0);
                            if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x20), lVar15 != 0))
                               && (*plVar19 != 0)) {
                              uVar10 = *(undefined8 *)(lVar15 + 0x10);
                              uVar6 = *(undefined8 *)(lVar15 + 0x18);
                              lVar15 = FUN_06317848(*plVar19,0);
                              if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x88), lVar15 != 0)
                                  ) && (*plVar19 != 0)) {
                                uVar11 = *(undefined8 *)(lVar15 + 0x10);
                                uVar12 = *(undefined8 *)(lVar15 + 0x18);
                                lVar15 = FUN_06317848(*plVar19,0);
                                if (lVar15 != 0) {
                                  lVar1 = 0xd0;
                                  if (*(int *)(lVar15 + 0xe0) != 0) {
                                    lVar1 = 0xd8;
                                  }
                                  if (((*(long *)(lVar15 + lVar1) != 0) && (*plVar19 != 0)) &&
                                     (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) {
                                    lVar1 = 0xe8;
                                    if (*(int *)(lVar15 + 0xf8) != 0) {
                                      lVar1 = 0xf0;
                                    }
                                    if ((((((*(long *)(lVar15 + lVar1) != 0) && (*plVar19 != 0)) &&
                                          (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                                         (((*(long *)(lVar15 + 0x38) != 0 && (*plVar19 != 0)) &&
                                          ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                                           ((*(long *)(lVar15 + 0x40) != 0 && (*plVar19 != 0))))))))
                                        && (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                                       ((((((((*(long *)(lVar15 + 0xa8) != 0 && (*plVar19 != 0)) &&
                                             (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                                            ((*(long *)(lVar15 + 0xb8) != 0 && (*plVar19 != 0)))) &&
                                           (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                                          ((*(long *)(lVar15 + 0x30) != 0 && (*plVar19 != 0)))) &&
                                         ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                                          (((*(long *)(lVar15 + 0x28) != 0 && (*plVar19 != 0)) &&
                                           (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)))))) &&
                                        (((((*(long *)(lVar15 + 0x50) != 0 && (*plVar19 != 0)) &&
                                           (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0)) &&
                                          ((*(long *)(lVar15 + 200) != 0 && (*plVar19 != 0)))) &&
                                         ((lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0 &&
                                          (((*(long *)(lVar15 + 0xb0) != 0 && (*plVar19 != 0)) &&
                                           (lVar15 = FUN_06317848(*plVar19,0), lVar15 != 0))))))))))
                                    {
                                      if ((DAT_086de93e & 1) == 0) {
                                        FUN_0335b6c8(&DAT_083eb4b0,1);
                                        DataMemoryBarrier(2,3);
                                        DAT_086de93e = 1;
                                      }
                                      if (*(long *)(lVar15 + 0x18) == 0) {
                                        uVar17 = 0;
                                      }
                                      else {
                                        uVar17 = *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x30);
                                      }
                                      in_stack_00000198 = (ulong)unaff_w20;
                                      in_stack_000001a0 = (long *)uVar7;
                                      in_stack_000001a8 = uVar3;
                                      in_stack_000001b0 = uVar8;
                                      in_stack_000001b8 = uVar4;
                                      in_stack_000001c0 = uVar9;
                                      in_stack_000001c8 = uVar5;
                                      in_stack_000001d0 = uVar10;
                                      in_stack_000001d8 = uVar6;
                                      in_stack_000001e0 = uVar11;
                                      in_stack_000001e8 = uVar12;
                                      auVar20 = FUN_04003b30(&stack0x00000190,uVar17,0x40,
                                                             *(undefined8 *)(unaff_x19 + 0xd0),
                                                             *(undefined8 *)(unaff_x19 + 0xd8),
                                                             DAT_0840ef48);
                                      *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar20;
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
                    else {
                      iVar13 = 0;
                      do {
                        in_stack_00000198 = 0;
                        in_stack_000001a0 = (long *)0x0;
                        in_stack_00000190 = 0;
                        FUN_05fd5ad4(&stack0x00000190,lVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(DAT_083f34c8 + 0x20) + 0xc0) + 0x138));
                        in_stack_00000178 = in_stack_00000198;
                        in_stack_00000170 = in_stack_00000190;
                        in_stack_00000180 = in_stack_000001a0;
                        while (uVar16 = FUN_05fd5b44(&stack0x00000170,DAT_083e6fc0),
                              plVar2 = in_stack_00000180, (uVar16 & 1) != 0) {
                          if (in_stack_00000180 != (long *)0x0) {
                            for (iVar18 = 0;
                                iVar14 = (**(code **)(*plVar2 + 0x1a8))
                                                   (plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
                                iVar18 < iVar14; iVar18 = iVar18 + 1) {
                              auVar20 = (**(code **)(*plVar2 + 0x1b8))
                                                  (plVar2,unaff_w20,iVar18,
                                                   *(undefined8 *)(unaff_x19 + 0xd0),
                                                   *(undefined8 *)(unaff_x19 + 0xd8),
                                                   *(undefined8 *)(*plVar2 + 0x1c0));
                              *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar20;
                            }
                          }
                        }
                        iVar13 = iVar13 + 1;
                        if (*(int *)(unaff_x19 + 0x18) <= iVar13) goto LAB_06360304;
                        lVar15 = *(long *)(unaff_x19 + 0x20);
                      } while (lVar15 != 0);
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
  FUN_033d1d3c();
}


