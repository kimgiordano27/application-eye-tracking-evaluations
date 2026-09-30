/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 028eba64
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(long param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ushort *in_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar9;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  
  uVar2 = *in_x9;
  lVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    param_1 = FUN_0185daa4(param_1);
    uVar2 = *(ushort *)(*unaff_x20 + 0x135);
    lVar3 = *unaff_x20;
  }
  uVar7 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x1f8);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_0185daa4(lVar3);
  }
  in_stack_00000030 = &stack0x00000020;
  in_stack_00000020 = unaff_x24;
  in_stack_00000028 = unaff_x23;
  (**(code **)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x1f8) + 0x10))(uVar7);
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
      FUN_024c5210(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037faae0
                  );
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      if (lVar3 != 0) {
        lVar6 = *unaff_x20;
        uVar7 = *unaff_x19;
        uVar1 = unaff_x19[1];
        uVar2 = *(ushort *)(lVar6 + 0x135);
        lVar4 = lVar6;
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_0185daa4(lVar6);
          uVar2 = *(ushort *)(*unaff_x20 + 0x135);
          lVar4 = *unaff_x20;
        }
        uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x288);
        if ((uVar2 & 1) == 0) {
          lVar4 = FUN_0185daa4(lVar4);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x288);
        in_stack_00000030 = &stack0x00000020;
        in_stack_00000020 = uVar7;
        in_stack_00000028 = uVar1;
        (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
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
          lVar6 = *unaff_x20;
          uVar7 = *unaff_x19;
          uVar1 = unaff_x19[1];
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar4 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_0185daa4(lVar6);
            uVar2 = *(ushort *)(*unaff_x20 + 0x135);
            lVar4 = *unaff_x20;
          }
          uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x290);
          if ((uVar2 & 1) == 0) {
            lVar4 = FUN_0185daa4(lVar4);
          }
          in_stack_00000038 = &stack0x00000018;
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x290);
          in_stack_00000030 = &stack0x00000020;
          in_stack_00000020 = uVar7;
          in_stack_00000028 = uVar1;
          (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4)
          ;
          if (in_stack_00000048._4_1_ != '\0') {
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
            if (lVar3 == 0) goto LAB_028ec144;
            lVar6 = *unaff_x20;
            uVar7 = *unaff_x19;
            uVar1 = unaff_x19[1];
            uVar2 = *(ushort *)(lVar6 + 0x135);
            lVar4 = lVar6;
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_0185daa4(lVar6);
              uVar2 = *(ushort *)(*unaff_x20 + 0x135);
              lVar4 = *unaff_x20;
            }
            uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2a0);
            if ((uVar2 & 1) == 0) {
              lVar4 = FUN_0185daa4(lVar4);
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2a0);
            in_stack_00000030 = &stack0x00000020;
            in_stack_00000020 = uVar7;
            in_stack_00000028 = uVar1;
            (**(code **)(lVar4 + 0x10))
                      (uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
            lVar3 = in_stack_00000018;
            if (in_stack_00000018 == 0) goto LAB_028ec144;
            lVar6 = *unaff_x20;
            uVar7 = *unaff_x19;
            uVar1 = unaff_x19[1];
            uVar2 = *(ushort *)(lVar6 + 0x135);
            lVar4 = lVar6;
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_0185daa4(lVar6);
              uVar2 = *(ushort *)(*unaff_x20 + 0x135);
              lVar4 = *unaff_x20;
            }
            pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2b0);
            if ((uVar2 & 1) == 0) {
              lVar4 = FUN_0185daa4(lVar4);
            }
            (*pcVar9)(lVar3,uVar7,uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b0));
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
            lVar6 = *unaff_x20;
            uVar7 = *unaff_x19;
            uVar1 = unaff_x19[1];
            uVar2 = *(ushort *)(lVar6 + 0x135);
            lVar4 = lVar6;
            if ((uVar2 & 1) == 0) {
              lVar6 = FUN_0185daa4(lVar6);
              uVar2 = *(ushort *)(*unaff_x20 + 0x135);
              lVar4 = *unaff_x20;
            }
            uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2b8);
            if ((uVar2 & 1) == 0) {
              lVar4 = FUN_0185daa4(lVar4);
            }
            in_stack_00000038 = &stack0x00000010;
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2b8);
            in_stack_00000030 = &stack0x00000020;
            in_stack_00000020 = uVar7;
            in_stack_00000028 = uVar1;
            (**(code **)(lVar4 + 0x10))
                      (uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
            if (in_stack_00000048._4_1_ != '\0') {
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
              if (lVar3 == 0) goto LAB_028ec144;
              lVar6 = *unaff_x20;
              uVar7 = *unaff_x19;
              uVar1 = unaff_x19[1];
              uVar2 = *(ushort *)(lVar6 + 0x135);
              lVar4 = lVar6;
              if ((uVar2 & 1) == 0) {
                lVar6 = FUN_0185daa4(lVar6);
                uVar2 = *(ushort *)(*unaff_x20 + 0x135);
                lVar4 = *unaff_x20;
              }
              uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x2c0);
              if ((uVar2 & 1) == 0) {
                lVar4 = FUN_0185daa4(lVar4);
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x2c0);
              in_stack_00000030 = &stack0x00000020;
              in_stack_00000020 = uVar7;
              in_stack_00000028 = uVar1;
              (**(code **)(lVar4 + 0x10))
                        (uVar8,lVar4,lVar3,&stack0x00000030,(long)&stack0x00000048 + 4);
              lVar3 = in_stack_00000010;
              if (in_stack_00000010 == 0) goto LAB_028ec144;
              lVar6 = *unaff_x20;
              uVar7 = *unaff_x19;
              uVar1 = unaff_x19[1];
              uVar2 = *(ushort *)(lVar6 + 0x135);
              lVar4 = lVar6;
              if ((uVar2 & 1) == 0) {
                lVar6 = FUN_0185daa4(lVar6);
                uVar2 = *(ushort *)(*unaff_x20 + 0x135);
                lVar4 = *unaff_x20;
              }
              pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x138);
              if ((uVar2 & 1) == 0) {
                lVar4 = FUN_0185daa4(lVar4);
              }
              (*pcVar9)(lVar3,uVar7,uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x138));
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
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
                if ((lVar3 == 0) ||
                   (FUN_02171ca8(lVar3,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
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
LAB_028ec144:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


