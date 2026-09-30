/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 055dfbe8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth(void)

{
  uint uVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x24;
  long *plVar2;
  long lVar3;
  undefined4 uStack000000000000000c;
  
  plVar2 = *(long **)(unaff_x24 + 0xe10);
                    /* catch() { ... } // from try @ 055dfb20 with catch @ 055dfbf0
                       catch() { ... } // from try @ 055dfbe0 with catch @ 055dfbf0 */
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x10));
                    /* try { // try from 055dfbf4 to 056dfbf7 has its CatchHandler @ 055dfc00 */
                    /* try { // try from 055dfbf8 to 056dfc03 has its CatchHandler @ 055dfa44 */
  if (*(int *)(unaff_x21 + 0x18) < 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055dfbf4 with catch @ 055dfc00
                        */
    FUN_056265f0(0);
  }
  lVar3 = *plVar2;
  uStack000000000000000c = 0;
  if (unaff_w20 < *(int *)(unaff_x21 + 8) + ((*(byte *)(unaff_x21 + 0x2c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  if ((*(byte *)(unaff_x21 + 0x2d) & 1) == 0) {
    if (!CARRY4(unaff_w20,~*(uint *)(unaff_x21 + 0x28))) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w20 + ~*(uint *)(unaff_x21 + 0x28)) * 2) = 0x2f;
  }
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x20),0);
  uVar1 = *(uint *)(unaff_x21 + 0x28);
  if ((int)uVar1 < 0) {
    FUN_056265f0(0);
    uVar1 = *(uint *)(unaff_x21 + 0x28);
  }
  lVar3 = *plVar2;
  uStack000000000000000c = 0;
  if (unaff_w20 < uVar1) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


