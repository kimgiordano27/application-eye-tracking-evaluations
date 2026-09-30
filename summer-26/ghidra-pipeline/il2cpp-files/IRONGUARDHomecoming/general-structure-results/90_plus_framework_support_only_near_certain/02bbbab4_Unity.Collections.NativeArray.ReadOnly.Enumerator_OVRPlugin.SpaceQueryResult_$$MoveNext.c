/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 02bbbab4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__MoveNext
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int in_w9;
  uint unaff_w19;
  uint uVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar6 = (uint)param_1;
    if (in_w9 == unaff_w27) {
      if (unaff_x24 == (long *)0x0) goto LAB_02bbbca8;
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_0358baf0();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w19 * 0x18 + 0x30) = unaff_w29;
            return 1;
          }
          goto LAB_02bbbca4;
        }
        return 0;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w19) goto LAB_02bbbca4;
    unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x25 + 0x24);
    if ((int)uVar6 <= unaff_w23) {
      FUN_0358bbf4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    if ((uint)param_1 <= unaff_w19) break;
    in_w9 = *(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x25 + 0x20);
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x21 + 0x20);
    if (uVar6 == (uint)param_1) {
      FUN_02bbc068();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
      if (lVar5 == 0) goto LAB_02bbbca8;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_02bbbca4;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02bbbca8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_02bbbca4;
    lVar5 = (long)(int)uVar6;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar6 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) {
LAB_02bbbca4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = (long)(int)uVar6;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x18;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar2 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
  *(undefined4 *)(lVar5 + 0x30) = unaff_w29;
  *unaff_x28 = uVar6 + 1;
  return 1;
}


