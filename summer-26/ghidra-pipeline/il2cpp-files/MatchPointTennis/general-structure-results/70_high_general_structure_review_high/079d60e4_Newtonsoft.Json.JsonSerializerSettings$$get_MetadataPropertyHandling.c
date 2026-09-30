/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 079d60e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long *unaff_x20;
  
  if (param_1 <= unaff_w19) {
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar2 = thunk_FUN_0448520c();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25228);
    FUN_0799a4bc(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42d50);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar3);
  }
  plVar1 = (long *)unaff_x20[2];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,unaff_w19,*(undefined8 *)(*plVar1 + 0x2f0));
    (**(code **)(*unaff_x20 + 0x2b8))();
    (**(code **)(*unaff_x20 + 0x2a8))();
    plVar1 = (long *)unaff_x20[2];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x3d8))(plVar1,unaff_w19,*(undefined8 *)(*plVar1 + 0x3e0));
      (**(code **)(*unaff_x20 + 0x2f8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


