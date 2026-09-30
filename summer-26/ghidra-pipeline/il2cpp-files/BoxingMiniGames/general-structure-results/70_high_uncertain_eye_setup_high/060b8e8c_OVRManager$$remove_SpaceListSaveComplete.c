/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 060b8e8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceListSaveComplete(ulong param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  float unaff_s8;
  float unaff_s9;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a23d20);
    *(undefined1 *)(unaff_x21 + 0x988) = 1;
  }
  puVar1 = PTR_DAT_07a23d20;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (param_3 == (long *)0x0) goto LAB_060b904c;
  lVar4 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07a23d20) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_060b8f14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30(param_3,*(long *)PTR_DAT_07a23d20,4);
LAB_060b8f14:
  lVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
  if (lVar4 == 0) {
    FUN_060b9050(param_2);
    goto LAB_060b8ff8;
  }
  if (unaff_s9 <= 0.0) {
LAB_060b8f84:
    FUN_060b9050(param_2);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) goto LAB_060b904c;
    if ((*(char *)(lVar4 + 0x10) == '\0') || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0))
    goto LAB_060b8f84;
    lVar5 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto FUN_060b9024;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(param_3,*(long *)puVar1,5);
FUN_060b9024:
    uVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
    FUN_060b9104(unaff_s9,param_2,lVar4,uVar2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  if (unaff_s8 <= 0.0) {
LAB_060b8ff8:
    FUN_060b9094(param_2);
    return;
  }
  FUN_060b91e8(&stack0x00000020,param_3);
  if (*(long *)(param_2 + 0x30) != 0) {
    uStack0000000000000014 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack000000000000000c = uStack000000000000002c;
    FUN_060ef240(unaff_s8);
    *(undefined1 *)(param_2 + 0x39) = 0;
    return;
  }
LAB_060b904c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


