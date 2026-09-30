/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 063a9dc0
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


byte OVRPlugin_Media__SetPlatformCameraMode(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
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
  
  do {
    if (in_x9 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_063a9e04;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,param_3,8);
LAB_063a9e04:
    uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x23,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_063a9e70;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x22,8);
LAB_063a9e70:
      uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x24,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x22) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto LAB_063a9edc;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x22,5);
LAB_063a9edc:
        uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x23,0);
        if ((uVar3 & 1) != 0) goto LAB_063a9d9c;
      }
      bVar6 = 1;
      iVar7 = 5;
LAB_063a9f0c:
      FUN_05d64e94(&stack0x00000020,*unaff_x20);
      return bVar6 & iVar7 == 5;
    }
LAB_063a9d9c:
    uVar3 = FUN_05d64e98(&stack0x00000020,*unaff_x21);
    if ((uVar3 & 1) == 0) {
      bVar6 = 0;
      iVar7 = 6;
      goto LAB_063a9f0c;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *in_stack_00000030;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x19 = in_stack_00000030;
  } while( true );
}


