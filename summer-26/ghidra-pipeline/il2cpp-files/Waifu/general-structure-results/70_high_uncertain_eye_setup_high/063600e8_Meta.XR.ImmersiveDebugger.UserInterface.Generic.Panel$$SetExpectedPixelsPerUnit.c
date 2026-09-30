/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetExpectedPixelsPerUnit
ENTRY_POINT: 063600e8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetExpectedPixelsPerUnit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  int iVar9;
  long *unaff_x23;
  int iVar10;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  long *in_stack_00000180;
  undefined8 uStack0000000000000190;
  ulong uStack0000000000000198;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  uStack0000000000000190 = CONCAT44(unaff_s9,unaff_s8);
  uStack0000000000000198 = (ulong)unaff_w20;
  auVar11 = FUN_04003bc0(&stack0x00000190,param_2,0x40,param_4,param_5,DAT_0840ef50);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar11;
  if ((lVar8 == 0) || (*(int *)(unaff_x19 + 0x18) < 1)) {
LAB_06360304:
    if ((((*unaff_x23 != 0) && (lVar8 = FUN_0631798c(*unaff_x23,0), lVar8 != 0)) &&
        (*(long *)(lVar8 + 0x18) != 0)) && (*unaff_x23 != 0)) {
      lVar8 = FUN_0631798c(*unaff_x23,0);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) && (*unaff_x23 != 0)) {
        lVar8 = FUN_06317848(*unaff_x23,0);
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) && (*unaff_x23 != 0)) {
          lVar8 = FUN_06317848(*unaff_x23,0);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) && (*unaff_x23 != 0)) {
            lVar8 = FUN_06317848(*unaff_x23,0);
            if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x88), lVar8 != 0)) && (*unaff_x23 != 0)
               ) {
              uVar2 = *(undefined8 *)(lVar8 + 0x10);
              uVar3 = *(undefined8 *)(lVar8 + 0x18);
              lVar8 = FUN_06317848(*unaff_x23,0);
              if (lVar8 != 0) {
                lVar1 = 0xd0;
                if (*(int *)(lVar8 + 0xe0) != 0) {
                  lVar1 = 0xd8;
                }
                if ((*(long *)(lVar8 + lVar1) != 0) && (*unaff_x23 != 0)) {
                  lVar8 = FUN_06317848(*unaff_x23,0);
                  if (lVar8 != 0) {
                    lVar1 = 0xe8;
                    if (*(int *)(lVar8 + 0xf8) != 0) {
                      lVar1 = 0xf0;
                    }
                    if ((*(long *)(lVar8 + lVar1) != 0) && (*unaff_x23 != 0)) {
                      lVar8 = FUN_06317848(*unaff_x23,0);
                      if ((lVar8 != 0) && ((*(long *)(lVar8 + 0x38) != 0 && (*unaff_x23 != 0)))) {
                        lVar8 = FUN_06317848(*unaff_x23,0);
                        if ((lVar8 != 0) && ((*(long *)(lVar8 + 0x40) != 0 && (*unaff_x23 != 0)))) {
                          lVar8 = FUN_06317848(*unaff_x23,0);
                          if ((lVar8 != 0) && ((*(long *)(lVar8 + 0xa8) != 0 && (*unaff_x23 != 0))))
                          {
                            lVar8 = FUN_06317848(*unaff_x23,0);
                            if ((lVar8 != 0) &&
                               ((*(long *)(lVar8 + 0xb8) != 0 && (*unaff_x23 != 0)))) {
                              lVar8 = FUN_06317848(*unaff_x23,0);
                              if ((lVar8 != 0) &&
                                 ((*(long *)(lVar8 + 0x30) != 0 && (*unaff_x23 != 0)))) {
                                lVar8 = FUN_06317848(*unaff_x23,0);
                                if ((lVar8 != 0) &&
                                   ((*(long *)(lVar8 + 0x28) != 0 && (*unaff_x23 != 0)))) {
                                  lVar8 = FUN_06317848(*unaff_x23,0);
                                  if ((lVar8 != 0) &&
                                     ((*(long *)(lVar8 + 0x50) != 0 && (*unaff_x23 != 0)))) {
                                    lVar8 = FUN_06317848(*unaff_x23,0);
                                    if ((lVar8 != 0) &&
                                       ((*(long *)(lVar8 + 200) != 0 && (*unaff_x23 != 0)))) {
                                      lVar8 = FUN_06317848(*unaff_x23,0);
                                      if (lVar8 != 0) {
                                        if (*(long *)(lVar8 + 0xb0) != 0) {
                                          if (*unaff_x23 != 0) {
                                            lVar8 = FUN_06317848(*unaff_x23,0);
                                            if (lVar8 != 0) {
                                              if ((DAT_086de93e & 1) == 0) {
                                                FUN_0335b6c8(&DAT_083eb4b0,1);
                                                DataMemoryBarrier(2,3);
                                                DAT_086de93e = 1;
                                              }
                                              if (*(long *)(lVar8 + 0x18) == 0) {
                                                uVar7 = 0;
                                              }
                                              else {
                                                uVar7 = *(undefined4 *)
                                                         (*(long *)(lVar8 + 0x18) + 0x30);
                                              }
                                              uStack0000000000000198 = (ulong)unaff_w20;
                                              uStack00000000000001e0 = uVar2;
                                              uStack00000000000001e8 = uVar3;
                                              auVar11 = FUN_04003b30(&stack0x00000190,uVar7,0x40,
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0xd0),
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0xd8),
                                                                     DAT_0840ef48);
                                              *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar11;
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
    iVar10 = 0;
    do {
      uStack0000000000000198 = 0;
      uStack0000000000000190 = 0;
      FUN_05fd5ad4(&stack0x00000190,lVar8,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083f34c8 + 0x20) + 0xc0) + 0x138));
      in_stack_00000178 = uStack0000000000000198;
      in_stack_00000170 = uStack0000000000000190;
      in_stack_00000180 = (long *)0x0;
      while (uVar6 = FUN_05fd5b44(&stack0x00000170,DAT_083e6fc0), plVar4 = in_stack_00000180,
            (uVar6 & 1) != 0) {
        if (in_stack_00000180 != (long *)0x0) {
          iVar9 = 0;
          while( true ) {
            iVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            if (iVar5 <= iVar9) break;
            auVar11 = (**(code **)(*plVar4 + 0x1b8))
                                (plVar4,unaff_w20,iVar9,*(undefined8 *)(unaff_x19 + 0xd0),
                                 *(undefined8 *)(unaff_x19 + 0xd8),*(undefined8 *)(*plVar4 + 0x1c0))
            ;
            iVar9 = iVar9 + 1;
            *(undefined1 (*) [16])(unaff_x19 + 0xd0) = auVar11;
          }
        }
      }
      iVar10 = iVar10 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= iVar10) goto LAB_06360304;
      lVar8 = *(long *)(unaff_x19 + 0x20);
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


