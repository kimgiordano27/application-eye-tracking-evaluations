/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 054db814
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
               (long param_1,undefined1 param_2 [16])

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 in_x9;
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
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar9 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x30) = in_x9;
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    iVar5 = (int)unaff_x25;
    if ((int)(uint)unaff_x27 < unaff_w21) goto LAB_054db83c;
    bVar1 = *(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x27;
    while( true ) {
      if (bVar1) goto LAB_054db8a0;
      uVar6 = (uint)unaff_x27;
      lVar8 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
      uVar3 = *(undefined8 *)(lVar8 + 0x30);
      uVar10 = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined8 *)(lVar8 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      in_stack_000000e0 = uVar9;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar3;
      in_stack_00000110 = in_stack_000000d0;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_054db83c:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar6 = (int)uVar7 + 1;
        if ((uint)uVar4 <= uVar6) goto LAB_054db8a0;
        lVar8 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
        *(undefined8 *)(lVar8 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar8 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000c0;
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_054db8a0;
        lVar8 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar8 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar8 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar8 + 0x20);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6) break;
    in_x9 = *(undefined8 *)(lVar8 + 0x30);
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) break;
    param_1 = unaff_x22 + (long)(int)(uVar6 + 1) * (long)iVar5;
    unaff_x27 = (ulong)(uVar6 - 1);
  }
LAB_054db8a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


