/*
FUNCTION_NAME: FUN_07de9250
ENTRY_POINT: 07de9250
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


void FUN_07de9250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_OVRP_1_57_0_TypeInfo;
  if ((DAT_0899a1b5 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_57_0_TypeInfo);
    DAT_0899a1b5 = 1;
  }
  uVar3 = FUN_0459af60(param_1,0x20008,param_2,*(undefined8 *)puVar1);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_07e04920(*(long *)(param_1 + 0x20),0x28,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = FUN_07dfe1a8(*(long *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar5 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
          uVar2 = FUN_07f6d97c(uVar5,0);
          FUN_07e9eafc(uVar4,uVar2,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  return;
}


