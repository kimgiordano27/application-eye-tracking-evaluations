/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MetadataPropertyHandling
ENTRY_POINT: 05e2a1e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  uint unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  
  *(undefined1 *)(unaff_x23 + 0xd2f) = in_w8;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_05e142dc();
  if ((unaff_w19 >> 9 & 1) == 0) {
    if (uVar1 == (int)(char)uVar1) {
                    /* try { // try from 05e2a274 to 05f2a283 has its CatchHandler @ 05e2a288 */
      return;
    }
  }
  else if (uVar1 < 0x100) {
    return;
  }
  thunk_FUN_036aa1c8(PTR_DAT_079fc228);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 05e2a138 with catch @ 05e2a224
                        */
  uVar2 = thunk_FUN_0367fe20();
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a116d0);
                    /* try { // try from 05e2a23c to 05f2a253 has its CatchHandler @ 05e2a288 */
  FUN_05e272f8(uVar2,uVar3);
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a154d8);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


