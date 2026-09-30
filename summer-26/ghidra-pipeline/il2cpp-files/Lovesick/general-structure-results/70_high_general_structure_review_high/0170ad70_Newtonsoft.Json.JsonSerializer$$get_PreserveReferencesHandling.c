/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_PreserveReferencesHandling
ENTRY_POINT: 0170ad70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_PreserveReferencesHandling
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_01605f64(0,param_2,param_3,0);
  lVar3 = FUN_01605f64(0,param_4,param_5,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  if (DAT_03776618 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_03776618 = '\x01';
  }
  if (lVar3 != 0) {
    uVar4 = FUN_015fd038(lVar3,0);
    uVar4 = FUN_01605f64(0,uVar4,*(undefined4 *)(lVar3 + 0x10),0);
    FUN_0170a734(param_1,lVar2,0,uVar1,uVar4,0,*(undefined4 *)(lVar3 + 0x10),param_6);
    return;
  }
  FUN_01605f64(0,0,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


