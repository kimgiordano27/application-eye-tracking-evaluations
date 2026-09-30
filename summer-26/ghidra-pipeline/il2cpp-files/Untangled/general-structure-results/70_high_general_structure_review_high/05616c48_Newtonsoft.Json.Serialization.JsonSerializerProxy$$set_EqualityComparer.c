/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 05616c48
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_06d52350;
  iVar4 = *param_1;
  iVar3 = iVar4 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = FUN_0492e29c(&stack0x00000008,iVar4,*(undefined8 *)puVar1);
  } while (lVar2 == 0);
  if (lVar2 < 1) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling:
    iVar4 = 3;
  }
  else {
    iVar4 = 3;
    do {
      lVar2 = lVar2 * 0x10000;
      iVar4 = iVar4 + -1;
    } while (0 < lVar2);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 + iVar3;
}


