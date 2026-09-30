/*
FUNCTION_NAME: FUN_00c64830
ENTRY_POINT: 00c64830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_00c64830(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  if ((DAT_037816df & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_132__);
    DAT_037816df = 1;
  }
  uVar2 = thunk_FUN_00d62b54(*param_1);
  *param_2 = uVar2;
  thunk_FUN_00d62b54(*param_1);
  param_2[1] = param_1[1];
  *(bool *)(param_2 + 2) = *(int *)(param_1 + 2) != 0;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_132__;
  if (param_1[3] != 0) {
    lVar3 = param_2[3];
    if (lVar3 == 0) {
      uVar2 = FUN_00da4fb8(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_132__,1);
      param_2[3] = uVar2;
      FUN_00da4fb8(*(undefined8 *)puVar1,1);
      lVar3 = param_2[3];
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      puVar4 = (undefined4 *)(lVar3 + 0x20);
      puVar5 = (undefined4 *)param_1[3];
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


