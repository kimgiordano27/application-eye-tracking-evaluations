/*
FUNCTION_NAME: FUN_075be6ec
ENTRY_POINT: 075be6ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075be6ec(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  FUN_062855bc(param_1,0);
  uVar1 = FUN_06176284(param_3,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar1 = FUN_061760a4(param_3,0);
    if ((uVar1 & 1) != 0) {
      if (param_2 == 0) {
        return;
      }
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar2 = thunk_FUN_037788cc();
      uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_114_0_TypeInfo);
      FUN_061a843c(uVar2,uVar3,0);
      goto LAB_075be7c8;
    }
    if (param_2 != 0) {
      return;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar2 = thunk_FUN_037788cc();
    puVar4 = PTR_DAT_07d98798;
  }
  else {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar2 = thunk_FUN_037788cc();
    puVar4 = PTR_DAT_07d97c10;
  }
  uVar3 = thunk_FUN_037a15ac(puVar4);
  FUN_061a1b40(uVar2,uVar3,0);
LAB_075be7c8:
  uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_115_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar3);
}


