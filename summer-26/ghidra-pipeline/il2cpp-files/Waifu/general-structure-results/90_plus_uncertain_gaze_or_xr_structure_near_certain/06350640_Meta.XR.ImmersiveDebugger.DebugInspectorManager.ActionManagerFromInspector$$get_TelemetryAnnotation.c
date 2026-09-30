/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ActionManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 06350640
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ActionManagerFromInspector__get_TelemetryAnnotation
               (ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w26;
  long unaff_x28;
  undefined4 unaff_s8;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 in_stack_00000070;
  uint uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 uStack000000000000007c;
  undefined8 uStack0000000000000084;
  undefined8 uStack000000000000008c;
  undefined8 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  long in_stack_000001a0;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083eb450,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb138,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb030,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb048,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb160,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb468,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412dd0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d30,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d50,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x28 + 0x8a5) = 1;
  }
  uStack0000000000000074 = unaff_w26 & 1;
  uStack00000000000000cc = 0;
  uStack00000000000000c4 = 0;
  in_stack_000000c8 = 0;
  uStack00000000000000bc = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000b4 = 0;
  in_stack_000000b8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_000000a8 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  uStack0000000000000094 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000084 = 0;
  uStack000000000000007c = 0;
  FUN_06358b08((undefined1 *)((long)register0x00000008 + 0x90));
  FUN_06358b08((undefined1 *)((long)register0x00000008 + 0x80));
  uStack000000000000007c = CONCAT44(uStack000000000000007c._4_4_,unaff_s8);
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063508a0;
    auVar4 = FUN_042b44dc(*(long *)(unaff_x19 + 0x20),*(long *)(unaff_x21 + 0x18),DAT_083eb450);
    in_stack_000000a0 = auVar4._0_4_;
    uStack00000000000000a4 = auVar4._4_4_;
    in_stack_000000a8 = auVar4._8_4_;
    uStack00000000000000ac = auVar4._12_4_;
    if ((unaff_x20 == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) goto LAB_063508a0;
    auVar5 = FUN_0429eef4(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x20 + 0x18),DAT_083eb030
                         );
    in_stack_000000b0 = auVar5._0_4_;
    uStack00000000000000b4 = auVar5._4_4_;
    in_stack_000000b8 = auVar5._8_4_;
    uStack00000000000000bc = auVar5._12_4_;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 == 0) goto LAB_063508a0;
    FUN_0405de2c(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),auVar4._0_8_ >> 0x20);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 == 0) goto LAB_063508a0;
    FUN_0405d584(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),auVar5._0_8_ >> 0x20);
  }
  lVar2 = in_stack_000001a0;
  if ((in_stack_000001a0 != 0) && (*(long *)(in_stack_000001a0 + 0x18) != 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_063508a0;
    auVar4 = FUN_042a5368(*(long *)(unaff_x19 + 0x30),*(long *)(in_stack_000001a0 + 0x18),
                          DAT_083eb138);
    in_stack_000000c0 = auVar4._0_4_;
    uStack00000000000000c4 = auVar4._4_4_;
    in_stack_000000c8 = auVar4._8_4_;
    uStack00000000000000cc = auVar4._12_4_;
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 == 0) goto LAB_063508a0;
    FUN_0405d7ac(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),auVar4._0_8_ >> 0x20,
                 lVar2,DAT_08412d50);
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  memcpy(&stack0x00000010,&stack0x00000070,0x60);
  uVar1 = DAT_083ebb20;
  if (lVar2 != 0) {
    memcpy(&stack0x000000d0,&stack0x00000010,0x60);
    System_Collections_Generic_HashSet<OVRTask<OVRSceneManager_Metrics>>__IntersectWithEnumerable
              (lVar2,&stack0x000000d0,uVar1);
    return;
  }
LAB_063508a0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


