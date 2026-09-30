/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 04f36064
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(int param_1)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  uint in_w9;
  short *psVar5;
  short *psVar6;
  long in_x10;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int in_w11;
  long lVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  long lVar14;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
                    /* try { // try from 04f360e4 to 050360ef has its CatchHandler @ 04f36184 */
  if (in_w11 < param_1) {
    iVar13 = 0;
    lVar9 = (long)param_1 - (long)in_w11;
    pbVar12 = (byte *)(unaff_x22 + in_w11);
    do {
      lVar9 = lVar9 + -1;
                    /* try { // try from 04f36108 to 05036117 has its CatchHandler @ 04f36188 */
      iVar13 = (uint)*pbVar12 + iVar13 * 10 + -0x30;
      pbVar12 = pbVar12 + 1;
    } while (lVar9 != 0);
  }
  else {
    iVar13 = 0;
  }
                    /* try { // try from 04f36118 to 0503615f has its CatchHandler @ 04f35fb4 */
  iVar10 = 0;
  lVar9 = 0;
  *(int *)(unaff_x19 + 4) = -iVar13 + 1;
  if ((0 < (int)in_x10) && (0 < unaff_w20)) {
    lVar9 = 0;
    iVar10 = 0;
    do {
      if (*(byte *)(unaff_x22 + lVar9) - 0x30 < 10) {
        *(ushort *)(unaff_x21 + (long)iVar10 * 2) = (ushort)*(byte *)(unaff_x22 + lVar9);
        iVar10 = iVar10 + 1;
      }
      lVar9 = lVar9 + 1;
                    /* try { // try from 04f36160 to 05036163 has its CatchHandler @ 04f36180 */
                    /* try { // try from 04f36164 to 0503616b has its CatchHandler @ 04f36178 */
      in_w9 = (uint)(lVar9 < in_x10);
    } while ((lVar9 < in_x10) &&
            (iVar10 < unaff_w20
                    /* try { // try from 04f3616c to 0503616f has its CatchHandler @ 04f36174 */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f360c0 with catch @ 04f36170
                       try { // try from 04f36170 to 050361a3 has its CatchHandler @ 04f35fb4 */));
  }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3616c with catch @ 04f36174
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f36164 with catch @ 04f36178
                        */
  puVar8 = (undefined2 *)(unaff_x21 + (long)iVar10 * 2);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f360c4 with catch @ 04f3617c
                        */
  if (iVar10 < unaff_w20) {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f36160 with catch @ 04f36180
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f360e4 with catch @ 04f36184
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f36108 with catch @ 04f36188
                        */
    lVar14 = (long)unaff_w20 - (long)iVar10;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f360a0 with catch @ 04f3618c
                        */
    puVar7 = puVar8;
    puVar8 = (undefined2 *)(unaff_x21 + (long)iVar10 * 2);
    do {
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
      *puVar7 = 0x30;
      puVar7 = puVar8;
                    /* try { // try from 04f361a4 to 050361a7 has its CatchHandler @ 04f361c8 */
    } while (lVar14 != 0);
  }
  *puVar8 = 0;
  if ((in_w9 != 0) && (0x34 < *(byte *)(lVar9 + unaff_x22))) {
    iVar10 = unaff_w20 + -1;
    psVar6 = (short *)(unaff_x21 + (long)iVar10 * 2);
                    /* catch() { ... } // from try @ 04f361a4 with catch @ 04f361c8 */
    sVar2 = *psVar6;
    bVar4 = sVar2 == 0x39;
                    /* try { // try from 04f361d0 to 050361d7 has its CatchHandler @ 04f361ec */
    if ((bVar4) && (0 < iVar10)) {
      psVar5 = psVar6;
      psVar3 = (short *)(unaff_x21 + (long)(unaff_w20 + -2) * 2);
      iVar11 = iVar10;
      do {
        psVar6 = psVar3;
        *psVar5 = 0x30;
        sVar2 = *psVar6;
        iVar10 = iVar11 + -1;
        bVar4 = sVar2 == 0x39;
        if (!bVar4) break;
        bVar1 = 1 < iVar11;
        psVar5 = psVar6;
        psVar3 = psVar6 + -1;
        iVar11 = iVar10;
      } while (bVar1);
    }
    if ((iVar10 == 0) && (bVar4)) {
      *psVar6 = 0x31;
      *(int *)(unaff_x19 + 4) = -iVar13 + 2;
    }
    else {
      *psVar6 = sVar2 + 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


