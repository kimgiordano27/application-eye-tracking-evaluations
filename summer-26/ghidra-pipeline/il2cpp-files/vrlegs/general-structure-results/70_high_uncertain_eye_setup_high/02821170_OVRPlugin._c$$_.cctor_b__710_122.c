/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_122
ENTRY_POINT: 02821170
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


undefined8 OVRPlugin_<>c__<_cctor>b__710_122(void)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_01ab69ac(PTR_DAT_03cc02b0);
  FUN_01ab69ac(PTR_DAT_03cfdb18);
  FUN_01ab69ac(PTR_DAT_03cfe810);
  FUN_01ab69ac(PTR_DAT_03cfe818);
  *(undefined1 *)(unaff_x23 + 0x3c0) = 1;
  if (unaff_w24 < 1) goto LAB_02821338;
  sVar1 = FUN_0282f60c();
  if (sVar1 == 0x2f) {
    if (((8 < in_stack_00000008._4_4_) &&
        (uVar3 = FUN_0282f724(in_stack_00000000,in_stack_00000008,*(undefined8 *)PTR_DAT_03cfe818,0)
        , (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_0282f7e4(in_stack_00000000,in_stack_00000008,*(undefined8 *)PTR_DAT_03cfe810,0),
       (uVar3 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02821358(in_stack_00000000,in_stack_00000008);
joined_r0x0282123c:
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (in_stack_00000008._4_4_ - 0x13U < 0x16) {
    uVar2 = FUN_0282f60c();
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc02b0);
    }
    uVar3 = FUN_026b1a64(uVar2,0);
    if (((uVar3 & 1) != 0) && (sVar1 = FUN_0282f60c(), sVar1 == 0x54)) {
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_0282075c(in_stack_00000000,in_stack_00000008);
      goto joined_r0x0282123c;
    }
  }
  uVar3 = FUN_0282f8a8();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_0282f680();
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfdb18);
    }
    uVar3 = FUN_028214bc(uVar4);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
LAB_02821338:
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return 0;
}


