/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 05ac3bac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int in_w8;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w23;
  int unaff_w24;
  
  uVar3 = unaff_w23 - in_w8;
                    /* try { // try from 05ac3bc0 to 05bc3bc7 has its CatchHandler @ 05ac3d38 */
  lVar6 = thunk_FUN_03010710();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884();
  }
  uVar4 = unaff_w24 - (uint)(0 < (int)uVar3);
  if (0 < (int)uVar4) {
                    /* try { // try from 05ac3bd8 to 05bc3c0f has its CatchHandler @ 05ac3df0 */
    uVar7 = 0;
    uVar8 = 0;
    lVar9 = (ulong)unaff_w19 << 0x20;
    do {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      if (lVar10 == 0) goto LAB_05ac3cbc;
      uVar5 = (uint)(uVar8 >> 2) & 0x3fffffff;
                    /* try { // try from 05ac3c10 to 05bc3c17 has its CatchHandler @ 05ac3d28 */
      if ((*(uint *)(lVar10 + 0x18) <= uVar5) ||
         ((ulong)*(uint *)(lVar6 + 0x18) <= unaff_w19 + uVar8)) goto LAB_05ac3cb8;
                    /* try { // try from 05ac3c18 to 05bc3c1b has its CatchHandler @ 05ac3d1c */
                    /* try { // try from 05ac3c1c to 05bc3c23 has its CatchHandler @ 05ac3d18 */
      uVar2 = uVar7 & 0x18;
      uVar8 = uVar8 + 1;
                    /* try { // try from 05ac3c24 to 05bc3c2b has its CatchHandler @ 05ac3d10 */
      lVar1 = lVar9 >> 0x20;
      uVar7 = uVar7 + 8;
                    /* try { // try from 05ac3c2c to 05bc3c2f has its CatchHandler @ 05ac3d0c */
                    /* try { // try from 05ac3c30 to 05bc3c33 has its CatchHandler @ 05ac3d04 */
                    /* try { // try from 05ac3c34 to 05bc3c37 has its CatchHandler @ 05ac3cf8 */
      lVar9 = lVar9 + 0x100000000;
      *(char *)(lVar6 + lVar1 + 0x20) = (char)(*(int *)(lVar10 + (ulong)uVar5 * 4 + 0x20) >> uVar2);
                    /* try { // try from 05ac3c3c to 05bc3c6b has its CatchHandler @ 05ac3ce8 */
    } while (uVar4 != uVar8);
  }
  if (0 < (int)uVar3) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    if (lVar9 == 0) {
LAB_05ac3cbc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar7 = uVar4 + 3;
    if (-1 < (int)uVar4) {
      uVar7 = uVar4;
    }
                    /* try { // try from 05ac3c70 to 05bc3ca7 has its CatchHandler @ 05ac3cd8 */
    if ((*(uint *)(lVar9 + 0x18) <= (uint)((int)uVar7 >> 2)) ||
       (*(uint *)(lVar6 + 0x18) <= uVar4 + unaff_w19)) {
LAB_05ac3cb8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ac3cb8 to 05bc3d5b has its CatchHandler @ 05ac3194 */
      FUN_02fe94f0();
    }
    *(byte *)(lVar6 + (int)(uVar4 + unaff_w19) + 0x20) =
         (byte)(*(int *)(lVar9 + (long)((int)uVar7 >> 2) * 4 + 0x20) >> ((uVar4 & 3) << 3)) &
         ((byte)(-1 << (ulong)(uVar3 & 0x1f)) ^ 0xff);
  }
                    /* try { // try from 05ac3ca8 to 05bc3cab has its CatchHandler @ 05ac3cf0 */
                    /* try { // try from 05ac3cac to 05bc3caf has its CatchHandler @ 05ac3ce4 */
                    /* try { // try from 05ac3cb0 to 05bc3cb3 has its CatchHandler @ 05ac3194 */
                    /* try { // try from 05ac3cb4 to 05bc3cb7 has its CatchHandler @ 05ac3cdc */
  return;
}


