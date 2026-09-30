/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 06038b00
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x9;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
                    /* try { // try from 06038b00 to 06138b03 has its CatchHandler @ 06038b2c */
                    /* try { // try from 06038b04 to 06138b3b has its CatchHandler @ 060389e4 */
  lVar3 = FUN_031f21dc(*in_x9,*(undefined4 *)(param_1 + 0x18));
  puVar1 = PTR_DAT_075f2ec0;
  if (in_stack_00000068 != 0) {
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar3 + 0x20);
    do {
                    /* catch() { ... } // from try @ 06038b00 with catch @ 06038b2c */
      if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)uVar5) {
        lVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_06038d1c();
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
          thunk_FUN_0329bf60((long *)(lVar4 + 0x10),lVar3);
          return lVar4;
        }
        break;
      }
      if (*(uint *)(in_stack_00000068 + 0x18) <= uVar5) {
LAB_06038c18:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
                    /* try { // try from 06038b3c to 06138b43 has its CatchHandler @ 06038b58 */
                    /* try { // try from 06038b44 to 06138b4f has its CatchHandler @ 060389e4 */
                    /* try { // try from 06038b50 to 06138b57 has its CatchHandler @ 06038b58 */
      FUN_05f9a6f0(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + uVar5 * 8 + 0x20),1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06038b3c with catch @ 06038b58
                       catch(type#2 @ 00000000) { ... } // from try @ 06038b50 with catch @ 06038b58
                        */
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar2 = FUN_06038c20(uVar5 & 0xffffffff,&stack0x00000068);
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000028 = in_stack_00000048;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_06038c18;
      *puVar6 = uVar2;
      puVar6[8] = 0;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(puVar6 + 6) = uStack0000000000000054;
      *(ulong *)(puVar6 + 4) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(puVar6 + 3) = CONCAT44(uStack000000000000004c,in_stack_00000048);
      *(undefined8 *)(puVar6 + 1) = in_stack_00000040;
      puVar6 = puVar6 + 9;
    } while (in_stack_00000068 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


