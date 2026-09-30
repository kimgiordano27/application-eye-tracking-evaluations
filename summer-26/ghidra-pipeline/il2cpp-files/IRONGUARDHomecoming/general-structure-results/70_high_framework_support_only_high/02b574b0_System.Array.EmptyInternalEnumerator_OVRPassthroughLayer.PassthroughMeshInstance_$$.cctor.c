/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.PassthroughMeshInstance>$$.cctor
ENTRY_POINT: 02b574b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_PassthroughMeshInstance>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 *unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uStack000000000000000c;
  
  lVar13 = *(long *)(unaff_x21 + 0x18);
                    /* try { // try from 02b574b4 to 02c574b7 has its CatchHandler @ 02b57668 */
  if (unaff_x24 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) goto LAB_02b578bc;
    uVar2 = (**(code **)(*unaff_x20 + 0x158))();
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 02b574cc to 02c574d3 has its CatchHandler @ 02b5766c */
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
                    /* try { // try from 02b574e4 to 02c574e7 has its CatchHandler @ 02b5767c */
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 02b574f4 to 02c574f7 has its CatchHandler @ 02b5765c */
        if (*(long *)(piVar14 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02b5753c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 02b5750c to 02c57537 has its CatchHandler @ 02b57674 */
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02b5753c:
                    /* try { // try from 02b5753c to 02c5754f has its CatchHandler @ 02b57664 */
    uVar2 = (*(code *)*puVar3)();
  }
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0) goto LAB_02b578bc;
  uVar12 = *(uint *)(lVar5 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar15 = 0;
  if (uVar12 != 0) {
    iVar15 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar15 * uVar12;
                    /* try { // try from 02b57568 to 02c57583 has its CatchHandler @ 02b57660 */
  if (uVar6 < uVar12) {
    piVar14 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar14 - 1;
    uStack000000000000000c = unaff_w23;
    if (unaff_x24 == (long *)0x0) {
      plVar4 = (long *)FUN_02249368(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (lVar13 == 0) goto LAB_02b578bc;
      uVar8 = *(undefined8 *)(lVar13 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar15 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(lVar13 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            if (plVar4 == (long *)0x0) goto LAB_02b578bc;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined8 *)(lVar13 + lVar5 * 0x28 + 0x28));
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) goto LAB_02b578a4;
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              uVar8 = unaff_x29[2];
              uVar17 = unaff_x29[1];
              uVar16 = *unaff_x29;
              goto LAB_02b57874;
            }
            uVar6 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_02b578b8;
          uVar12 = *(uint *)(lVar13 + lVar5 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar15) {
            FUN_0358bbf4(0);
          }
          uVar8 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (lVar13 == 0) goto LAB_02b578bc;
      uVar8 = *(undefined8 *)(lVar13 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar15 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(lVar13 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44(lVar7);
            }
            lVar9 = *unaff_x24;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02b57624;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02b57624:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_02b578a4:
                FUN_0358baf0();
              }
              else if ((uStack000000000000000c & 0xff) == 1) {
                uVar8 = unaff_x29[2];
                uVar17 = unaff_x29[1];
                uVar16 = *unaff_x29;
LAB_02b57874:
                if ((uint)lVar5 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + lVar5 * 0x28;
                  *(undefined8 *)(lVar13 + 0x40) = uVar8;
                  *(undefined8 *)(lVar13 + 0x38) = uVar17;
                  *(undefined8 *)(lVar13 + 0x30) = uVar16;
                  return 1;
                }
                goto LAB_02b578b8;
              }
              return 0;
            }
            uVar6 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_02b578b8;
          uVar12 = *(uint *)(lVar13 + lVar5 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar15) {
            FUN_0358bbf4(0);
          }
          uVar8 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x21 + 0x20);
      if (uVar12 == uVar6) {
        System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
        if (lVar5 == 0) goto LAB_02b578bc;
        uVar6 = *(uint *)(lVar5 + 0x18);
        iVar15 = 0;
        if (uVar6 != 0) {
          iVar15 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar15 * uVar6;
        if (uVar6 <= uVar1) goto LAB_02b578b8;
        lVar13 = *(long *)(unaff_x21 + 0x18);
        piVar14 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar13 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      }
      if (lVar13 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_02b578b8;
      lVar5 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x21 + 0x24);
      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_02b578b8;
      lVar5 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar13 + lVar5 * 0x28 + 0x24);
    }
    lVar13 = lVar13 + lVar5 * 0x28;
    *(uint *)(lVar13 + 0x20) = uVar2;
    iVar15 = *piVar14;
    *(undefined8 *)(lVar13 + 0x28) = unaff_x20;
    *(int *)(lVar13 + 0x24) = iVar15 + -1;
    thunk_FUN_01f51358((undefined8 *)(lVar13 + 0x28));
    uVar16 = unaff_x29[1];
    uVar8 = *unaff_x29;
    *(undefined8 *)(lVar13 + 0x40) = unaff_x29[2];
    *(undefined8 *)(lVar13 + 0x38) = uVar16;
    *(undefined8 *)(lVar13 + 0x30) = uVar8;
    *piVar14 = uVar12 + 1;
    return 1;
  }
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


