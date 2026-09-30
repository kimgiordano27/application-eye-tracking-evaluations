/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 0321cd68
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetAppPerfStats(void)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x21;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double unaff_d8;
  undefined8 in_register_00005108;
  double unaff_d9;
  undefined8 in_register_00005128;
  double dVar6;
  double dVar7;
  double in_stack_00000038;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x21 + 0x1cd) = 1;
  puVar1 = PTR_DAT_06db0af8;
  if (*(int *)(*(long *)PTR_DAT_06db0af8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  dVar3 = unaff_d8;
  if (0x7ff0000000000000 < (ulong)ABS(unaff_d8)) goto LAB_0321ce44;
  in_register_00005108 = in_register_00005128;
  if (*(char *)(unaff_x21 + 0x1cd) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    *(undefined1 *)(unaff_x21 + 0x1cd) = 1;
    in_register_00005108 = in_register_00005128;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  dVar3 = unaff_d9;
  if (0x7ff0000000000000 < (ulong)ABS(unaff_d9)) goto LAB_0321ce44;
  dVar3 = fmod(unaff_d8,unaff_d9);
  if (*(char *)(unaff_x21 + 0x1cd) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06db0af8);
    *(undefined1 *)(unaff_x21 + 0x1cd) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (0x7ff0000000000000 < (ulong)ABS(dVar3)) {
    dVar3 = NAN;
LAB_0321ce34:
    in_register_00005108 = 0;
    goto LAB_0321ce44;
  }
  if (dVar3 == 0.0) {
    if (cRam0000000007237eb0 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06db0af8);
      cRam0000000007237eb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if ((long)unaff_d8 < 0) {
      dVar3 = -0.0;
      goto LAB_0321ce34;
    }
  }
  puVar1 = PTR_DAT_06e1a840;
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  iVar2 = FUN_0321cf90();
  dVar7 = ABS(dVar3 - ABS(unaff_d9) * (double)iVar2);
  dVar6 = dVar3 - ABS(unaff_d9) * (double)iVar2;
  if (dVar7 != ABS(dVar3)) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (dVar7 < ABS(dVar3)) {
      dVar3 = dVar6;
    }
    in_register_00005108 = 0;
    goto LAB_0321ce44;
  }
  dVar7 = unaff_d8 / unaff_d9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  dVar4 = modf(dVar7,&stack0x00000038);
  if (0.0 <= dVar7) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_0321cf4c;
    }
    in_stack_00000038 = (double)(long)(dVar7 + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_0321cf4c:
    if (((long)in_stack_00000038 & 1U) != 0) {
      in_stack_00000038 = in_stack_00000038 + dVar4;
    }
  }
  else {
    in_stack_00000038 = (double)(long)(dVar7 + -0.5);
  }
  if (ABS(dVar7) < ABS(in_stack_00000038)) {
    dVar3 = dVar6;
  }
  in_register_00005108 = 0;
LAB_0321ce44:
  auVar5._8_8_ = in_register_00005108;
  auVar5._0_8_ = dVar3;
  return auVar5;
}


