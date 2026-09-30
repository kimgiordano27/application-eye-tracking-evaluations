/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Culture
ENTRY_POINT: 0718d284
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture
              (undefined1 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint unaff_w19;
  int unaff_w20;
  int iVar3;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  while( true ) {
    lVar1 = FUN_0662adb0(param_1,param_2,param_3);
    iVar3 = unaff_w20 + -4;
    unaff_w19 = unaff_w19 - 1;
    if (lVar1 != 0) break;
    if ((int)unaff_w19 < 0) goto LAB_0718d2b4;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_3 = *unaff_x21;
    param_1 = &stack0x00000008;
    param_2 = (ulong)unaff_w19;
    unaff_w20 = iVar3;
  }
  iVar3 = unaff_w20;
  if (lVar1 < 1) {
LAB_0718d2b4:
    iVar2 = 3;
    unaff_w20 = iVar3;
  }
  else {
    iVar2 = 3;
    do {
      lVar1 = lVar1 * 0x10000;
      iVar2 = iVar2 + -1;
    } while (0 < lVar1);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + unaff_w20;
}


