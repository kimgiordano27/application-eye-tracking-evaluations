/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 04a12870
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  
  while( true ) {
    uStack0000000000000108 = in_stack_00000068;
    uStack0000000000000100 = in_stack_00000060;
    uStack0000000000000118 = in_stack_00000078;
    uStack0000000000000110 = in_stack_00000070;
    uStack00000000000000e8 = in_stack_00000048;
    uStack00000000000000e0 = in_stack_00000040;
    uStack00000000000000f8 = in_stack_00000058;
    uStack00000000000000f0 = in_stack_00000050;
                    /* try { // try from 04a12888 to 04b1288b has its CatchHandler @ 04a128b4 */
                    /* try { // try from 04a1288c to 04b1288f has its CatchHandler @ 04a128ac */
                    /* try { // try from 04a12890 to 04b12893 has its CatchHandler @ 04a128b4 */
                    /* try { // try from 04a12894 to 04b12897 has its CatchHandler @ 04a125e0 */
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x22 + 0x28));
                    /* try { // try from 04a12898 to 04b1289b has its CatchHandler @ 04a128a4 */
    if (-1 < iVar1) {
      do {
                    /* try { // try from 04a1289c to 04b128d3 has its CatchHandler @ 04a125e0 */
        unaff_w24 = unaff_w24 - 1;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a12898 with catch @ 04a128a4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a127c4 with catch @ 04a128a8
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a1288c with catch @ 04a128ac
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a12804 with catch @ 04a128b0
                        */
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_04a129d0;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a12888 with catch @ 04a128b4
                       catch(type#1 @ 0718d318) { ... } // from try @ 04a12890 with catch @ 04a128b4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a126f4 with catch @ 04a128b8
                        */
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x20;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a12734 with catch @ 04a128bc
                        */
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
                    /* try { // try from 04a128d4 to 04b128d7 has its CatchHandler @ 04a128e4 */
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
                    /* catch() { ... } // from try @ 04a128d4 with catch @ 04a128e4 */
        uStack0000000000000108 = in_stack_000000c8;
        uStack0000000000000100 = in_stack_000000c0;
        uStack0000000000000118 = in_stack_000000d8;
        uStack0000000000000110 = in_stack_000000d0;
        uStack00000000000000e0 = uVar5;
        uStack00000000000000e8 = uVar6;
        uStack00000000000000f0 = uVar3;
        uStack00000000000000f8 = uVar4;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a12250();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 04a1291c to 04b12943 has its CatchHandler @ 04a12958 */
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
                    /* try { // try from 04a12944 to 04b1294f has its CatchHandler @ 04a125e0 */
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a12250();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x20;
    in_stack_00000068 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000060 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000078 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000070 = *(undefined8 *)(lVar2 + 0x30);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_stack_00000048 = in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    in_stack_00000058 = in_stack_000000d8;
    in_stack_00000050 = in_stack_000000d0;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
  }
LAB_04a129d0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


