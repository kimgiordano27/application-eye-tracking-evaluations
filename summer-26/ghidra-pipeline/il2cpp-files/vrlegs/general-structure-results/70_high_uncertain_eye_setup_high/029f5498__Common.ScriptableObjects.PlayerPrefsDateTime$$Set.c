/*
FUNCTION_NAME: _Common.ScriptableObjects.PlayerPrefsDateTime$$Set
ENTRY_POINT: 029f5498
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f5630) */

void _Common_ScriptableObjects_PlayerPrefsDateTime__Set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_029f54e0;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec();
LAB_029f54e0:
  (*(code *)*puVar1)();
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027de940(*(long *)(unaff_x19 + 0x30),0);
  uVar2 = FUN_027bcf38(*(undefined8 *)(unaff_x19 + 0x58),0,0);
  if ((uVar2 & 1) != 0) {
    while (*(char *)(unaff_x19 + 0x26) != '\0') {
      FUN_027e2830(1,0);
    }
    FUN_029f56b8(*(undefined8 *)(unaff_x19 + 0x58));
    lVar6 = *unaff_x24;
    plVar5 = *(long **)(unaff_x19 + 0x78);
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_01a47054(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar5;
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_03d09990;
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_029f55ec;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x23,2);
LAB_029f55ec:
    (*(code *)*puVar1)(plVar5,uVar8,uVar7,puVar1[1]);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


