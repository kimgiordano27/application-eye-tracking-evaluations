/*
FUNCTION_NAME: MagicaCloth2.CurveSerializeData$$ConvertFloatArray
ENTRY_POINT: 052412d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


ulong MagicaCloth2_CurveSerializeData__ConvertFloatArray
                (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x21;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0524130c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0524130c:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_x28 & 0xffffffff | unaff_x25 << 0x20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


