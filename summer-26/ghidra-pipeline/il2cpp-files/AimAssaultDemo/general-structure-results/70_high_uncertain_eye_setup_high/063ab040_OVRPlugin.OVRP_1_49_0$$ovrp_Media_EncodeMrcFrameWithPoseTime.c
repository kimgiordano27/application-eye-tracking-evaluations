/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 063ab040
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x25;
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
  
code_r0x063ab040:
  do {
    lVar4 = (*(code *)*param_1)();
    if (lVar4 == 0) {
LAB_063ab244:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_07db6d30);
    in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    do {
      do {
        do {
          uVar5 = FUN_05d64e98(&stack0x00000020,*unaff_x27);
          if ((uVar5 & 1) == 0) goto LAB_063ab17c;
          plVar6 = (long *)thunk_FUN_037787d0(in_stack_00000030,*unaff_x29);
        } while (plVar6 == (long *)0x0);
        lVar4 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_063ab0e8;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x28,1);
LAB_063ab0e8:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar8,in_stack_00000040,0);
      } while ((uVar5 & 1) == 0);
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_063ab154;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x28,8);
LAB_063ab154:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar8,unaff_x25,0);
    } while ((uVar5 & 1) == 0);
    FUN_063ade08(uVar5,plVar6);
LAB_063ab17c:
    FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
LAB_063ab1fc:
    while( true ) {
      while( true ) {
        uVar5 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 != 3) break;
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar6 == (long *)0x0) goto LAB_063ab244;
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        pcVar10 = *(code **)(*unaff_x19 + 0x288);
        while ((uVar5 = (*pcVar10)(), (uVar5 & 1) != 0 &&
               (iVar1 = (**(code **)(*unaff_x19 + 0x238))(), iVar1 != 0xf))) {
          FUN_063ab330();
          pcVar10 = *(code **)(*unaff_x19 + 0x288);
        }
      }
      if (iVar1 == 4) break;
      if (iVar1 != 5) {
        if (iVar1 - 0xdU < 2) {
          return;
        }
        FUN_031a5e18();
        uVar3 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
        in_stack_00000010 = 0xffffffffffffffff;
        uStack0000000000000018 = uVar3;
        uVar8 = FUN_06278b80(&stack0x00000008,0);
        uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
        System_Convert__ToInt32(uVar9,uVar8,0);
LAB_063ab260:
        uVar8 = FUN_062d5fcc();
        uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar8,uVar9);
      }
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar6,*(long *)(PTR_DAT_07d86548 + 0x90));
      }
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_063aae28;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063aae28:
      (*(code *)*puVar7)();
      if (unaff_x20 == (long *)0x0) goto LAB_063ab244;
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 7) * 0x10 + 0x138);
            goto LAB_063aae90;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063aae90:
      (*(code *)*puVar7)();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063ab244;
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_063aadbc;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063aadbc:
    iVar1 = (*(code *)*puVar7)();
    if (iVar1 == 9) {
      if (unaff_x22 == (long *)0x0) goto LAB_063ab244;
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
            goto LAB_063aaeb4;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063aaeb4:
      lVar4 = (*(code *)*puVar7)();
      if (lVar4 != 0) {
        thunk_FUN_037a15ac(PTR_DAT_07db6e98);
        goto LAB_063ab260;
      }
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar6 == (long *)0x0) goto LAB_063ab244;
    uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 != 2) {
      FUN_063ab330();
      goto LAB_063ab1fc;
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar5 & 1) == 0) goto LAB_063ab1fc;
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar2 == 0xe) break;
      FUN_063ab330();
      iVar1 = iVar1 + 1;
      uVar5 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar5 & 1) != 0);
    if ((iVar1 != 1) || (*(char *)(unaff_x23 + 0x18) == '\0')) goto LAB_063ab1fc;
    FUN_0632ed64(uVar8,&stack0x00000048,&stack0x00000040,0);
    uVar5 = FUN_063349dc(in_stack_00000048,0);
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
      unaff_x25 = (**(code **)(*unaff_x21 + 0x238))();
    }
    else {
      if (unaff_x21 == (long *)0x0) goto LAB_063ab244;
      unaff_x25 = (**(code **)(*unaff_x21 + 0x1c8))();
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          param_1 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto code_r0x063ab040;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_0377596c();
  } while( true );
}


