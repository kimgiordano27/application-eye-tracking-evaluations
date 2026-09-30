/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_64
ENTRY_POINT: 05bfc150
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_64(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  byte bVar6;
  byte unaff_w21;
  byte unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while( true ) {
    bVar3 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                         (long)&stack0x00000028 + 4,0);
    bVar3 = bVar3 & in_stack_00000028._4_1_ != '\0';
    bVar2 = bVar3 | unaff_w21;
    uVar4 = FUN_0543cc20(&stack0x00000040,*unaff_x24);
    if ((uVar4 & 1) == 0) break;
    lVar5 = *unaff_x25;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x25;
    }
    bVar3 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),
                         (long)&stack0x00000028 + 4,0);
    param_1 = *unaff_x25;
    unaff_w22 = bVar3 & in_stack_00000028._4_1_ != '\0' | unaff_w22;
    unaff_w21 = bVar2;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x25;
    }
  }
  FUN_0543cc1c(&stack0x00000040,*unaff_x23);
  if ((unaff_w22 & 1) == 0) {
    bVar6 = 0;
    bVar2 = 0;
    if (bVar3 == 0 && (unaff_w21 & 1) == 0) goto FUN_05bfc23c;
  }
  else {
    if (*(char *)(unaff_x19 + 0x30) == '\0') {
      iVar1 = 0;
      if (*(int *)(unaff_x19 + 0x28) + 1 < *(int *)(unaff_x19 + 0x2c)) {
        iVar1 = *(int *)(unaff_x19 + 0x28) + 1;
      }
      *(int *)(unaff_x19 + 0x28) = iVar1;
      FUN_05bfc280();
    }
    bVar6 = 1;
    bVar2 = 1;
    if (bVar3 == 0 && (unaff_w21 & 1) == 0) goto FUN_05bfc23c;
  }
  bVar6 = bVar2;
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
    *(int *)(unaff_x19 + 0x28) = iVar1;
    if (iVar1 < 0) {
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
    }
    FUN_05bfc280();
  }
FUN_05bfc23c:
  *(byte *)(unaff_x19 + 0x30) = bVar3 | unaff_w21 & 1 | bVar6;
  return;
}


