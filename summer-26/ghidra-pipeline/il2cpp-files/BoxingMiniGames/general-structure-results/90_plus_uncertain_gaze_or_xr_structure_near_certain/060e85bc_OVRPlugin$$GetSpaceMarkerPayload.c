/*
FUNCTION_NAME: OVRPlugin$$GetSpaceMarkerPayload
ENTRY_POINT: 060e85bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetSpaceMarkerPayload(void)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined8 uStack0000000000000134;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined4 uStack0000000000000198;
  
  uStack0000000000000180 = 0;
  uStack0000000000000188 = 0;
  uStack0000000000000198 = 0;
  uStack0000000000000190 = 0;
  FUN_071ce4a0(&stack0x00000180,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 060e85d8 to 061e85ef has its CatchHandler @ 060e8678 */
  in_stack_00000168 = uStack0000000000000188;
  in_stack_00000160 = uStack0000000000000180;
  *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
  *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
  if (0x17 < uVar1) {
                    /* try { // try from 060e85f0 to 061e85f7 has its CatchHandler @ 060e866c */
    uVar4 = *(undefined8 *)(unaff_x22 + 0x14);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                    /* try { // try from 060e8608 to 061e860f has its CatchHandler @ 060e8664 */
    *(undefined8 *)(unaff_x20 + 0x318) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x310) = uVar3;
    uVar2 = DAT_016509a4;
                    /* try { // try from 060e8610 to 061e8633 has its CatchHandler @ 060e8660 */
    *(undefined8 *)(unaff_x20 + 0x30c) = uStack0000000000000188;
    *(undefined8 *)(unaff_x20 + 0x304) = uStack0000000000000180;
                    /* try { // try from 060e8634 to 061e865b has its CatchHandler @ 060e865c */
    in_stack_00000140 = 0;
    uStack0000000000000148 = 0;
    uStack000000000000014c = 0;
    in_stack_00000158 = 0;
    uStack0000000000000150 = 0;
    uStack0000000000000154 = 0;
    FUN_071ce4a0(DAT_01650f6c,uStack000000000000001c,uStack0000000000000018,uStack0000000000000014,
                 uVar2,DAT_01650a20,uStack0000000000000010,&stack0x00000140,0);
    uStack0000000000000134 = CONCAT44(in_stack_00000158,uStack0000000000000154);
    uStack0000000000000128 = uStack0000000000000148;
                    /* catch() { ... } // from try @ 060e8634 with catch @ 060e865c
                       try { // try from 060e865c to 061e86af has its CatchHandler @ 060e82dc */
    in_stack_00000120 = in_stack_00000140;
                    /* catch() { ... } // from try @ 060e8610 with catch @ 060e8660 */
    uStack000000000000012c = uStack000000000000014c;
    uStack0000000000000130 = uStack0000000000000150;
                    /* catch() { ... } // from try @ 060e8608 with catch @ 060e8664 */
    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                    /* catch() { ... } // from try @ 060e8504 with catch @ 060e8668 */
                    /* catch() { ... } // from try @ 060e85f0 with catch @ 060e866c */
                    /* catch() { ... } // from try @ 060e84ac with catch @ 060e8670 */
                    /* catch() { ... } // from try @ 060e8510 with catch @ 060e8674 */
                    /* catch() { ... } // from try @ 060e85d8 with catch @ 060e8678 */
      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                    /* catch() { ... } // from try @ 060e8430 with catch @ 060e867c */
                    /* catch() { ... } // from try @ 060e84b0 with catch @ 060e8680 */
                    /* catch() { ... } // from try @ 060e848c with catch @ 060e8684 */
                    /* catch() { ... } // from try @ 060e84cc with catch @ 060e8688 */
                    /* catch() { ... } // from try @ 060e8444 with catch @ 060e868c */
      *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
      *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000150,uStack000000000000014c);
                    /* catch() { ... } // from try @ 060e841c with catch @ 060e8690 */
      *(ulong *)(unaff_x20 + 0x32c) = CONCAT44(uStack000000000000014c,uStack0000000000000148);
      *(undefined8 *)(unaff_x20 + 0x324) = in_stack_00000140;
      in_stack_00000100 = 0;
      uStack0000000000000108 = 0;
      uStack000000000000010c = 0;
      in_stack_00000118 = 0;
      uStack0000000000000110 = 0;
      uStack0000000000000114 = 0;
      FUN_071ce4a0(DAT_01650e08,uStack000000000000000c,uStack0000000000000008,&stack0x00000100,0);
      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
        *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
        *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
        *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
        *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
        if (unaff_x19 != 0) {
          *(long *)(unaff_x19 + 0x10) = unaff_x20;
          thunk_FUN_036b7ad0();
          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
          thunk_FUN_036b7ad0();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


