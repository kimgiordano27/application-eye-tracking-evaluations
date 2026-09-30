/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 04f379e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint in_w9;
  uint uVar9;
  long unaff_x19;
  int unaff_w20;
  int iVar10;
  ulong unaff_x22;
  ulong uVar11;
  int unaff_w23;
  short *psVar12;
  
  if (in_w9 < 1000000) {
    iVar10 = unaff_w20 + 5;
  }
  else {
    iVar10 = unaff_w20 + 6;
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (iVar10 <= unaff_w23) {
    iVar10 = unaff_w23;
  }
  iVar10 = *(int *)(unaff_x19 + 0x10) + iVar10;
  lVar5 = thunk_FUN_02ce14f0(iVar10,0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = thunk_FUN_02c8538c(0);
    lVar7 = lVar5 + iVar4;
  }
  puVar2 = PTR_DAT_065f73a8;
  psVar12 = (short *)(lVar7 + (long)iVar10 * 2);
  iVar10 = unaff_w23 + -2;
  while( true ) {
    iVar4 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar4 == 0) {
      thunk_FUN_02cd038c();
      iVar4 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar6 = (int)unaff_x22;
    if (unaff_x22 >> 0x20 == 0) break;
    if (iVar4 == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 04f37a98 to 05037b1b has its CatchHandler @ 04f37a98
                       catch() { ... } // from try @ 04f37a98 with catch @ 04f37a98
                       catch() { ... } // from try @ 04f37b54 with catch @ 04f37a98
                       catch() { ... } // from try @ 04f37c10 with catch @ 04f37a98
                       catch() { ... } // from try @ 04f37c8c with catch @ 04f37a98
                       catch() { ... } // from try @ 04f37d70 with catch @ 04f37a98 */
    unaff_x22 = unaff_x22 / 1000000000;
    uVar11 = (ulong)(uint)(iVar6 + (int)unaff_x22 * -1000000000);
    iVar4 = 7;
    do {
      do {
        uVar8 = uVar11 / 10;
        uVar9 = (uint)uVar11;
        psVar12 = psVar12 + -1;
        *psVar12 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar6 = iVar4 + -1;
        bVar1 = -1 < iVar4;
        uVar11 = uVar8;
        iVar4 = iVar6;
      } while (bVar1);
    } while (9 < uVar9);
    unaff_w23 = unaff_w23 + -9;
    iVar10 = iVar10 + -9;
  }
  if (iVar4 == 0) {
    thunk_FUN_02cd038c();
  }
  if ((iVar6 != 0) || (-1 < unaff_w23 + -1)) {
    do {
      do {
        uVar9 = (uint)unaff_x22;
        uVar11 = (unaff_x22 & 0xffffffff) / 10;
        psVar12 = psVar12 + -1;
                    /* try { // try from 04f37b1c to 05037b1f has its CatchHandler @ 04f37c58 */
        *psVar12 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        iVar4 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        unaff_x22 = uVar11;
        iVar10 = iVar4;
      } while (bVar1);
    } while (9 < uVar9);
  }
  iVar10 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar10 + -1) {
    do {
      iVar10 = iVar10 + -1;
                    /* try { // try from 04f37b4c to 05037b53 has its CatchHandler @ 04f37c5c */
      sVar3 = FUN_04db48b0();
      psVar12 = psVar12 + -1;
                    /* try { // try from 04f37b54 to 05037c07 has its CatchHandler @ 04f37a98 */
      *psVar12 = sVar3;
    } while (0 < iVar10);
  }
  return lVar5;
}


