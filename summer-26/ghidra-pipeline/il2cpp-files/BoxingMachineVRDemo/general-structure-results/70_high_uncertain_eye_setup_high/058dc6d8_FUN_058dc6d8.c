/*
FUNCTION_NAME: FUN_058dc6d8
ENTRY_POINT: 058dc6d8
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


void FUN_058dc6d8(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_28;
  
  if ((DAT_06b80b36 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    DAT_06b80b36 = 1;
  }
  local_28 = 0;
  if (((param_2 != 0) && (lVar2 = FUN_0582a780(param_2,0), lVar2 != 0)) &&
     ((uVar3 = FUN_060664f4(param_1,0), puVar1 = OVRPlugin_OVRP_1_45_0_TypeInfo, (uVar3 & 1) != 0 ||
      ((param_3 & 1) != 0)))) {
    lVar4 = *(long *)OVRPlugin_OVRP_1_45_0_TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_058dc84c;
    uVar3 = FUN_048e9428(lVar4,lVar2,&local_28,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if (((int)local_28 + -1 == 0) && ((local_28 & 0x100000000) != 0)) {
        FUN_0581536c(lVar2,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_058dc84c;
        FUN_048e8df4(lVar4,lVar2,*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
      }
      else {
        lVar4 = *(long *)puVar1;
        local_28 = CONCAT44(local_28._4_4_,(int)local_28 + -1);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) {
LAB_058dc84c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_048e7954(lVar4,lVar2,local_28,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
      }
    }
  }
  return;
}


