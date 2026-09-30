/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ushort>$$Deserialize
ENTRY_POINT: 0416078c
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined1  [16] MagicaCloth2_ExSimpleNativeArray<ushort>__Deserialize(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined1 auVar1 [16];
  undefined8 in_stack_00000018;
  
                    /* try { // try from 0416078c to 04260863 has its CatchHandler @ 0416078c
                       catch() { ... } // from try @ 0416078c with catch @ 0416078c
                       catch() { ... } // from try @ 041608bc with catch @ 0416078c
                       catch() { ... } // from try @ 04160914 with catch @ 0416078c
                       catch() { ... } // from try @ 0416094c with catch @ 0416078c */
  FUN_03398650(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 8),&stack0x00000008);
  if (unaff_x23 != 0) {
    auVar1 = FUN_07869878();
    if (*(int *)(DAT_083d42a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if ((auVar1._0_8_ & 0xff) != 0) {
      if (unaff_x20 == 0) goto LAB_04160840;
      FUN_05db00ac();
    }
    return auVar1;
  }
LAB_04160840:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


