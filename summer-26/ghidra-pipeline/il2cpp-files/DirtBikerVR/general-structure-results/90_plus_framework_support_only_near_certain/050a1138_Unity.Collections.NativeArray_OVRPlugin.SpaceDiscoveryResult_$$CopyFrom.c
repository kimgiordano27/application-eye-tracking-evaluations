/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 050a1138
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar5;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong unaff_x27;
  ulong uVar7;
  long unaff_x28;
  undefined8 uVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  do {
    uStack0000000000000068 = in_stack_00000028;
    uStack0000000000000060 = in_stack_00000020;
    uStack0000000000000048 = in_stack_00000008;
    uStack0000000000000040 = in_stack_00000000;
    uStack0000000000000050 = in_stack_00000010;
    uStack0000000000000070 = param_1;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar5 = (int)unaff_x25;
    if (iVar2 < 0) {
      uVar6 = (uint)unaff_x27;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar6) || (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1))
      goto LAB_050a11f8;
      lVar3 = unaff_x22 + (long)(int)(uVar6 + 1) * (long)iVar5;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x28 + 0x30);
      unaff_x27 = (ulong)(uVar6 - 1);
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x28 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = uVar8;
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      if ((int)(uVar6 - 1) < unaff_w21) goto LAB_050a11a8;
    }
    else {
LAB_050a11a8:
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar1 = (int)uVar7 + 1;
        if (uVar6 <= uVar1) goto LAB_050a11f8;
        lVar3 = unaff_x22 + (long)(int)uVar1 * (long)iVar5;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if (uVar6 <= (uint)unaff_x26) goto LAB_050a11f8;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x27) {
LAB_050a11f8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x28 = unaff_x22 + (long)(int)(uint)unaff_x27 * (long)iVar5;
    in_stack_00000008 = *(undefined8 *)(unaff_x28 + 0x28);
    in_stack_00000000 = *(undefined8 *)(unaff_x28 + 0x20);
    in_stack_00000010 = *(undefined8 *)(unaff_x28 + 0x30);
    param_1 = in_stack_00000030;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
  } while( true );
}


