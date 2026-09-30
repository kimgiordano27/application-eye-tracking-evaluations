/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabelsNonAlloc
ENTRY_POINT: 0322eaa4
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceSemanticLabelsNonAlloc(void)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long *unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined4 in_stack_00000330;
  
  if (unaff_x20 != 0) {
                    /* try { // try from 0322eaa8 to 0332ead7 has its CatchHandler @ 0322ea00 */
    if (*(int *)(unaff_x20 + 0x18) != 0) {
      *(undefined8 *)(unaff_x20 + 0x48) = in_stack_000002a8;
      *(undefined8 *)(unaff_x20 + 0x40) = in_stack_000002a0;
      *(undefined8 *)(unaff_x20 + 0x58) = in_stack_000002b8;
      *(undefined8 *)(unaff_x20 + 0x50) = in_stack_000002b0;
                    /* try { // try from 0322ead8 to 0332eae3 has its CatchHandler @ 0322eae4 */
      *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000288;
      *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000280;
      *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000298;
      *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000290;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322ea54 with catch @ 0322eae4
                       catch(type#1 @ 06a5a440) { ... } // from try @ 0322ead8 with catch @ 0322eae4
                       try { // try from 0322eae4 to 0332eafb has its CatchHandler @ 0322ea00 */
      lVar1 = *(long *)(unaff_x19 + 0x90);
      in_stack_00000100 = in_stack_00000300;
      in_stack_00000108 = in_stack_00000308;
      in_stack_00000110 = in_stack_00000310;
      in_stack_00000118 = in_stack_00000318;
      in_stack_00000120 = in_stack_00000320;
      in_stack_00000128 = in_stack_00000328;
      in_stack_00000130 = in_stack_00000330;
      in_stack_00000140 = in_stack_00000280;
      in_stack_00000148 = in_stack_00000288;
      in_stack_00000150 = in_stack_00000290;
      in_stack_00000158 = in_stack_00000298;
      in_stack_00000160 = in_stack_000002a0;
      in_stack_00000168 = in_stack_000002a8;
      in_stack_00000170 = in_stack_000002b0;
      in_stack_00000178 = in_stack_000002b8;
                    /* try { // try from 0322eafc to 0332eb13 has its CatchHandler @ 0322eb80 */
      FUN_0322ef18(&stack0x00000080,&stack0x00000100);
                    /* try { // try from 0322eb14 to 0332eb6f has its CatchHandler @ 0322ea00 */
      in_stack_00000040 = in_stack_000002c0;
      in_stack_00000048 = in_stack_000002c8;
      in_stack_00000050 = in_stack_000002d0;
      in_stack_00000058 = in_stack_000002d8;
      in_stack_00000060 = in_stack_000002e0;
      in_stack_00000068 = in_stack_000002e8;
      in_stack_00000070 = in_stack_000002f0;
      in_stack_00000078 = in_stack_000002f8;
      FUN_051d2378(&stack0x000000c0,&stack0x00000080,&stack0x00000040,0);
      if (lVar1 == 0) goto LAB_0322ebb0;
      if (1 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 0322eb70 to 0332eb7f has its CatchHandler @ 0322eb80 */
        *(undefined8 *)(lVar1 + 0x88) = in_stack_000000e8;
        *(undefined8 *)(lVar1 + 0x80) = in_stack_000000e0;
        *(undefined8 *)(lVar1 + 0x98) = in_stack_000000f8;
        *(undefined8 *)(lVar1 + 0x90) = in_stack_000000f0;
        *(undefined8 *)(lVar1 + 0x68) = in_stack_000000c8;
        *(undefined8 *)(lVar1 + 0x60) = in_stack_000000c0;
        *(undefined8 *)(lVar1 + 0x78) = in_stack_000000d8;
        *(undefined8 *)(lVar1 + 0x70) = in_stack_000000d0;
                    /* catch() { ... } // from try @ 0322eafc with catch @ 0322eb80
                       catch() { ... } // from try @ 0322eb70 with catch @ 0322eb80 */
                    /* try { // try from 0322eb84 to 0332eb87 has its CatchHandler @ 0322eb90 */
                    /* try { // try from 0322eb88 to 0332eb93 has its CatchHandler @ 0322ea00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322eb84 with catch @ 0322eb90
                        */
        FUN_04885f14(*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 4),
                     *(undefined8 *)(unaff_x19 + 0x90),0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_0322ebb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


