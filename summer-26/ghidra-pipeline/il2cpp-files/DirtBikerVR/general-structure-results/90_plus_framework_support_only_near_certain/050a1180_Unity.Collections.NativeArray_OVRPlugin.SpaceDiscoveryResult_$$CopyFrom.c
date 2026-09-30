/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 050a1180
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  uint in_w9;
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
  undefined8 uVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while (in_w9 < in_w8) {
    iVar5 = (int)unaff_x25;
    lVar3 = unaff_x22 + (long)(int)in_w9 * (long)iVar5;
    uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x28 + 0x30);
    uVar6 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong)uVar6;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x28 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar8;
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    if (unaff_w21 <= (int)uVar6) goto LAB_050a1100;
    do {
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
LAB_050a1100:
      uVar6 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_050a11f8;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      unaff_x28 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
      uVar9 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x28 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000040 = uVar8;
      in_stack_00000048 = uVar9;
      in_stack_00000050 = uVar4;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while (-1 < iVar2);
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    if (in_w8 <= uVar6) break;
    in_w9 = uVar6 + 1;
  }
LAB_050a11f8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


