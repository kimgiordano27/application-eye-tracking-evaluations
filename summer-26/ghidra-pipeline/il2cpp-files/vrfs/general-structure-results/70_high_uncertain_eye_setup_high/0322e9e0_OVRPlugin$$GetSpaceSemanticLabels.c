/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 0322e9e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceSemanticLabels(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar2;
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
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined4 in_stack_00000330;
  
  FUN_0322edc4();
  thunk_FUN_0488420c(*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 8),0);
                    /* try { // try from 0322ea00 to 0332ea53 has its CatchHandler @ 0322ea00
                       catch() { ... } // from try @ 0322ea00 with catch @ 0322ea00
                       catch() { ... } // from try @ 0322eaa8 with catch @ 0322ea00
                       catch() { ... } // from try @ 0322eae4 with catch @ 0322ea00
                       catch() { ... } // from try @ 0322eb14 with catch @ 0322ea00
                       catch() { ... } // from try @ 0322eb88 with catch @ 0322ea00 */
  FUN_0322ee6c();
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x18), lVar1 != 0)) {
    FUN_04f1b7fc(&stack0x00000280,lVar1,0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c);
    lVar1 = *(long *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x22 + 0x24);
    *(undefined8 *)(unaff_x24 + 0x1c) = uVar2;
                    /* try { // try from 0322ea54 to 0332eaa7 has its CatchHandler @ 0322eae4 */
    FUN_0322ef18(&stack0x000001c0,&stack0x00000240);
    in_stack_00000180 = in_stack_00000280;
    in_stack_00000188 = in_stack_00000288;
    in_stack_00000190 = in_stack_00000290;
    in_stack_00000198 = in_stack_00000298;
    in_stack_000001a0 = in_stack_000002a0;
    in_stack_000001a8 = in_stack_000002a8;
    in_stack_000001b0 = in_stack_000002b0;
    in_stack_000001b8 = in_stack_000002b8;
    FUN_051d2378(&stack0x00000200,&stack0x000001c0,&stack0x00000180,0);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x48) = in_stack_00000228;
        *(undefined8 *)(lVar1 + 0x40) = in_stack_00000220;
        *(undefined8 *)(lVar1 + 0x58) = in_stack_00000238;
        *(undefined8 *)(lVar1 + 0x50) = in_stack_00000230;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000208;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000200;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_00000218;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_00000210;
        lVar1 = *(long *)(unaff_x19 + 0x90);
        in_stack_00000100 = in_stack_00000300;
        in_stack_00000108 = in_stack_00000308;
        in_stack_00000110 = in_stack_00000310;
        in_stack_00000118 = in_stack_00000318;
        in_stack_00000120 = in_stack_00000320;
        in_stack_00000128 = in_stack_00000328;
        in_stack_00000130 = in_stack_00000330;
        in_stack_00000140 = in_stack_00000200;
        in_stack_00000148 = in_stack_00000208;
        in_stack_00000150 = in_stack_00000210;
        in_stack_00000158 = in_stack_00000218;
        in_stack_00000160 = in_stack_00000220;
        in_stack_00000168 = in_stack_00000228;
        in_stack_00000170 = in_stack_00000230;
        in_stack_00000178 = in_stack_00000238;
        FUN_0322ef18(&stack0x00000080,&stack0x00000100);
        in_stack_00000040 = in_stack_00000280;
        in_stack_00000048 = in_stack_00000288;
        in_stack_00000050 = in_stack_00000290;
        in_stack_00000058 = in_stack_00000298;
        in_stack_00000060 = in_stack_000002a0;
        in_stack_00000068 = in_stack_000002a8;
        in_stack_00000070 = in_stack_000002b0;
        in_stack_00000078 = in_stack_000002b8;
        FUN_051d2378(&stack0x000000c0,&stack0x00000080,&stack0x00000040,0);
        if (lVar1 == 0) goto LAB_0322ebb0;
        if (1 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x88) = in_stack_000000e8;
          *(undefined8 *)(lVar1 + 0x80) = in_stack_000000e0;
          *(undefined8 *)(lVar1 + 0x98) = in_stack_000000f8;
          *(undefined8 *)(lVar1 + 0x90) = in_stack_000000f0;
          *(undefined8 *)(lVar1 + 0x68) = in_stack_000000c8;
          *(undefined8 *)(lVar1 + 0x60) = in_stack_000000c0;
          *(undefined8 *)(lVar1 + 0x78) = in_stack_000000d8;
          *(undefined8 *)(lVar1 + 0x70) = in_stack_000000d0;
          FUN_04885f14(*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 4),
                       *(undefined8 *)(unaff_x19 + 0x90),0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
  }
LAB_0322ebb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


