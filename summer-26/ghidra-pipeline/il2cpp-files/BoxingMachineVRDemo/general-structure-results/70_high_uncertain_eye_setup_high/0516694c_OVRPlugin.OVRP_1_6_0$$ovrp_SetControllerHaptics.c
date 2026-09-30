/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 0516694c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x25;
  
  FUN_05167054();
  uVar7 = *(undefined8 *)PTR_DAT_06782650;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05015c2c(uVar7,0);
  uVar2 = FUN_0501ed54();
  if ((uVar2 & 1) != 0) {
    lVar5 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_05166adc;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05166adc:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_05166b48;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782478
           )) {
          FUN_055327c0(plVar4,0);
          return plVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar4);
      }
    }
LAB_05166c70:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar7 = *(undefined8 *)PTR_DAT_06782670;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05015c2c(uVar7,0);
  uVar2 = FUN_0501ed54();
  if ((uVar2 & 1) == 0) {
    lVar5 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_05166c34;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05166c34:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
  }
  else {
    lVar5 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06782640) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_05166bc8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05166bc8:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) goto LAB_05166c70;
    lVar5 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_05166c50;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_067823f0,9);
LAB_05166c50:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x05166c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(*UNRECOVERED_JUMPTABLE)();
  return plVar4;
}


