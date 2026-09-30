/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 063a86a4
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


undefined8 OVRPlugin_ControllerState4___ctor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07db6dd8);
  FUN_0373b518(PTR_DAT_07db6de0);
  FUN_0373b518(PTR_DAT_07db6de8);
  FUN_0373b518(PTR_DAT_07db6df0);
  FUN_0373b518(PTR_DAT_07db6df8);
  FUN_0373b518(PTR_DAT_07db6e00);
  *(undefined1 *)(unaff_x21 + 0x6a5) = 1;
  puVar1 = PTR_DAT_07db6c00;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_063a8750;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a8750:
  uVar2 = (*(code *)*puVar3)();
  switch(uVar2) {
  case 1:
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_063a8898;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a8898:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar4,*(undefined8 *)PTR_DAT_07db6d60,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_063a8324();
      return uVar4;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) goto LAB_063a8994;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    goto LAB_063a896c;
  case 2:
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_063a8918;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a8918:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar4,*(undefined8 *)PTR_DAT_07db6d60,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_063a8324();
      puVar3 = (undefined8 *)PTR_DAT_07db6df0;
      goto FUN_063a89b8;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) goto LAB_063a8994;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
LAB_063a896c:
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063a89a4:
    uVar4 = (*(code *)*puVar3)();
    puVar3 = (undefined8 *)PTR_DAT_07db6de0;
FUN_063a89b8:
    uVar4 = System_Convert__ToInt32(*puVar3,uVar4,0);
    return uVar4;
  case 3:
    puVar3 = (undefined8 *)PTR_DAT_07db6dc8;
    break;
  case 4:
    puVar3 = (undefined8 *)PTR_DAT_07db6de8;
    break;
  default:
    FUN_031a5e18();
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6c00);
    uVar2 = FUN_031b7e10(0,uVar4);
    in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db6db8);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = uVar2;
    uVar4 = FUN_06278b80(&stack0x00000008,0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6e08);
    uVar4 = System_Convert__ToInt32(uVar5,uVar4,0);
    thunk_FUN_037a15ac(PTR_DAT_07d98df0);
    uVar5 = thunk_FUN_037788cc();
    thunk_FUN_062d6d20(uVar5,uVar4,0);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6e10);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar4);
  case 7:
    uVar4 = FUN_063a8324();
    puVar3 = (undefined8 *)PTR_DAT_07da4ba8;
    goto FUN_063a89b8;
  case 8:
    puVar3 = (undefined8 *)PTR_DAT_07db6df8;
    break;
  case 10:
    uVar4 = FUN_063a8324();
    puVar3 = (undefined8 *)PTR_DAT_07db3f38;
    goto FUN_063a89b8;
  case 0xd:
    puVar3 = (undefined8 *)PTR_DAT_07db6e00;
    break;
  case 0xe:
    puVar3 = (undefined8 *)PTR_DAT_07db6dd8;
    break;
  case 0x11:
    puVar3 = (undefined8 *)PTR_DAT_07db6dd0;
  }
  return *puVar3;
LAB_063a8994:
  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto LAB_063a89a4;
}


