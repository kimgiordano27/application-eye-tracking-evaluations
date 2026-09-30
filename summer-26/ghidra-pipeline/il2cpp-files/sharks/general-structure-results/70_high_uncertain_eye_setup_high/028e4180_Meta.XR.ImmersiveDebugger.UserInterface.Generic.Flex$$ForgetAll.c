/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$ForgetAll
ENTRY_POINT: 028e4180
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__ForgetAll(void)

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
  
  thunk_FUN_01843fdc();
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 028e4190 to 029e419f has its CatchHandler @ 028e4274 */
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* try { // try from 028e41a0 to 029e4263 has its CatchHandler @ 028e3dd0 */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_0216ea28(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 != 0) {
      FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb6a0);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* try { // try from 028e4264 to 029e4267 has its CatchHandler @ 028e4270 */
        FUN_024c5210(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)PTR_DAT_037faae0);
                    /* try { // try from 028e4268 to 029e4293 has its CatchHandler @ 028e3dd0 */
        lVar3 = *unaff_x20;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e4264 with catch @ 028e4270
                        */
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e4190 with catch @ 028e4274
                        */
          lVar3 = FUN_0185daa4();
        }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e40d4 with catch @ 028e4278
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e4114 with catch @ 028e427c
                        */
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
                    /* try { // try from 028e4294 to 029e4297 has its CatchHandler @ 028e42ac */
        if (lVar3 != 0) {
          lVar4 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
                    /* catch() { ... } // from try @ 028e4294 with catch @ 028e42ac */
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
              if (lVar3 == 0) goto LAB_028e465c;
              lVar4 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
              lVar3 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_028e465c;
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
                if (lVar3 == 0) goto LAB_028e465c;
                lVar4 = *unaff_x20;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
                lVar3 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_028e465c;
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
LAB_028e465c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


