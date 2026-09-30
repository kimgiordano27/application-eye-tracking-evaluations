/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 02b18fa4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(ulong param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint *unaff_x26;
  
  for (; puVar2 = unaff_x26 + 6, unaff_x24 != unaff_x25; unaff_x25 = unaff_x25 + 1) {
    if ((param_1 & 0xffffffff) <= unaff_x25) goto LAB_02b19058;
    if (-1 < (int)*puVar2) {
      plVar7 = *(long **)(unaff_x26 + 8);
      if (plVar7 == (long *)0x0) goto LAB_02b1905c;
      uVar6 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
      param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
      if (param_1 <= unaff_x25) goto LAB_02b19058;
      *puVar2 = uVar6 & 0x7fffffff;
    }
    unaff_x26 = puVar2;
  }
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_02b1905c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = 0;
    do {
      if (uVar6 <= uVar8) {
LAB_02b19058:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      iVar3 = *(int *)(unaff_x23 + uVar8 * 0x18 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_02b1905c;
        iVar5 = 0;
        if (unaff_w20 != 0) {
          iVar5 = iVar3 / unaff_w20;
        }
        uVar4 = iVar3 - iVar5 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_02b19058;
        lVar1 = unaff_x21 + (ulong)uVar4 * 4;
        *(int *)(unaff_x23 + uVar8 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01e10808((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01e10808();
  return;
}


