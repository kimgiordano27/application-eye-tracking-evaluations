/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_100
ENTRY_POINT: 05176d14
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_100(code *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x22;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_02d9d7f0();
    *(code **)(unaff_x22 + 0x170) = param_1;
  }
  if (param_2 == 0) {
    uVar2 = (*param_1)(0,unaff_w19);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x18);
    puVar1 = malloc(uVar4 * 8 + 8);
    puVar1[uVar4] = 0;
    if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      puVar3 = (undefined8 *)(param_2 + 0x20);
      puVar5 = puVar1;
      do {
        uVar2 = thunk_FUN_02d9db10(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar5 = uVar2;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    uVar2 = (**(code **)(unaff_x22 + 0x170))(puVar1,unaff_w19);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar3 = puVar1;
      do {
        thunk_FUN_02d9db04(*puVar3);
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    thunk_FUN_02d9db04(puVar1);
  }
  return uVar2;
}


