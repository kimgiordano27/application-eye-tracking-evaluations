/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 03390238
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_04533681 & 1) == 0) {
    FUN_01c5d288(Method_FastList<SoundEmitter>_Clear__);
    FUN_01c5d288(Method_FastList<SoundEmitter>_Contains__);
    FUN_01c5d288(Method_FastList<SoundEmitter>_Find__);
    FUN_01c5d288(Method_FastList<SoundEmitter>_RemoveAtFast__);
    DAT_04533681 = 1;
  }
  puVar2 = Method_FastList<SoundEmitter>_Contains__;
  puVar1 = Method_FastList<SoundEmitter>_Clear__;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_02d50a3c(&local_58,*(long *)(param_1 + 0x50),
                 *(undefined8 *)Method_FastList<SoundEmitter>_RemoveAtFast__);
    while (uVar3 = FUN_029fd614(&local_58,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(local_48 + 0x18))
                (*(undefined8 *)(local_48 + 0x40),param_2,param_3,param_4,param_5,
                 *(undefined8 *)(local_48 + 0x28));
    }
    FUN_029fd610(&local_58,*(undefined8 *)puVar1);
  }
  return;
}


