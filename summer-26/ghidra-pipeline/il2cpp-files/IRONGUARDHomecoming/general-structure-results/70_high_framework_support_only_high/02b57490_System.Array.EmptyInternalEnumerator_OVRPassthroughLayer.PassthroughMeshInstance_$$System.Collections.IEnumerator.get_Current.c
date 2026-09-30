/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.PassthroughMeshInstance>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b57490
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 *unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uStack000000000000000c;
  
                    /* try { // try from 02b57490 to 02c5749f has its CatchHandler @ 02b57670 */
  if (in_x9 == 0) {
    FUN_02b57364();
  }
  plVar12 = *(long **)(unaff_x21 + 0x30);
  lVar13 = *(long *)(unaff_x21 + 0x18);
  if (plVar12 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) goto LAB_02b578bc;
    uVar2 = (**(code **)(*unaff_x20 + 0x158))();
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02b5753c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar12,lVar4,1);
LAB_02b5753c:
    uVar2 = (*(code *)*puVar3)(plVar12);
  }
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 == 0) goto LAB_02b578bc;
  uVar11 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar15 = 0;
  if (uVar11 != 0) {
    iVar15 = (int)uVar2 / (int)uVar11;
  }
  uVar5 = uVar2 - iVar15 * uVar11;
  if (uVar5 < uVar11) {
    piVar14 = (int *)(lVar4 + (ulong)uVar5 * 4 + 0x20);
    uVar11 = *piVar14 - 1;
    uStack000000000000000c = unaff_w23;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)FUN_02249368(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (lVar13 == 0) goto LAB_02b578bc;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar11 < uVar5) {
        iVar15 = 0;
        do {
          uVar5 = (uint)uVar7;
          lVar4 = (long)(int)uVar11;
          if (*(uint *)(lVar13 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
            if (plVar12 == (long *)0x0) goto LAB_02b578bc;
            uVar9 = (**(code **)(*plVar12 + 0x1b8))
                              (plVar12,*(undefined8 *)(lVar13 + lVar4 * 0x28 + 0x28));
            if ((uVar9 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) goto LAB_02b578a4;
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              uVar7 = unaff_x29[2];
              uVar17 = unaff_x29[1];
              uVar16 = *unaff_x29;
              goto LAB_02b57874;
            }
            uVar5 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_02b578b8;
          uVar11 = *(uint *)(lVar13 + lVar4 * 0x28 + 0x24);
          if ((int)uVar5 <= iVar15) {
            FUN_0358bbf4(0);
          }
          uVar7 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar11 < uVar5);
      }
    }
    else {
      if (lVar13 == 0) goto LAB_02b578bc;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar11 < uVar5) {
        iVar15 = 0;
        do {
          uVar5 = (uint)uVar7;
          lVar4 = (long)(int)uVar11;
          if (*(uint *)(lVar13 + (long)(int)uVar11 * 0x28 + 0x20) == uVar2) {
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
            uVar7 = *(undefined8 *)(lVar13 + lVar4 * 0x28 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01ecaf44(lVar6);
            }
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_02b57624;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ecb238(plVar12,lVar6,0);
LAB_02b57624:
            uVar9 = (*(code *)*puVar3)(plVar12,uVar7);
            if ((uVar9 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_02b578a4:
                FUN_0358baf0();
              }
              else if ((uStack000000000000000c & 0xff) == 1) {
                uVar7 = unaff_x29[2];
                uVar17 = unaff_x29[1];
                uVar16 = *unaff_x29;
LAB_02b57874:
                if ((uint)lVar4 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + lVar4 * 0x28;
                  *(undefined8 *)(lVar13 + 0x40) = uVar7;
                  *(undefined8 *)(lVar13 + 0x38) = uVar17;
                  *(undefined8 *)(lVar13 + 0x30) = uVar16;
                  return 1;
                }
                goto LAB_02b578b8;
              }
              return 0;
            }
            uVar5 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_02b578b8;
          uVar11 = *(uint *)(lVar13 + lVar4 * 0x28 + 0x24);
          if ((int)uVar5 <= iVar15) {
            FUN_0358bbf4(0);
          }
          uVar7 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar11 < uVar5);
      }
    }
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar11 = *(uint *)(unaff_x21 + 0x20);
      if (uVar11 == uVar5) {
        System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
        if (lVar4 == 0) goto LAB_02b578bc;
        uVar5 = *(uint *)(lVar4 + 0x18);
        iVar15 = 0;
        if (uVar5 != 0) {
          iVar15 = (int)uVar2 / (int)uVar5;
        }
        uVar1 = uVar2 - iVar15 * uVar5;
        if (uVar5 <= uVar1) goto LAB_02b578b8;
        lVar13 = *(long *)(unaff_x21 + 0x18);
        piVar14 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar13 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      }
      if (lVar13 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_02b578b8;
      lVar4 = (long)(int)uVar11;
    }
    else {
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      uVar11 = *(uint *)(unaff_x21 + 0x24);
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_02b578b8;
      lVar4 = (long)(int)uVar11;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar13 + lVar4 * 0x28 + 0x24);
    }
    lVar13 = lVar13 + lVar4 * 0x28;
    *(uint *)(lVar13 + 0x20) = uVar2;
    iVar15 = *piVar14;
    *(undefined8 *)(lVar13 + 0x28) = unaff_x20;
    *(int *)(lVar13 + 0x24) = iVar15 + -1;
    thunk_FUN_01f51358((undefined8 *)(lVar13 + 0x28));
    uVar16 = unaff_x29[1];
    uVar7 = *unaff_x29;
    *(undefined8 *)(lVar13 + 0x40) = unaff_x29[2];
    *(undefined8 *)(lVar13 + 0x38) = uVar16;
    *(undefined8 *)(lVar13 + 0x30) = uVar7;
    *piVar14 = uVar11 + 1;
    return 1;
  }
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


