/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.ASPermissionFlowTelemetry.<>c$$.cctor
ENTRY_POINT: 04fbf0ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_12
*/


void Niantic_Platform_Analytics_Telemetry_ASPermissionFlowTelemetry_<>c___cctor(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_1 & 0x4801) != 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    goto LAB_04fbf278;
  }
  if ((param_1 & 0x180) == 0) {
    if (unaff_w21 != 9) {
      thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
      FUN_028be084();
      uVar3 = FUN_04ef45ec(0);
      thunk_FUN_02c7737c(PTR_DAT_065fe178);
      uVar6 = thunk_FUN_02cea4e8();
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_065fe268);
      FUN_05017038(uVar7,uVar3,uVar6,0);
      uVar3 = FUN_04fbd0d4();
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fe270);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar3,uVar6);
    }
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_065c8688)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar2);
    }
    FUN_04fbf420();
    unaff_x20[2] = in_stack_00000010;
    unaff_x20[1] = in_stack_00000008;
    *unaff_x20 = in_stack_00000000;
    goto LAB_04fbf278;
  }
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x248))();
  puVar1 = PTR_DAT_065dc528;
  if (plVar2 == (long *)0x0) {
Niantic_Platform_Analytics_Telemetry_ASPermissionFlowTelemetry_<>c___ctor:
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_04ef45ec(0);
    if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04ead230(plVar2,uVar3,0);
LAB_04fbf154:
    lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065dc560);
    if ((DAT_06a6fca9 & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a6fca9 = 1;
    }
    uVar8 = 8;
    *(undefined4 *)(unaff_x19 + 2) = 8;
    unaff_x19[3] = lVar4;
    if (((int)unaff_x19[5] == 0) && (uVar8 = 0xc, *(char *)((long)unaff_x19 + 0x71) != '\0')) {
      uVar8 = 8;
    }
    *(undefined4 *)((long)unaff_x19 + 0x24) = uVar8;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  else {
    if (*plVar2 != *(long *)PTR_DAT_065dc560) {
      if (*plVar2 != *(long *)PTR_DAT_065dc528)
      goto Niantic_Platform_Analytics_Telemetry_ASPermissionFlowTelemetry_<>c___ctor;
      puVar5 = (undefined8 *)thunk_FUN_02cea9e8(plVar2);
      uVar3 = *puVar5;
      uVar6 = puVar5[1];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_054f4e48(uVar3,uVar6,0);
      goto LAB_04fbf154;
    }
    thunk_FUN_02cea9e8(plVar2);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  FUN_03c8313c();
LAB_04fbf278:
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


