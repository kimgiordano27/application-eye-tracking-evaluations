/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_105
ENTRY_POINT: 02820a10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_<>c__<_cctor>b__710_105
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cfdb18);
    FUN_01ab69ac(PTR_DAT_03cfe810);
    FUN_01ab69ac(PTR_DAT_03cfe818);
    *(undefined1 *)(unaff_x24 + 0x3be) = 1;
  }
  if ((int)((ulong)param_3 >> 0x20) < 1) goto LAB_02820bf8;
  sVar2 = FUN_0282f60c();
  if (sVar2 == 0x2f) {
    if (((8 < uStack0000000000000008._4_4_) &&
        (uVar4 = FUN_0282f724(uStack0000000000000000,uStack0000000000000008,
                              *(undefined8 *)PTR_DAT_03cfe818,0), (uVar4 & 1) != 0)) &&
       (uVar4 = FUN_0282f7e4(uStack0000000000000000,uStack0000000000000008,
                             *(undefined8 *)PTR_DAT_03cfe810,0), uVar1 = uStack0000000000000008,
       uVar5 = uStack0000000000000000, (uVar4 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_02820c18(uVar5,uVar1,param_4);
joined_r0x02820af4:
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (uStack0000000000000008._4_4_ - 0x13U < 0x16) {
    uVar3 = FUN_0282f60c();
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc02b0);
    }
    uVar4 = FUN_026b1a64(uVar3,0);
    if (((uVar4 & 1) != 0) &&
       (sVar2 = FUN_0282f60c(), uVar1 = uStack0000000000000008, uVar5 = uStack0000000000000000,
       sVar2 == 0x54)) {
      if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_02820220(uVar5,uVar1,param_4);
      goto joined_r0x02820af4;
    }
  }
  uVar4 = FUN_0282f8a8();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_0282f680();
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfdb18);
    }
    uVar4 = FUN_02820d84(uVar5,param_4);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
LAB_02820bf8:
  *unaff_x19 = 0;
  return 0;
}


