/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 02bbba94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
          (undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint unaff_w19;
  uint uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  int iVar6;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined4 unaff_w29;
  uint uStack000000000000000c;
  
  uVar3 = (uint)param_1;
  if (unaff_w19 < uVar3) {
    iVar6 = 0;
    uStack000000000000000c = unaff_w23;
    do {
      uVar3 = (uint)param_1;
      lVar5 = (long)(int)unaff_w19;
      if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * 0x18 + 0x20) == unaff_w27) {
        if (param_2 == (long *)0x0) goto LAB_02bbbca8;
        uVar2 = (**(code **)(*param_2 + 0x1b8))
                          (param_2,*(undefined8 *)(unaff_x26 + lVar5 * 0x18 + 0x28));
        if ((uVar2 & 1) != 0) {
          if ((uStack000000000000000c & 0xff) == 2) {
            FUN_0358baf0();
          }
          else if ((uStack000000000000000c & 0xff) == 1) {
            if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x30) = unaff_w29;
              return 1;
            }
            goto LAB_02bbbca4;
          }
          return 0;
        }
        uVar3 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar3 <= unaff_w19) goto LAB_02bbbca4;
      unaff_w19 = *(uint *)(unaff_x26 + lVar5 * 0x18 + 0x24);
      if ((int)uVar3 <= iVar6) {
        FUN_0358bbf4(0);
      }
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
      iVar6 = iVar6 + 1;
      uVar3 = (uint)param_1;
    } while (unaff_w19 < uVar3);
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar4 = *(uint *)(unaff_x21 + 0x20);
    if (uVar4 == uVar3) {
      FUN_02bbc068();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_02bbbca8;
      uVar3 = *(uint *)(lVar5 + 0x18);
      iVar6 = 0;
      if (uVar3 != 0) {
        iVar6 = unaff_w27 / (int)uVar3;
      }
      uVar1 = unaff_w27 - iVar6 * uVar3;
      if (uVar3 <= uVar1) goto LAB_02bbbca4;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar4 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02bbbca8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar4) goto LAB_02bbbca4;
    lVar5 = (long)(int)uVar4;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar4 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar4) {
LAB_02bbbca4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = (long)(int)uVar4;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x18;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar6 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar6 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
  *(undefined4 *)(lVar5 + 0x30) = unaff_w29;
  *unaff_x28 = uVar4 + 1;
  return 1;
}


