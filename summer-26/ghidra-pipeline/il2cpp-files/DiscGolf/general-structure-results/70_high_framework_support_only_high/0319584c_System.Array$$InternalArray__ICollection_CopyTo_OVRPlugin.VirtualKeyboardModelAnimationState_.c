/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0319584c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 *in_stack_00000008;
  int iStack0000000000000014;
  int iStack0000000000000028;
  int iStack000000000000002c;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0bdd0);
  FUN_02d965b8(PTR_DAT_069fcea0);
  FUN_02d965b8(PTR_DAT_069ff370);
  FUN_02d965b8(PTR_DAT_06a0c9f8);
  FUN_02d965b8(PTR_DAT_06a0bd90);
  FUN_02d965b8(PTR_DAT_06a0ca00);
  FUN_02d965b8(PTR_DAT_069fd220);
  FUN_02d965b8(PTR_DAT_069fda98);
  FUN_02d965b8(PTR_DAT_06a0ca08);
  FUN_02d965b8(PTR_DAT_06a0bd88);
  FUN_02d965b8(PTR_DAT_069fd228);
  FUN_02d965b8(PTR_DAT_069fc180);
  FUN_02d965b8(PTR_DAT_069fb990);
  FUN_02d965b8(PTR_DAT_06a0ca10);
  FUN_02d965b8(PTR_DAT_06a0ca18);
  FUN_02d965b8(PTR_DAT_06a0ca20);
  FUN_02d965b8(PTR_DAT_06a0ca28);
  FUN_02d965b8(PTR_DAT_06a0ca30);
  FUN_02d965b8(PTR_DAT_069fba50);
  *(undefined1 *)(unaff_x22 + 0x836) = 1;
  lVar9 = thunk_FUN_02dd3144(*unaff_x24);
  FUN_0400f984(lVar9,*unaff_x23);
  lVar10 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_0400f984(lVar10,*unaff_x20);
  if (lVar9 != 0) {
    lVar16 = *(long *)(lVar9 + 0x10);
    uVar15 = *(undefined8 *)PTR_DAT_06a0ca28;
    lVar17 = *(long *)PTR_DAT_069fcea0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar16 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
        LeanTween__value();
      }
      else {
        FUN_040101ec(lVar9,uVar15,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (lVar10 != 0) {
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar17 = *(long *)PTR_DAT_06a0bdd0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        puVar6 = PTR_DAT_06a0ca18;
        puVar5 = PTR_DAT_06a0ca08;
        puVar4 = PTR_DAT_06a0ca00;
        if (lVar16 != 0) {
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            puVar11 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
            *puVar11 = 0;
            LeanTween__value(puVar11,0);
          }
          else {
            FUN_040101ec(lVar10,0,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
          }
          puVar3 = PTR_DAT_069fb990;
          lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          FUN_0400f984(lVar16,*(undefined8 *)puVar4);
          uVar15 = *(undefined8 *)puVar6;
          pfVar1 = (float *)(unaff_x19 + 0x21c);
          iVar7 = *(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4);
          pfVar1[0] = 100.0;
          pfVar1[1] = 100.0;
          if (iVar7 == 0) {
            thunk_FUN_02df485c();
          }
          puVar4 = PTR_DAT_06a0ca10;
          uVar15 = FUN_054f73b4(uVar15,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar15 = FUN_06355258(uVar15,0);
          lVar17 = thunk_FUN_02dd3048(uVar15,*(undefined8 *)puVar4);
          puVar4 = PTR_DAT_06a0bdc0;
          if (lVar17 != 0) {
            uVar2 = *(uint *)(lVar17 + 0x18);
            if ((int)uVar2 < 1) {
              fVar23 = 0.0;
            }
            else {
              fVar23 = 0.0;
              iStack0000000000000014 = 0;
              uVar19 = 0;
              do {
                if (uVar2 <= uVar19) goto LAB_031963c8;
                lVar20 = *(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20);
                if (lVar20 == 0) goto LAB_031963c4;
                uVar15 = FUN_063e6cf4(lVar20,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)puVar3);
                }
                uVar12 = FUN_0634eb94(uVar15,0,0);
                if ((uVar12 & 1) != 0) {
                  lVar13 = FUN_0634bbcc(lVar20,0);
                  if (lVar13 == 0) goto LAB_031963c4;
                  uVar15 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)puVar3);
                  }
                  uVar12 = FUN_06350670(uVar15,0,0);
                  lVar13 = FUN_0634bbcc(lVar20,0);
                  if ((uVar12 & 1) == 0) {
                    if ((lVar13 == 0) ||
                       (lVar13 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4), lVar13 == 0))
                    goto LAB_031963c4;
                    uVar21 = *(undefined8 *)(lVar13 + 0x30);
                    uVar15 = FUN_063e6cf4(lVar20,0);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02df485c(*(long *)puVar3);
                    }
                    uVar12 = FUN_0634eb94(uVar21,uVar15,0);
                    if ((uVar12 & 1) != 0) {
                      lVar13 = FUN_0634bbcc(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      lVar13 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4);
                      uVar15 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      *(undefined8 *)(lVar13 + 0x30) = uVar15;
                      LeanTween__value((undefined8 *)(lVar13 + 0x30),uVar15);
                      lVar13 = FUN_0634bbcc(lVar20,0);
                      if ((lVar13 == 0) ||
                         (uVar15 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4), lVar16 == 0))
                      goto LAB_031963c4;
                      lVar13 = *(long *)(lVar16 + 0x10);
                      lVar18 = *(long *)PTR_DAT_06a0c9f0;
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_031963c4;
                      uVar2 = *(uint *)(lVar16 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                        puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar11 = uVar15;
                        goto LAB_03195d58;
                      }
                      FUN_040101ec(lVar16,uVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
                    if (lVar13 == 0) goto LAB_031963c4;
                    FUN_0364c220(lVar13,*(undefined8 *)PTR_DAT_06a0c9e8);
                    lVar13 = FUN_0634bbcc(lVar20,0);
                    if ((lVar13 == 0) ||
                       (uVar15 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4), lVar16 == 0))
                    goto LAB_031963c4;
                    lVar13 = *(long *)(lVar16 + 0x10);
                    lVar18 = *(long *)PTR_DAT_06a0c9f0;
                    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                    if (lVar13 == 0) goto LAB_031963c4;
                    uVar2 = *(uint *)(lVar16 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                      LeanTween__value();
                    }
                    else {
                      FUN_040101ec(lVar16,uVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = FUN_0634bbcc(lVar20,0);
                    if (lVar13 == 0) goto LAB_031963c4;
                    lVar13 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4);
                    uVar15 = FUN_063e6cf4(lVar20,0);
                    if (lVar13 == 0) goto LAB_031963c4;
                    puVar11 = (undefined8 *)(lVar13 + 0x30);
                    *puVar11 = uVar15;
LAB_03195d58:
                    LeanTween__value(puVar11,uVar15);
                  }
                  lVar13 = FUN_0634bbcc(lVar20,0);
                  if (lVar13 == 0) goto LAB_031963c4;
                  uVar15 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)puVar3);
                  }
                  uVar12 = FUN_0634eb94(uVar15,0,0);
                  if ((uVar12 & 1) != 0) {
                    lVar13 = FUN_0634bbcc(lVar20,0);
                    if ((lVar13 == 0) ||
                       (lVar13 = FUN_0364c2b0(lVar13,*(undefined8 *)puVar4), lVar13 == 0))
                    goto LAB_031963c4;
                    if (*(char *)(lVar13 + 0xdf) == '\0') {
                      uVar15 = thunk_FUN_06354368(lVar20,0);
                      lVar13 = *(long *)(lVar9 + 0x10);
                      lVar18 = *(long *)PTR_DAT_069fcea0;
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_031963c4;
                      uVar2 = *(uint *)(lVar9 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                        LeanTween__value();
                        fVar24 = param_3;
                      }
                      else {
                        FUN_040101ec(lVar9,uVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                        fVar24 = param_3;
                      }
                      lVar13 = *(long *)(lVar10 + 0x10);
                      lVar18 = *(long *)PTR_DAT_06a0bdd0;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_031963c4;
                      uVar2 = *(uint *)(lVar10 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                        plVar14 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar14 = lVar20;
                        LeanTween__value(plVar14,lVar20);
                      }
                      else {
                        FUN_040101ec(lVar10,lVar20,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      iVar7 = thunk_FUN_063e80e0(lVar13,0);
                      if (iStack0000000000000014 != iVar7) {
                        if (iStack0000000000000014 != 0) {
                          *in_stack_00000008 = 1;
                        }
                        lVar13 = FUN_063e6cf4(lVar20,0);
                        if (lVar13 == 0) goto LAB_031963c4;
                        iStack0000000000000014 = thunk_FUN_063e80e0(lVar13,0);
                      }
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      fVar22 = (float)FUN_063e81b8(lVar13,0);
                      if (fVar23 < fVar22) {
                        lVar13 = FUN_063e6cf4(lVar20,0);
                        if (lVar13 == 0) goto LAB_031963c4;
                        fVar23 = (float)FUN_063e81b8(lVar13,0);
                      }
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      FUN_063e81b8(lVar13,0);
                      if (fVar23 < fVar24) {
                        lVar13 = FUN_063e6cf4(lVar20,0);
                        if (lVar13 == 0) goto LAB_031963c4;
                        FUN_063e81b8(lVar13,0);
                        fVar23 = fVar24;
                      }
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      fVar22 = (float)FUN_063e82b8(lVar13,0);
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      iVar7 = FUN_063e921c(lVar13,0);
                      lVar13 = FUN_063e6cf4(lVar20,0);
                      if (lVar13 == 0) goto LAB_031963c4;
                      FUN_063e82b8(lVar13,0);
                      param_3 = fVar24;
                      lVar20 = FUN_063e6cf4(lVar20,0);
                      if (lVar20 == 0) goto LAB_031963c4;
                      iVar8 = FUN_063e921c(lVar20,0);
                      if (fVar22 / (float)iVar7 < *pfVar1) {
                        *pfVar1 = fVar22 / (float)iVar7;
                      }
                      if (fVar24 / (float)iVar8 < *(float *)(unaff_x19 + 0x220)) {
                        *(float *)(unaff_x19 + 0x220) = fVar24 / (float)iVar8;
                      }
                    }
                  }
                }
                uVar2 = *(uint *)(lVar17 + 0x18);
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < (int)uVar2);
            }
            puVar4 = PTR_DAT_06a0c9f8;
            uVar15 = FUN_04011c04(lVar9,*(undefined8 *)PTR_DAT_069ff370);
            *(undefined8 *)(unaff_x19 + 0x248) = uVar15;
            LeanTween__value(unaff_x19 + 0x248,uVar15);
            uVar15 = FUN_04011c04(lVar10,*(undefined8 *)puVar4);
            *(undefined8 *)(unaff_x19 + 0x250) = uVar15;
            LeanTween__value(unaff_x19 + 0x250,uVar15);
            if (*(char *)(unaff_x19 + 0x49c) == '\0') {
              fVar23 = fVar23 * 1.5;
              *(float *)(unaff_x19 + 0x208) = fVar23;
              if (*(float *)(unaff_x19 + 0x20c) < fVar23) {
                *(float *)(unaff_x19 + 0x20c) = fVar23;
              }
            }
            else {
              *(undefined4 *)(unaff_x19 + 0x20c) = 0;
            }
            *(undefined4 *)(unaff_x19 + 0x228) = 0;
            fVar23 = (float)*(undefined8 *)pfVar1 * 0.5;
            fVar24 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * 0.5;
            *(float *)(unaff_x19 + 0x224) = fVar23;
            *(float *)(unaff_x19 + 0x22c) = fVar24;
            iVar7 = *(int *)(lVar17 + 0x18);
            *(ulong *)pfVar1 = CONCAT44(fVar24,fVar23);
            if (iVar7 == 0) {
              return lVar16;
            }
            lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
            FUN_0400f984(lVar9,*(undefined8 *)PTR_DAT_069fd220);
            if (*(int *)(lVar17 + 0x18) == 0) {
LAB_031963c8:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            if (((*(long *)(lVar17 + 0x20) != 0) &&
                (lVar10 = FUN_063e6cf4(*(long *)(lVar17 + 0x20),0), lVar10 != 0)) &&
               (lVar10 = FUN_063ea770(lVar10,0), puVar5 = PTR_DAT_06a0ca30,
               puVar4 = PTR_DAT_069fba50, lVar10 != 0)) {
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (0 < (int)uVar2) {
                uVar19 = 0;
                do {
                  if (uVar2 <= uVar19) goto LAB_031963c8;
                  lVar17 = *(long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_031963c4;
                  lVar17 = FUN_063eb090(lVar17,0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)puVar3);
                  }
                  uVar12 = FUN_0634eb94(lVar17,0,0);
                  if ((uVar12 & 1) == 0) {
                    if (lVar9 == 0) goto LAB_031963c4;
                    iStack0000000000000028 = *(int *)(lVar9 + 0x18) + 1;
                    uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                &stack0x00000028);
                    uVar15 = FUN_0536d490(*(undefined8 *)puVar5,uVar15,
                                          *(undefined8 *)PTR_DAT_06a0ca20,0);
                  }
                  else {
                    plVar14 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
                    if (plVar14 == (long *)0x0) goto LAB_031963c4;
                    if ((*(long *)puVar5 != 0) &&
                       (lVar20 = thunk_FUN_02dd3048(*(long *)puVar5,*(undefined8 *)(*plVar14 + 0x40)
                                                   ), lVar20 == 0)) {

                      System_Array__InternalArray__ICollection_CopyTo<ProbeReferenceVolume_CellStreamingScratchBufferLayout>
                      :
                      uVar15 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                      FUN_02d96724(uVar15,0);
                    }
                    if ((int)plVar14[3] == 0) goto LAB_031963c8;
                    plVar14[4] = *(long *)puVar5;
                    LeanTween__value();
                    if (lVar9 == 0) goto LAB_031963c4;
                    iStack000000000000002c = *(int *)(lVar9 + 0x18) + 1;
                    lVar20 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                (long)&stack0x00000028 + 4);
                    if ((lVar20 != 0) &&
                       (lVar13 = thunk_FUN_02dd3048(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar13 == 0))
                    goto 
                    System_Array__InternalArray__ICollection_CopyTo<ProbeReferenceVolume_CellStreamingScratchBufferLayout>
                    ;
                    if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) goto LAB_031963c8;
                    plVar14[5] = lVar20;
                    LeanTween__value(plVar14 + 5,lVar20);
                    lVar20 = *(long *)puVar4;
                    if ((lVar20 != 0) &&
                       (lVar20 = thunk_FUN_02dd3048(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar20 == 0))
                    goto 
                    System_Array__InternalArray__ICollection_CopyTo<ProbeReferenceVolume_CellStreamingScratchBufferLayout>
                    ;
                    if (*(uint *)(plVar14 + 3) < 3) goto LAB_031963c8;
                    plVar14[6] = *(long *)puVar4;
                    LeanTween__value();
                    if (lVar17 == 0) goto LAB_031963c4;
                    lVar17 = thunk_FUN_06354368(lVar17,0);
                    if ((lVar17 != 0) &&
                       (lVar20 = thunk_FUN_02dd3048(lVar17,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar20 == 0))
                    goto 
                    System_Array__InternalArray__ICollection_CopyTo<ProbeReferenceVolume_CellStreamingScratchBufferLayout>
                    ;
                    if ((*(uint *)(plVar14 + 3) & 0xfffffffc) == 0) goto LAB_031963c8;
                    plVar14[7] = lVar17;
                    LeanTween__value(plVar14 + 7,lVar17);
                    uVar15 = System_Globalization_NumberFormatInfo__VerifyWritable(plVar14,0);
                  }
                  lVar17 = *(long *)(lVar9 + 0x10);
                  lVar20 = *(long *)PTR_DAT_069fcea0;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_031963c4;
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                    LeanTween__value();
                  }
                  else {
                    FUN_040101ec(lVar9,uVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar2 = *(uint *)(lVar10 + 0x18);
                  uVar19 = uVar19 + 1;
                } while ((int)uVar19 < (int)uVar2);
              }
              if (lVar9 != 0) {
                uVar15 = FUN_04011c04(lVar9,*(undefined8 *)PTR_DAT_069ff370);
                *(undefined8 *)(unaff_x19 + 600) = uVar15;
                LeanTween__value(unaff_x19 + 600,uVar15);
                return lVar16;
              }
            }
          }
        }
      }
    }
  }
LAB_031963c4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


