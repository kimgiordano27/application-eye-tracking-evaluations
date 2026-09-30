/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 04d0cfa8
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


long Newtonsoft_Json_JsonTextReader__ParsePostValue(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  
  uVar1 = thunk_FUN_04c08854(param_2,**(undefined8 **)(param_1 + 0x270),0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,1);
    if (lVar2 == 0) goto LAB_04d0d050;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_04d0d04c;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(unaff_x20 + 100);
  }
  else {
    lVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,2);
    if (lVar2 == 0) {
LAB_04d0d050:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(int *)(lVar2 + 0x18) == 0) ||
       (*(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(unaff_x20 + 100),
       *(int *)(lVar2 + 0x18) == 1)) {
LAB_04d0d04c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined4 *)(lVar2 + 0x24) = 8;
  }
  thunk_FUN_02b4aae0();
  *unaff_x19 = lVar2;
  thunk_FUN_02bb0e9c();
  lVar2 = *unaff_x19;
  thunk_FUN_02b4aae0();
  return lVar2;
}


