/*
FUNCTION_NAME: FUN_058dc850
ENTRY_POINT: 058dc850
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_058dc850(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_18;
  
  if ((DAT_06b80b35 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    DAT_06b80b35 = 1;
  }
  local_18 = 0;
  if ((param_2 != 0) &&
     (lVar2 = FUN_0582a780(param_2,0), puVar1 = OVRPlugin_OVRP_1_45_0_TypeInfo, lVar2 != 0)) {
    lVar3 = *(long *)OVRPlugin_OVRP_1_45_0_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
LAB_058dc9b4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = FUN_048e9428(lVar3,lVar2,&local_18,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_05814924(lVar2,0);
      lVar3 = *(long *)puVar1;
      local_18 = 0x100000001;
      if ((uVar4 & 1) != 0) {
        local_18 = 1;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_058dc9b4;
      FUN_048e7968(lVar3,lVar2,local_18,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
    }
    else {
      lVar3 = *(long *)puVar1;
      local_18 = CONCAT44(local_18._4_4_,(int)local_18 + 1);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_058dc9b4;
      FUN_048e7954(lVar3,lVar2,local_18,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
    }
    FUN_058152e4(lVar2,0);
  }
  return;
}


