/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 04a0d584
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


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

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
  undefined1 in_q4 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
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
  
  uStack0000000000000008 = in_q4._8_8_;
  uStack0000000000000000 = in_q4._0_8_;
  while( true ) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    in_stack_00000188 = in_stack_00000038;
    in_stack_00000180 = in_stack_00000030;
    in_stack_00000198 = in_stack_00000048;
    in_stack_00000190 = in_stack_00000040;
                    /* try { // try from 04a0d5b4 to 04b0d5db has its CatchHandler @ 04a0d5f0 */
    in_stack_000001a8 = in_stack_00000058;
    in_stack_000001a0 = in_stack_00000050;
    in_stack_00000158 = uStack0000000000000008;
    in_stack_00000150 = uStack0000000000000000;
    in_stack_00000168 = in_stack_00000018;
    in_stack_00000160 = in_stack_00000010;
    in_stack_00000178 = in_stack_00000028;
    in_stack_00000170 = in_stack_00000020;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
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
                    /* try { // try from 04a0d5dc to 04b0d5e7 has its CatchHandler @ 04a0d260 */
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 04a0d5e8 to 04b0d5ef has its CatchHandler @ 04a0d5f0 */
        lVar2 = FUN_0322bef4();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04a0d5b4 with catch @ 04a0d5f0
                       catch(type#2 @ 00000000) { ... } // from try @ 04a0d5e8 with catch @ 04a0d5f0
                        */
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
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_04a0d6a0;
        lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
        uVar8 = *(undefined8 *)(lVar2 + 0x38);
        uVar7 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = *(undefined8 *)(lVar2 + 0x48);
        uVar3 = *(undefined8 *)(lVar2 + 0x40);
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000158 = in_stack_00000128;
        in_stack_00000150 = in_stack_00000120;
        in_stack_00000168 = in_stack_00000138;
        in_stack_00000160 = in_stack_00000130;
        in_stack_00000178 = in_stack_00000148;
        in_stack_00000170 = in_stack_00000140;
        in_stack_00000180 = uVar5;
        in_stack_00000188 = uVar6;
        in_stack_00000190 = uVar7;
        in_stack_00000198 = uVar8;
        in_stack_000001a0 = uVar3;
        in_stack_000001a8 = uVar4;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
    }
    unaff_w24 = unaff_w24 - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
    in_stack_00000018 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000010 = *(undefined8 *)(lVar2 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x48);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x40);
    uStack0000000000000008 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000000 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000038 = in_stack_00000128;
    in_stack_00000030 = in_stack_00000120;
    in_stack_00000048 = in_stack_00000138;
    in_stack_00000040 = in_stack_00000130;
    in_stack_00000058 = in_stack_00000148;
    in_stack_00000050 = in_stack_00000140;
  }
LAB_04a0d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


