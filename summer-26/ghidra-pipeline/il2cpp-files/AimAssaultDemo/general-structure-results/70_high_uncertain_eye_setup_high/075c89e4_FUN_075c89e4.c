/*
FUNCTION_NAME: FUN_075c89e4
ENTRY_POINT: 075c89e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_075c89e4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_07d95df0;
  if ((DAT_0826ea6b & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95df0);
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(PTR_DAT_07d86528);
    FUN_0373b518(OVRPlugin_OVRP_1_96_0_TypeInfo);
    DAT_0826ea6b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_07d86440;
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    lVar2 = *(long *)OVRPlugin_OVRP_1_96_0_TypeInfo;
    if (param_1 != 0) {
      lVar2 = param_1;
    }
    if (param_2 != 0) {
      lVar2 = FUN_060c1430(param_2,*(undefined8 *)PTR_DAT_07d86528,lVar2,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0755e8a8(lVar2,0);
    return;
  }
  thunk_FUN_037a15ac(OVRPlugin_OVRP_1_97_0_TypeInfo);
  uVar3 = thunk_FUN_037788cc();
  FUN_075c8b04(uVar3,param_1,param_2);
  uVar4 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_98_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar3,uVar4);
}


