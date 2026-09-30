/*
FUNCTION_NAME: OVRPlugin.RectfPair$$set_Item
ENTRY_POINT: 063a8b30
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


byte OVRPlugin_RectfPair__set_Item(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  byte bVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long in_x9;
  int *piVar11;
  int iVar12;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_063a8b70;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a8b70:
  lVar8 = (*(code *)*puVar7)();
  puVar4 = PTR_DAT_07db6d90;
  puVar3 = PTR_DAT_07db6d60;
  puVar2 = PTR_DAT_07db6d20;
  puVar1 = PTR_DAT_07db6d18;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_049cf910(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_07db6d30);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
      uVar9 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar2);
      plVar5 = in_stack_00000030;
      if ((uVar9 & 1) == 0) {
        bVar6 = 0;
        iVar12 = 5;
        goto LAB_063a8d4c;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar8 = *in_stack_00000030;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_063a8c2c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x21,1);
LAB_063a8c2c:
      uVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar10,*(undefined8 *)puVar4,0);
    } while ((uVar9 & 1) == 0);
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_063a8c98;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x21,8);
LAB_063a8c98:
    uVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar10,*(undefined8 *)puVar3,0);
  } while ((uVar9 & 1) == 0);
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_063a8d10;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x21,5);
LAB_063a8d10:
  uVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  bVar6 = FUN_06a10014(uVar10,0);
  iVar12 = 4;
LAB_063a8d4c:
  FUN_05d64e94(&stack0x00000020,*(undefined8 *)puVar1);
  return bVar6 & iVar12 == 4;
}


