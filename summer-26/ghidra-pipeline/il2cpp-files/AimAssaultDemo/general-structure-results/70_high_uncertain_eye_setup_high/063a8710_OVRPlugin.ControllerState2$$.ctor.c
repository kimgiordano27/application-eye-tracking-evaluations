/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 063a8710
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_ControllerState2___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_063a8750;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a8750:
  uVar1 = (*(code *)*puVar2)();
  switch(uVar1) {
  case 1:
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_063a8898;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a8898:
    uVar3 = (*(code *)*puVar2)();
    uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar3,*(undefined8 *)PTR_DAT_07db6d60,0);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_063a8324();
      return uVar3;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) goto LAB_063a8994;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    goto LAB_063a896c;
  case 2:
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_063a8918;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a8918:
    uVar3 = (*(code *)*puVar2)();
    uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar3,*(undefined8 *)PTR_DAT_07db6d60,0);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_063a8324();
      puVar2 = (undefined8 *)PTR_DAT_07db6df0;
      goto FUN_063a89b8;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) goto LAB_063a8994;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
LAB_063a896c:
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a89a4:
    uVar3 = (*(code *)*puVar2)();
    puVar2 = (undefined8 *)PTR_DAT_07db6de0;
FUN_063a89b8:
    uVar3 = System_Convert__ToInt32(*puVar2,uVar3,0);
    return uVar3;
  case 3:
    puVar2 = (undefined8 *)PTR_DAT_07db6dc8;
    break;
  case 4:
    puVar2 = (undefined8 *)PTR_DAT_07db6de8;
    break;
  default:
    FUN_031a5e18();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6c00);
    uVar1 = FUN_031b7e10(0,uVar3);
    in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db6db8);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = uVar1;
    uVar3 = FUN_06278b80(&stack0x00000008,0);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6e08);
    uVar3 = System_Convert__ToInt32(uVar4,uVar3,0);
    thunk_FUN_037a15ac(PTR_DAT_07d98df0);
    uVar4 = thunk_FUN_037788cc();
    thunk_FUN_062d6d20(uVar4,uVar3,0);
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6e10);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar3);
  case 7:
    uVar3 = FUN_063a8324();
    puVar2 = (undefined8 *)PTR_DAT_07da4ba8;
    goto FUN_063a89b8;
  case 8:
    puVar2 = (undefined8 *)PTR_DAT_07db6df8;
    break;
  case 10:
    uVar3 = FUN_063a8324();
    puVar2 = (undefined8 *)PTR_DAT_07db3f38;
    goto FUN_063a89b8;
  case 0xd:
    puVar2 = (undefined8 *)PTR_DAT_07db6e00;
    break;
  case 0xe:
    puVar2 = (undefined8 *)PTR_DAT_07db6dd8;
    break;
  case 0x11:
    puVar2 = (undefined8 *)PTR_DAT_07db6dd0;
  }
  return *puVar2;
LAB_063a8994:
  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
  goto LAB_063a89a4;
}


