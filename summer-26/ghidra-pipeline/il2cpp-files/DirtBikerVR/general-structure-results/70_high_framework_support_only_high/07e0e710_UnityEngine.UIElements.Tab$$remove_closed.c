/*
FUNCTION_NAME: UnityEngine.UIElements.Tab$$remove_closed
ENTRY_POINT: 07e0e710
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_Tab__remove_closed(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  ulong in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000040;
  long in_stack_00000058;
  
  puVar2 = (undefined8 *)FUN_03ac43c4();
  (*(code *)*puVar2)();
  FUN_07ebbe54();
switchD_07e0e310_caseD_20008:
  do {
    uVar1 = FUN_061dc36c(&stack0x00000030,*unaff_x22);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_061dc368(in_stack_00000010,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
      if (in_stack_00000008 == 0) {
        uVar1 = in_stack_00000000;
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
          return;
        }
      }
      else if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8(in_stack_00000008);
      }
LAB_07e0f3d4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar1);
    }
    if ((int)in_stack_00000040 <= unaff_w24) {
      if (in_stack_00000040 + unaff_w27 < 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x07e0e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(unaff_x20 + (ulong)(in_stack_00000040 + unaff_w27) * 2) * 4 +
                  0x7e0e264))();
        return;
      }
      if (in_stack_00000040 == 0x10000) {
        if (unaff_x19 == (long *)0x0) {
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07e0f3d4;
        }
        lVar3 = *unaff_x19;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x16) * 0x10 + 0x138);
              goto LAB_07e0efa4;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0efa4:
        (*(code *)*puVar2)();
        FUN_07ebbe60();
      }
      goto switchD_07e0e310_caseD_20008;
    }
    if (unaff_w25 < in_stack_00000040) {
      if (unaff_w26 < (int)in_stack_00000040) {
        if (in_stack_00000040 == unaff_w29) {
          if (unaff_x19 == (long *)0x0) {
            if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar3 = *unaff_x19;
          uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar1 != 0) {
            piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
                goto LAB_07e0eb58;
              }
              uVar1 = uVar1 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0eb58:
          (*(code *)*puVar2)();
          FUN_07ebc054();
        }
        else if (in_stack_00000040 == 0x7000d) {
          if (unaff_x19 == (long *)0x0) {
            if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar3 = *unaff_x19;
          uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar1 != 0) {
            piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x13) * 0x10 + 0x138);
                goto LAB_07e0ec08;
              }
              uVar1 = uVar1 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0ec08:
          (*(code *)*puVar2)();
          FUN_07ebc060();
        }
        else if (in_stack_00000040 == 0x7000e) {
          if (unaff_x19 == (long *)0x0) {
            if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07e0f3d4;
          }
          lVar3 = *unaff_x19;
          uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar1 != 0) {
            piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x2a) * 0x10 + 0x138);
                goto LAB_07e0ebb0;
              }
              uVar1 = uVar1 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0ebb0:
          (*(code *)*puVar2)();
          FUN_07ebc080();
        }
      }
      else if (in_stack_00000040 == 0x70000) {
        if (unaff_x19 == (long *)0x0) {
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07e0f3d4;
        }
        lVar3 = *unaff_x19;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
              goto LAB_07e0eb2c;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0eb2c:
        (*(code *)*puVar2)();
        FUN_07ebbefc();
      }
      else if (in_stack_00000040 == 0x70007) {
        if (unaff_x19 == (long *)0x0) {
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07e0f3d4;
        }
        lVar3 = *unaff_x19;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 10) * 0x10 + 0x138);
              goto LAB_07e0ebdc;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0ebdc:
        (*(code *)*puVar2)();
        FUN_07ebc06c();
      }
      else if (in_stack_00000040 == 0x70008) {
        if (unaff_x19 == (long *)0x0) {
          if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07e0f3d4;
        }
        lVar3 = *unaff_x19;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
              goto LAB_07e0eb84;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0eb84:
        (*(code *)*puVar2)();
        FUN_07ebc074();
      }
    }
    else if (in_stack_00000040 == unaff_w28) {
      if (unaff_x19 == (long *)0x0) {
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_07e0f3d4;
      }
      lVar3 = *unaff_x19;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x3b) * 0x10 + 0x138);
            goto LAB_07e0e5f4;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0e5f4:
      (*(code *)*puVar2)();
      FUN_07ebbf04();
    }
    else if (in_stack_00000040 == unaff_w25) {
      if (unaff_x19 == (long *)0x0) {
        if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_07e0f3d4;
      }
      lVar3 = *unaff_x19;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
            goto LAB_07e0e5c8;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_07e0e5c8:
      (*(code *)*puVar2)();
      FUN_07ebbf10();
    }
  } while( true );
}


