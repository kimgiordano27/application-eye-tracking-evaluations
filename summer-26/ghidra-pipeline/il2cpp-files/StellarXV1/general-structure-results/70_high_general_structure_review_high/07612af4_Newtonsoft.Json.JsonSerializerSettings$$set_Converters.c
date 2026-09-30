/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Converters
ENTRY_POINT: 07612af4
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


void Newtonsoft_Json_JsonSerializerSettings__set_Converters
               (long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    if (iVar1 < param_2) {
      thunk_FUN_040dedf8(PTR_DAT_09288c08);
      uVar3 = thunk_FUN_040b4efc();
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092ac6f8);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092b7018);
      FUN_075d19bc(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d8620);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,uVar4);
    }
    (**(code **)(*unaff_x20 + 0x2b8))();
    (**(code **)(*unaff_x20 + 0x288))();
    plVar2 = (long *)unaff_x20[2];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x3a8))(plVar2,param_2,param_3,*(undefined8 *)(*plVar2 + 0x3b0));
      (**(code **)(*unaff_x20 + 0x2d8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


