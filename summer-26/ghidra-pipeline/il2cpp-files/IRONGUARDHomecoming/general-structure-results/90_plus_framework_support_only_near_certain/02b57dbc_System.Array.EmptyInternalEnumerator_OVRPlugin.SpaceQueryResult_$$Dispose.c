/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02b57dbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

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
  ulong uVar8;
  uint *puVar9;
  
  FUN_0358d498();
  if ((0 < (int)unaff_x24) && ((unaff_x25 & 1) != 0)) {
    if (unaff_x23 == 0) goto LAB_02b57ed8;
    uVar7 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar8 = 0;
    puVar9 = (uint *)(unaff_x23 + 0x20);
    do {
      if (uVar7 <= uVar8) goto LAB_02b57ed4;
      if (-1 < (int)*puVar9) {
        plVar6 = *(long **)(puVar9 + 2);
        if (plVar6 == (long *)0x0) goto LAB_02b57ed8;
        uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
        uVar7 = (ulong)*(uint *)(unaff_x23 + 0x18);
        if (uVar7 <= uVar8) goto LAB_02b57ed4;
        *puVar9 = uVar5 & 0x7fffffff;
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 10;
    } while (unaff_x24 != uVar8);
  }
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_02b57ed8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = 0;
    do {
      if (uVar5 <= uVar8) {
LAB_02b57ed4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar2 = *(int *)(unaff_x23 + uVar8 * 0x28 + 0x20);
      if (-1 < iVar2) {
        if (unaff_x21 == 0) goto LAB_02b57ed8;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar2 / unaff_w20;
        }
        uVar3 = iVar2 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_02b57ed4;
        lVar1 = unaff_x21 + (ulong)uVar3 * 4;
        *(int *)(unaff_x23 + uVar8 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01f51358();
  return;
}


