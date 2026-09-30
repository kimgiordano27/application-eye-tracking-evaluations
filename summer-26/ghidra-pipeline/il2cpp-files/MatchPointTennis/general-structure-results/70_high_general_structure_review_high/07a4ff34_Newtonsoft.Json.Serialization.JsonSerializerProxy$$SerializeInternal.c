/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 07a4ff34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char *unaff_x19;
  uint unaff_w20;
  long *unaff_x24;
  long unaff_x25;
  uint uStack000000000000000c;
  
                    /* try { // try from 07a4ff34 to 07b4ff37 has its CatchHandler @ 07a500b4 */
  FUN_04447ba8();
                    /* try { // try from 07a4ff38 to 07b4ff3b has its CatchHandler @ 07a500b0 */
                    /* try { // try from 07a4ff3c to 07b4ff3f has its CatchHandler @ 07a500ac */
  *(undefined1 *)(unaff_x25 + 0x1cf) = 1;
                    /* try { // try from 07a4ff40 to 07b4ff43 has its CatchHandler @ 07a500a8 */
  uStack000000000000000c = 0;
                    /* try { // try from 07a4ff44 to 07b4ff57 has its CatchHandler @ 07a50098 */
  *unaff_x19 = '\0';
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
                    /* try { // try from 07a4ff5c to 07b4ff93 has its CatchHandler @ 07a50094 */
  uVar1 = FUN_07a3b004();
  if ((uVar1 & 1) == 0) {
LAB_07a4ff9c:
    uVar2 = 0;
  }
  else {
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (uStack000000000000000c != (int)(char)uStack000000000000000c) goto LAB_07a4ff9c;
    }
    else if (0xff < uStack000000000000000c) goto LAB_07a4ff9c;
    uVar2 = 1;
    *unaff_x19 = (char)uStack000000000000000c;
  }
  return uVar2;
}


