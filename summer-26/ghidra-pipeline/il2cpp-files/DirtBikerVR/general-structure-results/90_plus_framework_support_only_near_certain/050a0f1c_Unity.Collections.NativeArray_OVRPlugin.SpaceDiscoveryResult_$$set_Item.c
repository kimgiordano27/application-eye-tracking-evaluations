/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 050a0f1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  byte in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  do {
    uStack0000000000000058 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000050 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000060 = *(undefined8 *)(param_1 + 0x30);
    uStack0000000000000038 = *(undefined8 *)(in_x9 + 0x28);
    uStack0000000000000030 = *(undefined8 *)(in_x9 + 0x20);
    uStack0000000000000040 = *(undefined8 *)(in_x9 + 0x30);
                    /* try { // try from 050a0f34 to 051a0f93 has its CatchHandler @ 050a10a4 */
    if ((in_w10 & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_000000c0 = uStack0000000000000060;
    in_stack_000000b8 = uStack0000000000000058;
    in_stack_000000b0 = uStack0000000000000050;
    in_stack_00000098 = uStack0000000000000038;
    in_stack_00000090 = uStack0000000000000030;
    in_stack_000000a0 = uStack0000000000000040;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar6 = unaff_w25 + unaff_w24;
      if ((uint)uVar3 <= uVar6) goto LAB_050a107c;
      if (unaff_x21 == 0) goto LAB_050a1080;
      lVar5 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      uVar3 = *(undefined8 *)(lVar5 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_00000090 = uVar7;
      in_stack_00000098 = uVar8;
      in_stack_000000a0 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar6 = unaff_w25 + uVar1;
LAB_050a1034:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar5 = unaff_x19 + (long)(int)uVar6 * 0x18;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000078;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000070;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000080;
          return;
        }
        goto LAB_050a107c;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar6) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1)) goto LAB_050a107c;
      lVar4 = unaff_x19 + (long)(int)(unaff_w25 + uVar1) * (long)unaff_w26;
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      if (unaff_w27 < (int)unaff_w24) goto LAB_050a1034;
      unaff_w28 = unaff_w24 * 2;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if (((uint)uVar3 <= uVar1 - 1) || ((uint)uVar3 <= uVar1)) {
LAB_050a107c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x21 == 0) {
LAB_050a1080:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
    in_x9 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
    in_w10 = *(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135);
  } while( true );
}


