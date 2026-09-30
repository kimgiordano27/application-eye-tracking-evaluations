/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 01bc1a14
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
               (long *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000722bcef & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dd5f40);
    thunk_FUN_0159f088(PTR_DAT_06df1b08);
    bRam000000000722bcef = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06df1b08 + 300);
    if ((bVar1 <= *(byte *)(*param_1 + 300)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06df1b08))
    {
      lVar2 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dd5f40);
      if (lVar2 != 0) {
        FUN_01bc16bc(lVar2,param_1);
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar2 = FUN_01bc1b20(param_1,0x14,param_2);
    return lVar2;
  }
  thunk_FUN_0159f088(PTR_DAT_06e01970);
  uVar3 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar4 = thunk_FUN_0159f088(PTR_DAT_06db5388);
  FUN_028f2804(uVar3,uVar4,0);
  uVar4 = thunk_FUN_0159f088(PTR_DAT_06e21840);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,uVar4);
}


