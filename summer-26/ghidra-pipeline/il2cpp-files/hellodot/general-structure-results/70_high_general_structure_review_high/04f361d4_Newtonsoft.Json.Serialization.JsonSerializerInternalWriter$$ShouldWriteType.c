/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 04f361d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(void)

{
  bool bVar1;
  short *psVar2;
  bool in_ZR;
  int in_w8;
  short *in_x9;
  short *psVar3;
  short in_w10;
  uint in_w11;
  int in_w12;
  int iVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x29;
  
                    /* try { // try from 04f361d8 to 050361e3 has its CatchHandler @ 04f35fb4 */
  if ((in_ZR) && (0 < in_w12)) {
                    /* try { // try from 04f361e4 to 050361eb has its CatchHandler @ 04f361ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f361d0 with catch @ 04f361ec
                       catch(type#2 @ 00000000) { ... } // from try @ 04f361e4 with catch @ 04f361ec
                        */
    psVar3 = in_x9;
    psVar2 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
    iVar4 = in_w12;
    do {
      in_x9 = psVar2;
      *psVar3 = 0x30;
      in_w10 = *in_x9;
      in_w12 = iVar4 + -1;
      in_w11 = (uint)(in_w10 == 0x39);
      if (in_w10 != 0x39) break;
      bVar1 = 1 < iVar4;
      psVar3 = in_x9;
      psVar2 = in_x9 + -1;
      iVar4 = in_w12;
    } while (bVar1);
  }
  if ((in_w12 == 0) && (in_w11 != 0)) {
    *in_x9 = 0x31;
    *(int *)(unaff_x19 + 4) = in_w8 + 2;
  }
  else {
    *in_x9 = in_w10 + 1;
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


