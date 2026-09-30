/*
FUNCTION_NAME: FUN_0685b418
ENTRY_POINT: 0685b418
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_0685b418(long *param_1,uint param_2,ulong param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_071d6b58 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_02f07e70(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_071d6b58 = 1;
  }
  if (param_2 != 0) {
    if (param_2 == 6) {
      FUN_04710798(param_1,*(undefined8 *)OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    }
    else if (param_2 == 1) {
      FUN_047106f0(param_1,*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo);
    }
    else {
      fVar2 = (float)FUN_04710798(param_1,*(undefined8 *)
                                           OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo)
      ;
      fVar3 = (float)FUN_047106f0(param_1,*(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo);
      puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      fVar2 = (fVar2 - fVar3) * DAT_013f6e08;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_50_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar2 = (float)FUN_04711368(ABS(fVar2),*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      if ((param_2 == 5) || (param_2 == 2)) {
        fVar3 = (float)(**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
        fVar3 = fVar2 * fVar3;
      }
      else {
        fVar3 = fVar2 * 10.0;
        if ((param_3 & 1) == 0) {
          fVar3 = fVar2;
        }
      }
      fVar2 = -fVar3;
      if ((param_2 & 0xfffffffe) != 2) {
        fVar2 = fVar3;
      }
      fVar4 = (float)(**(code **)(*param_1 + 0x7e8))(param_1,*(undefined8 *)(*param_1 + 0x7f0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_04711464(fVar2 * DAT_013f6b60 + fVar4,ABS(fVar3),
                   *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    }
                    /* WARNING: Could not recover jumptable at 0x0685b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7f8))(param_1,*(undefined8 *)(*param_1 + 0x800));
    return;
  }
  return;
}


