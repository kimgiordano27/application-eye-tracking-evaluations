/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_SetPlatformCameraMode
ENTRY_POINT: 063a9e88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_57_0__ovrp_Media_SetPlatformCameraMode(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  byte bVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000030;
  
  while ((param_1 & 1) != 0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_063a9edc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x22,5);
LAB_063a9edc:
    uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x23,0);
    if ((uVar4 & 1) == 0) break;
    do {
      uVar4 = FUN_05d64e98(&stack0x00000020,*unaff_x21);
      unaff_x19 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        bVar6 = 0;
        iVar7 = 6;
        goto LAB_063a9f0c;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar3 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_063a9e04;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x22,8);
LAB_063a9e04:
      uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
      uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x23,0);
    } while ((uVar4 & 1) != 0);
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_063a9e70;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x22,8);
LAB_063a9e70:
    uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    param_1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x24,0);
  }
  bVar6 = 1;
  iVar7 = 5;
LAB_063a9f0c:
  FUN_05d64e94(&stack0x00000020,*unaff_x20);
  return bVar6 & iVar7 == 5;
}


