/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bbbb5c
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


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w27;
  int *unaff_x28;
  undefined4 unaff_w29;
  
  if (unaff_w19 == in_w8) {
    FUN_02bbc068();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    *(uint *)(unaff_x21 + 0x20) = unaff_w19 + 1;
    if (lVar4 == 0) goto LAB_02bbbca8;
    uVar1 = *(uint *)(lVar4 + 0x18);
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = unaff_w27 / (int)uVar1;
    }
    uVar2 = unaff_w27 - iVar3 * uVar1;
    if (uVar1 <= uVar2) goto LAB_02bbbca4;
    lVar5 = *(long *)(unaff_x21 + 0x18);
    unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
  }
  else {
    lVar5 = *(long *)(unaff_x21 + 0x18);
    *(uint *)(unaff_x21 + 0x20) = unaff_w19 + 1;
  }
  if (lVar5 != 0) {
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)unaff_w19 * 0x18;
      *(int *)(lVar5 + 0x20) = unaff_w27;
      iVar3 = *unaff_x28;
      *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
      *(int *)(lVar5 + 0x24) = iVar3 + -1;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
      *(undefined4 *)(lVar5 + 0x30) = unaff_w29;
      *unaff_x28 = unaff_w19 + 1;
      return 1;
    }
LAB_02bbbca4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_02bbbca8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


