/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 0744ad5c
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_ContractResolver(long param_1)

{
  undefined8 uVar1;
  int in_w8;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_03f6fea8();
    param_1 = *unaff_x20;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x38) == 0) {
    uVar1 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09131058);
    FUN_0744ade0(uVar1,0,*(undefined8 *)PTR_DAT_09131050);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    AlterEyes_ColorACube_UserSettings_UserSettingsUIToggle__GetValue(uVar1);
    FUN_03f133a4();
    param_1 = *unaff_x20;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    param_1 = *unaff_x20;
  }
                    /* try { // try from 0744adcc to 0754adcf has its CatchHandler @ 0744ae28 */
  return *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x38);
}


