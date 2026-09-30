/*
FUNCTION_NAME: FUN_075c4c50
ENTRY_POINT: 075c4c50
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


void FUN_075c4c50(undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0826e84f & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d867b8);
    FUN_0373b518(PTR_DAT_07d889a0);
    FUN_0373b518(OVRPlugin_OVRP_1_73_0_TypeInfo);
    DAT_0826e84f = 1;
  }
  puVar1 = PTR_DAT_07d889a0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if ((long)param_2 < 0) {
      uVar2 = FUN_0373b7c4();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar2,*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
    }
    uVar2 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d867b8,param_2 & 0xffffffff);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    FUN_061628d0(param_1,uVar2,0,param_2 & 0xffffffff,0);
  }
  lVar3 = FUN_075c3a1c();
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x18);
    local_40 = 0;
    uStack_38 = 0;
    FUN_0623b108(&local_40,param_4,0);
    if (lVar3 != 0) {
      FUN_075c4d68(lVar3,local_40,uStack_38,uVar2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


