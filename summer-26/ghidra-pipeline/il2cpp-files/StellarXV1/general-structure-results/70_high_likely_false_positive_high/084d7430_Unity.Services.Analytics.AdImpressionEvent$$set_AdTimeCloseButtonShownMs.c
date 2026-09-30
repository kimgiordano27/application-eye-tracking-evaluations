/*
FUNCTION_NAME: Unity.Services.Analytics.AdImpressionEvent$$set_AdTimeCloseButtonShownMs
ENTRY_POINT: 084d7430
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_AdImpressionEvent__set_AdTimeCloseButtonShownMs(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined4 *)(unaff_x20 + -1) = param_1;
  thunk_FUN_040ec700();
  puVar10 = PTR_DAT_0932b410;
  puVar9 = PTR_DAT_0932b400;
  puVar8 = PTR_DAT_0932b3f8;
  puVar7 = PTR_DAT_0932b3e0;
  puVar6 = PTR_DAT_0932b3c8;
  puVar5 = PTR_DAT_0932b3c0;
  puVar4 = PTR_DAT_0932a958;
  puVar3 = PTR_DAT_09329e40;
  puVar2 = PTR_DAT_093244d8;
  puVar1 = PTR_DAT_0929c808;
  if (*unaff_x20 != 0) {
    uVar11 = FUN_089d4f24(*unaff_x20,*(undefined8 *)PTR_DAT_0932b408,0);
    *(undefined4 *)(unaff_x19 + 0x38) = uVar11;
    FUN_084d69c0(unaff_x19 + 0x40);
    uVar11 = FUN_0819c18c(4,0);
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    FUN_05ff3a50(&stack0x00000030,0x40,uVar11,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)puVar6;
    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000038;
    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000030;
    uVar12 = thunk_FUN_040b4efc(uVar12);
    FUN_05c2b9e0(uVar12,*(undefined8 *)puVar5);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x78),uVar12);
    uVar11 = FUN_0819c18c(4,0);
    in_stack_00000028 = 0;
    FUN_05fea7c4(&stack0x00000028,0x40,uVar11,*(undefined8 *)puVar7);
    *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000028;
    uVar11 = FUN_0819c18c(4,0);
    in_stack_00000020 = 0;
    FUN_05fcfcf0(&stack0x00000020,0x40,uVar11,*(undefined8 *)puVar3);
    uVar12 = *(undefined8 *)puVar2;
    *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000020;
    uVar12 = thunk_FUN_040b4efc(uVar12);
    FUN_08409e24(uVar12,*(undefined8 *)puVar10,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xc0),uVar12);
    uVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_08409e24(uVar12,*(undefined8 *)puVar9,0);
    *(undefined8 *)(unaff_x19 + 200) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 200),uVar12);
    uVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_08409e24(uVar12,*(undefined8 *)puVar8,0);
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xd0),uVar12);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_05f51ef0(&stack0x00000010,1,4,1,*(undefined8 *)PTR_DAT_0932b3d0);
    uVar12 = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000010;
    uVar12 = thunk_FUN_040b4efc(uVar12);
    FUN_089d4158(uVar12,1,0x360,8,0);
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xa0),uVar12);
    FUN_05f530b4();
    uVar12 = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x19 + 0xb0) = 0;
    *(undefined8 *)(unaff_x19 + 0xa8) = 0;
    uVar12 = thunk_FUN_040b4efc(uVar12);
    FUN_089d4158(uVar12,1,0xa0,8,0);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar12;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xb8),uVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


