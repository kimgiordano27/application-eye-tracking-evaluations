/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$Start
ENTRY_POINT: 028e752c
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__Start(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *unaff_x20;
                    /* try { // try from 028e758c to 029e758f has its CatchHandler @ 028e75b8 */
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
                    /* try { // try from 028e7590 to 029e7593 has its CatchHandler @ 028e75b0 */
                    /* try { // try from 028e7594 to 029e7597 has its CatchHandler @ 028e75b8 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 028e7598 to 029e759b has its CatchHandler @ 028e72e4 */
      lVar4 = FUN_0185daa4();
    }
                    /* try { // try from 028e759c to 029e759f has its CatchHandler @ 028e75a8 */
                    /* try { // try from 028e75a0 to 029e75d7 has its CatchHandler @ 028e72e4 */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e759c with catch @ 028e75a8
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e74c8 with catch @ 028e75ac
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e7590 with catch @ 028e75b0
                        */
    FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e7508 with catch @ 028e75b4
                        */
    lVar3 = *unaff_x20;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e758c with catch @ 028e75b8
                       catch(type#1 @ 0361ba68) { ... } // from try @ 028e7594 with catch @ 028e75b8
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e73f8 with catch @ 028e75bc
                        */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e7438 with catch @ 028e75c0
                        */
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
                    /* try { // try from 028e75d8 to 029e75db has its CatchHandler @ 028e75e8 */
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 028e75d8 with catch @ 028e75e8 */
      FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb6a0);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
                    /* try { // try from 028e7620 to 029e7647 has its CatchHandler @ 028e765c */
      if (**(long **)(lVar3 + 0xb8) != 0) {
        FUN_024c5210(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)PTR_DAT_037faae0);
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 028e7648 to 029e7653 has its CatchHandler @ 028e72e4 */
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* try { // try from 028e7654 to 029e765b has its CatchHandler @ 028e765c */
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028e7620 with catch @ 028e765c
                       catch(type#2 @ 00000000) { ... } // from try @ 028e7654 with catch @ 028e765c
                        */
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
        if (lVar3 != 0) {
          lVar4 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x288));
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
          if (lVar3 != 0) {
            lVar4 = *unaff_x20;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            uVar5 = FUN_021722c0(lVar3,uVar1,uVar2,&stack0x00000018,
                                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x290));
            if ((uVar5 & 1) != 0) {
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_028e7a30;
              lVar4 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
              lVar3 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_028e7a30;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
            if (lVar3 != 0) {
              lVar4 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              uVar5 = FUN_021722c0(lVar3,uVar1,uVar2,&stack0x00000010,
                                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
              if ((uVar5 & 1) != 0) {
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
                if (lVar3 == 0) goto LAB_028e7a30;
                lVar4 = *unaff_x20;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
                lVar3 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_028e7a30;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
              if (lVar3 != 0) {
                uVar5 = FUN_021722c0(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                                     *(undefined8 *)PTR_DAT_037fb6a8);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
                if ((lVar3 != 0) &&
                   (FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
                   in_stack_00000008 != 0)) {
                  (**(code **)(in_stack_00000008 + 0x18))
                            (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                             *(undefined8 *)(in_stack_00000008 + 0x28));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_028e7a30:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


