/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 07406898
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  
  uStack0000000000000040 = in_d3;
  uStack0000000000000050 = in_d4;
  uStack0000000000000060 = in_d5;
  uStack0000000000000070 = in_d6;
  uStack00000000000000a0 =
       FUN_085d0084(uStack00000000000000a0,uStack00000000000000a4,in_stack_000000a8,0,
                    &stack0x00000040,0);
  in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0xb4);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0xac);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x21 + 0xc) = uVar1;
  uVar1 = FUN_0736d794(&stack0x000000a0,&stack0x00000080,0);
  lVar2 = *(long *)(unaff_x19 + 0x30);
  uStack0000000000000014 = *(undefined8 *)(unaff_x21 + 0x34);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x2c);
  uStack000000000000002c = (undefined4)uVar3;
  uStack0000000000000034 = uStack0000000000000014;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uStack000000000000000c = uStack000000000000002c;
  if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)unaff_w20 * 0x1c;
    *(undefined8 *)(lVar2 + 0x34) = uStack0000000000000014;
    *(undefined8 *)(lVar2 + 0x2c) = uVar3;
    *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000002c,in_stack_000000a8);
    *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    FUN_074069a8(uVar1,unaff_w20,*(undefined8 *)(unaff_x19 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


