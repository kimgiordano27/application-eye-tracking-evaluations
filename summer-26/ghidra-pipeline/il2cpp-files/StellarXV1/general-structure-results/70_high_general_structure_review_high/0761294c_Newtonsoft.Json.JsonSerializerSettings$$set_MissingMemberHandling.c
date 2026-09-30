/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MissingMemberHandling
ENTRY_POINT: 0761294c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MissingMemberHandling(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x9;
  long *unaff_x20;
  
  (*in_x9)();
  if ((long *)unaff_x20[2] != (long *)0x0) {
    iVar1 = (**(code **)(*(long *)unaff_x20[2] + 0x398))();
    if (iVar1 < 0) {
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar3 = thunk_FUN_040b4efc();
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d8610);
      FUN_075d4b88(uVar3,uVar4,0);
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d8618);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,uVar4);
    }
    (**(code **)(*unaff_x20 + 0x2a8))();
    plVar2 = (long *)unaff_x20[2];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x3d8))(plVar2,iVar1,*(undefined8 *)(*plVar2 + 0x3e0));
      (**(code **)(*unaff_x20 + 0x2f8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


