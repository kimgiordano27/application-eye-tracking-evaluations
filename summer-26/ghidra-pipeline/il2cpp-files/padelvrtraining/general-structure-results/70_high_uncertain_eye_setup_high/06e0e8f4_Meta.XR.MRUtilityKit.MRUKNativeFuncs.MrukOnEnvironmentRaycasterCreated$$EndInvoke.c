/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnEnvironmentRaycasterCreated$$EndInvoke
ENTRY_POINT: 06e0e8f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated__EndInvoke
               (long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_2 + 0xc) = 0xfffffffe;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    return;
  }
  thunk_FUN_03d1e194(PTR_DAT_091aa550);
  uVar1 = thunk_FUN_03d2ef40();
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091fbde0);
  Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1,param_3);
}


