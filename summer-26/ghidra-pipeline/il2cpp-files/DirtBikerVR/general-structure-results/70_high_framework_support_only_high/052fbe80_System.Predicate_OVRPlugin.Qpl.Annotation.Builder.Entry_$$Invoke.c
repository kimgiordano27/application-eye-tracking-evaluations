/*
FUNCTION_NAME: System.Predicate<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 052fbe80
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Predicate<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03ac4090();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    FUN_05e88f0c(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_08494948);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      FUN_049c65e8(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_08494638
                  );
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03ac4090();
        }
        FUN_05e88f0c(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b0));
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
        if (lVar3 != 0) {
          lVar4 = *(long *)(unaff_x20 + 0x20);
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03ac4090();
          }
          uVar5 = FUN_05e89504(lVar3,uVar1,uVar2,&stack0x00000018,
                               *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
          if ((uVar5 & 1) != 0) {
            lVar3 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            lVar3 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
            if (lVar3 == 0) goto LAB_052fc36c;
            lVar4 = *(long *)(unaff_x20 + 0x20);
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03ac4090();
            }
            FUN_05e88f0c(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c8));
            lVar3 = in_stack_00000018;
            if (in_stack_00000018 == 0) goto LAB_052fc36c;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
              FUN_03ac4090();
            }
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
          }
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
          if (lVar3 != 0) {
            lVar4 = *(long *)(unaff_x20 + 0x20);
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03ac4090();
            }
            uVar5 = FUN_05e89504(lVar3,uVar1,uVar2,&stack0x00000010,
                                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e0));
            if ((uVar5 & 1) != 0) {
              lVar3 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              lVar3 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
              if (lVar3 == 0) goto LAB_052fc36c;
              lVar4 = *(long *)(unaff_x20 + 0x20);
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03ac4090();
              }
              FUN_05e88f0c(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2e8));
              lVar3 = in_stack_00000010;
              if (in_stack_00000010 == 0) goto LAB_052fc36c;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                FUN_03ac4090();
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            lVar3 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
            if (lVar3 != 0) {
              uVar5 = FUN_05e89504(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,
                                   *(undefined8 *)PTR_DAT_08494950);
              if ((uVar5 & 1) == 0) {
                return;
              }
              lVar3 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              lVar3 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03ac4090();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
              if ((lVar3 != 0) &&
                 (FUN_05e88f0c(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_08494940),
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
LAB_052fc36c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


