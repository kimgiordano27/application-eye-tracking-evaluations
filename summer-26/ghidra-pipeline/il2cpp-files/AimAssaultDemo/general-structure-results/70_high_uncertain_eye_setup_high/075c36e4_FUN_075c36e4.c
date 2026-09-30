/*
FUNCTION_NAME: FUN_075c36e4
ENTRY_POINT: 075c36e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_075c36e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_28;
  
  puVar2 = OVRPlugin_OVRP_1_45_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_44_0_TypeInfo;
  if ((DAT_0826e82c & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_44_0_TypeInfo);
    DAT_0826e82c = 1;
  }
  local_28 = 0;
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_049f0684(lVar3,*(undefined8 *)puVar2);
  local_40 = param_1[4];
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  local_28 = lVar3;
  FUN_075c37d0(&local_60,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_049f2ea4(local_28,*(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
    if (DAT_0826e838 == (code *)0x0) {
      DAT_0826e838 = (code *)FUN_0373b4dc(
                                         "UnityEngine.LowLevel.PlayerLoop::SetPlayerLoopInternal(UnityEngine.LowLevel.PlayerLoopSystemInternal[])"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x075c37c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0826e838)(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


