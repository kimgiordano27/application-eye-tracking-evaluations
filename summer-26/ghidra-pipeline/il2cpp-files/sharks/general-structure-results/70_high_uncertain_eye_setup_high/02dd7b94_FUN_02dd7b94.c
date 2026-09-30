/*
FUNCTION_NAME: FUN_02dd7b94
ENTRY_POINT: 02dd7b94
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02dd7b94(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 local_7c;
  ulong local_78;
  long local_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_03813ae8;
  if ((DAT_03a29e64 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037faf80);
    FUN_017fc350(PTR_DAT_038057c0);
    FUN_017fc350(PTR_DAT_037f9a18);
    FUN_017fc350(PTR_DAT_037f2c00);
    FUN_017fc350(PTR_DAT_037f8c48);
    FUN_017fc350(PTR_DAT_037f9758);
    FUN_017fc350(PTR_DAT_038161b8);
    FUN_017fc350(PTR_DAT_037f96a0);
    FUN_017fc350(PTR_DAT_038161c0);
    FUN_017fc350(PTR_DAT_038161c8);
    FUN_017fc350(PTR_DAT_038161d0);
    FUN_017fc350(PTR_DAT_03815f28);
    FUN_017fc350(PTR_DAT_037f2cb0);
    FUN_017fc350(PTR_DAT_038161d8);
    FUN_017fc350(PTR_DAT_038161e0);
    FUN_017fc350(PTR_DAT_03813ae8);
    FUN_017fc350(PTR_DAT_038161e8);
    FUN_017fc350(PTR_DAT_038161f0);
    FUN_017fc350(PTR_DAT_037f34d8);
    FUN_017fc350(PTR_DAT_038161f8);
    FUN_017fc350(PTR_DAT_03816200);
    FUN_017fc350(PTR_DAT_03816208);
    FUN_017fc350(PTR_DAT_03815eb0);
    FUN_017fc350(PTR_DAT_03816210);
    FUN_017fc350(PTR_DAT_037f3aa0);
    FUN_017fc350(PTR_DAT_03816218);
    FUN_017fc350(PTR_DAT_03816220);
    FUN_017fc350(PTR_DAT_03816228);
    FUN_017fc350(PTR_DAT_03816230);
    FUN_017fc350(PTR_DAT_03816238);
    DAT_03a29e64 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_7c = 0;
  plVar15 = param_1 + 5;
  lVar18 = *plVar15;
  lVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar4);
  FUN_030104f0(lVar11,lVar18,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar12 = FUN_03010f18(lVar11,0,0);
  if ((uVar12 & 1) != 0) {
    if (lVar11 == 0) goto LAB_02dd8d40;
    iVar9 = FUN_03012d54(lVar11,0);
    if (iVar9 == 2) {
      uVar13 = FUN_03013370(lVar11,0);
      lVar11 = FUN_0302259c(uVar13,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar19 = 0;
        do {
          if (uVar1 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          lVar18 = *(long *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          iVar9 = FUN_03111248(lVar18,0);
          if (iVar9 == 0x17) {
            *(undefined1 *)((long)param_1 + 0x44) = 1;
            lVar11 = FUN_02a43498(param_1[5],*(undefined8 *)PTR_DAT_03815eb0,0);
            *plVar15 = lVar11;
            thunk_FUN_0188fd20(plVar15);
            break;
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar1);
      }
    }
  }
  lVar11 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_038161b8);
  FUN_0305d740(lVar11,0);
  plVar17 = param_1 + 0xb;
  *plVar17 = lVar11;
  thunk_FUN_0188fd20(plVar17,lVar11);
  if (*plVar17 != 0) {
    lVar11 = *(long *)(*plVar17 + 0x10);
    uVar13 = FUN_02dd05fc(param_1,0);
    puVar5 = PTR_DAT_037f8c48;
    if (lVar11 != 0) {
      FUN_0305ec9c(lVar11,uVar13,0);
      lVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar5);
      FUN_02c32cb4(lVar11,7000,0);
      lVar18 = *plVar17;
      lVar20 = *plVar15;
      uVar13 = thunk_FUN_01861bbc(*(undefined8 *)puVar4);
      FUN_030104f0(uVar13,lVar20,0);
      if ((lVar11 != 0) && (uVar14 = FUN_02c32be4(lVar11,0), lVar18 != 0)) {
        lVar11 = FUN_0305dc3c(lVar18,uVar13,uVar14,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar11,0);
        uVar12 = FUN_02c44164(lVar11,0);
        if ((uVar12 & 1) != 0) {
          plVar15 = (long *)FUN_02c44128(lVar11,0);
          uVar13 = *(undefined8 *)PTR_DAT_03816210;
          if (plVar15 == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
          }
          uVar13 = FUN_02a43498(uVar13,uVar14,0);
          FUN_02dd14b0(param_1,1,uVar13,0);
        }
        plVar15 = (long *)*plVar17;
        if (plVar15 != (long *)0x0) {
          iVar9 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
          if (iVar9 == 2) {
            plVar15 = (long *)param_1[2];
            *(undefined4 *)((long)param_1 + 0x1c) = 2;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
              uVar10 = FUN_02dd04b4(param_1,0);
              plVar15 = (long *)thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f96a0);
              FUN_02b23c00(plVar15,uVar10,0);
              uVar10 = FUN_02dd04b4(param_1,0);
              uVar13 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,uVar10);
              if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f9a18);
              }
              FUN_021ead00(&local_70,uVar13,*(undefined8 *)PTR_DAT_037faf80);
              puVar8 = PTR_DAT_038161e0;
              puVar7 = PTR_DAT_038161d8;
              puVar6 = PTR_DAT_037f9758;
              puVar5 = PTR_DAT_037f34d8;
              puVar4 = PTR_DAT_037f2cb0;
              plVar16 = (long *)*plVar17;
              if (plVar16 != (long *)0x0) {
                bVar3 = false;
LAB_02dd8070:
                iVar9 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
                uVar13 = uStack_68;
                lVar11 = local_70;
                if (iVar9 != 2) {
                  iVar9 = *(int *)((long)param_1 + 0x1c);
                  if ((iVar9 != 0) && (iVar9 != 3)) {
                    local_98 = *(undefined8 *)PTR_DAT_03815f28;
                    uStack_90 = 0xffffffffffffffff;
                    local_88 = iVar9;
                    uVar13 = FUN_02c03928(&local_98,0);
                    plVar15 = (long *)*plVar17;
                    if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                    local_a0 = (**(code **)(*plVar15 + 0x1a8))
                                         (plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
                    local_b0 = *(undefined8 *)PTR_DAT_038161e8;
                    uStack_a8 = 0xffffffffffffffff;
                    uVar14 = FUN_02c03928(&local_b0,0);
                    uVar13 = FUN_02a506f0(*(undefined8 *)PTR_DAT_03816220,uVar13,
                                          *(undefined8 *)PTR_DAT_03816238,uVar14,0);
                    FUN_02dd14b0(param_1,3,uVar13,0);
                    plVar15 = (long *)param_1[0xb];
                    if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                    iVar9 = (**(code **)(*plVar15 + 0x1a8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
                    if (iVar9 == 4) {
                      FUN_02dd14c8(param_1,0x413,0);
                    }
                    plVar17 = (long *)*plVar17;
                    if (plVar17 == (long *)0x0) goto LAB_02dd8d40;
                    iVar9 = (**(code **)(*plVar17 + 0x1a8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
                    if (iVar9 == 6) {
                      FUN_02dd14c8(param_1,0x414,0);
                    }
                  }
                  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                  return;
                }
                plVar16 = (long *)*plVar17;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                uVar14 = FUN_02c303d4(0);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                lVar11 = (**(code **)(*plVar16 + 0x1f8))
                                   (plVar16,lVar11,uVar13,uVar14,*(undefined8 *)(*plVar16 + 0x200));
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                while (uVar12 = FUN_02c40bec(lVar11,0), (uVar12 & 1) == 0) {
                  FUN_02c46d44(lVar11,0x32,0);
                }
                if (lVar11 == 0) goto LAB_02dd8d40;
                uVar12 = FUN_02c40bec(lVar11,0);
                if ((uVar12 & 1) != 0) {
                  plVar16 = (long *)*plVar17;
                  if (plVar16 == (long *)0x0) goto LAB_02dd8d40;
                  iVar9 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0))
                  ;
                  if (iVar9 == 2) {
                    uVar12 = FUN_02c44334(lVar11,0);
                    if ((uVar12 & 1) == 0) {
                      lVar18 = FUN_01df4f08(lVar11,*(undefined8 *)puVar8);
                      if (lVar18 == 0) goto LAB_02dd8d40;
                      if (*(int *)(lVar18 + 0x10) != 0) {
                        lVar18 = FUN_01df4f08(lVar11,*(undefined8 *)puVar8);
                        if (lVar18 == 0) goto LAB_02dd8d40;
                        if (*(char *)(lVar18 + 0x14) != '\0') {
                          if (bVar3) {
                            if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                              thunk_FUN_01843fdc();
                            }
                            lVar18 = local_70;
                            lVar11 = FUN_01df4f08(lVar11,*(undefined8 *)puVar8);
                            if ((lVar11 == 0) || (plVar15 == (long *)0x0)) goto LAB_02dd8d40;
                            (**(code **)(*plVar15 + 0x378))
                                      (plVar15,lVar18,0,*(undefined4 *)(lVar11 + 0x10),
                                       *(undefined8 *)(*plVar15 + 0x380));
                            uVar10 = (**(code **)(*plVar15 + 0x1e8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
                            lVar11 = (**(code **)(*plVar15 + 0x3a8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x3b0));
                            if (lVar11 == 0) goto LAB_02dd8d40;
                          }
                          else {
                            lVar11 = FUN_01df4f08(lVar11,*(undefined8 *)puVar8);
                            if (lVar11 == 0) goto LAB_02dd8d40;
                            uVar10 = *(undefined4 *)(lVar11 + 0x10);
                            if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                              thunk_FUN_01843fdc(*(long *)PTR_DAT_037f9a18);
                            }
                            if (local_70 == 0) goto LAB_02dd8d40;
                            lVar11 = local_70;
                            if (*(uint *)(local_70 + 0x18) < 6) goto LAB_02dd89c0;
                          }
                          if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_02dd89c0;
                          cVar2 = *(char *)(lVar11 + 0x25);
                          FUN_02dd0f54(param_1,lVar11,uVar10,1,0);
                          if (bVar3) {
                            if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                            (**(code **)(*plVar15 + 0x338))
                                      (plVar15,0,*(undefined8 *)(*plVar15 + 0x340));
                            (**(code **)(*plVar15 + 0x208))
                                      (plVar15,0,*(undefined8 *)(*plVar15 + 0x210));
                          }
                          if (param_1[2] == 0) goto LAB_02dd8d40;
                          uVar12 = FUN_02dc7930(param_1[2],0);
                          if ((uVar12 & 1) != 0) {
                            if ((param_1[2] == 0) ||
                               (lVar11 = FUN_02dcee60(param_1[2],0), lVar11 == 0))
                            goto LAB_02dd8d40;
                            if (cVar2 == '\0') {
                              FUN_02df0a9c(lVar11,uVar10,0);
                            }
                            else {
                              FUN_02df0ab8();
                            }
                          }
                          bVar3 = false;
                          goto LAB_02dd849c;
                        }
                        if (*(int *)(*(long *)PTR_DAT_037f9a18 + 0xe0) == 0) {
                          thunk_FUN_01843fdc();
                        }
                        lVar18 = local_70;
                        lVar11 = FUN_01df4f08(lVar11,*(undefined8 *)puVar8);
                        if ((lVar11 == 0) || (plVar15 == (long *)0x0)) goto LAB_02dd8d40;
                        (**(code **)(*plVar15 + 0x378))
                                  (plVar15,lVar18,0,*(undefined4 *)(lVar11 + 0x10),
                                   *(undefined8 *)(*plVar15 + 0x380));
                        bVar3 = true;
                        goto LAB_02dd849c;
                      }
                      lVar18 = FUN_017fc3f4(*(undefined8 *)puVar4,6);
                      if (lVar18 == 0) goto LAB_02dd8d40;
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_03816200;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x20));
                      local_88 = *(int *)((long)param_1 + 0x1c);
                      local_98 = *(undefined8 *)PTR_DAT_03815f28;
                      uStack_90 = 0xffffffffffffffff;
                      uVar13 = FUN_02c03928(&local_98,0);
                      if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x28) = uVar13;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x28),uVar13);
                      if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)PTR_DAT_038161f0;
                      thunk_FUN_0188fd20();
                      plVar16 = (long *)*plVar17;
                      if (plVar16 == (long *)0x0) goto LAB_02dd8d40;
                      local_a0 = (**(code **)(*plVar16 + 0x1a8))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
                      local_b0 = *(undefined8 *)PTR_DAT_038161e8;
                      uStack_a8 = 0xffffffffffffffff;
                      uVar13 = FUN_02c03928(&local_b0,0);
                      if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x38) = uVar13;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x38),uVar13);
                      if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_03816230;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x40));
                      local_b8 = FUN_02c442d4(lVar11,0);
                      local_c8 = *(undefined8 *)puVar7;
                      uStack_c0 = 0xffffffffffffffff;
                      uVar13 = FUN_02c03928(&local_c8,0);
                      if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x48) = uVar13;
                      thunk_FUN_0188fd20();
                      uVar13 = FUN_02a507f8(lVar18,0);
                      uVar14 = 3;
                    }
                    else {
                      lVar18 = FUN_017fc3f4(*(undefined8 *)puVar4,8);
                      if (lVar18 == 0) goto LAB_02dd8d40;
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_03816218;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x20));
                      local_88 = FUN_02c442d4(lVar11,0);
                      local_98 = *(undefined8 *)puVar7;
                      uStack_90 = 0xffffffffffffffff;
                      uVar13 = FUN_02c03928(&local_98,0);
                      if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x28) = uVar13;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x28),uVar13);
                      if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)puVar5;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x30));
                      if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_02dd89c0;
                      *(long *)(lVar18 + 0x38) = param_1[6];
                      thunk_FUN_0188fd20((long *)(lVar18 + 0x38));
                      if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_037f3aa0;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x40));
                      local_7c = (undefined4)param_1[8];
                      uVar13 = FUN_02bccfd8(&local_7c,0);
                      if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x48) = uVar13;
                      thunk_FUN_0188fd20((undefined8 *)(lVar18 + 0x48),uVar13);
                      if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)puVar5;
                      thunk_FUN_0188fd20();
                      plVar16 = (long *)*plVar17;
                      if (plVar16 == (long *)0x0) goto LAB_02dd8d40;
                      uVar13 = (**(code **)(*plVar16 + 0x198))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1a0));
                      if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_02dd89c0;
                      *(undefined8 *)(lVar18 + 0x58) = uVar13;
                      thunk_FUN_0188fd20();
                      uVar13 = FUN_02a507f8(lVar18,0);
                      uVar14 = 1;
                    }
                    FUN_02dd14b0(param_1,uVar14,uVar13,0);
                  }
                }
LAB_02dd849c:
                plVar16 = (long *)*plVar17;
                if (plVar16 == (long *)0x0) goto LAB_02dd8d40;
                goto LAB_02dd8070;
              }
            }
          }
          else {
            plVar15 = (long *)*plVar17;
            if (plVar15 != (long *)0x0) {
              local_78 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if ((local_78 & 0xff) == 0) {
                uVar10 = 0;
              }
              else {
                plVar15 = (long *)*plVar17;
                if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                local_78 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                uVar10 = System_Collections_ObjectModel_ReadOnlyCollection<DateTimeOffset>__System_Collections_IList_RemoveAt
                                   (&local_78,*(undefined8 *)PTR_DAT_038161d0);
              }
              *(undefined4 *)(param_1 + 4) = uVar10;
              lVar11 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2cb0,6);
              if (lVar11 != 0) {
                if (*(int *)(lVar11 + 0x18) != 0) {
                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_038161f8;
                  thunk_FUN_0188fd20();
                  plVar15 = (long *)*plVar17;
                  if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                  local_88 = (**(code **)(*plVar15 + 0x1a8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
                  local_98 = *(undefined8 *)PTR_DAT_038161e8;
                  uStack_90 = 0xffffffffffffffff;
                  uVar13 = FUN_02c03928(&local_98,0);
                  if (1 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x28) = uVar13;
                    thunk_FUN_0188fd20((undefined8 *)(lVar11 + 0x28),uVar13);
                    if (2 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_03816208;
                      thunk_FUN_0188fd20();
                      plVar15 = (long *)*plVar17;
                      if (plVar15 == (long *)0x0) goto LAB_02dd8d40;
                      local_78 = (**(code **)(*plVar15 + 0x188))
                                           (plVar15,*(undefined8 *)(*plVar15 + 400));
                      uVar13 = FUN_028a2f04(&local_78,*(undefined8 *)PTR_DAT_038161c0);
                      if (3 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x38) = uVar13;
                        thunk_FUN_0188fd20((undefined8 *)(lVar11 + 0x38),uVar13);
                        if (4 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_03816228;
                          thunk_FUN_0188fd20();
                          plVar17 = (long *)*plVar17;
                          if (plVar17 == (long *)0x0) goto LAB_02dd8d40;
                          uVar13 = (**(code **)(*plVar17 + 0x198))
                                             (plVar17,*(undefined8 *)(*plVar17 + 0x1a0));
                          if (5 < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x48) = uVar13;
                            thunk_FUN_0188fd20();
                            uVar13 = FUN_02a507f8(lVar11,0);
                            FUN_02dd14b0(param_1,1,uVar13,0);
                            FUN_02dd14c8(param_1,0x3ff,0);
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
LAB_02dd8d40:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


