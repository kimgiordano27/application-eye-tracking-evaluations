/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 01dfad24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeObject<object>(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    FUN_01b47f88();
  }
  else {
    lVar1 = thunk_FUN_01afa70c(**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_01afa9e0(lVar1,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar3,0);
    }
    if (*(uint *)(param_1 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    param_1[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_01b4f09c(param_1 + (long)(int)unaff_w19 + 4,lVar1);
  }
  return;
}


