/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<LoadAnchorsAsync>d__27$$MoveNext
ENTRY_POINT: 07274260
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27__MoveNext
               (long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  ulong uVar17;
  long *plVar18;
  uint unaff_w21;
  uint uVar19;
  long unaff_x22;
  uint uVar20;
  long unaff_x23;
  uint uVar21;
  int unaff_w26;
  int iVar22;
  long unaff_x27;
  uint unaff_w29;
  int iStack0000000000000004;
  
  do {
    if (unaff_x20 == unaff_x22) goto LAB_072747b4;
    iVar11 = *(int *)(unaff_x19 + 0x3c);
    if (iVar11 < 1) {
      do {
        FUN_0727490c();
        iVar11 = *(int *)(unaff_x19 + 0x3c);
      } while (iVar11 < 1);
      param_1 = *(long *)(unaff_x19 + 0x90);
    }
    unaff_x20 = unaff_x20 + 1;
    *(uint *)(unaff_x19 + 0x3c) = iVar11 - 1U;
    unaff_w21 = *(uint *)(unaff_x19 + 0x38) >> (ulong)(iVar11 - 1U & 0x1f) & 1 | unaff_w21 << 1;
    if (param_1 == 0) goto LAB_072742ac;
    uVar7 = (uint)unaff_x23;
    if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_072747b0;
    lVar13 = *(long *)(param_1 + unaff_x23 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_072742ac;
    if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x20) goto LAB_072747b0;
  } while (*(int *)(lVar13 + unaff_x20 * 4 + 0x20) < (int)unaff_w21);
  lVar13 = *(long *)(unaff_x19 + 0x98);
  if (lVar13 == 0) {
LAB_072742ac:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (uVar7 < *(uint *)(lVar13 + 0x18)) {
    lVar13 = *(long *)(lVar13 + unaff_x23 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_072742ac;
    if ((uint)unaff_x20 < *(uint *)(lVar13 + 0x18)) {
      uVar21 = unaff_w21 - *(int *)(lVar13 + unaff_x20 * 4 + 0x20);
      if (0x101 < uVar21) {
LAB_072747b4:
        thunk_FUN_040dedf8(PTR_DAT_092c1270);
        uVar9 = thunk_FUN_040b4efc();
        uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c1298);
        FUN_07273284(uVar9,uVar10);
        uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c12a0);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar9,uVar10);
      }
      lVar13 = *(long *)(unaff_x19 + 0xa0);
      if (lVar13 == 0) goto LAB_072742ac;
      if (uVar7 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = *(long *)(lVar13 + unaff_x23 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_072742ac;
        if (uVar21 < *(uint *)(lVar13 + 0x18)) {
          uVar7 = *(uint *)(lVar13 + (ulong)uVar21 * 4 + 0x20);
          if (uVar7 != unaff_w29) {
            uVar21 = 0;
            iVar11 = 0x31;
            iStack0000000000000004 = unaff_w26;
            do {
              uVar6 = uVar7 - 1;
              if (uVar7 == 0 || uVar6 == 0) {
                iVar22 = 1;
                uVar6 = 0xffffffff;
                do {
                  uVar20 = uVar6;
                  lVar13 = *(long *)(unaff_x19 + 0x68);
                  iVar3 = iVar11 + -1;
                  bVar4 = iVar11 == 0;
                  if (bVar4) {
                    uVar21 = uVar21 + 1;
                  }
                  iVar11 = 0x31;
                  if (!bVar4) {
                    iVar11 = iVar3;
                  }
                  if (lVar13 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_072747b0;
                  lVar14 = *(long *)(unaff_x19 + 0xa8);
                  if (lVar14 == 0) goto LAB_072742ac;
                  bVar1 = *(byte *)(lVar13 + (int)uVar21 + 0x20);
                  uVar17 = (ulong)bVar1;
                  if (*(uint *)(lVar14 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                  uVar19 = *(uint *)(lVar14 + uVar17 * 4 + 0x20);
                  uVar5 = FUN_07274094();
                  lVar13 = *(long *)(unaff_x19 + 0x90);
                  if (lVar13 == 0) goto LAB_072742ac;
                  iVar3 = iVar22 << (ulong)(uVar7 & 0x1f);
                  iVar22 = iVar22 << 1;
                  uVar6 = iVar3 + uVar20;
                  while( true ) {
                    if (*(uint *)(lVar13 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                    lVar14 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                    if (lVar14 == 0) goto LAB_072742ac;
                    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_072747b0;
                    if ((int)uVar5 <= *(int *)(lVar14 + (long)(int)uVar19 * 4 + 0x20)) break;
                    iVar12 = *(int *)(unaff_x19 + 0x3c);
                    if (iVar12 < 1) {
                      do {
                        FUN_0727490c();
                        iVar12 = *(int *)(unaff_x19 + 0x3c);
                      } while (iVar12 < 1);
                      lVar13 = *(long *)(unaff_x19 + 0x90);
                    }
                    uVar19 = uVar19 + 1;
                    *(uint *)(unaff_x19 + 0x3c) = iVar12 - 1U;
                    uVar5 = *(uint *)(unaff_x19 + 0x38) >> (ulong)(iVar12 - 1U & 0x1f) & 1 |
                            uVar5 << 1;
                    if (lVar13 == 0) goto LAB_072742ac;
                  }
                  lVar13 = *(long *)(unaff_x19 + 0xa0);
                  if (lVar13 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar13 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                  lVar14 = *(long *)(unaff_x19 + 0x98);
                  if (lVar14 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar14 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                  lVar14 = *(long *)(lVar14 + uVar17 * 8 + 0x20);
                  if (lVar14 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_072747b0;
                  lVar13 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                  if (lVar13 == 0) goto LAB_072742ac;
                  uVar5 = uVar5 - *(int *)(lVar14 + (long)(int)uVar19 * 4 + 0x20);
                  if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_072747b0;
                  uVar7 = *(uint *)(lVar13 + (long)(int)uVar5 * 4 + 0x20);
                } while (uVar7 < 2);
                if (*(int *)(unaff_x27 + 0x18) == 0) goto LAB_072747b0;
                lVar13 = *(long *)(unaff_x19 + 0x58);
                if (lVar13 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar13 + 0x18) <= (uint)*(byte *)(unaff_x27 + 0x20))
                goto LAB_072747b0;
                lVar14 = *(long *)(unaff_x19 + 0x88);
                if (lVar14 == 0) goto LAB_072742ac;
                bVar1 = *(byte *)(lVar13 + (ulong)*(byte *)(unaff_x27 + 0x20) + 0x20);
                if (*(uint *)(lVar14 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                lVar14 = lVar14 + (ulong)bVar1 * 4;
                *(uint *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + uVar6 + 1;
                if (uVar6 < 0x7fffffff) {
                  iVar22 = uVar20 + iVar3 + 2;
                  do {
                    lVar13 = *(long *)(unaff_x19 + 0x80);
                    uVar6 = *(int *)(unaff_x19 + 0x28) + 1;
                    *(uint *)(unaff_x19 + 0x28) = uVar6;
                    if (lVar13 == 0) goto LAB_072742ac;
                    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_072747b0;
                    iVar22 = iVar22 + -1;
                    *(byte *)(lVar13 + (int)uVar6 + 0x20) = bVar1;
                  } while (1 < iVar22);
                }
                unaff_w26 = iStack0000000000000004;
                if (iStack0000000000000004 <= *(int *)(unaff_x19 + 0x28)) {
LAB_072747f8:
                  lVar13 = FUN_072751c0();
                  if ((DAT_0988f738 & 1) == 0) {
                    FUN_04077588(PTR_DAT_092c1210);
                    DAT_0988f738 = 1;
                  }
                  plVar18 = *(long **)(lVar13 + 0x40);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar14 = *plVar18;
                  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar17 == 0) goto LAB_07274868;
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_07274850;
                }
              }
              else {
                iVar22 = *(int *)(unaff_x19 + 0x28) + 1;
                *(int *)(unaff_x19 + 0x28) = iVar22;
                if (unaff_w26 <= iVar22) goto LAB_072747f8;
                if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_072747b0;
                lVar13 = *(long *)(unaff_x19 + 0x58);
                if (lVar13 == 0) goto LAB_072742ac;
                bVar1 = *(byte *)(unaff_x27 + (int)uVar6 + 0x20);
                if (*(uint *)(lVar13 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                lVar14 = *(long *)(unaff_x19 + 0x88);
                if (lVar14 == 0) goto LAB_072742ac;
                bVar2 = *(byte *)(lVar13 + (ulong)bVar1 + 0x20);
                if (*(uint *)(lVar14 + 0x18) <= (uint)bVar2) goto LAB_072747b0;
                lVar14 = lVar14 + (ulong)bVar2 * 4;
                lVar16 = *(long *)(unaff_x19 + 0x80);
                *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + 1;
                if (lVar16 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x28)) goto LAB_072747b0;
                *(undefined1 *)(lVar16 + (int)*(uint *)(unaff_x19 + 0x28) + 0x20) =
                     *(undefined1 *)(lVar13 + (ulong)bVar1 + 0x20);
                uVar17 = (ulong)uVar6;
                if (0 < (int)uVar6) {
                  do {
                    if (((ulong)*(uint *)(unaff_x27 + 0x18) <= uVar17 - 1) ||
                       (*(uint *)(unaff_x27 + 0x18) <= uVar17)) goto LAB_072747b0;
                    *(undefined1 *)(unaff_x27 + uVar17 + 0x20) =
                         *(undefined1 *)(unaff_x27 + uVar17 + 0x1f);
                    bVar4 = 1 < uVar17;
                    uVar17 = uVar17 - 1;
                  } while (bVar4);
                }
                if (*(int *)(unaff_x27 + 0x18) == 0) goto LAB_072747b0;
                *(byte *)(unaff_x27 + 0x20) = bVar1;
                iVar22 = iVar11 + -1;
                bVar4 = iVar11 == 0;
                lVar13 = *(long *)(unaff_x19 + 0x68);
                if (bVar4) {
                  uVar21 = uVar21 + 1;
                }
                iVar11 = 0x31;
                if (!bVar4) {
                  iVar11 = iVar22;
                }
                if (lVar13 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_072747b0;
                lVar14 = *(long *)(unaff_x19 + 0xa8);
                if (lVar14 == 0) goto LAB_072742ac;
                bVar1 = *(byte *)(lVar13 + (int)uVar21 + 0x20);
                uVar17 = (ulong)bVar1;
                if (*(uint *)(lVar14 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                uVar7 = *(uint *)(lVar14 + uVar17 * 4 + 0x20);
                uVar6 = FUN_07274094();
                lVar13 = *(long *)(unaff_x19 + 0x90);
                while( true ) {
                  if (lVar13 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar13 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                  lVar14 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                  if (lVar14 == 0) goto LAB_072742ac;
                  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_072747b0;
                  if ((int)uVar6 <= *(int *)(lVar14 + (long)(int)uVar7 * 4 + 0x20)) break;
                  iVar22 = *(int *)(unaff_x19 + 0x3c);
                  if (iVar22 < 1) {
                    do {
                      FUN_0727490c();
                      iVar22 = *(int *)(unaff_x19 + 0x3c);
                    } while (iVar22 < 1);
                    lVar13 = *(long *)(unaff_x19 + 0x90);
                  }
                  uVar7 = uVar7 + 1;
                  *(uint *)(unaff_x19 + 0x3c) = iVar22 - 1U;
                  uVar6 = *(uint *)(unaff_x19 + 0x38) >> (ulong)(iVar22 - 1U & 0x1f) & 1 |
                          uVar6 << 1;
                }
                lVar13 = *(long *)(unaff_x19 + 0xa0);
                if (lVar13 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar13 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                lVar14 = *(long *)(unaff_x19 + 0x98);
                if (lVar14 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar14 + 0x18) <= (uint)bVar1) goto LAB_072747b0;
                lVar14 = *(long *)(lVar14 + uVar17 * 8 + 0x20);
                if (lVar14 == 0) goto LAB_072742ac;
                if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_072747b0;
                lVar13 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_072742ac;
                uVar6 = uVar6 - *(int *)(lVar14 + (long)(int)uVar7 * 4 + 0x20);
                if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_072747b0;
                uVar7 = *(uint *)(lVar13 + (long)(int)uVar6 * 4 + 0x20);
              }
            } while (uVar7 != unaff_w29);
          }
          return;
        }
      }
    }
  }
LAB_072747b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar15 = piVar15 + 4;
    if (uVar17 == 0) break;
LAB_07274850:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092c1210) {
      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
      goto LAB_07274888;
    }
  }
LAB_07274868:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092c1210,1);
LAB_07274888:
  uVar7 = (*(code *)*puVar8)(plVar18,puVar8[1]);
  *(uint *)(lVar13 + 0xcc) = uVar7;
  if (*(uint *)(lVar13 + 0xc4) != uVar7) {
    FUN_072748c4();
    thunk_FUN_040dedf8(PTR_DAT_092c1270);
    uVar9 = thunk_FUN_040b4efc();
    uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c12a8);
    FUN_07273284(uVar9,uVar10);
    uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c12b0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar9,uVar10);
  }
  *(uint *)(lVar13 + 0xd0) =
       uVar7 ^ (*(uint *)(lVar13 + 0xd0) >> 0x1f | *(uint *)(lVar13 + 0xd0) << 1);
  return;
}


