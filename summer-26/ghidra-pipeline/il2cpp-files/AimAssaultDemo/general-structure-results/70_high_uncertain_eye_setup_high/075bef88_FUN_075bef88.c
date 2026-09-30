/*
FUNCTION_NAME: FUN_075bef88
ENTRY_POINT: 075bef88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_075bef88(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_07d95df8;
  if ((DAT_0826e71b & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95df8);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d9acd8);
    FUN_0373b518(OVRPlugin_OVRP_1_124_0_TypeInfo);
    DAT_0826e71b = 1;
  }
  puVar1 = PTR_DAT_07d86548;
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = FUN_062519f8(uVar5,0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x30) != 0)) {
    uVar4 = FUN_060c08a0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_2 + 0x30) == 0) goto LAB_075bf148;
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar3 = FUN_0373ba30(uVar5,0,*(undefined8 *)PTR_DAT_07d9acd8,
                           *(undefined8 *)OVRPlugin_OVRP_1_124_0_TypeInfo);
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar3 = FUN_062519f8(uVar5,0);
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_075aa744(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_075beb8c(param_2);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(puVar1 + 0xe0));
      }
      uVar5 = FUN_0373ba30(uVar5,0,*(undefined8 *)PTR_DAT_07d9acd8,
                           *(undefined8 *)OVRPlugin_OVRP_1_124_0_TypeInfo);
    }
    else {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_075bf148;
      uVar5 = thunk_FUN_0374b7cc(*(long *)(param_2 + 0x10),0);
    }
    FUN_075c007c(param_1,*(undefined8 *)(param_2 + 0x20),uVar5,*(undefined4 *)(param_2 + 0x28),lVar3
                );
    return;
  }
LAB_075bf148:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


