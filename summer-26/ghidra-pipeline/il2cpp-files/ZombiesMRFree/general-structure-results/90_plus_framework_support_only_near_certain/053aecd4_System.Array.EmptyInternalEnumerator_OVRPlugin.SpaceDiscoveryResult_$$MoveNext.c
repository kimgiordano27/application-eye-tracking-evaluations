/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 053aecd4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  NodeCanvas_Tasks_Actions_FadeOut___ctor();
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_053aed88:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
LAB_053aed84:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      iVar3 = *(int *)(unaff_x23 + uVar6 * 0x14 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_053aed88;
        iVar5 = 0;
        if (unaff_w20 != 0) {
          iVar5 = iVar3 / unaff_w20;
        }
        uVar4 = iVar3 - iVar5 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_053aed84;
        lVar1 = unaff_x21 + (ulong)uVar4 * 4;
        *(int *)(unaff_x23 + uVar6 * 0x14 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar6 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_03048534();
  return;
}


