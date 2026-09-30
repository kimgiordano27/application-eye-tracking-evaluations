/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 059cd654
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ulong uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar7;
  long unaff_x25;
  uint uVar8;
  ulong unaff_x27;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while (uVar1 = unaff_x27 + 1, (uint)uVar1 < in_w8) {
    lVar4 = unaff_x22 + uVar1 * unaff_x25;
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    iVar7 = (int)unaff_x25;
    if (unaff_x23 <= (long)unaff_x27) {
      do {
        uVar8 = (uint)unaff_x27;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar8) goto LAB_059cd774;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = unaff_x22 + (long)(int)uVar8 * (long)iVar7;
        uVar12 = *(undefined8 *)(lVar4 + 0x28);
        uVar10 = *(undefined8 *)(lVar4 + 0x20);
        uVar6 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0406aaec();
        }
        in_stack_00000040 = uVar10;
        in_stack_00000048 = uVar12;
        in_stack_00000050 = uVar6;
        in_stack_00000060 = uVar9;
        in_stack_00000068 = uVar11;
        in_stack_00000070 = uVar5;
        iVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar2) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar8) || (*(uint *)(unaff_x22 + 0x18) <= uVar8 + 1))
        goto LAB_059cd774;
        lVar3 = unaff_x22 + (long)(int)(uVar8 + 1) * (long)iVar7;
        uVar10 = *(undefined8 *)(lVar4 + 0x20);
        uVar6 = *(undefined8 *)(lVar4 + 0x30);
        unaff_x27 = (ulong)(uVar8 - 1);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar10;
        *(undefined8 *)(lVar3 + 0x30) = uVar6;
      } while (unaff_w21 <= (int)(uVar8 - 1));
      in_w8 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar8 = (int)unaff_x27 + 1;
    if (in_w8 <= uVar8) break;
    lVar4 = unaff_x22 + (long)(int)uVar8 * (long)iVar7;
    *(undefined8 *)(lVar4 + 0x28) = uVar11;
    *(undefined8 *)(lVar4 + 0x20) = uVar9;
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    if (uVar1 == unaff_x24) {
      return;
    }
    unaff_x27 = uVar1;
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
LAB_059cd774:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


