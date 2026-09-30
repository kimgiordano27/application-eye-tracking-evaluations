/*
FUNCTION_NAME: FUN_035599c4
ENTRY_POINT: 035599c4
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


void FUN_035599c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412df4d & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df4d = 1;
  }
  lVar2 = *(long *)(param_7 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar2 != 0) {
    thunk_FUN_0369b650(param_1,param_2,param_3,param_4,lVar2,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
    if (*(long *)(param_7 + 0x110) != 0) {
      FUN_0369d118(param_5,*(long *)(param_7 + 0x110),
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0),0);
      if (*(long *)(param_7 + 0x110) != 0) {
        FUN_0369d118(param_6,*(long *)(param_7 + 0x110),
                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa4),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


