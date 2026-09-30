/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_CreateCustomCameraAnchor
ENTRY_POINT: 07caab60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_CreateCustomCameraAnchor(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long unaff_x19;
  byte bVar9;
  byte bVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    uVar6 = FUN_095a53ac(0x36,0);
    if ((uVar6 & 1) == 0) goto LAB_07caab8c;
    uVar8 = 5;
  }
  else {
    uVar8 = 4;
  }
  *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
  FUN_07caadec();
LAB_07caab8c:
  puVar3 = PTR_DAT_09f1f7d0;
  puVar2 = PTR_DAT_09f1f7c8;
  uVar6 = FUN_095a53ac(0x1b,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094bbc8c(0);
  }
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05af6370(lVar7,*(undefined8 *)puVar2);
  FUN_09855818(4,lVar7,0);
  puVar4 = PTR_DAT_09f2fbe0;
  puVar3 = PTR_DAT_09f2fbd8;
  puVar2 = PTR_DAT_09f1f588;
  if (lVar7 != 0) {
    FUN_05af7718(lVar7,*(undefined8 *)PTR_DAT_09f2fbf0);
    bVar9 = 0;
    bVar10 = 0;
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    while (uVar6 = FUN_0767556c(&stack0x00000030,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar7 = *(long *)puVar2;
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_09854410(&stack0x00000020,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),
                           (long)&stack0x00000058 + 4,0);
      lVar7 = *(long *)puVar2;
      bVar10 = bVar10 | bVar5 & in_stack_00000058._4_1_ & 1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_09854410(&stack0x00000020,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),
                           (long)&stack0x00000058 + 4,0);
      bVar9 = bVar9 | bVar5 & in_stack_00000058._4_1_ & 1;
    }
    FUN_07675568(&stack0x00000030,*(undefined8 *)puVar3);
    if (bVar10 == 0) {
      bVar5 = 0;
      bVar10 = 0;
    }
    else {
      if (*(char *)(unaff_x19 + 0x30) == '\0') {
        iVar1 = 0;
        if (*(int *)(unaff_x19 + 0x28) + 1 < *(int *)(unaff_x19 + 0x2c)) {
          iVar1 = *(int *)(unaff_x19 + 0x28) + 1;
        }
        *(int *)(unaff_x19 + 0x28) = iVar1;
        FUN_07caadec();
      }
      bVar5 = 1;
      bVar10 = 1;
    }
    if ((bVar9 != 0) && (bVar10 = bVar5, *(char *)(unaff_x19 + 0x30) == '\0')) {
      iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
      *(int *)(unaff_x19 + 0x28) = iVar1;
      if (iVar1 < 0) {
        *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
      }
      FUN_07caadec();
    }
    *(byte *)(unaff_x19 + 0x30) = bVar9 | bVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


