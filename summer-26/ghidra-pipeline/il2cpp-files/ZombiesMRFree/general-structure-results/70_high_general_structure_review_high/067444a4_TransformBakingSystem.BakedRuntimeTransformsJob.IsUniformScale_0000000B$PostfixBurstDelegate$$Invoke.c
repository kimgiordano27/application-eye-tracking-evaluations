/*
FUNCTION_NAME: TransformBakingSystem.BakedRuntimeTransformsJob.IsUniformScale_0000000B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 067444a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */
/* WARNING: Removing unreachable block (ram,0x067457c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformBakingSystem_BakedRuntimeTransformsJob_IsUniformScale_0000000B_PostfixBurstDelegate__Invoke
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  double dVar21;
  long lVar22;
  undefined4 *puVar23;
  int *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong uVar24;
  undefined8 *unaff_x23;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *unaff_x27;
  undefined8 uVar29;
  int *piVar30;
  undefined8 *unaff_x28;
  float fVar31;
  double dVar32;
  undefined8 uVar33;
  byte bVar38;
  float fVar34;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  long in_stack_00000038;
  ulong uStack0000000000000050;
  undefined8 in_stack_00000070;
  uint uStack0000000000000094;
  long in_stack_000000a0;
  int in_stack_000000b8;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  int in_stack_00000264;
  undefined4 in_stack_000002b4;
  ulong in_stack_000002c8;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  ulong in_stack_00000340;
  undefined4 in_stack_00000360;
  undefined4 in_stack_00000364;
  undefined4 in_stack_00000368;
  int in_stack_000003ec;
  undefined4 in_stack_00000434;
  undefined4 in_stack_00000438;
  undefined4 in_stack_0000043c;
  undefined4 in_stack_00000440;
  int in_stack_0000046c;
  int in_stack_000004d0;
  float in_stack_00000534;
  float in_stack_00000538;
  float in_stack_0000053c;
  float in_stack_00000540;
  int in_stack_00000668;
  long *in_stack_000006a8;
  int in_stack_000006b0;
  long in_stack_00000768;
  ulong uVar35;
  
  FUN_052476e4(&stack0x00000330);
  memcpy(&stack0x000006d0,&stack0x00000330,0x98);
  piVar1 = unaff_x19 + 6;
  while (uVar12 = FUN_055b5484(&stack0x000006d0,*unaff_x23), (uVar12 & 1) != 0) {
    memcpy(&stack0x000005d0,&stack0x000006e0,0x80);
    FUN_0423bc90(&stack0x000005d0,&stack0x000002b4,&stack0x00000550,*unaff_x27);
    memcpy(&stack0x00000650,&stack0x00000550,0x78);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = in_stack_000006b0 - in_stack_000000b8;
    uVar10 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar10 = uVar2;
    }
    if (1 < uVar10) goto LAB_0674458c;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_068fc830(in_stack_000006a8,0);
    if ((uVar12 & 1) == 0) goto LAB_0674458c;
    if (in_stack_000006a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar6 = (**(code **)(*in_stack_000006a8 + 0x188))
                      (in_stack_000006a8,*(undefined8 *)(*in_stack_000006a8 + 400));
    if (in_stack_00000668 != iVar6) {
LAB_0674458c:
      lVar13 = *(long *)(unaff_x19 + 0x16);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar20 = *(long *)(lVar13 + 0x10);
      lVar22 = *(long *)PTR_DAT_06f6e778;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar10 = *(uint *)(lVar13 + 0x18);
      if (uVar10 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar10 + 1;
        *(undefined4 *)(lVar20 + (long)(int)uVar10 * 4 + 0x20) = in_stack_000002b4;
      }
      else {
        FUN_043b542c(lVar13,in_stack_000002b4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      lVar13 = -0x1c;
      do {
        if (*(int *)(&stack0x0000068c + lVar13) != -1) {
          in_stack_00000330 = 0;
          FUN_06732620(&stack0x00000330,*(undefined4 *)(&stack0x000006a8 + lVar13),
                       *(int *)(&stack0x0000068c + lVar13),0);
          FUN_06732d50(piVar1,0,0);
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 != 0);
    }
  }
  FUN_055b5624(&stack0x000006d0,
               *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveTexture2D>_TypeInfo);
  puVar3 = Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo;
  if (*(long *)(unaff_x19 + 0x16) != 0) {
    FUN_043b5e04(&stack0x00000330,*(long *)(unaff_x19 + 0x16),*(undefined8 *)PTR_DAT_06f8a040);
    puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<SaveRawData>_TypeInfo;
    while (uVar12 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar12 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_0524886c(*(long *)(unaff_x19 + 0x10),in_stack_00000340 & 0xffffffff,*(undefined8 *)puVar4)
      ;
    }
    FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
    lVar13 = *(long *)(unaff_x19 + 0x16);
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<ScaleBetweenPoints>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x12) != 0) {
        FUN_052050b4(&stack0x00000330,*(long *)(unaff_x19 + 0x12),
                     *(undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<SaveGameSceneReferenceManager>_TypeInfo
                    );
        uVar12 = in_stack_00000340;
        while (uVar14 = FUN_055aca64(&stack0x00000270,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
          FUN_0423a910(&stack0x00000268,&stack0x000002b4,&stack0x00000264,*(undefined8 *)puVar3);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar2 = in_stack_00000264 - in_stack_000000b8;
          uVar10 = -uVar2;
          if (-1 < (int)uVar2) {
            uVar10 = uVar2;
          }
          if (1 < uVar10) {
            lVar13 = *(long *)(unaff_x19 + 0x16);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            lVar20 = *(long *)(lVar13 + 0x10);
            lVar22 = *(long *)PTR_DAT_06f6e778;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            uVar10 = *(uint *)(lVar13 + 0x18);
            if (uVar10 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar10 + 1;
              *(undefined4 *)(lVar20 + (long)(int)uVar10 * 4 + 0x20) = in_stack_000002b4;
            }
            else {
              FUN_043b542c(lVar13,in_stack_000002b4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        FUN_055acb64(&stack0x00000270,
                     *(undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<SaveTransform>_TypeInfo);
        if (*(long *)(unaff_x19 + 0x16) != 0) {
          FUN_043b5e04(&stack0x00000330,*(long *)(unaff_x19 + 0x16),*(undefined8 *)PTR_DAT_06f8a040)
          ;
          puVar3 = PTR_DAT_06f72a20;
          while (uVar14 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar14 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_05206094(*(long *)(unaff_x19 + 0x12),in_stack_00000340 & 0xffffffff,
                         *(undefined8 *)puVar3);
          }
          FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
          lVar13 = *(long *)(unaff_x19 + 0x16);
          if (lVar13 != 0) {
            *(undefined4 *)(lVar13 + 0x18) = 0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            uVar35 = _UNK_0136caf8;
            uVar14 = _DAT_0136caf0;
            fVar34 = DAT_01369900;
            puVar27 = (undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
            ;
            if ((int)in_stack_00000070._4_4_ < 1) {
              iVar6 = 0;
              iVar8 = 0;
              uStack0000000000000094 = 0;
            }
            else {
              uVar25 = 0;
              uVar26 = 0;
              uVar24 = 0;
              param_4 = 7;
              uStack0000000000000094 = 0;
              uStack0000000000000050 = 7;
              param_3 = _DAT_0136caf0;
              do {
                memmove(&stack0x000001d8,(void *)(in_stack_000000a0 + uVar25 * 0x88),0x88);
                plVar15 = (long *)FUN_06923448(&stack0x000001d8,0);
                lVar13 = FUN_069234f0(&stack0x000001d8,0);
                if (lVar13 == 0) goto LAB_06745790;
                uVar7 = FUN_068fc544(lVar13,0);
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
                uVar16 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar7,&stack0x000004d0,*puVar27);
                if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
                }
                uVar17 = FUN_068fc830(plVar15,0);
                fVar44 = (float)uVar12;
                if ((uVar17 & 1) != 0) {
                  if ((uVar16 & 1) == 0) {
                    if (plVar15 == (long *)0x0) goto LAB_06745790;
                    iVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400))
                    ;
                    dVar21 = (double)((ulong)(iVar6 * 4 - 1) | 0x4330000000000000);
                    dVar32 = dVar21 + -4503599627370496.0;
                    iVar8 = FUN_06732974(piVar1,0);
                    iVar11 = (int)((long)dVar32 >> 0x34);
                    iVar6 = iVar11;
                    if (0x403 < iVar11) {
                      iVar6 = 0x404;
                    }
                    iVar6 = iVar6 + -0x3fd;
                    thunk_FUN_03048534(&stack0x00000528,plVar15);
                    fVar45 = (float)param_4;
                    if (iVar6 < 1) {
                      lVar13 = 0;
LAB_06744c28:
                      puVar23 = (undefined4 *)(&stack0x000004f0 + lVar13 * 4);
                      uVar12 = 0;
                      do {
                        bVar36 = (byte)(uVar12 >> 8);
                        bVar37 = (byte)(uVar12 >> 0x10);
                        bVar38 = (byte)(uVar12 >> 0x18);
                        bVar39 = (byte)(uVar12 >> 0x20);
                        bVar40 = (byte)(uVar12 >> 0x28);
                        bVar41 = (byte)(uVar12 >> 0x30);
                        bVar42 = (byte)(uVar12 >> 0x38);
                        fVar44 = (float)-(uint)(CONCAT17(bVar42 | (byte)(uVar14 >> 0x38),
                                                         CONCAT16(bVar41 | (byte)(uVar14 >> 0x30),
                                                                  CONCAT15(bVar40 | (byte)(uVar14 >>
                                                                                          0x28),
                                                                           CONCAT14(bVar39 | (byte)(
                                                  uVar14 >> 0x20),
                                                  CONCAT13(bVar38 | (byte)(uVar14 >> 0x18),
                                                           CONCAT12(bVar37 | (byte)(uVar14 >> 0x10),
                                                                    CONCAT11(bVar36 | (byte)(uVar14 
                                                  >> 8),(byte)uVar12 | (byte)uVar14))))))) <=
                                               6U - lVar13);
                        if (((uint)fVar44 & 1) != 0) {
                          *puVar23 = 0xffffffff;
                        }
                        if (CONCAT17(bVar42 | (byte)(uVar35 >> 0x38),
                                     CONCAT16(bVar41 | (byte)(uVar35 >> 0x30),
                                              CONCAT15(bVar40 | (byte)(uVar35 >> 0x28),
                                                       CONCAT14(bVar39 | (byte)(uVar35 >> 0x20),
                                                                CONCAT13(bVar38 | (byte)(uVar35 >>
                                                                                        0x18),
                                                                         CONCAT12(bVar37 | (byte)(
                                                  uVar35 >> 0x10),
                                                  CONCAT11(bVar36 | (byte)(uVar35 >> 8),
                                                           (byte)uVar12 | (byte)uVar35))))))) <=
                            6U - lVar13) {
                          puVar23[1] = 0xffffffff;
                        }
                        uVar12 = uVar12 + 2;
                        puVar23 = puVar23 + 2;
                        param_3 = uVar14;
                      } while ((8U - lVar13 & 0xfffffffffffffffe) != uVar12);
                    }
                    else {
                      lVar13 = 0;
                      puVar23 = (undefined4 *)&stack0x0000050c;
                      do {
                        fVar44 = SUB84(dVar21,0);
                        fVar45 = (float)param_4;
                        iVar9 = FUN_06732974(piVar1,0);
                        iVar19 = (iVar8 - iVar11) + 0x3ff + (int)lVar13;
                        if (iVar9 + -1 <= iVar19) {
                          iVar19 = iVar9 + -1;
                        }
                        uVar12 = FUN_06732b20(piVar1,iVar19,&stack0x000001d0,0);
                        if ((uVar12 & 1) == 0) break;
                        *puVar23 = uStack00000000000001d0;
                        puVar23[-7] = uStack00000000000001d4;
                        fVar43 = (float)FUN_06745af4();
                        fVar43 = fVar43 * (float)*unaff_x19;
                        fVar31 = (float)param_3 * (float)*unaff_x19;
                        param_3 = (ulong)(uint)fVar31;
                        fVar45 = fVar45 * (float)unaff_x19[1];
                        param_4 = (ulong)(uint)fVar45;
                        uVar12 = 0x80000000;
                        if (fVar31 != INFINITY) {
                          uVar12 = (ulong)(uint)(int)fVar31;
                        }
                        uVar16 = 0x80000000;
                        if (fVar43 != INFINITY) {
                          uVar16 = (ulong)(uint)(int)fVar43;
                        }
                        fVar44 = fVar44 * (float)unaff_x19[1];
                        dVar21 = (double)(ulong)(uint)fVar44;
                        uVar17 = 0x8000000000000000;
                        if (fVar45 != INFINITY) {
                          uVar17 = (ulong)(uint)(int)fVar45 << 0x20;
                        }
                        lVar20 = -0x8000000000000000;
                        if (fVar44 != INFINITY) {
                          lVar20 = (ulong)(uint)(int)fVar44 << 0x20;
                        }
                        iVar19 = (int)uVar26;
                        uVar17 = (uVar17 | uVar12) + lVar20;
                        uVar26 = uVar26 & 0xffffffff;
                        if (iVar19 <= (int)(uVar16 + uVar12)) {
                          uVar26 = uVar16 + uVar12;
                        }
                        lVar13 = lVar13 + 1;
                        if ((int)uVar24 <= (int)(uVar17 >> 0x20)) {
                          uVar24 = uVar17 >> 0x20;
                        }
                        puVar23 = puVar23 + 1;
                      } while (lVar13 < iVar6);
                      unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
                      iVar8 = (int)lVar13;
                      if (iVar8 < iVar6) {
                        if (*(long *)(unaff_x19 + 0x12) != 0) {
                          uVar10 = FUN_05204ec8(*(long *)(unaff_x19 + 0x12),uVar7,
                                                *(undefined8 *)PTR_DAT_06f729a0);
                          if (*(long *)(unaff_x19 + 0x12) != 0) {
                            FUN_05204cc8(*(long *)(unaff_x19 + 0x12),uVar7,in_stack_000000b8,
                                         *(undefined8 *)PTR_DAT_06f729f0);
                            puVar23 = (undefined4 *)&stack0x0000050c;
                            if (0 < iVar8) {
                              do {
                                in_stack_00000330 = 0;
                                FUN_06732620(&stack0x00000330,*puVar23,puVar23[-7],0);
                                FUN_06732d50(piVar1,0,0);
                                lVar13 = lVar13 + -1;
                                puVar23 = puVar23 + 1;
                              } while (lVar13 != 0);
                            }
                            uStack0000000000000094 = uStack0000000000000094 | uVar10 ^ 1;
                            lVar13 = -0x20;
                            uVar16 = uVar14;
                            uVar17 = uVar35;
                            do {
                              if (uVar16 < 7) {
                                *(undefined4 *)(&stack0x00000510 + lVar13) = 0xffffffff;
                              }
                              uVar12 = CONCAT44(-(uint)(uVar17 < 7),-(uint)(uVar16 < 7));
                              if ((-(uint)(uVar17 < 7) & 1) != 0) {
                                *(undefined4 *)(&stack0x00000514 + lVar13) = 0xffffffff;
                              }
                              lVar13 = lVar13 + 8;
                              uVar16 = uVar16 + 2;
                              uVar17 = uVar17 + 2;
                              puVar27 = (undefined8 *)
                                        Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                              ;
                              param_4 = uStack0000000000000050;
                            } while (lVar13 != 0);
                            goto LAB_06744e00;
                          }
                        }
                        goto LAB_06745790;
                      }
                      if (iVar8 < 7) goto LAB_06744c28;
                    }
                    fVar43 = (float)param_3;
                    bVar5 = true;
                  }
                  else {
                    if (plVar15 == (long *)0x0) goto LAB_06745790;
                    iVar6 = FUN_068dc838(plVar15,0);
                    fVar45 = (float)param_4;
                    fVar43 = (float)param_3;
                    bVar5 = in_stack_000004d0 != iVar6;
                  }
                  fVar31 = (float)FUN_069235ac(&stack0x000001d8,0);
                  puVar27 = (undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                  ;
                  fVar45 = in_stack_00000540 - fVar45;
                  param_4 = (ulong)(uint)fVar45;
                  fVar43 = (in_stack_0000053c - fVar43) * (in_stack_0000053c - fVar43);
                  param_3 = (ulong)(uint)fVar43;
                  uVar12 = (ulong)(uint)(fVar45 * fVar45);
                  if (bVar5 || fVar34 <= fVar45 * fVar45 +
                                         fVar43 + (in_stack_00000534 - fVar31) *
                                                  (in_stack_00000534 - fVar31) +
                                                  (in_stack_00000538 - fVar44) *
                                                  (in_stack_00000538 - fVar44)) {
                    if (plVar15 == (long *)0x0) goto LAB_06745790;
                    in_stack_000004d0 = FUN_068dc838(plVar15,0);
                    lVar13 = *(long *)(unaff_x19 + 0x14);
                    if (lVar13 == 0) goto LAB_06745790;
                    lVar20 = *(long *)(lVar13 + 0x10);
                    lVar22 = *(long *)PTR_DAT_06f6e778;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar20 == 0) goto LAB_06745790;
                    uVar10 = *(uint *)(lVar13 + 0x18);
                    if (uVar10 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar10 + 1;
                      *(undefined4 *)(lVar20 + (long)(int)uVar10 * 4 + 0x20) = uVar7;
                    }
                    else {
                      FUN_043b542c(lVar13,uVar7,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  lVar13 = FUN_069234f0(&stack0x000001d8,0);
                  if (lVar13 == 0) goto LAB_06745790;
                  FUN_068bc484(lVar13,0);
                  in_stack_00000534 = (float)FUN_069235ac(&stack0x000001d8,0);
                  in_stack_00000538 = (float)uVar12;
                  in_stack_0000053c = (float)param_3;
                  in_stack_00000540 = (float)param_4;
                  lVar13 = *(long *)(unaff_x19 + 0x10);
                  memcpy(&stack0x000002b8,&stack0x000004d0,0x78);
                  if (lVar13 == 0) goto LAB_06745790;
                  uVar29 = *(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SaveSlots>_TypeInfo;
                  memcpy(&stack0x00000330,&stack0x000002b8,0x78);
                  FUN_05246f50(lVar13,uVar7,&stack0x00000330,uVar29);
                }
LAB_06744e00:
                iVar6 = (int)uVar24;
                iVar8 = (int)uVar26;
                uVar25 = uVar25 + 1;
              } while (uVar25 != in_stack_00000070._4_4_);
            }
            iVar19 = (int)*(undefined8 *)unaff_x19;
            iVar11 = (int)((ulong)*(undefined8 *)unaff_x19 >> 0x20);
            if (CONCAT11(iVar11 < iVar6,iVar19 < iVar8) != 0) {
              uVar10 = iVar6 - 1U | (int)(iVar6 - 1U) >> 1;
              uVar2 = iVar8 - 1U | (int)(iVar8 - 1U) >> 1;
              uVar12 = CONCAT44(uVar10,uVar2) | (ulong)(uint)((int)uVar2 >> 2);
              uVar14 = uVar12 | (ulong)(uint)((int)uVar10 >> 2) << 0x20;
              uVar12 = uVar14 | (uint)((int)uVar12 >> 4);
              uVar14 = uVar12 | (ulong)(uint)((long)uVar14 >> 0x24) << 0x20;
              uVar12 = uVar14 | (uint)((int)uVar12 >> 8);
              uVar14 = uVar12 | (ulong)(uint)((long)uVar14 >> 0x28) << 0x20;
              uVar12 = uVar14 | (uint)((int)uVar12 >> 0x10);
              iVar6 = (int)uVar12;
              plVar15 = (long *)(unaff_x19 + 2);
              if (iVar19 <= iVar6 + 1) {
                iVar19 = iVar6 + 1;
              }
              iVar6 = (int)((uVar12 | (ulong)(uint)((long)uVar14 >> 0x30) << 0x20) + 0x100000000 >>
                           0x20);
              if (iVar11 <= iVar6) {
                iVar11 = iVar6;
              }
              if (*plVar15 == 0) goto LAB_06745790;
              FUN_068e2f70(&stack0x00000330,*plVar15,0);
              plVar28 = (long *)(unaff_x19 + 4);
              plVar18 = (long *)*plVar28;
              if (plVar18 == (long *)0x0) goto LAB_06745790;
              (**(code **)(*plVar18 + 0x198))(plVar18,iVar19,*(undefined8 *)(*plVar18 + 0x1a0));
              plVar18 = (long *)*plVar28;
              if (plVar18 == (long *)0x0) goto LAB_06745790;
              (**(code **)(*plVar18 + 0x1b8))(plVar18,iVar11,*(undefined8 *)(*plVar18 + 0x1c0));
              if (*plVar28 == 0) goto LAB_06745790;
              FUN_068e25a0(*plVar28,0);
              plVar18 = (long *)*plVar15;
              if (plVar18 == (long *)0x0) goto LAB_06745790;
              iVar6 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
              if (iVar6 != 1) {
                iVar6 = FUN_069007e0(0);
                lVar13 = *plVar15;
                if (iVar6 == 0) {
                  uVar29 = *(undefined8 *)(unaff_x19 + 4);
                  uVar12 = (ulong)(uint)((float)unaff_x19[1] / (float)iVar11);
                  uVar33 = FUN_06629278((float)*unaff_x19 / (float)iVar19,uVar12,0);
                  if (DAT_0738e667 == '\0') {
                    FUN_02fe925c(PTR_DAT_06f6dde0);
                    DAT_0738e667 = '\x01';
                  }
                  param_3 = (ulong)**(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
                  param_4 = (ulong)(*(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
                  if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_068c8788(uVar33,uVar12,param_3,param_4,lVar13,uVar29,0);
                }
                else {
                  iVar6 = *unaff_x19;
                  iVar8 = unaff_x19[1];
                  uVar29 = *(undefined8 *)(unaff_x19 + 4);
                  if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_068c760c(lVar13,0,0,0,0,iVar6,iVar8,uVar29);
                }
              }
              if (*plVar15 == 0) goto LAB_06745790;
              FUN_068e25dc(*plVar15,0);
              uVar29 = *(undefined8 *)(unaff_x19 + 2);
              *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
              thunk_FUN_03048534(plVar15);
              *(undefined8 *)(unaff_x19 + 4) = uVar29;
              thunk_FUN_03048534(plVar28,uVar29);
              *unaff_x19 = iVar19;
              unaff_x19[1] = iVar11;
              puVar27 = (undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
              ;
            }
            if ((int)in_stack_00000070._4_4_ < 1) {
              iVar6 = 0;
            }
            else {
              iVar8 = 0;
              uVar12 = 0;
              iVar6 = 0;
              do {
                memmove(&stack0x00000148,(void *)(in_stack_000000a0 + uVar12 * 0x88),0x88);
                lVar13 = FUN_069234f0(&stack0x00000148,0);
                if (lVar13 == 0) goto LAB_06745790;
                uVar7 = FUN_068fc544(lVar13,0);
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
                uVar14 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar7,&stack0x00000450,*puVar27);
                if ((uVar14 & 1) == 0) {
LAB_06745368:
                  iVar6 = iVar6 + 1;
                }
                else {
                  uVar29 = FUN_06923448(&stack0x00000148,0);
                  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
                  }
                  uVar14 = FUN_068fc830(uVar29,0);
                  if ((uVar14 & 1) == 0) goto LAB_06745368;
                  lVar13 = *(long *)(unaff_x19 + 0x18);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  fVar45 = (float)((ulong)in_stack_00000338 >> 0x20);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  fVar34 = (float)((ulong)in_stack_00000330 >> 0x20);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  fVar44 = (float)(in_stack_00000340 >> 0x20);
                  uVar7 = FUN_069235b8(&stack0x00000148,0);
                  if (lVar13 == 0) goto LAB_06745790;
                  uVar10 = (int)uVar12 - iVar6;
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar20 = (long)(int)uVar10;
                  lVar13 = lVar13 + lVar20 * 0x10;
                  *(float *)(lVar13 + 0x20) = (float)in_stack_00000330 + fVar45;
                  *(float *)(lVar13 + 0x24) = fVar34 + (float)in_stack_00000340;
                  *(float *)(lVar13 + 0x28) = (float)in_stack_00000338 + fVar44;
                  *(undefined4 *)(lVar13 + 0x2c) = uVar7;
                  lVar13 = *(long *)(unaff_x19 + 0x1a);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                  iVar11 = FUN_069235c0(&stack0x00000148,0);
                  if (lVar13 == 0) goto LAB_06745790;
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_06745794;
                  fVar34 = fVar34 - (float)in_stack_00000340;
                  uVar35 = (ulong)(uint)fVar34;
                  fVar44 = (float)in_stack_00000338 - fVar44;
                  param_3 = (ulong)(uint)fVar44;
                  param_4 = (ulong)(uint)(float)iVar11;
                  lVar13 = lVar13 + lVar20 * 0x10;
                  *(float *)(lVar13 + 0x20) = (float)in_stack_00000330 - fVar45;
                  *(float *)(lVar13 + 0x24) = fVar34;
                  *(float *)(lVar13 + 0x28) = fVar44;
                  *(float *)(lVar13 + 0x2c) = (float)iVar11;
                  lVar13 = *(long *)(unaff_x19 + 0x1c);
                  FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                  FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                  FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                  uVar14 = FUN_069235c8(&stack0x00000148,0);
                  iVar11 = -in_stack_0000046c;
                  if ((uVar14 & 1) != 0) {
                    iVar11 = in_stack_0000046c;
                  }
                  if (lVar13 == 0) goto LAB_06745790;
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_06745794;
                  lVar13 = lVar13 + lVar20 * 0x10;
                  *(undefined4 *)(lVar13 + 0x20) = in_stack_00000360;
                  *(undefined4 *)(lVar13 + 0x24) = in_stack_00000364;
                  *(undefined4 *)(lVar13 + 0x28) = in_stack_00000368;
                  *(float *)(lVar13 + 0x2c) = (float)iVar11;
                  puVar27 = (undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                  ;
                  unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
                  if (0 < in_stack_0000046c) {
                    lVar13 = 0;
                    uVar14 = (ulong)(uint)(iVar8 + iVar6 * -7);
                    lVar20 = uVar14 << 0x20;
                    do {
                      lVar22 = *(long *)(unaff_x19 + 0x1e);
                      FUN_06745af4();
                      uVar7 = FUN_0662c39c(0);
                      if (lVar22 == 0) goto LAB_06745790;
                      if ((ulong)*(uint *)(lVar22 + 0x18) <= uVar14 + lVar13) goto LAB_06745794;
                      lVar22 = lVar22 + (lVar20 >> 0x20) * 0x10;
                      *(undefined4 *)(lVar22 + 0x20) = uVar7;
                      *(int *)(lVar22 + 0x24) = (int)uVar35;
                      *(int *)(lVar22 + 0x28) = (int)param_3;
                      *(int *)(lVar22 + 0x2c) = (int)param_4;
                      lVar13 = lVar13 + 1;
                      lVar20 = lVar20 + 0x100000000;
                      puVar27 = (undefined8 *)
                                Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                      ;
                      unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
                    } while (lVar13 < in_stack_0000046c);
                  }
                }
                uVar12 = uVar12 + 1;
                iVar8 = iVar8 + 7;
              } while (uVar12 != in_stack_00000070._4_4_);
            }
            if ((uStack0000000000000094 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_068bdec0(*(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SceneReference>_TypeInfo,0);
            }
            FUN_03d32664(9,*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
            FUN_06668eb0(&stack0x00000140);
            FUN_069114d4(&stack0x000002b8,*(undefined8 *)(unaff_x19 + 2),0);
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            uVar12 = in_stack_000002c8;
            FUN_06914078();
            if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x14),
                         *(undefined8 *)PTR_DAT_06f8a040);
            while (uVar14 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar14 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x10),
                           in_stack_000002c8 & 0xffffffff,
                           *(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo);
              memcpy(&stack0x000003d0,&stack0x00000330,0x78);
              if (0 < in_stack_000003ec) {
                lVar13 = 0;
                piVar30 = (int *)&stack0x0000040c;
                uVar14 = uVar12;
                do {
                  iVar8 = *piVar30;
                  FUN_06900600(0);
                  uVar29 = FUN_06745af4();
                  iVar11 = FUN_06732974(piVar1,0);
                  param_3 = FUN_0662c39c(uVar29,uVar14,param_3,param_4,0);
                  UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                            (in_stack_00000434,in_stack_00000438,in_stack_0000043c,in_stack_00000440
                             ,&stack0x00000330,
                             *(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
                  if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo +
                              0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar12 = (ulong)(uint)(float)((1 << (ulong)((iVar11 - iVar8) + 1U & 0x1f)) + -2);
                  param_4 = uVar14;
                  FUN_0669cb80();
                  lVar13 = lVar13 + 1;
                  piVar30 = piVar30 + 1;
                  uVar14 = uVar12;
                } while (lVar13 < in_stack_000003ec);
              }
            }
            FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
            if (*(int *)(*(long *)
                          Unity_Entities_TypeManager_SharedTypeIndex<SceneObjectWatcher>_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913ac4();
            FUN_06913368((float)(int)(in_stack_00000070._4_4_ - iVar6));
            FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 2),0);
            FUN_069168e8();
            FUN_06668eb4(&stack0x00000140,0);
            lVar13 = *(long *)(unaff_x19 + 0x14);
            if (lVar13 != 0) {
              *(undefined4 *)(lVar13 + 0x18) = 0;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (*(long *)(in_stack_00000038 + 0x28) != in_stack_00000768) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_06745790:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


