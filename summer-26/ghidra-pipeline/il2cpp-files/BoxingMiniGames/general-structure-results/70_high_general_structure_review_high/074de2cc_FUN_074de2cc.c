/*
FUNCTION_NAME: FUN_074de2cc
ENTRY_POINT: 074de2cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_074de2cc(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_07ef4491 & 1) == 0) {
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07ef4491 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 == 0) {
    local_60 = 0;
    uStack_58 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_40 = 0;
    uStack_38 = 0;
    FUN_071d6edc(&local_40,uVar1,0,0);
    local_60 = local_40;
    uStack_58 = uStack_38;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_50 = FUN_05c94ef4(param_1,0);
    local_48 = (ulong)*(uint *)(param_1 + 0x10);
    uVar1 = FUN_04d98008(&local_50,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_60,uVar1,local_48 & 0xffffffff,0);
  }
  if (param_4 == 0) {
    local_80 = 0;
    uStack_78 = 0;
  }
  else if (*(int *)(param_4 + 0x10) == 0) {
    uVar1 = FUN_05e7282c(1,0);
    uVar1 = FUN_05e72830(uVar1,0);
    local_40 = 0;
    uStack_38 = 0;
    FUN_071d6edc(&local_40,uVar1,0,0);
    uStack_78 = uStack_38;
    local_80 = local_40;
  }
  else {
    if (DAT_07eddfaf == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07eddfaf = '\x01';
    }
    local_70 = FUN_05c94ef4(param_4,0);
    local_68 = (ulong)*(uint *)(param_4 + 0x10);
    uVar1 = FUN_04d98008(&local_70,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_071d6edc(&local_80,uVar1,local_68 & 0xffffffff,0);
  }
  if (DAT_07ef44a0 == (code *)0x0) {
    DAT_07ef44a0 = (code *)FUN_03642928(
                                       "UnityEngine.Analytics.Analytics::SendEventWithLimit_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Object,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                       );
  }
  (*DAT_07ef44a0)(&local_60,param_2,param_3,&local_80);
  return;
}


