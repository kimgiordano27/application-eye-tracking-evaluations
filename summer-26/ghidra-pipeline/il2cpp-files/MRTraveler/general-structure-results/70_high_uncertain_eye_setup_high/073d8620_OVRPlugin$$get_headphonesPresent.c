/*
FUNCTION_NAME: OVRPlugin$$get_headphonesPresent
ENTRY_POINT: 073d8620
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__get_headphonesPresent
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
          undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined1 param_11 [16],undefined8 param_12,undefined8 param_13,
          undefined1 param_14 [16],undefined8 param_15,undefined4 param_16,undefined8 param_17,
          undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined8 param_21,
          undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined8 param_25,
          undefined4 param_26)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000084;
  
  puVar1 = PTR_DAT_08eb58a8;
  if ((DAT_0941e71a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb58a8);
    DAT_0941e71a = 1;
  }
  param_21 = 0;
  param_22 = 0;
  uStack000000000000007c = 0;
  param_24 = 0;
  param_23 = 0;
  uStack0000000000000084 = 0;
  param_17 = 0;
  param_18 = 0;
  uStack000000000000005c = 0;
  param_20 = 0;
  param_19 = 0;
  uStack0000000000000064 = 0;
  param_16 = 0;
  param_15 = 0;
  fVar5 = *param_4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (fVar5 == 1.0) {
    if (param_7 == 0) {
LAB_073d8800:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    pcVar4 = *(code **)(param_7 + 0x18);
    uVar2 = *(undefined8 *)(param_7 + 0x40);
    uVar3 = *(undefined8 *)(param_7 + 0x28);
  }
  else {
    fVar5 = *param_4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (param_6 == 0) goto LAB_073d8800;
    if (fVar5 != 0.0) {
      (**(code **)(param_6 + 0x18))
                (&param_12,*(undefined8 *)(param_6 + 0x40),param_1,param_5,
                 *(undefined8 *)(param_6 + 0x28));
      param_22 = (undefined4)param_13;
      param_21 = param_12;
      uStack0000000000000084 = (undefined4)param_14._4_8_;
      param_24 = SUB84(param_14._4_8_,4);
      uStack000000000000007c = param_13._4_4_;
      param_23 = param_14._0_4_;
      if (param_7 == 0) goto LAB_073d8800;
      (**(code **)(param_7 + 0x18))
                (&param_12,*(undefined8 *)(param_7 + 0x40),param_1,param_5,
                 *(undefined8 *)(param_7 + 0x28));
      param_18 = (undefined4)param_13;
      param_17 = param_12;
      uStack0000000000000064 = (undefined4)param_14._4_8_;
      param_20 = SUB84(param_14._4_8_,4);
      param_19 = param_14._0_4_;
      FUN_073d8804(&param_12,*param_4,&param_17,&param_21,param_1,param_2,&param_15);
      *(undefined8 *)((long)param_3 + 0x14) = param_14._4_8_;
      *(ulong *)((long)param_3 + 0xc) = CONCAT44(param_14._0_4_,param_13._4_4_);
      param_3[1] = CONCAT44(param_13._4_4_,(undefined4)param_13);
      *param_3 = param_12;
      param_25 = param_15;
      goto LAB_073d8738;
    }
    pcVar4 = *(code **)(param_6 + 0x18);
    uVar2 = *(undefined8 *)(param_6 + 0x40);
    uVar3 = *(undefined8 *)(param_6 + 0x28);
  }
  (*pcVar4)(uVar2,param_1,param_5,uVar3);
  param_14._0_4_ = param_11._0_4_;
  param_13._0_4_ = (undefined4)param_10;
  param_12 = param_9;
  param_3[1] = param_10;
  *param_3 = param_9;
  *(undefined8 *)((long)param_3 + 0x14) = param_11._4_8_;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(param_11._0_4_,param_10._4_4_);
  param_26 = 0;
  param_25 = 0;
  FUN_073d40f4(*param_4,&param_25,param_1,param_3,param_2);
LAB_073d8738:
  return (undefined4)param_25;
}


