/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 07a4ff00
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uStack000000000000000c;
  
  puVar1 = PTR_DAT_09f40bf0;
                    /* try { // try from 07a4ff10 to 07b4ff13 has its CatchHandler @ 07a50108 */
                    /* try { // try from 07a4ff14 to 07b4ff1b has its CatchHandler @ 07a500fc */
                    /* try { // try from 07a4ff1c to 07b4ff1f has its CatchHandler @ 07a500ec */
                    /* try { // try from 07a4ff20 to 07b4ff23 has its CatchHandler @ 07a500e8 */
                    /* try { // try from 07a4ff24 to 07b4ff27 has its CatchHandler @ 07a500dc */
                    /* try { // try from 07a4ff28 to 07b4ff2b has its CatchHandler @ 07a500d8 */
  if ((DAT_0a5251cf & 1) == 0) {
                    /* try { // try from 07a4ff2c to 07b4ff2f has its CatchHandler @ 07a500d4 */
                    /* try { // try from 07a4ff30 to 07b4ff33 has its CatchHandler @ 07a500d0 */
    FUN_04447ba8(PTR_DAT_09f40bf0);
    DAT_0a5251cf = 1;
  }
  uStack000000000000000c = 0;
  *param_5 = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_07a3b004(param_1,param_2,param_3,param_4,&stack0x0000000c,0);
  if ((uVar2 & 1) == 0) {
LAB_07a4ff9c:
    uVar3 = 0;
  }
  else {
    if ((param_3 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(char)uStack000000000000000c) goto LAB_07a4ff9c;
    }
    else if (0xff < uStack000000000000000c) goto LAB_07a4ff9c;
    uVar3 = 1;
    *param_5 = (char)uStack000000000000000c;
  }
  return uVar3;
}


