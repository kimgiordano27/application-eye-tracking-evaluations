/*
FUNCTION_NAME: Microsoft.Win32.NativeMethods$$CloseProcess
ENTRY_POINT: 02dd8c64
PROGRAM: sharks-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Microsoft_Win32_NativeMethods__CloseProcess(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar21;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uVar11 = thunk_FUN_0184d740(param_2,*param_1);
  if ((uVar11 & 1) == 0) {
    puVar18 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar18 = *unaff_x22;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar18,&PTR_StringLiteral_14485_0361ba68,0);
  }
  plVar21 = (long *)*unaff_x22;
  __cxa_end_catch();
  plVar12 = (long *)FUN_02dd0490();
  uVar13 = FUN_03013370();
  uVar14 = thunk_FUN_01851c08(PTR_DAT_03816258);
  uVar15 = thunk_FUN_01851c08(PTR_DAT_03816260);
  if (plVar21 == (long *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
  }
  uVar13 = FUN_02a506f0(uVar15,uVar13,uVar14,uVar16,0);
  if (plVar12 != (long *)0x0) {
    lVar17 = thunk_FUN_01851c08(PTR_DAT_03815c10);
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar11 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar18 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02dd7e34;
        }
        uVar11 = uVar11 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar11 != 0);
    }
    puVar18 = (undefined8 *)FUN_0185dba8(plVar12,lVar17,0);
LAB_02dd7e34:
    (*(code *)*puVar18)(plVar12,3,uVar13,puVar18[1]);
    lVar17 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_038161b8);
    FUN_0305d740(lVar17,0);
    plVar12 = unaff_x19 + 0xb;
    *plVar12 = lVar17;
    thunk_FUN_0188fd20(plVar12,lVar17);
    if (*plVar12 != 0) {
      lVar17 = *(long *)(*plVar12 + 0x10);
      uVar13 = FUN_02dd05fc();
      puVar3 = PTR_DAT_037f8c48;
      if (lVar17 != 0) {
        FUN_0305ec9c(lVar17,uVar13,0);
        lVar17 = thunk_FUN_01861bbc(*(undefined8 *)puVar3);
        FUN_02c32cb4(lVar17,7000,0);
        lVar19 = *plVar12;
        uVar14 = *unaff_x21;
        uVar13 = thunk_FUN_01861bbc(*unaff_x26);
        FUN_030104f0(uVar13,uVar14,0);
        if ((lVar17 != 0) && (uVar14 = FUN_02c32be4(lVar17,0), lVar19 != 0)) {
          lVar17 = FUN_0305dc3c(lVar19,uVar13,uVar14,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar17,0);
          uVar11 = FUN_02c44164(lVar17,0);
          if ((uVar11 & 1) != 0) {
            plVar21 = (long *)FUN_02c44128(lVar17,0);
            uVar13 = *(undefined8 *)PTR_DAT_03816210;
            if (plVar21 == (long *)0x0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
            }
            FUN_02a43498(uVar13,uVar14,0);
            FUN_02dd14b0();
          }
          plVar21 = (long *)*plVar12;
          if (plVar21 != (long *)0x0) {
            iVar8 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
            if (iVar8 == 2) {
              plVar21 = (long *)unaff_x19[2];
              *(undefined4 *)((long)unaff_x19 + 0x1c) = 2;
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
                uVar9 = FUN_02dd04b4();
                plVar21 = (long *)thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f96a0);
                FUN_02b23c00(plVar21,uVar9,0);
                uVar9 = FUN_02dd04b4();
                uVar13 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,uVar9);
                if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f9a18);
                }
                FUN_021ead00(&stack0x00000070,uVar13,*(undefined8 *)PTR_DAT_037faf80);
                puVar7 = PTR_DAT_038161e0;
                puVar6 = PTR_DAT_038161d8;
                puVar5 = PTR_DAT_037f9758;
                puVar4 = PTR_DAT_037f34d8;
                puVar3 = PTR_DAT_037f2cb0;
                plVar10 = (long *)*plVar12;
                if (plVar10 != (long *)0x0) {
                  bVar2 = false;
LAB_02dd8070:
                  iVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0))
                  ;
                  uVar13 = in_stack_00000078;
                  lVar17 = in_stack_00000070;
                  if (iVar8 != 2) {
                    iVar8 = *(int *)((long)unaff_x19 + 0x1c);
                    if ((iVar8 != 0) && (iVar8 != 3)) {
                      in_stack_00000048 = *(undefined8 *)PTR_DAT_03815f28;
                      in_stack_00000050 = 0xffffffffffffffff;
                      in_stack_00000058 = iVar8;
                      uVar13 = FUN_02c03928(&stack0x00000048,0);
                      plVar21 = (long *)*plVar12;
                      if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                      in_stack_00000040 =
                           (**(code **)(*plVar21 + 0x1a8))
                                     (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                      in_stack_00000030 = *(undefined8 *)PTR_DAT_038161e8;
                      in_stack_00000038 = 0xffffffffffffffff;
                      uVar14 = FUN_02c03928(&stack0x00000030,0);
                      FUN_02a506f0(*(undefined8 *)PTR_DAT_03816220,uVar13,
                                   *(undefined8 *)PTR_DAT_03816238,uVar14,0);
                      FUN_02dd14b0();
                      plVar21 = (long *)unaff_x19[0xb];
                      if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                      iVar8 = (**(code **)(*plVar21 + 0x1a8))
                                        (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                      if (iVar8 == 4) {
                        FUN_02dd14c8();
                      }
                      plVar12 = (long *)*plVar12;
                      if (plVar12 == (long *)0x0) goto LAB_02dd8d40;
                      iVar8 = (**(code **)(*plVar12 + 0x1a8))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
                      if (iVar8 == 6) {
                        FUN_02dd14c8();
                      }
                    }
                    (**(code **)(*unaff_x19 + 0x188))();
                    return;
                  }
                  plVar10 = (long *)*plVar12;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01843fdc();
                  }
                  uVar14 = FUN_02c303d4(0);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8();
                  }
                  lVar17 = (**(code **)(*plVar10 + 0x1f8))
                                     (plVar10,lVar17,uVar13,uVar14,*(undefined8 *)(*plVar10 + 0x200)
                                     );
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5a8();
                  }
                  while (uVar11 = FUN_02c40bec(lVar17,0), (uVar11 & 1) == 0) {
                    FUN_02c46d44(lVar17,0x32,0);
                  }
                  if (lVar17 == 0) goto LAB_02dd8d40;
                  uVar11 = FUN_02c40bec(lVar17,0);
                  if ((uVar11 & 1) != 0) {
                    plVar10 = (long *)*plVar12;
                    if (plVar10 == (long *)0x0) goto LAB_02dd8d40;
                    iVar8 = (**(code **)(*plVar10 + 0x1a8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                    if (iVar8 == 2) {
                      uVar11 = FUN_02c44334(lVar17,0);
                      if ((uVar11 & 1) == 0) {
                        lVar19 = FUN_01df4f08(lVar17,*(undefined8 *)puVar7);
                        if (lVar19 == 0) goto LAB_02dd8d40;
                        if (*(int *)(lVar19 + 0x10) != 0) {
                          lVar19 = FUN_01df4f08(lVar17,*(undefined8 *)puVar7);
                          if (lVar19 == 0) goto LAB_02dd8d40;
                          if (*(char *)(lVar19 + 0x14) != '\0') {
                            if (bVar2) {
                              if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                                thunk_FUN_01843fdc();
                              }
                              lVar19 = in_stack_00000070;
                              lVar17 = FUN_01df4f08(lVar17,*(undefined8 *)puVar7);
                              if ((lVar17 == 0) || (plVar21 == (long *)0x0)) goto LAB_02dd8d40;
                              (**(code **)(*plVar21 + 0x378))
                                        (plVar21,lVar19,0,*(undefined4 *)(lVar17 + 0x10),
                                         *(undefined8 *)(*plVar21 + 0x380));
                              uVar9 = (**(code **)(*plVar21 + 0x1e8))
                                                (plVar21,*(undefined8 *)(*plVar21 + 0x1f0));
                              lVar17 = (**(code **)(*plVar21 + 0x3a8))
                                                 (plVar21,*(undefined8 *)(*plVar21 + 0x3b0));
                              if (lVar17 == 0) goto LAB_02dd8d40;
                            }
                            else {
                              lVar17 = FUN_01df4f08(lVar17,*(undefined8 *)puVar7);
                              if (lVar17 == 0) goto LAB_02dd8d40;
                              uVar9 = *(undefined4 *)(lVar17 + 0x10);
                              if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f9a18);
                              }
                              if (in_stack_00000070 == 0) goto LAB_02dd8d40;
                              lVar17 = in_stack_00000070;
                              if (*(uint *)(in_stack_00000070 + 0x18) < 6) goto LAB_02dd89c0;
                            }
                            if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_02dd89c0;
                            cVar1 = *(char *)(lVar17 + 0x25);
                            FUN_02dd0f54();
                            if (bVar2) {
                              if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                              (**(code **)(*plVar21 + 0x338))
                                        (plVar21,0,*(undefined8 *)(*plVar21 + 0x340));
                              (**(code **)(*plVar21 + 0x208))
                                        (plVar21,0,*(undefined8 *)(*plVar21 + 0x210));
                            }
                            if (unaff_x19[2] == 0) goto LAB_02dd8d40;
                            uVar11 = FUN_02dc7930(unaff_x19[2],0);
                            if ((uVar11 & 1) != 0) {
                              if ((unaff_x19[2] == 0) ||
                                 (lVar17 = FUN_02dcee60(unaff_x19[2],0), lVar17 == 0))
                              goto LAB_02dd8d40;
                              if (cVar1 == '\0') {
                                FUN_02df0a9c(lVar17,uVar9,0);
                              }
                              else {
                                FUN_02df0ab8();
                              }
                            }
                            bVar2 = false;
                            goto LAB_02dd849c;
                          }
                          if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                            thunk_FUN_01843fdc();
                          }
                          lVar19 = in_stack_00000070;
                          lVar17 = FUN_01df4f08(lVar17,*(undefined8 *)puVar7);
                          if ((lVar17 == 0) || (plVar21 == (long *)0x0)) goto LAB_02dd8d40;
                          (**(code **)(*plVar21 + 0x378))
                                    (plVar21,lVar19,0,*(undefined4 *)(lVar17 + 0x10),
                                     *(undefined8 *)(*plVar21 + 0x380));
                          bVar2 = true;
                          goto LAB_02dd849c;
                        }
                        lVar19 = FUN_017fc3f4(*(undefined8 *)puVar3,6);
                        if (lVar19 == 0) goto LAB_02dd8d40;
                        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)PTR_DAT_03816200;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x20));
                        in_stack_00000058 = *(int *)((long)unaff_x19 + 0x1c);
                        in_stack_00000048 = *(undefined8 *)PTR_DAT_03815f28;
                        in_stack_00000050 = 0xffffffffffffffff;
                        uVar13 = FUN_02c03928(&stack0x00000048,0);
                        if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x28) = uVar13;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x28),uVar13);
                        if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)PTR_DAT_038161f0;
                        thunk_FUN_0188fd20();
                        plVar10 = (long *)*plVar12;
                        if (plVar10 == (long *)0x0) goto LAB_02dd8d40;
                        in_stack_00000040 =
                             (**(code **)(*plVar10 + 0x1a8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                        in_stack_00000030 = *(undefined8 *)PTR_DAT_038161e8;
                        in_stack_00000038 = 0xffffffffffffffff;
                        uVar13 = FUN_02c03928(&stack0x00000030,0);
                        if (*(uint *)(lVar19 + 0x18) < 4) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x38) = uVar13;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x38),uVar13);
                        if (*(uint *)(lVar19 + 0x18) < 5) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)PTR_DAT_03816230;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x40));
                        in_stack_00000028 = FUN_02c442d4(lVar17,0);
                        in_stack_00000018 = *(undefined8 *)puVar6;
                        in_stack_00000020 = 0xffffffffffffffff;
                        uVar13 = FUN_02c03928(&stack0x00000018,0);
                        if (*(uint *)(lVar19 + 0x18) < 6) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x48) = uVar13;
                        thunk_FUN_0188fd20();
                        FUN_02a507f8(lVar19,0);
                      }
                      else {
                        lVar19 = FUN_017fc3f4(*(undefined8 *)puVar3,8);
                        if (lVar19 == 0) goto LAB_02dd8d40;
                        if (*(int *)(lVar19 + 0x18) == 0) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)PTR_DAT_03816218;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x20));
                        in_stack_00000058 = FUN_02c442d4(lVar17,0);
                        in_stack_00000048 = *(undefined8 *)puVar6;
                        in_stack_00000050 = 0xffffffffffffffff;
                        uVar13 = FUN_02c03928(&stack0x00000048,0);
                        if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x28) = uVar13;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x28),uVar13);
                        if (*(uint *)(lVar19 + 0x18) < 3) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)puVar4;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x30));
                        if (*(uint *)(lVar19 + 0x18) < 4) goto LAB_02dd89c0;
                        *(long *)(lVar19 + 0x38) = unaff_x19[6];
                        thunk_FUN_0188fd20((long *)(lVar19 + 0x38));
                        if (*(uint *)(lVar19 + 0x18) < 5) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)PTR_DAT_037f3aa0;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x40));
                        in_stack_00000060._4_4_ = (undefined4)unaff_x19[8];
                        uVar13 = FUN_02bccfd8((long)&stack0x00000060 + 4,0);
                        if (*(uint *)(lVar19 + 0x18) < 6) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x48) = uVar13;
                        thunk_FUN_0188fd20((undefined8 *)(lVar19 + 0x48),uVar13);
                        if (*(uint *)(lVar19 + 0x18) < 7) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)puVar4;
                        thunk_FUN_0188fd20();
                        plVar10 = (long *)*plVar12;
                        if (plVar10 == (long *)0x0) goto LAB_02dd8d40;
                        uVar13 = (**(code **)(*plVar10 + 0x198))
                                           (plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
                        if (*(uint *)(lVar19 + 0x18) < 8) goto LAB_02dd89c0;
                        *(undefined8 *)(lVar19 + 0x58) = uVar13;
                        thunk_FUN_0188fd20();
                        FUN_02a507f8(lVar19,0);
                      }
                      FUN_02dd14b0();
                    }
                  }
LAB_02dd849c:
                  plVar10 = (long *)*plVar12;
                  if (plVar10 == (long *)0x0) goto LAB_02dd8d40;
                  goto LAB_02dd8070;
                }
              }
            }
            else {
              plVar21 = (long *)*plVar12;
              if (plVar21 != (long *)0x0) {
                in_stack_00000068 =
                     (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
                if ((in_stack_00000068 & 0xff) == 0) {
                  uVar9 = 0;
                }
                else {
                  plVar21 = (long *)*plVar12;
                  if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                  in_stack_00000068 =
                       (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
                  uVar9 = System_Collections_ObjectModel_ReadOnlyCollection<DateTimeOffset>__System_Collections_IList_RemoveAt
                                    (&stack0x00000068,*(undefined8 *)PTR_DAT_038161d0);
                }
                *(undefined4 *)(unaff_x19 + 4) = uVar9;
                lVar17 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2cb0,6);
                if (lVar17 != 0) {
                  if (*(int *)(lVar17 + 0x18) != 0) {
                    *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_038161f8;
                    thunk_FUN_0188fd20();
                    plVar21 = (long *)*plVar12;
                    if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                    in_stack_00000058 =
                         (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                    in_stack_00000048 = *(undefined8 *)PTR_DAT_038161e8;
                    in_stack_00000050 = 0xffffffffffffffff;
                    uVar13 = FUN_02c03928(&stack0x00000048,0);
                    if (1 < *(uint *)(lVar17 + 0x18)) {
                      *(undefined8 *)(lVar17 + 0x28) = uVar13;
                      thunk_FUN_0188fd20((undefined8 *)(lVar17 + 0x28),uVar13);
                      if (2 < *(uint *)(lVar17 + 0x18)) {
                        *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_03816208;
                        thunk_FUN_0188fd20();
                        plVar21 = (long *)*plVar12;
                        if (plVar21 == (long *)0x0) goto LAB_02dd8d40;
                        in_stack_00000068 =
                             (**(code **)(*plVar21 + 0x188))
                                       (plVar21,*(undefined8 *)(*plVar21 + 400));
                        uVar13 = FUN_028a2f04(&stack0x00000068,*(undefined8 *)PTR_DAT_038161c0);
                        if (3 < *(uint *)(lVar17 + 0x18)) {
                          *(undefined8 *)(lVar17 + 0x38) = uVar13;
                          thunk_FUN_0188fd20((undefined8 *)(lVar17 + 0x38),uVar13);
                          if (4 < *(uint *)(lVar17 + 0x18)) {
                            *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_03816228;
                            thunk_FUN_0188fd20();
                            plVar12 = (long *)*plVar12;
                            if (plVar12 == (long *)0x0) goto LAB_02dd8d40;
                            uVar13 = (**(code **)(*plVar12 + 0x198))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
                            if (5 < *(uint *)(lVar17 + 0x18)) {
                              *(undefined8 *)(lVar17 + 0x48) = uVar13;
                              thunk_FUN_0188fd20();
                              FUN_02a507f8(lVar17,0);
                              FUN_02dd14b0();
                              FUN_02dd14c8();
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
LAB_02dd89c0:
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5b0();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02dd8d40:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


