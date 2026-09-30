/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 028dda30
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster(void)

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
  
  FUN_02171ca8();
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028dd9ac with catch @ 028dda68
                       try { // try from 028dda68 to 029dda7f has its CatchHandler @ 028dd968 */
    FUN_024c5210(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037faae0);
    lVar3 = *unaff_x20;
                    /* try { // try from 028dda80 to 029dda97 has its CatchHandler @ 028ddb04 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* try { // try from 028dda98 to 029ddaf3 has its CatchHandler @ 028dd968 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
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
                    /* try { // try from 028ddaf4 to 029ddb03 has its CatchHandler @ 028ddb04 */
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
          if (lVar3 == 0) goto LAB_028dde70;
          lVar4 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
          lVar3 = in_stack_00000018;
          if (in_stack_00000018 == 0) goto LAB_028dde70;
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
            if (lVar3 == 0) goto LAB_028dde70;
            lVar4 = *unaff_x20;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
            lVar3 = in_stack_00000010;
            if (in_stack_00000010 == 0) goto LAB_028dde70;
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
LAB_028dde70:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


