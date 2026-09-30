/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 02b18fa0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint *unaff_x26;
  uint *puVar8;
  
  while( true ) {
    puVar8 = unaff_x26;
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = puVar8 + 6;
    if (unaff_x24 == unaff_x25) break;
    if ((param_1 & 0xffffffff) <= unaff_x25) goto LAB_02b19058;
    if (-1 < (int)*unaff_x26) {
      plVar6 = *(long **)(puVar8 + 8);
      if (plVar6 == (long *)0x0) goto LAB_02b1905c;
      uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
      param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
      if (param_1 <= unaff_x25) goto LAB_02b19058;
      *unaff_x26 = uVar5 & 0x7fffffff;
    }
  }
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_02b1905c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    do {
      if (uVar5 <= uVar7) {
LAB_02b19058:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      iVar2 = *(int *)(unaff_x23 + uVar7 * 0x18 + 0x20);
      if (-1 < iVar2) {
        if (unaff_x21 == 0) goto LAB_02b1905c;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar2 / unaff_w20;
        }
        uVar3 = iVar2 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_02b19058;
        lVar1 = unaff_x21 + (ulong)uVar3 * 4;
        *(int *)(unaff_x23 + uVar7 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01e10808((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01e10808();
  return;
}


