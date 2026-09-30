/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 04a0d4cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16])

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar13 = param_7._8_8_;
  uVar11 = param_7._0_8_;
  uVar5 = param_5._8_8_;
  uVar3 = param_5._0_8_;
  uVar14 = param_4._8_8_;
  uVar12 = param_4._0_8_;
  uVar10 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uVar6 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  while( true ) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uStack00000000000000c0 = uVar4;
    uStack00000000000000c8 = uVar6;
    uStack00000000000000d0 = uVar8;
    uStack00000000000000d8 = uVar10;
    uStack00000000000000e0 = uVar12;
    uStack00000000000000e8 = uVar14;
    uStack00000000000000f0 = uVar7;
    uStack00000000000000f8 = uVar9;
    uStack0000000000000100 = uVar11;
    uStack0000000000000108 = uVar13;
    uStack0000000000000110 = uVar3;
    uStack0000000000000118 = uVar5;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
                    /* try { // try from 04a0d520 to 04b0d523 has its CatchHandler @ 04a0d550 */
                    /* try { // try from 04a0d524 to 04b0d527 has its CatchHandler @ 04a0d544 */
                    /* try { // try from 04a0d528 to 04b0d52b has its CatchHandler @ 04a0d550 */
                    /* try { // try from 04a0d52c to 04b0d52f has its CatchHandler @ 04a0d260 */
                    /* try { // try from 04a0d530 to 04b0d533 has its CatchHandler @ 04a0d53c */
                    /* try { // try from 04a0d534 to 04b0d56b has its CatchHandler @ 04a0d260 */
    in_stack_00000150 = uVar4;
    in_stack_00000158 = uVar6;
    in_stack_00000160 = uVar8;
    in_stack_00000168 = uVar10;
    in_stack_00000170 = uVar12;
    in_stack_00000178 = uVar14;
    in_stack_00000180 = uVar7;
    in_stack_00000188 = uVar9;
    in_stack_00000190 = uVar11;
    in_stack_00000198 = uVar13;
    in_stack_000001a0 = uVar3;
    in_stack_000001a8 = uVar5;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d530 with catch @ 04a0d53c
                        */
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                       *(undefined8 *)(unaff_x22 + 0x28));
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d450 with catch @ 04a0d540
                        */
    if (-1 < iVar1) {
      do {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d524 with catch @ 04a0d544
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d49c with catch @ 04a0d548
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d37c with catch @ 04a0d54c
                        */
        unaff_w24 = unaff_w24 - 1;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d520 with catch @ 04a0d550
                       catch(type#1 @ 0718d318) { ... } // from try @ 04a0d528 with catch @ 04a0d550
                        */
        uStack00000000000000f8 = in_stack_00000128;
        uStack00000000000000f0 = in_stack_00000120;
        uStack0000000000000108 = in_stack_00000138;
        uStack0000000000000100 = in_stack_00000130;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0d3bc with catch @ 04a0d554
                        */
        uStack0000000000000118 = in_stack_00000148;
        uStack0000000000000110 = in_stack_00000140;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_04a0d6a0;
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
                    /* try { // try from 04a0d56c to 04b0d56f has its CatchHandler @ 04a0d57c */
        uVar14 = *(undefined8 *)(lVar2 + 0x38);
        uVar12 = *(undefined8 *)(lVar2 + 0x30);
        uVar6 = *(undefined8 *)(lVar2 + 0x48);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        uVar10 = *(undefined8 *)(lVar2 + 0x28);
        uVar8 = *(undefined8 *)(lVar2 + 0x20);
                    /* catch() { ... } // from try @ 04a0d56c with catch @ 04a0d57c */
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000188 = in_stack_00000128;
        in_stack_00000180 = in_stack_00000120;
        in_stack_00000198 = in_stack_00000138;
        in_stack_00000190 = in_stack_00000130;
        in_stack_000001a8 = in_stack_00000148;
        in_stack_000001a0 = in_stack_00000140;
        in_stack_00000150 = uVar8;
        in_stack_00000158 = uVar10;
        in_stack_00000160 = uVar12;
        in_stack_00000168 = uVar14;
        in_stack_00000170 = uVar4;
        in_stack_00000178 = uVar6;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
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
        FUN_04a0ced8();
        return unaff_w19;
      }
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
      FUN_04a0ced8();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    param_1 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = in_stack_00000120;
    uVar6 = in_stack_00000128;
    uVar8 = in_stack_00000130;
    uVar10 = in_stack_00000138;
    uVar12 = in_stack_00000140;
    uVar14 = in_stack_00000148;
  }
LAB_04a0d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


