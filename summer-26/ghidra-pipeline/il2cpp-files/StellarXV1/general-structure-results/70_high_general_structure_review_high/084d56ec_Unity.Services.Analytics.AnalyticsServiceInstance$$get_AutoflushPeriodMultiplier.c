/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$get_AutoflushPeriodMultiplier
ENTRY_POINT: 084d56ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__get_AutoflushPeriodMultiplier(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int iStack00000000000000fc;
  undefined8 in_stack_00000100;
  int iStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined1 in_stack_000001f0;
  
  FUN_05f2e064();
  iVar4 = FUN_084d5b10();
  in_stack_00000018 = CONCAT44(uStack000000000000010c,iStack0000000000000108);
  iStack00000000000000fc = 0;
  in_stack_00000010 = in_stack_00000100;
  *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) - iVar4;
  memcpy(&stack0x00000020,unaff_x20,0xd0);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x3c);
  FUN_05fd3dfc(unaff_x19 + 0x10,*unaff_x21);
  FUN_05fd2abc(unaff_x19 + 0x28,*unaff_x22);
  iVar4 = iStack0000000000000108;
  puVar3 = PTR_DAT_0932b228;
  puVar2 = PTR_DAT_0932b220;
  if (iStack0000000000000108 < 0x100) {
    memcpy(&stack0x00000110,&stack0x00000010,0xe0);
    uVar5 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x26 + 0xe1) = 0;
    in_stack_000001f0 = uVar1;
    FUN_050414e4(&stack0x00000110,iVar4,uVar5);
  }
  else {
    memcpy(&stack0x00000110,&stack0x00000010,0xe0);
    uVar5 = *(undefined8 *)puVar3;
    *(undefined4 *)(unaff_x26 + 0xe1) = 0;
    in_stack_000001f0 = uVar1;
    FUN_05043ba8(&stack0x00000110,iVar4,0x100,0,0,uVar5);
    FUN_0896ae48();
  }
  uVar5 = *unaff_x25;
  *(int *)(unaff_x19 + 0x38) = iStack00000000000000fc + *(int *)(unaff_x19 + 0x38);
  FUN_05f2e34c(&stack0x00000100,uVar5);
  return;
}


