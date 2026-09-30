/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 050d0168
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  long unaff_x22;
  long lVar1;
  long lVar2;
  ulong unaff_x24;
  undefined8 unaff_x25;
  int unaff_w26;
  int unaff_w27;
  
  FUN_050cfd50();
                    /* try { // try from 050d017c to 051d0193 has its CatchHandler @ 050d0254 */
  FUN_050cfd50(unaff_x22 + 8,*unaff_x21 >> 8);
  if (unaff_w27 == 0) {
    lVar2 = unaff_x22 + 0x10;
  }
  else {
    lVar2 = unaff_x22 + 0x12;
    *(undefined2 *)(unaff_x22 + 0x10) = 0x2d;
  }
                    /* try { // try from 050d01b0 to 051d01b3 has its CatchHandler @ 050d024c */
  FUN_050cfd50(lVar2,(int)(short)unaff_x21[1] >> 8);
  if (unaff_w27 == 0) {
    lVar1 = lVar2 + 8;
  }
  else {
                    /* try { // try from 050d01b8 to 051d01f7 has its CatchHandler @ 050d0268 */
    lVar1 = lVar2 + 10;
    *(undefined2 *)(lVar2 + 8) = 0x2d;
  }
  FUN_050cfd50(lVar1,(int)*(short *)((long)unaff_x21 + 6) >> 8);
  if (unaff_w27 == 0) {
    lVar2 = lVar1 + 8;
  }
  else {
    lVar2 = lVar1 + 10;
    *(undefined2 *)(lVar1 + 8) = 0x2d;
  }
                    /* try { // try from 050d01f8 to 051d0217 has its CatchHandler @ 050d0250 */
  FUN_050cfd50(lVar2,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
  if (unaff_w27 == 0) {
                    /* try { // try from 050d0218 to 051d023b has its CatchHandler @ 050cfee0 */
    lVar1 = lVar2 + 8;
  }
  else {
    lVar1 = lVar2 + 10;
    *(undefined2 *)(lVar2 + 8) = 0x2d;
  }
  FUN_050cfd50(lVar1,*(undefined1 *)((long)unaff_x21 + 10),*(undefined1 *)((long)unaff_x21 + 0xb));
  FUN_050cfd50(lVar1 + 8,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
                    /* try { // try from 050d023c to 051d024b has its CatchHandler @ 050d0254 */
  FUN_050cfd50(lVar1 + 0x10,*(undefined1 *)((long)unaff_x21 + 0xe),
               *(undefined1 *)((long)unaff_x21 + 0xf));
  if ((unaff_x24 & 1) == 0) {
    *(short *)(lVar1 + 0x18) = (short)((ulong)unaff_x25 >> 0x10);
  }
  *unaff_x19 = unaff_w26;
  return unaff_w26 <= unaff_w20;
}


