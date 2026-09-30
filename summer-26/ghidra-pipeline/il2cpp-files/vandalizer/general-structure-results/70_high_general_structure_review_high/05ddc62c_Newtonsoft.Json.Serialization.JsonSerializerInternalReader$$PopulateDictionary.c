/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 05ddc62c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ddc734) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  if (in_ZR) {
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_03257e30(PTR_DAT_0759e018);
    uVar3 = thunk_FUN_0325397c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_0718d318,0);
    }
    __cxa_end_catch();
    lVar6 = 0;
  }
  else {
    if (unaff_w23 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_032004d4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0330aab0();
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar6 = *plVar5;
    __cxa_end_catch();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_032004d4();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2388(lVar6);
  }
  return;
}


