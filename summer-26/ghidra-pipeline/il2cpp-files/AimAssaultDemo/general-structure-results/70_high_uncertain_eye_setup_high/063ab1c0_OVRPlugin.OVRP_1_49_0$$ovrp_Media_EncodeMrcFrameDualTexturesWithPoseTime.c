/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 063ab1c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar11;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  lVar11 = *param_1;
  __cxa_end_catch();
  FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar11);
  }
LAB_063ab1e0:
  FUN_063ab330();
LAB_063ab1fc:
  while( true ) {
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar6 & 1) == 0) {
      return;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 != 3) break;
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) goto LAB_063ab244;
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    pcVar9 = *(code **)(*unaff_x19 + 0x288);
    while ((uVar6 = (*pcVar9)(), (uVar6 & 1) != 0 &&
           (iVar1 = (**(code **)(*unaff_x19 + 0x238))(), iVar1 != 0xf))) {
      FUN_063ab330();
      pcVar9 = *(code **)(*unaff_x19 + 0x288);
    }
  }
  if (iVar1 == 4) {
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063aadbc;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aadbc:
      iVar1 = (*(code *)*puVar5)();
      if (iVar1 == 9) {
        if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
        lVar11 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
              goto LAB_063aaeb4;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aaeb4:
        lVar11 = (*(code *)*puVar5)();
        if (lVar11 != 0) {
          thunk_FUN_037a15ac(PTR_DAT_07db6e98);
          goto LAB_063ab260;
        }
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar4 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 != 2) goto LAB_063ab1e0;
        uVar6 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar6 & 1) == 0) goto LAB_063ab1fc;
        iVar1 = 0;
        do {
          iVar2 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar2 == 0xe) break;
          FUN_063ab330();
          iVar1 = iVar1 + 1;
          uVar6 = (**(code **)(*unaff_x19 + 0x288))();
        } while ((uVar6 & 1) != 0);
        if ((iVar1 != 1) || (*(char *)(unaff_x23 + 0x18) == '\0')) goto LAB_063ab1fc;
        FUN_0632ed64(uVar7,&stack0x00000048,&stack0x00000040,0);
        uVar6 = FUN_063349dc(in_stack_00000048,0);
        if ((uVar6 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
          uVar7 = (**(code **)(*unaff_x21 + 0x238))();
        }
        else {
          if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
          uVar7 = (**(code **)(*unaff_x21 + 0x1c8))();
        }
        lVar11 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime:
        lVar11 = (*(code *)*puVar5)();
        if (lVar11 != 0) {
          FUN_049cf910(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_07db6d30);
          in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          do {
            do {
              do {
                uVar6 = FUN_05d64e98(&stack0x00000020,*unaff_x27);
                if ((uVar6 & 1) == 0) goto LAB_063ab17c;
                plVar4 = (long *)thunk_FUN_037787d0(in_stack_00000030,*unaff_x29);
              } while (plVar4 == (long *)0x0);
              lVar11 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x28) {
                    puVar5 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_063ab0e8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,1);
LAB_063ab0e8:
              uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                (uVar8,in_stack_00000040,0);
            } while ((uVar6 & 1) == 0);
            lVar11 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                  goto LAB_063ab154;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x28,8);
LAB_063ab154:
            uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar8,uVar7,0);
          } while ((uVar6 & 1) == 0);
          FUN_063ade08(uVar6,plVar4);
LAB_063ab17c:
          FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
          goto LAB_063ab1fc;
        }
      }
    }
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 - 0xdU < 2) {
        return;
      }
      FUN_031a5e18();
      uVar3 = (**(code **)(*unaff_x19 + 0x238))();
      in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      in_stack_00000010 = 0xffffffffffffffff;
      uStack0000000000000018 = uVar3;
      uVar7 = FUN_06278b80(&stack0x00000008,0);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
      System_Convert__ToInt32(uVar8,uVar7,0);
LAB_063ab260:
      uVar7 = FUN_062d5fcc();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar8);
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (unaff_x22 != (long *)0x0) {
      if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar4,*(long *)(PTR_DAT_07d86548 + 0x90));
      }
      lVar11 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063aae28;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae28:
      (*(code *)*puVar5)();
      if (unaff_x20 != (long *)0x0) {
        lVar11 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_063aae90;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063aae90:
        (*(code *)*puVar5)();
        goto LAB_063ab1fc;
      }
    }
  }
LAB_063ab244:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


