/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 0710eb50
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(undefined8 param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000009842be6 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09208b18);
    bRam0000000009842be6 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091ae728);
    FUN_070c4c34(uVar1,uVar2,0);
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0920fd48);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar1,uVar2);
  }
  if (param_3 == 0x10000000) {
    if (*(int *)(*(long *)PTR_DAT_09208b18 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0710e538(param_2);
    return;
  }
  if (param_3 == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x0710ebbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    return;
  }
  FUN_0710e984(param_1,param_2,param_3);
  return;
}


