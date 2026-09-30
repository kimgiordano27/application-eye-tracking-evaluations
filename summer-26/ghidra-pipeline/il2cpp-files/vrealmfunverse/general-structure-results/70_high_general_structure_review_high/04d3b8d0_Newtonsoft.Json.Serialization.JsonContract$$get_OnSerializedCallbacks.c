/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 04d3b8d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  do {
    if (param_1 == 10) {
LAB_04d3b948:
      if (unaff_x19 != (long *)0x0) goto LAB_04d3b94c;
      goto LAB_04d3b964;
    }
    if (param_1 == 0xd) {
      iVar1 = (**(code **)(*unaff_x20 + 0x1c8))();
      if (iVar1 == 10) {
        (**(code **)(*unaff_x20 + 0x1d8))();
      }
      goto LAB_04d3b948;
    }
    if (unaff_x19 == (long *)0x0) goto LAB_04d3b964;
    FUN_04c171d4();
    param_1 = (**(code **)(*unaff_x20 + 0x1d8))();
  } while (param_1 != -1);
  if (unaff_x19 != (long *)0x0) {
    iVar1 = FUN_04c1555c();
    if (iVar1 < 1) {
      return 0;
    }
LAB_04d3b94c:
                    /* WARNING: Could not recover jumptable at 0x04d3b960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*unaff_x19 + 0x168))();
    return uVar2;
  }
LAB_04d3b964:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


