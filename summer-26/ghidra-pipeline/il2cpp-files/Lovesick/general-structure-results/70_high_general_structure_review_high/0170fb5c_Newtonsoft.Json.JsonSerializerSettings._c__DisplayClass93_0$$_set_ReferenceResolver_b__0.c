/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 0170fb5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  *(undefined1 *)(unaff_x20 + 0xa04) = 1;
  lVar1 = *(long *)(unaff_x19 + 0xa0);
  if ((lVar1 == 0) && (lVar1 = FUN_0170e484(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar1 = FUN_017959a4(lVar1,0);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_033ea8a0;
    lVar2 = thunk_FUN_00d6225c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar1,uVar3);
    }
  }
  return;
}


