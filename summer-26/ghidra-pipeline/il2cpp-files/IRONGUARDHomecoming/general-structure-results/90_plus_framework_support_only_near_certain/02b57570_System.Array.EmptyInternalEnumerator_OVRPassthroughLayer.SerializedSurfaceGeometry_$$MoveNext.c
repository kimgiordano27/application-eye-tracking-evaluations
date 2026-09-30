/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext
ENTRY_POINT: 02b57570
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNext(void)

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
  long lVar11;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  int *piVar12;
  int iVar13;
  undefined8 *unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uStack000000000000000c;
  
  piVar12 = (int *)(unaff_x28 + 0x20);
  uVar10 = *piVar12 - 1;
  uStack000000000000000c = unaff_w23;
  if (unaff_x24 == (long *)0x0) {
    plVar3 = (long *)FUN_02249368(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (unaff_x26 == 0) goto LAB_02b578bc;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar10 < uVar5) {
      iVar13 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar11 = (long)(int)uVar10;
        if (*(int *)(unaff_x26 + (long)(int)uVar10 * 0x28 + 0x20) == unaff_w27) {
          if (plVar3 == (long *)0x0) goto LAB_02b578bc;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(unaff_x26 + lVar11 * 0x28 + 0x28));
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_02b578a4;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            uVar6 = unaff_x29[2];
            uVar15 = unaff_x29[1];
            uVar14 = *unaff_x29;
            goto LAB_02b57874;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar10) goto LAB_02b578b8;
        uVar10 = *(uint *)(unaff_x26 + lVar11 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_0358bbf4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar10 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_02b578bc;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar10 < uVar5) {
      iVar13 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar11 = (long)(int)uVar10;
        if (*(int *)(unaff_x26 + (long)(int)uVar10 * 0x28 + 0x20) == unaff_w27) {
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
                goto LAB_02b57624;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02b57624:
          uVar8 = (*(code *)*puVar2)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_02b578a4:
              FUN_0358baf0();
            }
            else if ((uStack000000000000000c & 0xff) == 1) {
              uVar6 = unaff_x29[2];
              uVar15 = unaff_x29[1];
              uVar14 = *unaff_x29;
LAB_02b57874:
              if ((uint)lVar11 < *(uint *)(unaff_x26 + 0x18)) {
                lVar11 = unaff_x26 + lVar11 * 0x28;
                *(undefined8 *)(lVar11 + 0x40) = uVar6;
                *(undefined8 *)(lVar11 + 0x38) = uVar15;
                *(undefined8 *)(lVar11 + 0x30) = uVar14;
                return 1;
              }
              goto LAB_02b578b8;
            }
            return 0;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar10) goto LAB_02b578b8;
        uVar10 = *(uint *)(unaff_x26 + lVar11 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_0358bbf4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar10 < uVar5);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x21 + 0x20);
    if (uVar10 == uVar5) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar11 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
      if (lVar11 == 0) goto LAB_02b578bc;
      uVar5 = *(uint *)(lVar11 + 0x18);
      iVar13 = 0;
      if (uVar5 != 0) {
        iVar13 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar13 * uVar5;
      if (uVar5 <= uVar1) goto LAB_02b578b8;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      piVar12 = (int *)(lVar11 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_02b578b8;
    lVar11 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) {
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar11 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar11 * 0x28 + 0x24);
  }
  lVar11 = unaff_x26 + lVar11 * 0x28;
  *(int *)(lVar11 + 0x20) = unaff_w27;
  iVar13 = *piVar12;
  *(undefined8 *)(lVar11 + 0x28) = unaff_x20;
  *(int *)(lVar11 + 0x24) = iVar13 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28));
  uVar14 = unaff_x29[1];
  uVar6 = *unaff_x29;
  *(undefined8 *)(lVar11 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar11 + 0x38) = uVar14;
  *(undefined8 *)(lVar11 + 0x30) = uVar6;
  *piVar12 = uVar10 + 1;
  return 1;
}


