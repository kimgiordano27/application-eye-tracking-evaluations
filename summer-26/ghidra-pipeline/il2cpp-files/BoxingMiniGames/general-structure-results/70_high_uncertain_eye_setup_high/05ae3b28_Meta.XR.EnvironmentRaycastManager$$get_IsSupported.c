/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 05ae3b28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_EnvironmentRaycastManager__get_IsSupported
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((int)param_5 < (int)(param_6 + param_5)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = (long)(int)(param_6 + param_5) - (long)(int)param_5;
    puVar3 = (undefined8 *)(param_2 + (long)(int)param_5 * 0x10 + 0x28);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar1 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,puVar3[-1],*puVar3,param_3,param_4,
                         *(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        return param_5;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 2;
      param_5 = param_5 + 1;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


