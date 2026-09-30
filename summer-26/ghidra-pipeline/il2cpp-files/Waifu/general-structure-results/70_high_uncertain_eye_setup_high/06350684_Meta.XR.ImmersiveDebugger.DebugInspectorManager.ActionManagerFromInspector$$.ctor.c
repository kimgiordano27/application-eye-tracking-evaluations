/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ActionManagerFromInspector$$.ctor
ENTRY_POINT: 06350684
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_ActionManagerFromInspector___ctor(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  undefined4 unaff_s8;
  undefined4 in_stack_00000070;
  uint uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 uStack000000000000007c;
  undefined8 uStack0000000000000084;
  undefined8 uStack000000000000008c;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000001a0;
  
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
  *(undefined1 *)(unaff_x28 + 0x8a5) = unaff_w29;
  uStack0000000000000074 = unaff_w26 & 1;
  in_stack_000000c8 = in_stack_000000c8 & 0xffffffff;
  *(undefined8 *)(unaff_x27 + 0x54) = 0;
  *(undefined8 *)(unaff_x27 + 0x4c) = 0;
  *(undefined8 *)(unaff_x27 + 0x44) = 0;
  *(undefined8 *)(unaff_x27 + 0x3c) = 0;
  *(undefined8 *)(unaff_x27 + 0x34) = 0;
  *(undefined8 *)(unaff_x27 + 0x2c) = 0;
  uStack0000000000000094 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000084 = 0;
  uStack000000000000007c = 0;
  FUN_06358b08(unaff_x27 + 0x20);
  FUN_06358b08(unaff_x27 + 0x10);
  uStack000000000000007c = CONCAT44(uStack000000000000007c._4_4_,unaff_s8);
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_063508a0;
    _in_stack_000000a0 =
         FUN_042b44dc(*(long *)(unaff_x19 + 0x20),*(long *)(unaff_x21 + 0x18),DAT_083eb450);
    auVar3._8_8_ = in_stack_000000c8;
    auVar3._0_8_ = in_stack_000000c0;
    auVar1._8_8_ = in_stack_000000b8;
    auVar1._0_8_ = in_stack_000000b0;
    uVar5 = in_stack_000000a0;
    if ((unaff_x20 == 0) ||
       (_in_stack_000000b0 = auVar1, _in_stack_000000c0 = auVar3, *(long *)(unaff_x19 + 0x28) == 0))
    goto LAB_063508a0;
    _in_stack_000000b0 =
         FUN_0429eef4(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x20 + 0x18),DAT_083eb030);
    uVar6 = in_stack_000000b0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (lVar7 == 0) goto LAB_063508a0;
    FUN_0405de2c(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),uVar5 >> 0x20);
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) goto LAB_063508a0;
    FUN_0405d584(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),uVar6 >> 0x20);
  }
  lVar7 = in_stack_000001a0;
  auVar2._8_8_ = in_stack_000000c8;
  auVar2._0_8_ = in_stack_000000c0;
  if ((in_stack_000001a0 != 0) &&
     (_in_stack_000000c0 = auVar2, *(long *)(in_stack_000001a0 + 0x18) != 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_063508a0;
    _in_stack_000000c0 =
         FUN_042a5368(*(long *)(unaff_x19 + 0x30),*(long *)(in_stack_000001a0 + 0x18),DAT_083eb138);
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (lVar8 == 0) goto LAB_063508a0;
    FUN_0405d7ac(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                 in_stack_000000c0 >> 0x20,lVar7,DAT_08412d50);
  }
  lVar7 = *(long *)(unaff_x19 + 0x38);
  memcpy(&stack0x00000010,&stack0x00000070,0x60);
  uVar4 = DAT_083ebb20;
  if (lVar7 != 0) {
    memcpy(&stack0x000000d0,&stack0x00000010,0x60);
    System_Collections_Generic_HashSet<OVRTask<OVRSceneManager_Metrics>>__IntersectWithEnumerable
              (lVar7,&stack0x000000d0,uVar4);
    return;
  }
LAB_063508a0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


