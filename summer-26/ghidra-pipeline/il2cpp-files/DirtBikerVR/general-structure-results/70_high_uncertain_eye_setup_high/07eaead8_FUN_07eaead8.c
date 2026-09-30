/*
FUNCTION_NAME: FUN_07eaead8
ENTRY_POINT: 07eaead8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07eaead8(undefined4 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_0899ac14 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_0899ac14 = 1;
  }
  *(undefined8 *)(param_2 + 0x28) = param_3;
  thunk_FUN_03afed3c((undefined8 *)(param_2 + 0x28),param_3);
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x28) != 0)) {
    uVar3 = FUN_07e2d9a0(*(long *)(param_4 + 0x28),0);
    *(undefined8 *)(param_2 + 0x30) = uVar3;
    thunk_FUN_03afed3c();
    uVar1 = *(undefined4 *)(param_4 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07eaebc0(param_3,uVar1);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(param_2 + 0x38),uVar3);
    if (*(long *)(param_2 + 0x20) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
      *puVar4 = param_5;
      thunk_FUN_03afed3c(puVar4,param_5);
      *(undefined4 *)(param_2 + 0x58) = param_1;
      FUN_07eaed7c(param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


