/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 07686734
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
               (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint in_w8;
  ulong in_x9;
  uint in_w10;
  uint in_w11;
  ulong in_x12;
  uint in_w13;
  long lVar8;
  undefined8 *unaff_x19;
  uint unaff_w20;
  ushort *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if ((unaff_w23 < 1) && ((in_w8 == 0 || (unaff_w23 < -0x1b)))) goto LAB_076867c0;
    uVar6 = (uint)param_4;
    if (in_w11 < uVar6) {
                    /* try { // try from 07686750 to 07786753 has its CatchHandler @ 07686a90 */
      if (uVar6 != in_w10) goto LAB_076867c0;
                    /* try { // try from 0768676c to 0778677f has its CatchHandler @ 07686a84 */
      if ((in_x9 < param_2) && ((param_2 != in_x12 || (0x35 < in_w8)))) break;
    }
    uVar5 = (param_2 & 0xffffffff) * 4 + (param_2 & 0xffffffff);
    lVar8 = (uVar5 >> 0x1f) + (param_2 >> 0x20) * (ulong)in_w13;
                    /* try { // try from 07686794 to 0778679b has its CatchHandler @ 07686a8c */
    uVar6 = (int)((ulong)lVar8 >> 0x20) + uVar6 * in_w13;
    param_2 = (uVar5 & 0x7fffffff) << 1 | lVar8 << 0x20;
    if (in_w8 != 0) {
                    /* try { // try from 076867a0 to 077867af has its CatchHandler @ 07686a98 */
      uVar2 = in_w8 - 0x30;
      unaff_x21 = unaff_x21 + 1;
      in_w8 = (uint)*unaff_x21;
      bVar3 = CARRY8(param_2,(ulong)uVar2);
      param_2 = param_2 + uVar2;
      if (bVar3) {
        uVar6 = uVar6 + 1;
      }
    }
    param_4 = (ulong)uVar6;
    unaff_w23 = unaff_w23 + -1;
  } while( true );
                    /* try { // try from 076867bc to 077867c3 has its CatchHandler @ 07686a58 */
  param_4 = 0x19999999;
LAB_076867c0:
  if (0x34 < in_w8) {
                    /* try { // try from 076867cc to 077867d3 has its CatchHandler @ 07686a50 */
    if ((in_w8 == 0x35) && ((param_2 & 1) == 0)) {
      lVar8 = 2;
      do {
        psVar1 = (short *)((long)unaff_x21 + lVar8);
        iVar7 = (int)lVar8;
                    /* try { // try from 076867e0 to 077867e7 has its CatchHandler @ 07686a44 */
        if (iVar7 == 0x2a) break;
        lVar8 = lVar8 + 2;
      } while (*psVar1 == 0x30);
                    /* try { // try from 076867f8 to 07786813 has its CatchHandler @ 07686a7c */
      if ((iVar7 == 0x2a) || (*psVar1 == 0)) goto LAB_07686824;
    }
    bVar3 = param_2 == 0xffffffffffffffff;
    param_2 = param_2 + 1;
    if (bVar3) {
      iVar7 = (int)param_4;
      param_4 = (ulong)(iVar7 + 1);
      if (iVar7 == -1) {
        unaff_w23 = unaff_w23 + 1;
        param_2 = in_x9 + 2;
                    /* try { // try from 07686818 to 0778681f has its CatchHandler @ 07686a54 */
        param_4 = 0x19999999;
      }
      else {
        param_2 = 0;
      }
    }
  }
LAB_07686824:
                    /* try { // try from 07686828 to 0778682f has its CatchHandler @ 07686a4c */
  if (unaff_w23 < 1) {
    if (unaff_w23 < -0x1c) {
                    /* try { // try from 07686878 to 0778687b has its CatchHandler @ 07686a70 */
                    /* try { // try from 0768687c to 07786887 has its CatchHandler @ 07686a6c */
      param_2 = 0;
      uVar5 = 0;
      param_4 = 0;
      iVar7 = 0x1c;
                    /* try { // try from 07686894 to 0778689f has its CatchHandler @ 07686a30 */
    }
    else {
      uVar5 = param_2 >> 0x20;
      iVar7 = -unaff_w23;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_076d6920(&stack0x00000008,param_2,uVar5,param_4,unaff_w20 & 1,iVar7,0);
    uVar4 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar4 = 0;
  }
                    /* try { // try from 0768683c to 07786843 has its CatchHandler @ 07686a48 */
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 07686854 to 0778686f has its CatchHandler @ 07686a80 */
  return;
}


