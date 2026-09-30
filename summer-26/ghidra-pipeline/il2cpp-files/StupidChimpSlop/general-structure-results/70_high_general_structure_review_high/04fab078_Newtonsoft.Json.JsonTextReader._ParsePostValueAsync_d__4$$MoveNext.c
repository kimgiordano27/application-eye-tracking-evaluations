/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 04fab078
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
                    /* try { // try from 04fab07c to 050ab093 has its CatchHandler @ 04fab290 */
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x3a0));
  *(undefined1 *)(unaff_x21 + 0xcd1) = 1;
  FUN_05044d4c();
  puVar3 = PTR_DAT_0664c3c0;
  puVar2 = PTR_DAT_06649f98;
  puVar1 = PTR_DAT_066463a0;
  if (-1 < unaff_w20) {
                    /* try { // try from 04fab0b4 to 050ab0bb has its CatchHandler @ 04fab288 */
    uVar4 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    thunk_FUN_02dc1ef0();
                    /* try { // try from 04fab0cc to 050ab0d3 has its CatchHandler @ 04fab26c */
                    /* try { // try from 04fab0d4 to 050ab0df has its CatchHandler @ 04fab284 */
    uVar4 = FUN_02d4dd2c(*(undefined8 *)puVar1,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_02dc1ef0();
                    /* try { // try from 04fab0f0 to 050ab0f7 has its CatchHandler @ 04fab268 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
                    /* try { // try from 04fab0f8 to 050ab103 has its CatchHandler @ 04fab280 */
    uVar4 = FUN_04f9d7e0();
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
    FUN_04fa712c(uVar5,uVar4);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
                    /* try { // try from 04fab120 to 050ab12b has its CatchHandler @ 04fab270 */
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x28),uVar5);
    return;
  }
  thunk_FUN_02db45e8(PTR_DAT_0664a258);
  uVar4 = thunk_FUN_02d8a638();
                    /* try { // try from 04fab148 to 050ab16b has its CatchHandler @ 04fab274 */
  uVar5 = thunk_FUN_02db45e8(PTR_DAT_0664c2d0);
  uVar6 = thunk_FUN_02db45e8(PTR_DAT_0664a5a0);
  FUN_04f6baa8(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_02db45e8(PTR_DAT_06658c88);
                    /* try { // try from 04fab184 to 050ab193 has its CatchHandler @ 04fab294 */
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar4,uVar5);
}


