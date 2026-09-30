/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 01bbbecc
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar2 = *(uint *)(lVar7 + 0x18);
  if (0 < (long)((ulong)uVar2 << 0x20)) {
    uVar6 = 0;
    bVar3 = true;
    do {
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar1 = uVar6 * 2;
      uVar6 = uVar6 + 1;
      bVar3 = (bool)(bVar3 & *(short *)(lVar7 + 0x20 + lVar1) == 0);
    } while ((long)uVar6 < (long)(int)uVar2);
    if (!bVar3) {
      thunk_FUN_0159f088(PTR_DAT_06da2b60);
      uVar4 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06e02600);
      FUN_04437484(uVar4,uVar5,0);
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06dd8c68);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar4,uVar5);
    }
  }
  return;
}


