/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 03168ef8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  ulong uVar9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  ulong in_stack_00000000;
  uint in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  uVar9 = in_stack_00000000 >> 0x20;
  *(undefined1 *)(unaff_x20 + 0x8d) = 1;
                    /* try { // try from 03168f00 to 03268f0f has its CatchHandler @ 03168f6c */
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 03168f24 to 03268f2b has its CatchHandler @ 03168f64 */
                    /* try { // try from 03168f2c to 03268f5f has its CatchHandler @ 03168ec0 */
  uVar1 = FUN_03922f24(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x58) = unaff_s11;
    *(undefined4 *)(lVar2 + 0x5c) = unaff_s10;
    *(undefined4 *)(lVar2 + 0x60) = unaff_s9;
    *(undefined4 *)(lVar2 + 100) = unaff_s8;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 03168f60 to 03268f63 has its CatchHandler @ 03168f68 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168f24 with catch @ 03168f64
                       try { // try from 03168f64 to 03268f83 has its CatchHandler @ 03168ec0 */
    uVar1 = FUN_0391f968(uVar3,0,0);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168f60 with catch @ 03168f68
                        */
    if ((uVar1 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03169048;
                    /* catch() { ... } // from try @ 03168f84 with catch @ 03168f94 */
      FUN_03165dd4();
      in_stack_00000000 = in_stack_00000000 & 0xffffffff;
                    /* try { // try from 03168fa0 to 03268fab has its CatchHandler @ 03168fc0 */
      uVar1 = (ulong)in_stack_00000008;
    }
    else {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168f00 with catch @ 03168f6c
                        */
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_03169048;
      in_stack_00000000 = FUN_03928d34(*(long *)(unaff_x19 + 0x38),0);
      uVar9 = param_2;
      uVar1 = param_3;
                    /* try { // try from 03168f84 to 03268f87 has its CatchHandler @ 03168f94 */
    }
    fVar7 = (float)param_3;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
                    /* try { // try from 03168fac to 03268fb7 has its CatchHandler @ 03168ec0 */
      uStack0000000000000040 = *(undefined8 *)(lVar2 + 0x168);
      uStack0000000000000028 = *(undefined8 *)(lVar2 + 0x150);
      uStack0000000000000020 = *(undefined8 *)(lVar2 + 0x148);
      uStack0000000000000038 = *(undefined8 *)(lVar2 + 0x160);
      uVar3 = *(undefined8 *)(lVar2 + 0x158);
      uStack0000000000000030 = uVar3;
      if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar5 = (float)uVar3;
      fVar4 = (float)FUN_03164e98(&stack0x00000020);
      uVar6 = (ulong)(uint)(fVar5 - (float)uVar9);
      uVar8 = (ulong)(uint)(fVar7 - (float)uVar1);
      uVar3 = FUN_039148b4(fVar4 - (float)in_stack_00000000,uVar6,uVar8,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_03107d04(in_stack_00000000,uVar9,uVar1,uVar3,uVar6,uVar8,param_4,
                     *(long *)(unaff_x19 + 0x30),0);
        return;
      }
    }
  }
LAB_03169048:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


