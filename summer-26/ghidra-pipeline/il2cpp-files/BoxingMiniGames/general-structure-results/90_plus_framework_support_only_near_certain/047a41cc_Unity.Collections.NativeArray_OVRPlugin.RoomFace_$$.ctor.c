/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$.ctor
ENTRY_POINT: 047a41cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>___ctor
               (undefined8 param_1,undefined1 param_2 [16],long param_3)

{
  int iVar1;
  undefined8 in_x9;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  uStack0000000000000008 = *(undefined8 *)(unaff_x24 + 0x28);
  uStack0000000000000000 = *(undefined8 *)(unaff_x24 + 0x20);
                    /* catch() { ... } // from try @ 047a414c with catch @ 047a41dc */
                    /* try { // try from 047a41e0 to 048a41e7 has its CatchHandler @ 047a41f0 */
  uStack0000000000000010 = in_x9;
  uStack0000000000000030 = param_1;
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
                    /* try { // try from 047a41e8 to 048a41f3 has its CatchHandler @ 047a3e74 */
    FUN_0367c9fc();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a41e0 with catch @ 047a41f0
                        */
  in_stack_00000090 = uStack0000000000000030;
  in_stack_00000088 = uStack0000000000000028;
  in_stack_00000080 = uStack0000000000000020;
  in_stack_00000068 = uStack0000000000000008;
  in_stack_00000060 = uStack0000000000000000;
  in_stack_00000070 = uStack0000000000000010;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    uVar5 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x26 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x26 + 0x30);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar6 = *(undefined8 *)(unaff_x24 + 0x28);
      uVar4 = *(undefined8 *)(unaff_x24 + 0x20);
      *(undefined8 *)(unaff_x26 + 0x30) = *(undefined8 *)(unaff_x24 + 0x30);
      *(undefined8 *)(unaff_x26 + 0x28) = uVar6;
      *(undefined8 *)(unaff_x26 + 0x20) = uVar4;
      thunk_FUN_036b7ad0(unaff_x20 + 0x20 + (long)unaff_w25 * 0x18,0);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x24 + 0x28) = uVar5;
        *(undefined8 *)(unaff_x24 + 0x20) = uVar3;
        *(undefined8 *)(unaff_x24 + 0x30) = uVar2;
        thunk_FUN_036b7ad0(unaff_x20 + 0x20 + (long)unaff_w23 * 0x18,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


