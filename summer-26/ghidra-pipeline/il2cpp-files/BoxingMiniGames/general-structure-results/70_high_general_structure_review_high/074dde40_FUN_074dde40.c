/*
FUNCTION_NAME: FUN_074dde40
ENTRY_POINT: 074dde40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_074dde40(long param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined4 param_5
                 ,long param_6,long param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_07ef4490 & 1) == 0) {
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ef4490 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    uStack_78 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_071d6edc(&local_60,uVar1,0,0);
    local_80 = local_60;
    uStack_78 = uStack_58;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_70 = FUN_05c94ef4(param_1,0);
    local_68 = (ulong)*(uint *)(param_1 + 0x10);
    uVar1 = FUN_04d98008(&local_70,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_80,uVar1,local_68 & 0xffffffff,0);
  }
  if (param_4 == 0) {
    local_a0 = 0;
    uStack_98 = 0;
  }
  else if (*(int *)(param_4 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_071d6edc(&local_60,uVar1,0,0);
    local_a0 = local_60;
    uStack_98 = uStack_58;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_90 = FUN_05c94ef4(param_4,0);
    local_88 = (ulong)*(uint *)(param_4 + 0x10);
    uVar1 = FUN_04d98008(&local_90,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_a0,uVar1,local_88 & 0xffffffff,0);
  }
  if (param_6 == 0) {
    local_c0 = 0;
    uStack_b8 = 0;
  }
  else if (*(int *)(param_6 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_071d6edc(&local_60,uVar1,0,0);
    local_c0 = local_60;
    uStack_b8 = uStack_58;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_b0 = FUN_05c94ef4(param_6,0);
    local_a8 = (ulong)*(uint *)(param_6 + 0x10);
    uVar1 = FUN_04d98008(&local_b0,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_c0,uVar1,local_a8 & 0xffffffff,0);
  }
  if (param_7 == 0) {
    local_e0 = 0;
    uStack_d8 = 0;
  }
  else if (*(int *)(param_7 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_60 = 0;
    uStack_58 = 0;
    FUN_071d6edc(&local_60,uVar1,0,0);
    uStack_d8 = uStack_58;
    local_e0 = local_60;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_d0 = FUN_05c94ef4(param_7,0);
    local_c8 = (ulong)*(uint *)(param_7 + 0x10);
    uVar1 = FUN_04d98008(&local_d0,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_e0,uVar1,local_c8 & 0xffffffff,0);
  }
  if (DAT_07ef4498 == (code *)0x0) {
    DAT_07ef4498 = (code *)FUN_03642928(
                                       "UnityEngine.Analytics.Analytics::RegisterEventWithLimit_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Bindings.ManagedSpanWrapper&,System.Boolean)"
                                       );
  }
  (*DAT_07ef4498)(&local_80,param_2,param_3,&local_a0,param_5,&local_c0,&local_e0,param_8 & 1);
  return;
}


