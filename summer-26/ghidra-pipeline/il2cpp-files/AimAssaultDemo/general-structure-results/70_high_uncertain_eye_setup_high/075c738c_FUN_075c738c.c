/*
FUNCTION_NAME: FUN_075c738c
ENTRY_POINT: 075c738c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_075c738c(undefined8 param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  int local_24;
  
  local_24 = param_2;
  if ((DAT_0826e8e9 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d97640);
    DAT_0826e8e9 = 1;
  }
  local_28 = 0;
  if ((param_2 != -1) || ((param_3 & 1) == 0)) {
    if (param_2 < 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d92788);
      uVar2 = thunk_FUN_037788cc();
      uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_89_0_TypeInfo);
      FUN_0623e69c(uVar2,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_8_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar2,uVar3);
    }
    if (*(int *)(*(long *)PTR_DAT_07d97640 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (DAT_0826e968 == (code *)0x0) {
      DAT_0826e968 = (code *)FUN_0373b4dc("UnityEngine.Playables.PlayableHandle::GetInputCount()");
    }
    iVar1 = (*DAT_0826e968)(param_1);
    if (iVar1 <= param_2) {
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d86518);
      uVar2 = RootMotion_FinalIK_Finger___ctor(uVar2,5);
      FUN_031a5e18();
      uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_90_0_TypeInfo);
      FUN_031b73c0(uVar2,0,uVar3);
      uVar3 = FUN_06240534(&local_24,0);
      FUN_031a5e18(uVar2);
      FUN_031b73c0(uVar2,1,uVar3);
      FUN_031a5e18(uVar2);
      uVar3 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_91_0_TypeInfo);
      FUN_031b73c0(uVar2,2,uVar3);
      thunk_FUN_037a15ac(PTR_DAT_07d97640);
      FUN_031ae340();
      local_28 = FUN_075c75b4(param_1);
      uVar3 = FUN_06240534(&local_28,0);
      FUN_031a5e18(uVar2);
      FUN_031b73c0(uVar2,3,uVar3);
      FUN_031a5e18(uVar2);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d8b688);
      FUN_031b73c0(uVar2,4,uVar3);
      uVar2 = FUN_060c1cd4(uVar2,0);
      thunk_FUN_037a15ac(PTR_DAT_07d92788);
      uVar3 = thunk_FUN_037788cc();
      FUN_0623e69c(uVar3,uVar2,0);
      uVar2 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_8_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,uVar2);
    }
  }
  return 1;
}


