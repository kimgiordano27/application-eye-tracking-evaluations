/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 058a6be0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
          (ulong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x058a6be0:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  uVar6 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((param_1 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_058a6cd8;
        if ((uint)in_stack_00000000 < *(uint *)(lVar3 + 0x18)) {
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x24 + 0x24) + 1;
          goto LAB_058a6c90;
        }
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_058a6cd8;
        if (uVar8 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)uVar8 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x24 + 0x24);
LAB_058a6c90:
          lVar3 = unaff_x27 + unaff_x25 * 0x24;
          uVar11 = *(undefined8 *)(lVar3 + 0x34);
          uVar10 = *(undefined8 *)(lVar3 + 0x2c);
          in_stack_00000008[2] = *(undefined8 *)(lVar3 + 0x3c);
          in_stack_00000008[1] = uVar11;
          *in_stack_00000008 = uVar10;
          *unaff_x29 = -1;
          *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_058a6cdc:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    do {
      uVar9 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar9;
      unaff_x20 = uVar6 & 0xffffffff;
      uVar8 = (uint)uVar6;
      if ((int)uVar9 < 0) {
        *in_stack_00000008 = 0;
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_058a6cd8;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_058a6cdc;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar6 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 != (long *)0x0) break;
    plVar4 = (long *)FUN_03e98388(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
    if (plVar4 == (long *)0x0) goto LAB_058a6cd8;
    param_1 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
  } while( true );
  if (plVar4 == (long *)0x0) {
LAB_058a6cd8:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
  uVar1 = *(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_058a6bc8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar4,lVar3,0);
LAB_058a6bc8:
  param_1 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_4_,puVar2[1]);
  unaff_x24 = in_stack_00000010;
  unaff_x26 = unaff_x25;
  goto code_r0x058a6be0;
}


