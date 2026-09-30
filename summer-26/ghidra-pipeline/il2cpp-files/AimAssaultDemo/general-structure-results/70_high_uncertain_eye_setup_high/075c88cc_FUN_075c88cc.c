/*
FUNCTION_NAME: FUN_075c88cc
ENTRY_POINT: 075c88cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_075c88cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_07d97670;
  local_30 = param_2;
  uStack_28 = param_3;
  if ((DAT_0826ea69 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_93_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97670);
    DAT_0826ea69 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0826e9f0 == (code *)0x0) {
    DAT_0826e9f0 = (code *)FUN_0373b4dc("UnityEngine.Playables.PlayableOutputHandle::IsValid()");
  }
  uVar3 = (*DAT_0826e9f0)(&local_30);
  puVar2 = OVRPlugin_OVRP_1_93_0_TypeInfo;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_041367a4(&local_30,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8a908);
      uVar4 = thunk_FUN_037788cc();
      uVar5 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_94_0_TypeInfo);
      FUN_06240354(uVar4,uVar5,0);
      uVar5 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_95_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar5);
    }
  }
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


