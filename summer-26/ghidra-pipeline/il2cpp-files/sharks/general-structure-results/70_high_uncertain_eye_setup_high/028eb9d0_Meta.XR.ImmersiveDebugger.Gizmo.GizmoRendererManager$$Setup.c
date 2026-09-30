/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Setup
ENTRY_POINT: 028eb9d0
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Setup(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  
  FUN_017fc350(PTR_DAT_037fb6a8);
  FUN_017fc350(PTR_DAT_037faae0);
  *(undefined1 *)(unaff_x21 + 0x619) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  plVar8 = (long *)(unaff_x20 + 0x20);
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    lVar7 = *plVar8;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    uVar3 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar3 = *(ushort *)(*plVar8 + 0x135);
      lVar5 = *plVar8;
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x1f8);
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x1f8);
    in_stack_00000030 = &stack0x00000020;
    in_stack_00000020 = uVar1;
    in_stack_00000028 = uVar2;
    (**(code **)(lVar5 + 0x10))(uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
    lVar4 = *plVar8;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar4 != 0) {
      FUN_02171ca8(lVar4,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb6a0);
      lVar4 = *plVar8;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        FUN_024c5210(**(long **)(lVar4 + 0xb8),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)PTR_DAT_037faae0);
        lVar4 = *plVar8;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
        if (lVar4 != 0) {
          lVar7 = *plVar8;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          uVar3 = *(ushort *)(lVar7 + 0x135);
          lVar5 = lVar7;
          if ((uVar3 & 1) == 0) {
            lVar7 = FUN_0185daa4(lVar7);
            uVar3 = *(ushort *)(*plVar8 + 0x135);
            lVar5 = *plVar8;
          }
          uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x288);
          if ((uVar3 & 1) == 0) {
            lVar5 = FUN_0185daa4(lVar5);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x288);
          in_stack_00000030 = &stack0x00000020;
          in_stack_00000020 = uVar1;
          in_stack_00000028 = uVar2;
          (**(code **)(lVar5 + 0x10))(uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4)
          ;
          lVar4 = *plVar8;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
          if (lVar4 != 0) {
            lVar7 = *plVar8;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            uVar3 = *(ushort *)(lVar7 + 0x135);
            lVar5 = lVar7;
            if ((uVar3 & 1) == 0) {
              lVar7 = FUN_0185daa4(lVar7);
              uVar3 = *(ushort *)(*plVar8 + 0x135);
              lVar5 = *plVar8;
            }
            uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x290);
            if ((uVar3 & 1) == 0) {
              lVar5 = FUN_0185daa4(lVar5);
            }
            in_stack_00000038 = &stack0x00000018;
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x290);
            in_stack_00000030 = &stack0x00000020;
            in_stack_00000020 = uVar1;
            in_stack_00000028 = uVar2;
            (**(code **)(lVar5 + 0x10))
                      (uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
            if (in_stack_00000048._4_1_ != '\0') {
              lVar4 = *plVar8;
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar4 = *plVar8;
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
              if (lVar4 == 0) goto LAB_028ec144;
              lVar7 = *plVar8;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              uVar3 = *(ushort *)(lVar7 + 0x135);
              lVar5 = lVar7;
              if ((uVar3 & 1) == 0) {
                lVar7 = FUN_0185daa4(lVar7);
                uVar3 = *(ushort *)(*plVar8 + 0x135);
                lVar5 = *plVar8;
              }
              uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2a0);
              if ((uVar3 & 1) == 0) {
                lVar5 = FUN_0185daa4(lVar5);
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x2a0);
              in_stack_00000030 = &stack0x00000020;
              in_stack_00000020 = uVar1;
              in_stack_00000028 = uVar2;
              (**(code **)(lVar5 + 0x10))
                        (uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
              lVar4 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_028ec144;
              lVar7 = *plVar8;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              uVar3 = *(ushort *)(lVar7 + 0x135);
              lVar5 = lVar7;
              if ((uVar3 & 1) == 0) {
                lVar7 = FUN_0185daa4(lVar7);
                uVar3 = *(ushort *)(*plVar8 + 0x135);
                lVar5 = *plVar8;
              }
              pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2b0);
              if ((uVar3 & 1) == 0) {
                lVar5 = FUN_0185daa4(lVar5);
              }
              (*pcVar10)(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b0));
            }
            lVar4 = *plVar8;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar4 = *plVar8;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
            if (lVar4 != 0) {
              lVar7 = *plVar8;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              uVar3 = *(ushort *)(lVar7 + 0x135);
              lVar5 = lVar7;
              if ((uVar3 & 1) == 0) {
                lVar7 = FUN_0185daa4(lVar7);
                uVar3 = *(ushort *)(*plVar8 + 0x135);
                lVar5 = *plVar8;
              }
              uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2b8);
              if ((uVar3 & 1) == 0) {
                lVar5 = FUN_0185daa4(lVar5);
              }
              in_stack_00000038 = &stack0x00000010;
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x2b8);
              in_stack_00000030 = &stack0x00000020;
              in_stack_00000020 = uVar1;
              in_stack_00000028 = uVar2;
              (**(code **)(lVar5 + 0x10))
                        (uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
              if (in_stack_00000048._4_1_ != '\0') {
                lVar4 = *plVar8;
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar4 = *plVar8;
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
                if (lVar4 == 0) goto LAB_028ec144;
                lVar7 = *plVar8;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                uVar3 = *(ushort *)(lVar7 + 0x135);
                lVar5 = lVar7;
                if ((uVar3 & 1) == 0) {
                  lVar7 = FUN_0185daa4(lVar7);
                  uVar3 = *(ushort *)(*plVar8 + 0x135);
                  lVar5 = *plVar8;
                }
                uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x2c0);
                if ((uVar3 & 1) == 0) {
                  lVar5 = FUN_0185daa4(lVar5);
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x2c0);
                in_stack_00000030 = &stack0x00000020;
                in_stack_00000020 = uVar1;
                in_stack_00000028 = uVar2;
                (**(code **)(lVar5 + 0x10))
                          (uVar9,lVar5,lVar4,&stack0x00000030,(long)&stack0x00000048 + 4);
                lVar4 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_028ec144;
                lVar7 = *plVar8;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                uVar3 = *(ushort *)(lVar7 + 0x135);
                lVar5 = lVar7;
                if ((uVar3 & 1) == 0) {
                  lVar7 = FUN_0185daa4(lVar7);
                  uVar3 = *(ushort *)(*plVar8 + 0x135);
                  lVar5 = *plVar8;
                }
                pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x138);
                if ((uVar3 & 1) == 0) {
                  lVar5 = FUN_0185daa4(lVar5);
                }
                (*pcVar10)(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x138));
              }
              lVar4 = *plVar8;
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar4 = *plVar8;
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
              if (lVar4 != 0) {
                uVar6 = FUN_021722c0(lVar4,*unaff_x19,unaff_x19[1],&stack0x00000008,
                                     *(undefined8 *)PTR_DAT_037fb6a8);
                if ((uVar6 & 1) != 0) {
                  lVar4 = *plVar8;
                  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_0185daa4();
                  }
                  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_0185daa4();
                  }
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_01843fdc();
                  }
                  lVar4 = *plVar8;
                  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_0185daa4();
                  }
                  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
                  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_0185daa4();
                  }
                  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
                  if ((lVar4 == 0) ||
                     (FUN_02171ca8(lVar4,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
                     in_stack_00000008 == 0)) goto LAB_028ec144;
                  (**(code **)(in_stack_00000008 + 0x18))
                            (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                             *(undefined8 *)(in_stack_00000008 + 0x28));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_028ec144:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


