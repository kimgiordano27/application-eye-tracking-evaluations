/*
FUNCTION_NAME: FUN_05e5ff5c
ENTRY_POINT: 05e5ff5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e5ff5c(long param_1,long param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_50;
  undefined8 local_48;
  
  if ((DAT_066dc649 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_58__);
    DAT_066dc649 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar2 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06324600);
    FUN_04cee07c(uVar2,uVar3,0);
  }
  else {
    local_48 = 0;
    local_50 = param_2;
    thunk_FUN_02bb0e9c(&local_50,param_2);
    local_48 = param_3;
    thunk_FUN_02bb0e9c(&local_48,param_3);
    if ((param_5 & 1) == 0) {
      if (param_4 == 2) {
        lVar1 = *(long *)(param_1 + 0x20);
        goto joined_r0x05e60054;
      }
      if (param_4 == 1) {
        lVar1 = *(long *)(param_1 + 0x18);
        goto joined_r0x05e60054;
      }
      if (param_4 == 0) {
        lVar1 = *(long *)(param_1 + 0x10);
        goto joined_r0x05e60054;
      }
    }
    else {
      if (param_4 == 2) {
        lVar1 = *(long *)(param_1 + 0x38);
joined_r0x05e60054:
        if (lVar1 != 0) {
          FUN_03c821ac();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (param_4 == 1) {
        lVar1 = *(long *)(param_1 + 0x30);
        goto joined_r0x05e60054;
      }
      if (param_4 == 0) {
        lVar1 = *(long *)(param_1 + 0x28);
        goto joined_r0x05e60054;
      }
    }
    thunk_FUN_02ba3594(PTR_DAT_06320888,local_50,local_48);
    uVar2 = thunk_FUN_02b79644();
    FUN_04d7db04(uVar2,0);
  }
  uVar3 = thunk_FUN_02ba3594(Method_OVRPlugin_<>c_<_cctor>b__810_59__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2,uVar3);
}


