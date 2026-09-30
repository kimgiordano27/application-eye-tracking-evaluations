/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 090d4098
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported
          (undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (2 < param_3) {
    if (param_3 < 5) {
      if (param_3 == 3) {
        param_2 = param_2 + 3;
        goto LAB_090d410c;
      }
      if (param_3 == 4) {
        param_2 = param_2 + 4;
        goto LAB_090d410c;
      }
    }
    else {
      if (param_3 == 5) {
        param_2 = param_2 + 5;
        goto LAB_090d410c;
      }
      if (param_3 == 6) {
        param_2 = param_2 + 6;
        goto LAB_090d410c;
      }
    }
    thunk_FUN_049ae08c(PTR_DAT_0ac20520);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac79878);
    FUN_08d7500c(uVar1,uVar2,0);
    puVar3 = PTR_DAT_0ac79880;
LAB_090d418c:
    uVar2 = thunk_FUN_049ae08c(puVar3);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar1,uVar2);
  }
  if (param_3 != 0) {
    if (param_3 != 2) {
      if (param_3 == 1) {
        param_2 = param_2 + 1;
        goto LAB_090d410c;
      }
      thunk_FUN_049ae08c(PTR_DAT_0ac20520);
      uVar1 = thunk_FUN_04983f60();
      uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac59038);
      FUN_08d7500c(uVar1,uVar2,0);
      puVar3 = PTR_DAT_0ac59040;
      goto LAB_090d418c;
    }
    param_2 = param_2 + 2;
  }
LAB_090d410c:
  return *param_2;
}


