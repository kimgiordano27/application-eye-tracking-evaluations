/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b57e10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (ulong param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 in_CY;
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
  
  while (!(bool)in_CY) {
    *unaff_x26 = param_2 & 0x7fffffff;
    do {
      puVar8 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar8 + 10;
      if (unaff_x24 == unaff_x25) {
        if ((int)unaff_x24 < 1) goto LAB_02b57ea0;
        if (unaff_x23 == 0) goto LAB_02b57ed8;
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        uVar7 = 0;
        goto LAB_02b57e44;
      }
      if ((param_1 & 0xffffffff) <= unaff_x25) goto LAB_02b57ed4;
    } while ((int)*unaff_x26 < 0);
    plVar6 = *(long **)(puVar8 + 0xc);
    if (plVar6 == (long *)0x0) goto LAB_02b57ed8;
    param_2 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    in_CY = param_1 <= unaff_x25;
  }
LAB_02b57ed4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
LAB_02b57e44:
  if (uVar2 <= uVar7) goto LAB_02b57ed4;
  iVar3 = *(int *)(unaff_x23 + uVar7 * 0x28 + 0x20);
  if (-1 < iVar3) {
    if (unaff_x21 == 0) {
LAB_02b57ed8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar5 = 0;
    if (unaff_w20 != 0) {
      iVar5 = iVar3 / unaff_w20;
    }
    uVar4 = iVar3 - iVar5 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_02b57ed4;
    lVar1 = unaff_x21 + (ulong)uVar4 * 4;
    *(int *)(unaff_x23 + uVar7 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
  }
  uVar7 = uVar7 + 1;
  if (uVar7 == unaff_x24) {
LAB_02b57ea0:
    *(long *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x10));
    *(long *)(unaff_x19 + 0x18) = unaff_x23;
    thunk_FUN_01f51358();
    return;
  }
  goto LAB_02b57e44;
}


