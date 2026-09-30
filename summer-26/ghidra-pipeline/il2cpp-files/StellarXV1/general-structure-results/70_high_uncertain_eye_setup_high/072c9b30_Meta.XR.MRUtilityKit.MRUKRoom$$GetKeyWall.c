/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetKeyWall
ENTRY_POINT: 072c9b30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072ca10c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_MRUKRoom__GetKeyWall(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long unaff_x19;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c3818);
  FUN_04077588(PTR_DAT_092c3820);
  *(undefined1 *)(unaff_x19 + 0xa3d) = 1;
  lVar9 = FUN_076e8060(0);
  if (lVar9 == 0) {
LAB_072ca63c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar8 = FUN_076e958c(lVar9,0);
  if (iVar8 != 0x100) {
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c37f0);
    FUN_06cd2ec8(lVar9,*(undefined8 *)PTR_DAT_092c37e8);
    lVar10 = thunk_FUN_0408601c(0);
    if ((lVar10 == 0) ||
       (lVar10 = FUN_076bf174(lVar10,0), puVar7 = PTR_DAT_092c3820, puVar6 = PTR_DAT_092c3818,
       puVar5 = PTR_DAT_092c3808, puVar4 = PTR_DAT_092c3800, puVar3 = PTR_DAT_092860c8, lVar10 == 0)
       ) goto LAB_072ca63c;
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar24 = 0;
      uVar17 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar17 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar11 = *(long **)(lVar10 + uVar24 * 8 + 0x20);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar17 = 0;
          uVar18 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar27 = *(long *)(lVar12 + uVar17 * 8 + 0x20);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = FUN_07694508(lVar27,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
              uVar18 = 0;
              uVar19 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
              do {
                if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                uVar26 = *(undefined8 *)(lVar13 + uVar18 * 8 + 0x20);
                uVar25 = *(undefined8 *)PTR_DAT_092c3810;
                if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar25 = FUN_0768890c(uVar25,0);
                plVar11 = (long *)FUN_075a8768(uVar26,uVar25,0);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar20 = *plVar11;
                uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar19 != 0) {
                  piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_092bad68) {
                      puVar14 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_072c9d2c;
                    }
                    uVar19 = uVar19 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar19 != 0);
                }
                puVar14 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092bad68,0);
LAB_072c9d2c:
                plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
joined_r0x072c9d48:
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar20 = *plVar11;
                uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar19 != 0) {
                  piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                      puVar14 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                      goto LAB_072c9d98;
                    }
                    uVar19 = uVar19 - 1;
                    piVar23 = piVar23 + 4;
                  } while (uVar19 != 0);
                }
                puVar14 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,0);
LAB_072c9d98:
                uVar19 = (*(code *)*puVar14)(plVar11,puVar14[1]);
                if ((uVar19 & 1) != 0) {
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar20 = *plVar11;
                  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar19 != 0) {
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_092bad70) {
                        puVar14 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_072c9e04;
                      }
                      uVar19 = uVar19 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092bad70,0);
LAB_072c9e04:
                  plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
                  if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077bb0(plVar15);
                  }
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar20 = FUN_06cd2d7c(lVar9,plVar15[2],*(undefined8 *)puVar4);
                  lVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
                  FUN_076bca34(lVar16,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(long *)(lVar16 + 0x10) = lVar27;
                  thunk_FUN_040ec700((long *)(lVar16 + 0x10),lVar27);
                  *(undefined8 *)(lVar16 + 0x18) = uVar26;
                  thunk_FUN_040ec700((undefined8 *)(lVar16 + 0x18),uVar26);
                  *(long *)(lVar16 + 0x20) = (long)plVar15;
                  thunk_FUN_040ec700((long *)(lVar16 + 0x20),plVar15);
                  if (lVar20 == 0) {
LAB_072c9f1c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar21 = *(long *)(lVar20 + 0x10);
                  lVar22 = *(long *)puVar5;
                  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                  if (lVar21 == 0) goto LAB_072c9f1c;
                  uVar2 = *(uint *)(lVar20 + 0x18);
                  if (uVar2 < *(uint *)(lVar21 + 0x18)) {
                    *(uint *)(lVar20 + 0x18) = uVar2 + 1;
                    plVar15 = (long *)(lVar21 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar15 = lVar16;
                    thunk_FUN_040ec700(plVar15,lVar16);
                  }
                  else {
                    FUN_05c26d88(lVar20,lVar16,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto joined_r0x072c9d48;
                }
                if (plVar11 != (long *)0x0) {
                  lVar20 = *plVar11;
                  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar19 != 0) {
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_092860c0) {
                        puVar14 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_072ca0bc;
                      }
                      uVar19 = uVar19 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092860c0,0);
LAB_072ca0bc:
                  (*(code *)*puVar14)(plVar11,puVar14[1]);
                }
                uVar19 = (ulong)*(uint *)(lVar13 + 0x18);
                uVar18 = uVar18 + 1;
              } while ((long)uVar18 < (long)(int)*(uint *)(lVar13 + 0x18));
            }
            uVar18 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((long)uVar17 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        uVar17 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar24 = uVar24 + 1;
      } while ((long)uVar24 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    puVar3 = PTR_DAT_092c37e0;
    lVar10 = *(long *)PTR_DAT_092c37e0;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *(long *)puVar3;
    }
    plVar11 = (long *)(*(long *)(lVar10 + 0xb8) + 8);
    *plVar11 = lVar9;
    thunk_FUN_040ec700(plVar11,lVar9);
  }
  return;
}


