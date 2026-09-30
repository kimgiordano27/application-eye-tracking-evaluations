/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteValueAsync
ENTRY_POINT: 0747d4b4
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonWriter__WriteValueAsync(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
                    /* try { // try from 0747d4bc to 0757d4bf has its CatchHandler @ 0747d4cc */
  lStack0000000000000018 = param_1;
  if ((DAT_0968e1eb & 1) == 0) {
                    /* catch() { ... } // from try @ 0747d4bc with catch @ 0747d4cc */
                    /* try { // try from 0747d4d0 to 0757d4d7 has its CatchHandler @ 0747d4e0 */
    FUN_03f13384(PTR_DAT_09129e40);
                    /* try { // try from 0747d4d8 to 0757d4e3 has its CatchHandler @ 0747d39c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0747d4d0 with catch @ 0747d4e0
                        */
    FUN_03f13384(PTR_DAT_09129e48);
                    /* try { // try from 0747d4e4 to 0757d563 has its CatchHandler @ 0747d4e4
                       catch() { ... } // from try @ 0747d4e4 with catch @ 0747d4e4
                       catch() { ... } // from try @ 0747d5a4 with catch @ 0747d4e4
                       catch() { ... } // from try @ 0747d630 with catch @ 0747d4e4
                       catch() { ... } // from try @ 0747d670 with catch @ 0747d4e4 */
    DAT_0968e1eb = 1;
  }
  in_stack_00000010 = 0;
  if (param_2 == 0) {
    thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
    uVar2 = thunk_FUN_03f4e68c();
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_09123750);
    FUN_0740f0b8(uVar2,uVar3,0);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(long *)(param_1 + 0x18) != param_2) {
        thunk_FUN_03f786f8(PTR_DAT_09111b70);
        uVar2 = thunk_FUN_03f4e68c();
        uVar3 = thunk_FUN_03f786f8(PTR_DAT_09132330);
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                  (uVar2,uVar3,0);
        goto FUN_0747d5f8;
      }
      if (*(char *)(param_2 + 0x54) != '\0') {
        in_stack_00000010 = FUN_061b5d60(param_2,*(undefined8 *)PTR_DAT_09129e48);
        uVar1 = FUN_0611f888(&stack0x00000010,*(undefined8 *)PTR_DAT_09129e40);
        FUN_0747e00c(lStack0000000000000018);
        return uVar1;
      }
    }
                    /* try { // try from 0747d564 to 0757d57f has its CatchHandler @ 0747d638 */
    thunk_FUN_03f786f8(PTR_DAT_0910e988);
    uVar2 = thunk_FUN_03f4e68c();
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_09132330);
    FUN_07419a00(uVar2,uVar3,0);
  }
FUN_0747d5f8:
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_09132338);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar2,uVar3);
}


