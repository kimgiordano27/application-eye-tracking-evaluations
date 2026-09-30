/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04c42748
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  long unaff_x19;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  lVar4 = *(long *)(unaff_x19 + 0x20);
  pcVar6 = *(code **)**(undefined8 **)(param_1 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
                    /* try { // try from 04c42780 to 04d4278f has its CatchHandler @ 04c42790 */
  lVar4 = (*pcVar6)(**(undefined8 **)(lVar4 + 0xc0));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
                    /* catch() { ... } // from try @ 04c4270c with catch @ 04c42790
                       catch() { ... } // from try @ 04c42780 with catch @ 04c42790 */
                    /* try { // try from 04c42794 to 04d42797 has its CatchHandler @ 04c427a0 */
  uVar1 = *(ushort *)(lVar5 + 0x135);
                    /* try { // try from 04c42798 to 04d427a3 has its CatchHandler @ 04c42600 */
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c42794 with catch @ 04c427a0
                        */
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar2);
  }
  (*pcVar6)(lVar4);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar2);
  }
  (*pcVar6)(lVar4);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  uVar9 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  FUN_056ec910(&stack0x00000048,&stack0x00000080,lVar4,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
  in_stack_00000088 = &stack0x00000030;
  in_stack_00000038 = in_stack_00000050;
  in_stack_00000030 = in_stack_00000048;
  in_stack_00000040 = in_stack_00000058;
  in_stack_00000080 = uVar9;
  (**(code **)(lVar2 + 0x10))(uVar7,lVar2,&stack0x00000070,&stack0x00000080,&stack0x00000030);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  uVar7 = in_stack_00000068;
  uVar9 = in_stack_00000060;
  uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  in_stack_00000080 = uVar9;
  in_stack_00000088 = (undefined8 *)uVar7;
  FUN_056ec910(&stack0x00000018,&stack0x00000080,lVar4,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x78);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x70);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x70);
  in_stack_00000008 = in_stack_00000020;
  in_stack_00000000 = in_stack_00000018;
  in_stack_00000010 = in_stack_00000028;
  in_stack_00000080 = uVar8;
  in_stack_00000088 = (undefined8 *)register0x00000008;
  (**(code **)(lVar2 + 0x10))(uVar9,lVar2,&stack0x00000060,&stack0x00000080);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  pauVar3 = (undefined1 (*) [16])
            thunk_FUN_03799158(lVar4,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0x80));
  return *pauVar3;
}


