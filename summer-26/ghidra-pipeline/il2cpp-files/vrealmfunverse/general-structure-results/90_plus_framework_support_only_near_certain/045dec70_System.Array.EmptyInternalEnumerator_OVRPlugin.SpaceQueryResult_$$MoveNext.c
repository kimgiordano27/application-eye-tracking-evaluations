/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 045dec70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  FUN_04d9e334(*(undefined8 *)(unaff_x22 + 0x18),0);
  if (0 < (int)uVar2) {
    if (unaff_x23 == 0) {
LAB_045ded3c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar3 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    do {
      if (uVar7 == uVar3) {
LAB_045ded38:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      iVar4 = *(int *)(unaff_x23 + 0x20 + uVar7 * 0x24);
      if (-1 < iVar4) {
        if (unaff_x21 == 0) goto LAB_045ded3c;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_045ded38;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(unaff_x23 + 0x20 + uVar7 * 0x24 + 4) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x22 + 0x18));
  return;
}


