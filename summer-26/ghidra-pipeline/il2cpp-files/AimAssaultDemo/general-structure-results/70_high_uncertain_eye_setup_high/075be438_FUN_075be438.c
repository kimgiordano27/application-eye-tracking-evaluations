/*
FUNCTION_NAME: FUN_075be438
ENTRY_POINT: 075be438
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


long FUN_075be438(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0826e708 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d863e8);
    FUN_0373b518(PTR_DAT_07da9a00);
    FUN_0373b518(PTR_DAT_07da8ee0);
    FUN_0373b518(OVRPlugin_OVRP_1_111_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_112_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07da8ed8);
    DAT_0826e708 = 1;
  }
  uVar3 = FUN_060c08a0(param_1,0);
  if ((uVar3 & 1) != 0) {
    return param_1;
  }
  if (param_1 != 0) {
    iVar1 = FUN_060c60fc(param_1,*(undefined8 *)PTR_DAT_07da8ed8,0);
    if (iVar1 == -1) {
      iVar1 = 0x7fffffff;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar1 = FUN_06243eac(iVar1,0x7fffffff,0);
    }
    iVar2 = FUN_060c60fc(param_1,*(undefined8 *)PTR_DAT_07da9a00,0);
    if (iVar2 != -1) {
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar1 = FUN_06243eac(iVar2,iVar1,0);
    }
    iVar2 = FUN_060c60fc(param_1,*(undefined8 *)PTR_DAT_07da8ee0,0);
    if (iVar2 != -1) {
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar1 = FUN_06243eac(iVar2,iVar1,0);
    }
    if ((iVar1 == 0x7fffffff) || (param_1 = FUN_060c316c(param_1,0,iVar1,0), param_1 != 0)) {
      iVar1 = FUN_060c60fc(param_1,*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo,0);
      if (iVar1 == -1) {
        return param_1;
      }
      uVar3 = FUN_060bf018(param_1,*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo,0);
      if ((uVar3 & 1) == 0) {
        return param_1;
      }
      uVar4 = FUN_060c316c(param_1,0,iVar1,0);
      lVar5 = System_Convert__ToInt32(uVar4,*(undefined8 *)OVRPlugin_OVRP_1_112_0_TypeInfo,0);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


