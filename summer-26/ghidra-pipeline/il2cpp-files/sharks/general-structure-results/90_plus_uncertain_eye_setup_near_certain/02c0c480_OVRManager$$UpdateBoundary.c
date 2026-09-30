/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 02c0c480
PROGRAM: sharks-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UpdateBoundary(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  int *piVar23;
  uint unaff_w19;
  long *plVar24;
  long unaff_x20;
  long *plVar25;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long lVar26;
  long unaff_x28;
  int iStack000000000000004c;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_000000c0;
  undefined *puVar14;
  
  FUN_017fc350();
                    /* try { // try from 02c0c48c to 02d0c48f has its CatchHandler @ 02c0c544 */
  FUN_017fc350(PTR_DAT_0380b0b0);
                    /* try { // try from 02c0c490 to 02d0c493 has its CatchHandler @ 02c0c4d4 */
                    /* try { // try from 02c0c494 to 02d0c497 has its CatchHandler @ 02c0c4c4 */
                    /* try { // try from 02c0c498 to 02d0c49b has its CatchHandler @ 02c0c4c0 */
  FUN_017fc350(PTR_DAT_03803088);
                    /* try { // try from 02c0c49c to 02d0c4a3 has its CatchHandler @ 02c0c55c */
                    /* try { // try from 02c0c4a4 to 02d0c4a7 has its CatchHandler @ 02c0c4b8 */
  FUN_017fc350(PTR_DAT_03804bc0);
                    /* try { // try from 02c0c4a8 to 02d0c4ab has its CatchHandler @ 02c0c4b0 */
                    /* catch() { ... } // from try @ 02c0c384 with catch @ 02c0c4ac
                       try { // try from 02c0c4ac to 02d0c4f7 has its CatchHandler @ 02c0c278 */
                    /* catch() { ... } // from try @ 02c0c4a8 with catch @ 02c0c4b0 */
  FUN_017fc350(PTR_DAT_037fc238);
                    /* catch() { ... } // from try @ 02c0c374 with catch @ 02c0c4b4 */
                    /* catch() { ... } // from try @ 02c0c4a4 with catch @ 02c0c4b8 */
                    /* catch() { ... } // from try @ 02c0c348 with catch @ 02c0c4bc */
  FUN_017fc350(PTR_DAT_03804bc8);
                    /* catch() { ... } // from try @ 02c0c498 with catch @ 02c0c4c0 */
                    /* catch() { ... } // from try @ 02c0c494 with catch @ 02c0c4c4 */
  FUN_017fc350(PTR_DAT_037f8830);
                    /* catch() { ... } // from try @ 02c0c324 with catch @ 02c0c4d0 */
                    /* catch() { ... } // from try @ 02c0c490 with catch @ 02c0c4d4 */
  FUN_017fc350(PTR_DAT_037f8d30);
                    /* catch() { ... } // from try @ 02c0c304 with catch @ 02c0c4d8 */
  FUN_017fc350(PTR_DAT_03802908);
  FUN_017fc350(PTR_DAT_037f87b8);
                    /* try { // try from 02c0c4f8 to 02d0c4fb has its CatchHandler @ 02c0c538 */
  FUN_017fc350(PTR_DAT_037f7340);
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_0380b0b8);
                    /* try { // try from 02c0c518 to 02d0c537 has its CatchHandler @ 02c0c5b4 */
  FUN_017fc350(PTR_DAT_0380b0c0);
  *(undefined1 *)(unaff_x20 + 0xe2a) = 1;
  in_stack_00000050 = 0;
                    /* catch() { ... } // from try @ 02c0c4f8 with catch @ 02c0c538
                       try { // try from 02c0c538 to 02d0c577 has its CatchHandler @ 02c0c278 */
  uVar6 = (**(code **)(*unaff_x24 + 0x388))();
  lVar8 = in_stack_000000c0;
  if ((uVar6 & 1) != 0) {
    uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b0e0);
    uVar13 = FUN_02c108dc(uVar13,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar15 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar15,uVar13,0);
    goto LAB_02c0d51c;
  }
                    /* catch() { ... } // from try @ 02c0c48c with catch @ 02c0c544 */
  puVar14 = PTR_DAT_0380b0e8;
                    /* catch() { ... } // from try @ 02c0c2e4 with catch @ 02c0c548 */
  if ((unaff_w19 & 0xff00) == 0) goto LAB_02c0d3dc;
  uVar17 = 0x1c;
                    /* catch() { ... } // from try @ 02c0c3a0 with catch @ 02c0c55c
                       catch() { ... } // from try @ 02c0c49c with catch @ 02c0c55c */
  if ((unaff_w19 & 0x200) != 0) {
    uVar17 = 0x14;
  }
  if ((unaff_w19 & 0xff) != 0) {
    uVar17 = 0;
  }
  if (in_stack_000000c0 == 0) {
LAB_02c0c5a0:
                    /* try { // try from 02c0c5a0 to 02d0c5ab has its CatchHandler @ 02c0c278 */
    if (unaff_x28 == 0) {
                    /* catch() { ... } // from try @ 02c0c518 with catch @ 02c0c5b4
                       catch() { ... } // from try @ 02c0c594 with catch @ 02c0c5b4
                       catch() { ... } // from try @ 02c0c5ac with catch @ 02c0c5b4 */
      iStack000000000000004c = 0;
    }
    else {
      iStack000000000000004c = *(int *)(unaff_x28 + 0x18);
                    /* try { // try from 02c0c5ac to 02d0c5b3 has its CatchHandler @ 02c0c5b4 */
    }
    if (unaff_x23 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      unaff_x23 = (long *)FUN_02be9964(0);
    }
    if ((unaff_w19 >> 9 & 1) != 0) {
      puVar14 = PTR_DAT_0380b100;
      if ((unaff_w19 & 0x3d00) == 0) {
        uVar13 = FUN_02bf7fdc();
        return uVar13;
      }
      goto LAB_02c0d3dc;
    }
    uVar18 = uVar17 | unaff_w19;
    if ((unaff_w19 & 0xc000) != 0) {
      uVar18 = uVar17 | unaff_w19 | 0x2000;
    }
    if (unaff_x22 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f66a8);
      uVar13 = thunk_FUN_01861bbc();
      puVar14 = PTR_DAT_037f66b0;
LAB_02c0d35c:
      uVar15 = thunk_FUN_01851c08(puVar14);
      FUN_02b3cbec(uVar13,uVar15,0);
      uVar15 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar13,uVar15);
    }
    if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar6 = FUN_02a4f854(), (uVar6 & 1) != 0)) {
      lVar7 = FUN_02c0d568();
      unaff_x22 = *(long *)PTR_DAT_0380b0b8;
      if (lVar7 != 0) {
        unaff_x22 = lVar7;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_02c0c938:
      uVar17 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar17 != 0) {
        puVar14 = PTR_DAT_0380b130;
        uVar5 = uVar17;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar14 = PTR_DAT_0380b0d8;
          uVar5 = uVar18 >> 8 & 1;
        }
        if (uVar5 != 0) goto LAB_02c0d3dc;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar24 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      else {
        uVar13 = (**(code **)(*unaff_x24 + 0x6b8))();
        lVar7 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_03804bc0);
        puVar2 = PTR_DAT_037f87b8;
        puVar14 = PTR_DAT_037f7340;
        if (lVar7 == 0) goto LAB_02c0d1d0;
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          lVar26 = 0;
          uVar6 = 0;
          uVar20 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          plVar10 = (long *)0x0;
          do {
            if (uVar20 <= uVar6) goto LAB_02c0d1d4;
            plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            uVar13 = FUN_017fc3f4(*(undefined8 *)puVar14,iStack000000000000004c);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar2);
            }
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_03802908)) goto LAB_02c0d1d8;
            }
            uVar20 = FUN_02c070a0(plVar12,uVar18,3,uVar13);
            plVar24 = plVar10;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_02b0f554(plVar10,0,0), plVar24 = plVar12, (uVar20 & 1) == 0)) {
              if (lVar26 == 0) {
                lVar26 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
                FUN_02709c80(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
                if (lVar26 == 0) goto LAB_02c0d1d0;
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_03803070;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_02c0d1d0;
                uVar5 = *(uint *)(lVar26 + 0x18);
                if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                  *plVar24 = (long)plVar10;
                  thunk_FUN_0188fd20(plVar24,plVar10);
                }
                else {
                  FUN_0270a444(lVar26,plVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar9 = *(long *)(lVar26 + 0x10);
              lVar22 = *(long *)PTR_DAT_03803070;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_02c0d1d0;
              uVar5 = *(uint *)(lVar26 + 0x18);
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = plVar12;
                thunk_FUN_0188fd20(puVar11,plVar12);
                plVar24 = plVar10;
              }
              else {
                FUN_0270a444(lVar26,plVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                plVar24 = plVar10;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
            plVar10 = plVar24;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_0270a8f8(lVar26,plVar10,*(undefined8 *)PTR_DAT_0380b0a0);
            goto LAB_02c0cc30;
          }
        }
        plVar10 = (long *)0x0;
      }
LAB_02c0cc30:
      uVar5 = FUN_02b0f554(plVar24,0,0);
      if ((uVar5 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar13 = (**(code **)(*unaff_x24 + 0x6b8))
                           (unaff_x24,unaff_x22,0x10,uVar18,*(undefined8 *)(*unaff_x24 + 0x6c0));
        lVar7 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_03804bc8);
        puVar2 = PTR_DAT_037f87b8;
        puVar14 = PTR_DAT_037f7340;
        if (lVar7 == 0) goto LAB_02c0d1d0;
        uVar19 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar19) {
          uVar5 = 0;
          lVar26 = 0;
          plVar25 = plVar24;
          do {
            if (uVar19 <= uVar5) goto LAB_02c0d1d4;
            plVar24 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto LAB_02c0d1d0;
            lVar9 = *plVar24;
            if (uVar17 == 0) {
              pcVar21 = *(code **)(lVar9 + 0x288);
              uVar13 = *(undefined8 *)(lVar9 + 0x290);
            }
            else {
              pcVar21 = *(code **)(lVar9 + 0x2b8);
              uVar13 = *(undefined8 *)(lVar9 + 0x2c0);
            }
            plVar12 = (long *)(*pcVar21)(plVar24,1,uVar13);
            uVar6 = FUN_02b0f554(plVar12,0,0);
            plVar24 = plVar25;
            if ((uVar6 & 1) == 0) {
              uVar13 = FUN_017fc3f4(*(undefined8 *)puVar14,iStack000000000000004c);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)puVar2);
              }
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_03802908)) {
LAB_02c0d1d8:
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(plVar12);
                }
              }
              uVar6 = FUN_02c070a0(plVar12,uVar18,3,uVar13);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_02b0f554(plVar25,0,0), plVar24 = plVar12, (uVar6 & 1) == 0)) {
                if (lVar26 == 0) {
                  lVar26 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
                  FUN_02709c80(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8)
                  ;
                  if (lVar26 == 0) goto LAB_02c0d1d0;
                  lVar9 = *(long *)(lVar26 + 0x10);
                  lVar22 = *(long *)PTR_DAT_03803070;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_02c0d1d0;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar24 = (long)plVar25;
                    thunk_FUN_0188fd20(plVar24,plVar25);
                  }
                  else {
                    FUN_0270a444(lVar26,plVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_03803070;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_02c0d1d0;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar24 = (long)plVar12;
                  thunk_FUN_0188fd20(plVar24,plVar12);
                  plVar24 = plVar25;
                }
                else {
                  FUN_0270a444(lVar26,plVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  plVar24 = plVar25;
                }
              }
            }
            uVar19 = *(uint *)(lVar7 + 0x18);
            uVar5 = uVar5 + 1;
            plVar25 = plVar24;
          } while ((int)uVar5 < (int)uVar19);
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_0270a8f8(lVar26,plVar10,*(undefined8 *)PTR_DAT_0380b0a0);
          }
        }
      }
      uVar6 = FUN_02b0f518(plVar24,0,0);
      if ((uVar6 & 1) != 0) {
        if ((iStack000000000000004c == 0) && (plVar10 == (long *)0x0)) {
          if ((plVar24 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar24 + 0x398))(plVar24,*(undefined8 *)(*plVar24 + 0x3a0)),
             lVar7 == 0)) goto LAB_02c0d1d0;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar13 = (**(code **)(*plVar24 + 0x328))
                               (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                                *(undefined8 *)(*plVar24 + 0x330));
            return uVar13;
          }
        }
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
          if (plVar10 == (long *)0x0) goto LAB_02c0d1d0;
          if ((plVar24 != (long *)0x0) &&
             (lVar7 = thunk_FUN_01861ac0(plVar24,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar13 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar13,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar10[4] = (long)plVar24;
          thunk_FUN_0188fd20(plVar10 + 4,plVar24);
        }
        if (in_stack_00000058 == 0) {
          lVar26 = *(long *)PTR_DAT_037f4dc8;
          lVar7 = *(long *)(lVar26 + 0x38);
          if (lVar7 == 0) {
            FUN_0185db00(lVar26);
            lVar7 = *(long *)(lVar26 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar7 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          in_stack_00000058 = **(long **)(lVar7 + 0xb8);
        }
        in_stack_00000050 = 0;
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        plVar24 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                    (unaff_x23,uVar18,plVar10,&stack0x00000058,unaff_x25,unaff_x27,
                                     lVar8,&stack0x00000050);
        uVar6 = FUN_02b0f0b4(plVar24,0,0);
        if ((uVar6 & 1) == 0) {
          if (plVar24 == (long *)0x0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar8 = *plVar24;
          bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037fc238
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(plVar24);
          }
          uVar13 = (**(code **)(lVar8 + 0x328))
                             (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                              *(undefined8 *)(lVar8 + 0x330));
          if (in_stack_00000050 != 0) {
            if (unaff_x23 == (long *)0x0) goto LAB_02c0d1d0;
            (**(code **)(*unaff_x23 + 0x1a8))
                      (unaff_x23,&stack0x00000058,in_stack_00000050,
                       *(undefined8 *)(*unaff_x23 + 0x1b0));
          }
          return uVar13;
        }
      }
      uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
      thunk_FUN_01851c08(PTR_DAT_037f87c8);
      uVar15 = thunk_FUN_01861bbc();
      FUN_02bd1250(uVar15,uVar13,unaff_x22,0);
      goto LAB_02c0d51c;
    }
    uVar17 = uVar18 & 0x400;
    if (uVar17 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f66a8);
        uVar13 = thunk_FUN_01861bbc();
        puVar14 = PTR_DAT_0380b108;
        goto LAB_02c0d35c;
      }
      puVar14 = PTR_DAT_0380b120;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar14 = PTR_DAT_0380b0c8;
        goto joined_r0x02c0c6b4;
      }
    }
    else {
      puVar14 = PTR_DAT_0380b118;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar14 = PTR_DAT_0380b128;
joined_r0x02c0c6b4:
        if ((uVar19 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x6b8))();
          lVar7 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_038031d8);
          puVar14 = PTR_DAT_0380abd0;
          if (lVar7 == 0) goto LAB_02c0d1d0;
          if ((int)*(long *)(lVar7 + 0x18) == 1) {
            plVar24 = *(long **)(lVar7 + 0x20);
LAB_02c0c780:
            uVar6 = FUN_02b0dac8(plVar24,0,0);
            if ((uVar6 & 1) != 0) {
              if ((plVar24 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240))
                 , lVar8 == 0)) goto LAB_02c0d1d0;
              uVar6 = FUN_02be8354(lVar8,0);
              if ((uVar6 & 1) == 0) {
                lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
                uVar13 = *(undefined8 *)PTR_DAT_037f8830;
                if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2c78);
                }
                lVar7 = FUN_02bddb5c(uVar13,0);
                if (lVar8 == lVar7) goto LAB_02c0c810;
              }
              else {
LAB_02c0c810:
                uVar19 = iStack000000000000004c - (uint)(uVar17 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,uVar19);
                  puVar14 = PTR_DAT_03802388;
                  if (unaff_x28 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5b0();
                      }
                      lVar26 = (long)(int)uVar18;
                      lVar7 = *(long *)(unaff_x28 + lVar26 * 8 + 0x20);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5a8();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar9 = thunk_FUN_01861ac0(lVar7,uVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(lVar7,uVar13);
                      }
                      lVar9 = *(long *)puVar14;
                      plVar10 = (long *)thunk_FUN_01861ac0(lVar7,lVar9);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(lVar7,lVar9);
                      }
                      lVar7 = *plVar10;
                      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar6 != 0) {
                        piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar9) {
                            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar23 + 7) * 0x10 + 0x138);
                            goto LAB_02c0c8e8;
                          }
                          uVar6 = uVar6 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0185dba8(plVar10,lVar9,7);
LAB_02c0c8e8:
                      uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5a8();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5b0();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar26 * 4 + 0x20) = uVar4;
                      if (uVar18 == uVar19) {
                        plVar24 = (long *)(**(code **)(*plVar24 + 0x2c8))
                                                    (plVar24,unaff_x21,
                                                     *(undefined8 *)(*plVar24 + 0x2d0));
                        if (plVar24 == (long *)0x0) {
                          if (uVar17 != 0) goto LAB_02c0d1d0;
                        }
                        else {
                          bVar1 = *(byte *)(*(long *)PTR_DAT_037f8d30 + 0x130);
                          if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)PTR_DAT_037f8d30)) {
                    /* WARNING: Subroutine does not return */
                            FUN_017fc944();
                          }
                          if (uVar17 != 0) {
                            uVar13 = thunk_FUN_0187e994(plVar24,lVar8,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_02c0d1d0;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar19) goto LAB_02c0d1d4;
                        if (plVar24 != (long *)0x0) {
                          thunk_FUN_0187eb34(plVar24,*(undefined8 *)
                                                      (in_stack_00000058 + (long)(int)uVar19 * 8 +
                                                      0x20),lVar8,0);
                          return 0;
                        }
                        goto LAB_02c0d1d0;
                      }
                      unaff_x28 = in_stack_00000058;
                    } while (in_stack_00000058 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
              }
              if (uVar17 == 0) {
                puVar14 = PTR_DAT_0380b138;
                if (iStack000000000000004c == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar24 + 0x2e8))
                                (plVar24,unaff_x21,*(undefined8 *)(unaff_x28 + 0x20),uVar18,
                                 unaff_x23);
                      return 0;
                    }
                    goto LAB_02c0d1d4;
                  }
                  goto LAB_02c0d1d0;
                }
              }
              else {
                puVar14 = PTR_DAT_0380b140;
                if (iStack000000000000004c == 0) {
                  uVar13 = (**(code **)(*plVar24 + 0x2c8))
                                     (plVar24,unaff_x21,*(undefined8 *)(*plVar24 + 0x2d0));
                  return uVar13;
                }
              }
              goto LAB_02c0d3dc;
            }
          }
          else {
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (uVar17 == 0) {
                if (unaff_x28 == 0) goto LAB_02c0d1d0;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_02c0d1d4;
                puVar11 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar26 = *(long *)PTR_DAT_0380abd0;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                  lVar26 = *(long *)puVar14;
                }
                puVar11 = *(undefined8 **)(lVar26 + 0xb8);
              }
              if (unaff_x23 == (long *)0x0) goto LAB_02c0d1d0;
              plVar24 = (long *)(**(code **)(*unaff_x23 + 0x178))(unaff_x23,uVar18,lVar7,*puVar11);
              goto LAB_02c0c780;
            }
            uVar6 = FUN_02b0dac8(0,0,0);
            if ((uVar6 & 1) != 0) goto LAB_02c0d1d0;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar13 = (**(code **)(*unaff_x24 + 0x2c8))();
            thunk_FUN_01851c08(PTR_DAT_0380abe8);
            uVar15 = thunk_FUN_01861bbc();
            FUN_02bf0630(uVar15,uVar13,unaff_x22,0);
            goto LAB_02c0d51c;
          }
          goto LAB_02c0c938;
        }
      }
    }
LAB_02c0d3dc:
    uVar13 = thunk_FUN_01851c08(puVar14);
    uVar13 = FUN_02c108dc(uVar13,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar15 = thunk_FUN_01861bbc();
    puVar14 = PTR_DAT_0380b148;
  }
  else {
    puVar14 = PTR_DAT_0380b0d0;
    if (unaff_x28 == 0) {
      if (*(long *)(in_stack_000000c0 + 0x18) == 0) goto LAB_02c0c580;
    }
    else {
                    /* try { // try from 02c0c578 to 02d0c57b has its CatchHandler @ 02c0c588 */
      if ((int)*(long *)(in_stack_000000c0 + 0x18) <= *(int *)(unaff_x28 + 0x18)) {
LAB_02c0c580:
                    /* catch() { ... } // from try @ 02c0c578 with catch @ 02c0c588 */
                    /* try { // try from 02c0c594 to 02d0c59f has its CatchHandler @ 02c0c5b4 */
        iVar3 = FUN_01c052f8(in_stack_000000c0,0,*(undefined8 *)PTR_DAT_0380b098);
        puVar14 = PTR_DAT_0380b0f0;
        if (iVar3 == -1) goto LAB_02c0c5a0;
      }
    }
    uVar13 = thunk_FUN_01851c08(puVar14);
    uVar13 = FUN_02c108dc(uVar13,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar15 = thunk_FUN_01861bbc();
    puVar14 = PTR_DAT_0380b0f8;
  }
  uVar16 = thunk_FUN_01851c08(puVar14);
  FUN_02b3cc64(uVar15,uVar13,uVar16,0);
LAB_02c0d51c:
  uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar15,uVar13);
}


