/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 07702d60
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w25;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000018 = param_2._8_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
                    /* try { // try from 07702d60 to 07802d63 has its CatchHandler @ 07702e24 */
    uStack0000000000000028 = in_stack_00000088;
    uStack0000000000000020 = in_stack_00000080;
                    /* try { // try from 07702d64 to 07802d67 has its CatchHandler @ 07702e20 */
                    /* try { // try from 07702d68 to 07802d6b has its CatchHandler @ 07702e14 */
                    /* try { // try from 07702d6c to 07802d6f has its CatchHandler @ 07702e10 */
    if (unaff_x21 == 0) break;
                    /* try { // try from 07702d70 to 07802d73 has its CatchHandler @ 07702e08 */
                    /* try { // try from 07702d74 to 07802d77 has its CatchHandler @ 07702df4 */
    lVar5 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 07702d78 to 07802e6f has its CatchHandler @ 077022e4 */
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(unaff_x21 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar3 * (long)unaff_w25;
      *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000008;
      *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000000;
      *(undefined8 *)(lVar5 + 0x38) = uStack0000000000000018;
      *(undefined8 *)(lVar5 + 0x30) = uStack0000000000000010;
      *(undefined8 *)(lVar5 + 0x48) = in_stack_00000088;
      *(undefined8 *)(lVar5 + 0x40) = in_stack_00000080;
    }
    else {
      in_stack_00000060 = uStack0000000000000000;
      in_stack_00000068 = uStack0000000000000008;
      in_stack_00000070 = uStack0000000000000010;
      in_stack_00000078 = uStack0000000000000018;
      FUN_058f11cc();
    }
    uVar4 = FUN_072066f4(&stack0x00000048,*unaff_x23);
    if ((uVar4 & 1) == 0) {
      FUN_072066f0(&stack0x00000048,*unaff_x22);
      uVar7 = *(undefined4 *)(unaff_x19 + 0xdc);
      uVar1 = *(undefined4 *)(unaff_x19 + 0xe4);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x128);
      *unaff_x20 = unaff_x21;
      *(undefined4 *)(unaff_x20 + 2) = uVar7;
      uVar9 = *(undefined8 *)(unaff_x19 + 0xf0);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      *(undefined4 *)((long)unaff_x20 + 0xc) = uVar2;
      uVar6 = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)((long)unaff_x20 + 0x1c) = uVar9;
      *(undefined8 *)((long)unaff_x20 + 0x14) = uVar8;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x108);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)((long)unaff_x20 + 0x24) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)((long)unaff_x20 + 0x34) = uVar9;
      *(undefined8 *)((long)unaff_x20 + 0x2c) = uVar8;
      *(undefined8 *)((long)unaff_x20 + 0x3c) = uVar6;
      *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
      return;
    }
    FUN_07702948(&stack0x00000060,in_stack_00000058);
    uStack0000000000000000 = in_stack_00000060;
    uStack0000000000000008 = in_stack_00000068;
    uStack0000000000000010 = in_stack_00000070;
    uStack0000000000000018 = in_stack_00000078;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 07702d50 with catch @ 07702e48 */
  FUN_0403188c();
}


