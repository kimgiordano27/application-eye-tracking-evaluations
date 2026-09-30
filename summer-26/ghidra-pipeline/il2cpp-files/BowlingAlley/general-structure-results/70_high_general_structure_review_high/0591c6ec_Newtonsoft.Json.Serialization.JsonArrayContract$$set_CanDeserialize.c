/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 0591c6ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0591c838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(void)

{
  undefined2 uVar1;
  ulong uVar2;
  uint in_w8;
  ulong in_x9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  if (*(short *)(unaff_x21 + (in_x9 & 0xffffffff) * 2) == 0x2d) {
    if (unaff_w20 <= (in_w8 | 0x12)) {
LAB_0591c8f8:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if (*(short *)(unaff_x21 + (ulong)(in_w8 | 0x12) * 2) == 0x2d) {
      if (unaff_w20 <= in_w8 + 0x17) goto LAB_0591c8f8;
      if (*(short *)(unaff_x21 + (ulong)(in_w8 + 0x17) * 2) == 0x2d) {
        uVar2 = FUN_0591d7b4();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        *unaff_x19 = in_stack_00000018._4_4_;
        uVar2 = FUN_0591d7b4();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar1 = (undefined2)((ulong)in_stack_00000018 >> 0x20);
        *(undefined2 *)(unaff_x19 + 1) = uVar1;
        uVar2 = FUN_0591d7b4();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        *(undefined2 *)((long)unaff_x19 + 6) = uVar1;
        uVar2 = FUN_0591d7b4();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar2 = FUN_0591d658();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  FUN_0591d23c();
  return 0;
}


