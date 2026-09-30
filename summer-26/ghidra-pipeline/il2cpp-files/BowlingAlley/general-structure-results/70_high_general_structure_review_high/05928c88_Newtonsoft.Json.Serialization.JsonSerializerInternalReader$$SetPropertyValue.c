/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 05928c88
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
          (long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int in_w9;
  int in_w10;
  int in_w11;
  ulong uVar5;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar6 [16];
  uint uStack000000000000000c;
  
  iVar2 = in_w11 - in_w9;
  if (-1 < unaff_w23) {
    iVar2 = in_w9;
  }
  uStack000000000000000c = iVar2 + in_w10;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    param_2 = *unaff_x22;
    param_1 = *(long *)(param_2 + 0xb8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (unaff_w21 + (unaff_w23 >> 0x1f & 0x15U) < *(uint *)(*(long *)(param_1 + 0x40) + 0x18)) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
                    /* try { // try from 05928ce4 to 05a28d67 has its CatchHandler @ 05928ce4
                       catch() { ... } // from try @ 05928ce4 with catch @ 05928ce4
                       catch() { ... } // from try @ 05928da4 with catch @ 05928ce4
                       catch() { ... } // from try @ 05928e60 with catch @ 05928ce4
                       catch() { ... } // from try @ 05928edc with catch @ 05928ce4
                       catch() { ... } // from try @ 05928fc0 with catch @ 05928ce4 */
      uVar3 = FUN_05930ef4();
      uVar5 = uVar3;
      if ((((uint)uVar3 >> 10 & 1) != 0) &&
         (uVar5 = uVar3 + (uVar3 >> 0xb & 1) + 0x3ff, uVar5 < uVar3)) {
        uVar5 = uVar5 >> 1 | 0x8000000000000000;
        uStack000000000000000c = uStack000000000000000c + 1;
      }
      uVar1 = uStack000000000000000c + 0x3fe;
      if ((int)uVar1 < 1) {
                    /* try { // try from 05928d68 to 05a28d6b has its CatchHandler @ 05928ea8 */
        if ((uVar5 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
          if ((int)uVar1 < -0x33) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 >> (0xfffffc0e - (ulong)uStack000000000000000c & 0x3f);
                    /* try { // try from 05928d98 to 05a28da3 has its CatchHandler @ 05928eac */
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else if ((int)uVar1 < 0x7ff) {
        uVar5 = uVar5 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
      }
      else {
        uVar5 = 0x7ff0000000000000;
      }
                    /* try { // try from 05928da4 to 05a28e57 has its CatchHandler @ 05928ce4 */
      uVar4 = FUN_059321b0();
      uVar3 = uVar5 | 0x8000000000000000;
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar5;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar3;
      return auVar6;
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


