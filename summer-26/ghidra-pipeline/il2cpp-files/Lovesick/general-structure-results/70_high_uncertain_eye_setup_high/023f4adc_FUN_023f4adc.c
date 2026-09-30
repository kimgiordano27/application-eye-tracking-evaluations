/*
FUNCTION_NAME: FUN_023f4adc
ENTRY_POINT: 023f4adc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023f4adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_2f8 [536];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_68;
  
  local_68 = param_2;
  if ((DAT_0378220a & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_52__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    thunk_FUN_00d48444(Method_WaveFormController_StopListening__);
    thunk_FUN_00d48444(Method_System_DBNull_System_IConvertible_ToUInt32__);
    DAT_0378220a = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  memcpy(auStack_2f8,param_4,0x218);
  lVar4 = FUN_0241cc10(param_1,auStack_2f8,0);
  puVar2 = Method_System_DBNull_System_IConvertible_ToUInt32__;
  if (lVar4 == 0) {
    uVar7 = *param_4;
    uVar1 = param_4[1];
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6720(&local_68,uVar7,uVar1,param_6,param_5,0);
  }
  else {
    uStack_7c = 0;
    uStack_80 = 0;
    lVar5 = *(long *)Method_System_DBNull_System_IConvertible_ToUInt32__;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_84 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_52__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0240fb6c(lVar6,uVar7,*(undefined8 *)Method_WaveFormController_StopListening__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
    }
    FUN_0240edb8(lVar4,param_2,param_3,param_4,param_6,param_5,&local_e0,lVar6,0);
  }
  return;
}


