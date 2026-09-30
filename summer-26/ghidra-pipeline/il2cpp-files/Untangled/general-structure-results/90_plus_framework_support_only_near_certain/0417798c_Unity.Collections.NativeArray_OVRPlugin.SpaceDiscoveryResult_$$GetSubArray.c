/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 0417798c
PROGRAM: Untangled-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  long unaff_x21;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while( true ) {
    uStack0000000000000030 = param_1[2];
    uStack0000000000000028 = param_1[1];
    uStack0000000000000020 = *param_1;
    if (unaff_x20 == 0) break;
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000050 = uStack0000000000000030;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_041779ec:
      if ((int)uVar2 <= (int)unaff_x22) {
        return 0;
      }
      uVar6 = unaff_x22 & 0xffffffff;
      goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly;
    }
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x18;
    if ((long)uVar2 <= (long)unaff_x22) goto LAB_041779ec;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_04177b38;
    param_1 = (undefined8 *)(lVar4 + unaff_x21);
  }
LAB_04177b34:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    iVar7 = (int)unaff_x22;
    uVar5 = (uint)uVar6;
    if ((int)uVar2 <= iVar7) {
      FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)uVar2 - uVar5,0);
      iVar7 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar5;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar7 - uVar5;
    }
    lVar4 = (long)iVar7 * 0x18 + 0x20;
    unaff_x22 = (ulong)iVar7;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_04177b34;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_04177b38;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      uStack0000000000000030 = puVar1[2];
      uStack0000000000000028 = puVar1[1];
      uStack0000000000000020 = *puVar1;
      if (unaff_x20 == 0) goto LAB_04177b34;
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000050 = uStack0000000000000030;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) == 0) {
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((long)unaff_x22 < (long)uVar2);
    uVar8 = (uint)unaff_x22;
  } while ((int)uVar2 <= (int)uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 == 0) goto LAB_04177b34;
  if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_04177b38:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar3 = lVar4 + (long)(int)uVar8 * 0x18;
  uVar10 = *(undefined8 *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(lVar3 + 0x20);
  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04177b38;
  lVar4 = lVar4 + (long)(int)uVar5 * 0x18;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar4 + 0x28) = uVar10;
  *(undefined8 *)(lVar4 + 0x20) = uVar9;
  thunk_FUN_02f411dc(lVar4 + 0x20,0);
  uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
  uVar6 = (ulong)(uVar5 + 1);
  goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly;
}


