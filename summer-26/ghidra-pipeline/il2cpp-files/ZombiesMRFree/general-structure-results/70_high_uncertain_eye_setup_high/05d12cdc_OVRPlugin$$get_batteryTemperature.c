/*
FUNCTION_NAME: OVRPlugin$$get_batteryTemperature
ENTRY_POINT: 05d12cdc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_batteryTemperature
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,long *param_7,undefined8 param_8,
               undefined8 param_9,ulong param_10,undefined8 param_11,undefined1 param_12 [16],
               ulong param_13,undefined8 param_14,undefined1 param_15 [16],undefined8 param_16,
               undefined8 param_17,undefined8 param_18,undefined4 param_19,ulong param_20,
               undefined4 param_21)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_07398852 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f98e20);
    DAT_07398852 = 1;
  }
  param_21 = 0;
  param_20 = 0;
  param_16 = 0;
  param_17 = 0;
  param_19 = 0;
  param_18 = 0;
  if (*(long *)(param_2 + 0x140) != 0) {
    uVar3 = FUN_05d114a8(param_1,*(undefined4 *)(param_2 + 0xdc),*(long *)(param_2 + 0x140),param_3,
                         param_4,param_6,param_7);
    if ((uVar3 & 1) != 0) {
      return;
    }
    FUN_05cc3570(&param_13,param_3,param_4,0);
    uVar1 = param_15._0_4_;
    lVar5 = *param_7;
    if (lVar5 != 0) {
      uVar7 = (undefined4)(param_13 >> 0x20);
      *(undefined1 *)(lVar5 + 0x10) = 0;
      uVar8 = (undefined4)param_14;
      uVar6 = FUN_05d12e6c(param_13 & 0xffffffff,*(undefined8 *)(param_2 + 0x138),&param_20);
      uVar2 = param_21;
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uVar7;
      *(undefined4 *)(lVar5 + 0x44) = uVar8;
      uVar3 = param_20 & 0xffffffff;
      uVar8 = param_20._4_4_;
      if (*(int *)(*(long *)PTR_DAT_06f98e20 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06902890(uVar3,uVar8,uVar2,param_14._4_4_,uVar1,param_15._4_8_ & 0xffffffff,param_15._8_4_
                   ,&param_16,0);
      if (*(long *)(param_2 + 200) != 0) {
        lVar5 = *param_7;
        uVar4 = FUN_068f5d7c(*(long *)(param_2 + 200),0);
        FUN_05cc37e4(uVar4,&param_16,0);
        param_14._0_4_ = (undefined4)param_11;
        param_13 = param_10;
        param_15._0_4_ = param_12._0_4_;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x34) = param_12._4_8_;
          *(ulong *)(lVar5 + 0x2c) = CONCAT44(param_12._0_4_,param_11._4_4_);
          *(undefined8 *)(lVar5 + 0x28) = param_11;
          *(ulong *)(lVar5 + 0x20) = param_10;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


