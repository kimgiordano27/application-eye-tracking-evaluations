/*
FUNCTION_NAME: Pathfinding.PathRequestSettings$$get_Default
ENTRY_POINT: 035a58d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Pathfinding_PathRequestSettings__get_Default
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  FUN_02fe925c(*(undefined8 *)(param_5 + 0x618));
  FUN_02fe925c(PTR_DAT_06f8a958);
                    /* try { // try from 035a58ec to 036a5917 has its CatchHandler @ 035a5cf8 */
  FUN_02fe925c(PTR_DAT_06f72098);
  FUN_02fe925c(PTR_DAT_06f8a960);
  *(undefined1 *)(unaff_x20 + 0x441) = 1;
  uStack0000000000000034 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  if (3 < *(uint *)(unaff_x19 + 0x10)) goto LAB_035a5f00;
  lVar16 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 035a5930 to 036a595b has its CatchHandler @ 035a5cfc */
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    uVar12 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f70618);
    FUN_068fe880(uVar12,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),uVar12);
                    /* try { // try from 035a5974 to 036a599b has its CatchHandler @ 035a5d00 */
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return 1;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0x50) == 0)) ||
       (lVar15 = FUN_04431d44(*(long *)(lVar16 + 0x50),*(undefined8 *)PTR_DAT_06f73d88), lVar15 == 0
       )) goto LAB_035a6438;
    if (*(long *)(lVar15 + 0x18) == 0) goto LAB_035a5f00;
    uVar12 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f7d6d8);
    FUN_069764bc(uVar12,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x28),uVar12);
    if (DAT_0738fbc1 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738fbc1 = '\x01';
    }
    uVar12 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0x60);
    param_2 = *(float *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0x68);
    *(long *)(unaff_x19 + 0x40) = lVar15;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar12;
    *(float *)(unaff_x19 + 0x38) = param_2;
    thunk_FUN_03048534((long *)(unaff_x19 + 0x40),lVar15);
    uVar7 = 0;
    *(undefined4 *)(unaff_x19 + 0x48) = 0;
    break;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    uVar7 = *(int *)(unaff_x19 + 0x48) + 1;
    *(uint *)(unaff_x19 + 0x48) = uVar7;
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    return 0;
  }
  lVar15 = *(long *)(unaff_x19 + 0x40);
  if (lVar15 == 0) goto LAB_035a6438;
  if ((int)uVar7 < (int)*(uint *)(lVar15 + 0x18)) {
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_035a643c;
    if (lVar16 == 0) goto LAB_035a6438;
    lVar17 = *(long *)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
    lVar15 = FUN_068f5d7c(lVar16,0);
    if ((lVar15 == 0) || (FUN_069042b4(lVar15,0), lVar17 == 0)) goto LAB_035a6438;
    fVar19 = (float)FUN_06975eb0(lVar17,0);
    fVar21 = param_2;
    fVar24 = param_3;
    lVar15 = FUN_068f5d7c(lVar16,0);
    if (lVar15 == 0) goto LAB_035a6438;
    fVar20 = (float)FUN_069042b4(lVar15,0);
    if (DAT_0738e72b == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e72b = '\x01';
    }
    puVar2 = PTR_DAT_06f6d508;
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar16 = FUN_068f5d7c(lVar16,0);
    if (lVar16 == 0) goto LAB_035a6438;
    fVar24 = fVar24 - param_3;
    fVar22 = fVar24 * fVar24;
    fVar27 = fVar22 + (fVar20 - fVar19) * (fVar20 - fVar19) +
                      (fVar21 - param_2) * (fVar21 - param_2);
    fStack000000000000000c = fVar19;
    fVar21 = (float)FUN_069042b4(lVar16,0);
    fVar28 = *(float *)(unaff_x19 + 0x30);
    fVar19 = *(float *)(unaff_x19 + 0x34);
    fVar20 = *(float *)(unaff_x19 + 0x38);
    if (DAT_0738e72b == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e72b = '\x01';
    }
    fVar21 = fVar21 - fVar28;
    fVar22 = fVar22 - fVar19;
    fVar24 = fVar24 - fVar20;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (SQRT(fVar27) < SQRT(fVar24 * fVar24 + fVar21 * fVar21 + fVar22 * fVar22)) {
      *(long *)(unaff_x19 + 0x28) = lVar17;
      *(float *)(unaff_x19 + 0x30) = fStack000000000000000c;
      *(float *)(unaff_x19 + 0x34) = param_2;
      *(float *)(unaff_x19 + 0x38) = param_3;
      thunk_FUN_03048534((long *)(unaff_x19 + 0x28),lVar17);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),0);
    uVar3 = 2;
LAB_035a5bec:
    *(undefined4 *)(unaff_x19 + 0x10) = uVar3;
    uVar12 = 1;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_03048534((long *)(unaff_x19 + 0x40),0);
    plVar18 = (long *)PTR_DAT_06f6d618;
    uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_068f9b78(uVar12,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_035a6438;
      uVar9 = FUN_06975da8(*(long *)(unaff_x19 + 0x28),0);
      if ((uVar9 & 1) == 0) {
        if ((lVar16 == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) goto LAB_035a6438;
        lVar15 = *(long *)(lVar16 + 0x48);
        uVar12 = FUN_068f62b0(*(long *)(unaff_x19 + 0x28),0);
        if (lVar15 == 0) goto LAB_035a6438;
        uVar9 = FUN_04430678(lVar15,uVar12,*(undefined8 *)PTR_DAT_06f73150);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_035a6438;
          lVar15 = FUN_03bbe5d0(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_06f89c88);
          if (*(int *)(*plVar18 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*plVar18);
          }
          uVar9 = FUN_068f8810(lVar15,0,0);
          if ((uVar9 & 1) == 0) {
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar15 = FUN_068f5db8(*(long *)(unaff_x19 + 0x28),0), lVar15 == 0))
            goto LAB_035a6438;
            lVar15 = FUN_03c73394(lVar15,*(undefined8 *)PTR_DAT_06f72758);
            if (*(int *)(*plVar18 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*plVar18);
            }
            uVar9 = FUN_068f9b78(lVar15,0,0);
            if ((uVar9 & 1) == 0) {
              if (lVar15 == 0) goto LAB_035a6438;
              uVar12 = FUN_068ce534(lVar15,0);
              if (*(int *)(*plVar18 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(*plVar18);
              }
              uVar9 = FUN_068f9b78(uVar12,0,0);
              if ((uVar9 & 1) == 0) {
                lVar17 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f74668);
                System_Collections_Generic_List<RaycastHit2D>__System_Collections_IList_Contains
                          (lVar17,*(undefined8 *)PTR_DAT_06f8a950);
                if ((*(char *)(lVar16 + 0x30) == '\0') && (*(char *)(lVar16 + 0x31) == '\0'))
                goto LAB_035a62c8;
                param_4 = *(float *)(unaff_x19 + 0x30);
                fVar21 = *(float *)(unaff_x19 + 0x34);
                fVar24 = *(float *)(unaff_x19 + 0x38);
                lVar10 = FUN_068f5d7c(lVar16,0);
                if (lVar10 == 0) goto LAB_035a6438;
                fVar19 = (float)FUN_069042b4(lVar10,0);
                if (DAT_0738e6c8 == '\0') {
                  FUN_02fe925c(PTR_DAT_06f6d508);
                  DAT_0738e6c8 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                lVar10 = FUN_068f5d7c(lVar16,0);
                if (lVar10 == 0) goto LAB_035a6438;
                param_4 = param_4 - fVar19;
                param_2 = fVar21 - param_2;
                param_3 = fVar24 - param_3;
                param_4 = param_4 / SQRT(param_3 * param_3 + param_4 * param_4 + param_2 * param_2);
                uVar12 = FUN_069042b4(lVar10,0);
                uVar3 = FUN_068f953c(*(undefined4 *)(lVar16 + 0x44),0);
                if (*(int *)(*(long *)PTR_DAT_06f6ddb8 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6ddb8);
                }
                uVar9 = FUN_0696eb38(uVar12,&stack0x00000010,uVar3,0);
                if ((uVar9 & 1) == 0) goto LAB_035a5f00;
                if (*(char *)(lVar16 + 0x30) != '\0') {
                  lVar10 = FUN_068ce534(lVar15,0);
                  if (lVar10 == 0) goto LAB_035a6438;
                  plVar11 = (long *)FUN_068cfe38(lVar10,0);
                  if (plVar11 == (long *)0x0) {
                    plVar11 = (long *)0x0;
                  }
                  else if (*plVar11 != *(long *)PTR_DAT_06f771e8) {
                    plVar11 = (long *)0x0;
                  }
                  if (*(int *)(*plVar18 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar9 = FUN_068f8810(plVar11,0,0);
                  if ((uVar9 & 1) == 0) {
                    if (*(char *)(lVar16 + 0x20) != '\0') {
                      lVar10 = FUN_068ce534(lVar15,0);
                      if (lVar10 == 0) goto LAB_035a6438;
                      uVar12 = FUN_068fc8bc(lVar10,0);
                      puVar14 = (undefined8 *)PTR_DAT_06f8a958;
LAB_035a6074:
                      uVar12 = FUN_059687dc(uVar12,*puVar14,0);
                      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
                      }
                      FUN_068bd348(uVar12,0);
                    }
                  }
                  else {
                    if (plVar11 == (long *)0x0) goto LAB_035a6438;
                    uVar9 = (**(code **)(*plVar11 + 0x1e8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
                    if ((uVar9 & 1) == 0) {
                      if (*(char *)(lVar16 + 0x20) != '\0') {
                        uVar12 = FUN_068fc8bc(plVar11,0);
                        puVar14 = (undefined8 *)PTR_DAT_06f8a960;
                        goto LAB_035a6074;
                      }
                    }
                    else {
                      fVar21 = (float)FUN_0697409c(&stack0x00000010,0);
                      iVar4 = (**(code **)(*plVar11 + 0x188))
                                        (plVar11,*(undefined8 *)(*plVar11 + 400));
                      iVar5 = (**(code **)(*plVar11 + 0x1a8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                      iVar6 = -0x80000000;
                      if (fVar21 * (float)iVar4 != INFINITY) {
                        iVar6 = (int)(fVar21 * (float)iVar4);
                      }
                      iVar4 = -0x80000000;
                      if (param_2 * (float)iVar5 != INFINITY) {
                        iVar4 = (int)(param_2 * (float)iVar5);
                      }
                      param_2 = INFINITY;
                      uVar3 = FUN_068de360(plVar11,iVar6,iVar4,0);
                      if (lVar17 == 0) goto LAB_035a6438;
                      lVar10 = *(long *)(lVar17 + 0x10);
                      lVar13 = *(long *)PTR_DAT_06f746a0;
                      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                      if (lVar10 == 0) goto LAB_035a6438;
                      uVar7 = *(uint *)(lVar17 + 0x18);
                      if (uVar7 < *(uint *)(lVar10 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar7 * 0x10;
                        *(uint *)(lVar17 + 0x18) = uVar7 + 1;
                        *(undefined4 *)(lVar10 + 0x20) = uVar3;
                        *(float *)(lVar10 + 0x24) = param_2;
                        *(float *)(lVar10 + 0x28) = param_3;
                        *(float *)(lVar10 + 0x2c) = param_4;
                      }
                      else {
                        FUN_04362628(lVar17,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                }
                if (*(char *)(lVar16 + 0x31) == '\0') {
LAB_035a62c8:
                  bVar1 = false;
                }
                else {
                  lVar10 = FUN_068c9878(0);
                  if (lVar10 == 0) goto LAB_035a6438;
                  iVar6 = FUN_068ce350(lVar15,0);
                  if (iVar6 < *(int *)(lVar10 + 0x18) + -1) goto LAB_035a62c8;
                  lVar10 = FUN_068c9878(0);
                  uVar7 = FUN_068ce350(lVar15,0);
                  if (lVar10 == 0) goto LAB_035a6438;
                  if (*(uint *)(lVar10 + 0x18) <= uVar7) {
LAB_035a643c:
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar10 = *(long *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
                  if (lVar10 == 0) goto LAB_035a6438;
                  plVar11 = (long *)FUN_068c9840(lVar10,0);
                  if (*(char *)(lVar16 + 0x20) != '\0') {
                    if (*(int *)(*plVar18 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar9 = FUN_068f8810(plVar11,0,0);
                    if ((uVar9 & 1) != 0) {
                      if (plVar11 == (long *)0x0) goto LAB_035a6438;
                      uVar9 = (**(code **)(*plVar11 + 0x1e8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
                      if ((uVar9 & 1) == 0) {
                        uVar12 = FUN_068fc8bc(plVar11,0);
                        uVar12 = FUN_059687dc(uVar12,*(undefined8 *)PTR_DAT_06f8a960,0);
                        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
                        }
                        FUN_068bd348(uVar12,0);
                        plVar18 = (long *)PTR_DAT_06f6d618;
                      }
                    }
                  }
                  if (*(int *)(*plVar18 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar9 = FUN_068f8810(plVar11,0,0);
                  if ((uVar9 & 1) == 0) goto LAB_035a62c8;
                  if (plVar11 == (long *)0x0) goto LAB_035a6438;
                  uVar9 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0))
                  ;
                  if ((uVar9 & 1) == 0) goto LAB_035a62c8;
                  fVar21 = param_2;
                  fVar24 = (float)FUN_06974290(&stack0x00000010,0);
                  param_2 = fVar21;
                  iVar4 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
                  iVar6 = -0x80000000;
                  if (fVar24 != INFINITY) {
                    iVar6 = (int)fVar24;
                  }
                  iVar8 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0))
                  ;
                  iVar5 = -0x80000000;
                  if (fVar21 != INFINITY) {
                    iVar5 = (int)fVar21;
                  }
                  uVar3 = FUN_068de360(plVar11,iVar4 * iVar6,iVar8 * iVar5,0);
                  if (lVar17 == 0) goto LAB_035a6438;
                  lVar10 = *(long *)(lVar17 + 0x10);
                  lVar13 = *(long *)PTR_DAT_06f746a0;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_035a6438;
                  uVar7 = *(uint *)(lVar17 + 0x18);
                  if (uVar7 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar7 * 0x10;
                    *(uint *)(lVar17 + 0x18) = uVar7 + 1;
                    *(undefined4 *)(lVar10 + 0x20) = uVar3;
                    *(float *)(lVar10 + 0x24) = param_2;
                    *(float *)(lVar10 + 0x28) = param_3;
                    *(float *)(lVar10 + 0x2c) = param_4;
                  }
                  else {
                    FUN_04362628(lVar17,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  bVar1 = true;
                }
                lVar10 = FUN_068ce534(lVar15,0);
                if (lVar10 == 0) goto LAB_035a6438;
                uVar9 = FUN_068d0590(lVar10,*(undefined8 *)PTR_DAT_06f72098,0);
                if ((uVar9 & 1) != 0) {
                  lVar15 = FUN_068ce534(lVar15,0);
                  if ((lVar15 == 0) || (uVar3 = FUN_068cfbc4(lVar15,0), lVar17 == 0))
                  goto LAB_035a6438;
                  lVar15 = *(long *)(lVar17 + 0x10);
                  lVar10 = *(long *)PTR_DAT_06f746a0;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_035a6438;
                  uVar7 = *(uint *)(lVar17 + 0x18);
                  if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)uVar7 * 0x10;
                    *(uint *)(lVar17 + 0x18) = uVar7 + 1;
                    *(undefined4 *)(lVar15 + 0x20) = uVar3;
                    *(float *)(lVar15 + 0x24) = param_2;
                    *(float *)(lVar15 + 0x28) = param_3;
                    *(float *)(lVar15 + 0x2c) = param_4;
                  }
                  else {
                    FUN_04362628(lVar17,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  }
                }
                if (bVar1) {
                  if (lVar17 == 0) goto LAB_035a6438;
                }
                else {
                  if (lVar17 == 0) {
LAB_035a6438:
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  uVar3 = *(undefined4 *)(lVar16 + 0x34);
                  uVar23 = *(undefined4 *)(lVar16 + 0x38);
                  uVar25 = *(undefined4 *)(lVar16 + 0x3c);
                  uVar26 = *(undefined4 *)(lVar16 + 0x40);
                  lVar15 = *(long *)(lVar17 + 0x10);
                  lVar10 = *(long *)PTR_DAT_06f746a0;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_035a6438;
                  uVar7 = *(uint *)(lVar17 + 0x18);
                  if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)uVar7 * 0x10;
                    *(uint *)(lVar17 + 0x18) = uVar7 + 1;
                    *(undefined4 *)(lVar15 + 0x20) = uVar3;
                    *(undefined4 *)(lVar15 + 0x24) = uVar23;
                    *(undefined4 *)(lVar15 + 0x28) = uVar25;
                    *(undefined4 *)(lVar15 + 0x2c) = uVar26;
                  }
                  else {
                    FUN_04362628(lVar17,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar12 = FUN_043640b4(lVar17,*(undefined8 *)PTR_DAT_06f74700);
                FUN_035a5694(uVar12,uVar12);
                FUN_035a53ec(lVar16);
                *(undefined8 *)(unaff_x19 + 0x18) = 0;
                thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),0);
                uVar3 = 3;
                goto LAB_035a5bec;
              }
            }
          }
          else {
            if (lVar15 == 0) goto LAB_035a6438;
            FUN_035a53ec(*(undefined4 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x24),
                         *(undefined4 *)(lVar15 + 0x28),*(undefined4 *)(lVar15 + 0x2c),lVar16);
          }
        }
      }
    }
LAB_035a5f00:
    uVar12 = 0;
  }
  return uVar12;
}


