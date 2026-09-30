/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_FloatFormatHandling
ENTRY_POINT: 07a4fc24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_FloatFormatHandling(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w19;
  
  thunk_FUN_044a54b4();
                    /* try { // try from 07a4fc38 to 07b4fc77 has its CatchHandler @ 07a4fc38
                       catch() { ... } // from try @ 07a4fc38 with catch @ 07a4fc38
                       catch() { ... } // from try @ 07a50068 with catch @ 07a4fc38
                       catch() { ... } // from try @ 07a5013c with catch @ 07a4fc38
                       catch() { ... } // from try @ 07a501bc with catch @ 07a4fc38 */
  uVar1 = FUN_07a3ac44();
  if ((unaff_w19 >> 9 & 1) == 0) {
    if (uVar1 == (int)(char)uVar1) {
      return;
    }
  }
  else if (uVar1 < 0x100) {
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f255e0);
  uVar2 = thunk_FUN_0448520c();
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09f40d30);
  FUN_07a4d218(uVar2,uVar3);
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09f44ff0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,uVar3);
}


