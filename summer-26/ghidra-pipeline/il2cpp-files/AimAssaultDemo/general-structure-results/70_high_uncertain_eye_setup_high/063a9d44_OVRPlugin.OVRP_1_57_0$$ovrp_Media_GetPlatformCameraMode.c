/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_GetPlatformCameraMode
ENTRY_POINT: 063a9d44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_57_0__ovrp_Media_GetPlatformCameraMode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  byte bVar12;
  long unaff_x19;
  int iVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *plStack0000000000000030;
  
  puVar5 = PTR_DAT_07db6d60;
  puVar4 = PTR_DAT_07db6d20;
  puVar3 = PTR_DAT_07db6d18;
  puVar2 = PTR_DAT_07db6c00;
  puVar1 = PTR_DAT_07d9b220;
  plStack0000000000000030 = (long *)0x0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_049cf910(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  plStack0000000000000030 = in_stack_00000018;
  do {
    do {
      uVar7 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar4);
      plVar6 = plStack0000000000000030;
      if ((uVar7 & 1) == 0) {
        bVar12 = 0;
        iVar13 = 6;
        goto LAB_063a9f0c;
      }
      if (plStack0000000000000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar10 = *plStack0000000000000030;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_063a9e04;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0377596c(plStack0000000000000030,*(long *)puVar2,8);
LAB_063a9e04:
      uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar9,*(undefined8 *)puVar5,0);
    } while ((uVar7 & 1) != 0);
    lVar10 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_063a9e70;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,8);
LAB_063a9e70:
    uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar9,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) == 0) break;
    lVar10 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_063a9edc;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,5);
LAB_063a9edc:
    uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar9,*(undefined8 *)puVar5,0);
  } while ((uVar7 & 1) != 0);
  bVar12 = 1;
  iVar13 = 5;
LAB_063a9f0c:
  FUN_05d64e94(&stack0x00000020,*(undefined8 *)puVar3);
  return bVar12 & iVar13 == 5;
}


