/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 02bbb954
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
          (long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long unaff_x26;
  int *piVar11;
  undefined4 unaff_w29;
  int iVar12;
  uint uStack000000000000000c;
  
  if (param_1 == 0) goto LAB_02bbbca8;
  uVar10 = *(uint *)(param_1 + 0x18);
  param_2 = param_2 & 0x7fffffff;
  iVar12 = 0;
  if (uVar10 != 0) {
    iVar12 = (int)param_2 / (int)uVar10;
  }
  uVar5 = param_2 - iVar12 * uVar10;
  if (uVar10 <= uVar5) {
LAB_02bbbca4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  piVar11 = (int *)(param_1 + (ulong)uVar5 * 4 + 0x20);
  uVar10 = *piVar11 - 1;
  uStack000000000000000c = unaff_w23;
  if (unaff_x24 == (long *)0x0) {
    plVar3 = (long *)FUN_02249368(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (unaff_x26 == 0) goto LAB_02bbbca8;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar10 < uVar5) {
      iVar12 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar4 = (long)(int)uVar10;
        if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x20) == param_2) {
          if (plVar3 == (long *)0x0) goto LAB_02bbbca8;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(unaff_x26 + lVar4 * 0x18 + 0x28));
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_02bbbc90;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + lVar4 * 0x18 + 0x30) = unaff_w29;
              return 1;
            }
            goto LAB_02bbbca4;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar10) goto LAB_02bbbca4;
        uVar10 = *(uint *)(unaff_x26 + lVar4 * 0x18 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_0358bbf4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar10 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_02bbbca8;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar10 < uVar5) {
      iVar12 = 0;
      do {
        uVar5 = (uint)uVar6;
        if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x20) == param_2) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44(lVar4);
          }
          lVar7 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_02bbba28;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02bbba28:
          uVar8 = (*(code *)*puVar2)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_02bbbc90:
              FUN_0358baf0();
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x30) = unaff_w29;
              return 1;
            }
            goto LAB_02bbbca4;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar10) goto LAB_02bbbca4;
        uVar10 = *(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_0358bbf4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar10 < uVar5);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x21 + 0x20);
    if (uVar10 == uVar5) {
      FUN_02bbc068();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
      if (lVar4 == 0) goto LAB_02bbbca8;
      uVar5 = *(uint *)(lVar4 + 0x18);
      iVar12 = 0;
      if (uVar5 != 0) {
        iVar12 = (int)param_2 / (int)uVar5;
      }
      uVar1 = param_2 - iVar12 * uVar5;
      if (uVar5 <= uVar1) goto LAB_02bbbca4;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      piVar11 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02bbbca8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_02bbbca4;
    lVar4 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_02bbbca4;
    lVar4 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar4 * 0x18 + 0x24);
  }
  lVar4 = unaff_x26 + lVar4 * 0x18;
  *(uint *)(lVar4 + 0x20) = param_2;
  iVar12 = *piVar11;
  *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
  *(int *)(lVar4 + 0x24) = iVar12 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28));
  *(undefined4 *)(lVar4 + 0x30) = unaff_w29;
  *piVar11 = uVar10 + 1;
  return 1;
}


