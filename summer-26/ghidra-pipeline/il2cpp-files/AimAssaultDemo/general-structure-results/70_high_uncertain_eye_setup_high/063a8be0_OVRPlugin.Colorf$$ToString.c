/*
FUNCTION_NAME: OVRPlugin.Colorf$$ToString
ENTRY_POINT: 063a8be0
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


byte OVRPlugin_Colorf__ToString(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000030;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_063a8c2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x21,1);
LAB_063a8c2c:
    uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
    uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar3,*unaff_x23,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_063a8c98;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x21,8);
LAB_063a8c98:
      uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
      uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar3,*unaff_x24,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_063a8ce4;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        break;
      }
    }
    uVar5 = FUN_05d64e98(&stack0x00000020,*unaff_x22);
    if ((uVar5 & 1) == 0) {
      bVar1 = 0;
      iVar7 = 5;
      goto LAB_063a8d4c;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *in_stack_00000030;
    unaff_x19 = in_stack_00000030;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
      goto LAB_063a8d10;
    }
  }
LAB_063a8ce4:
  puVar2 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x21,5);
LAB_063a8d10:
  uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
  if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  bVar1 = FUN_06a10014(uVar3,0);
  iVar7 = 4;
LAB_063a8d4c:
  FUN_05d64e94(&stack0x00000020,*unaff_x20);
  return bVar1 & iVar7 == 4;
}


