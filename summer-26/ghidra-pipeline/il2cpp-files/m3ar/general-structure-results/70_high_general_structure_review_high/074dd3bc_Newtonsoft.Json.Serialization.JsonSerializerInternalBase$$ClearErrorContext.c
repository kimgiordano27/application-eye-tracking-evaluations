/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 074dd3bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074dd584) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  int unaff_w20;
  short *unaff_x21;
  long unaff_x22;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xa58));
  FUN_0403162c(PTR_DAT_08fa31e0);
  FUN_0403162c(PTR_DAT_08fa31e8);
  *(undefined1 *)(unaff_x22 + 0xe63) = 1;
  if (unaff_w20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  if (*unaff_x21 == 0x28) {
    if ((unaff_w20 != 0x26) || (unaff_x21[0x25] != 0x29)) goto LAB_074dd5e4;
LAB_074dd430:
    lVar2 = 1;
  }
  else {
    if (*unaff_x21 == 0x7b) {
      if ((unaff_w20 != 0x26) || (unaff_x21[0x25] != 0x7d)) goto LAB_074dd5e4;
      goto LAB_074dd430;
    }
    if (unaff_w20 != 0x24) goto LAB_074dd5e4;
    lVar2 = 0;
  }
  if ((((unaff_x21[(uint)lVar2 | 8] == 0x2d) && (unaff_x21[lVar2 + 0xd] == 0x2d)) &&
      (unaff_x21[(uint)lVar2 | 0x12] == 0x2d)) && (unaff_x21[lVar2 + 0x17] == 0x2d)) {
    uVar1 = FUN_074de3bc();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *unaff_x19 = 0;
    uVar1 = FUN_074de3bc();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined2 *)(unaff_x19 + 1) = 0;
    uVar1 = FUN_074de3bc();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined2 *)((long)unaff_x19 + 6) = 0;
    uVar1 = FUN_074de3bc();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_074de26c();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
LAB_074dd5e4:
  FUN_074ddea8();
  return 0;
}


