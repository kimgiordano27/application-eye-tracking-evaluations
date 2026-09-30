/*
FUNCTION_NAME: TransformBakingSystem.BakedRuntimeTransformsJob.IsUniformScale_0000000B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 067443f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */
/* WARNING: Removing unreachable block (ram,0x067457c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformBakingSystem_BakedRuntimeTransformsJob_IsUniformScale_0000000B_PostfixBurstDelegate___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  double dVar24;
  long lVar25;
  undefined4 *puVar26;
  int *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined8 uVar33;
  int *piVar34;
  undefined8 *puVar35;
  float fVar36;
  double dVar37;
  undefined8 uVar38;
  byte bVar42;
  float fVar39;
  byte bVar40;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [12];
  long in_stack_00000038;
  ulong uStack0000000000000050;
  uint uStack0000000000000074;
  uint uStack0000000000000094;
  undefined1 uStack0000000000000140;
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
  int in_stack_000004d0;
  float in_stack_00000534;
  float in_stack_00000538;
  float in_stack_0000053c;
  float in_stack_00000540;
  int in_stack_00000668;
  long *in_stack_000006a8;
  int in_stack_000006b0;
  long in_stack_00000768;
  
  uStack0000000000000140 = 0;
  auVar50 = FUN_06919d98();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar7 = FUN_06765f34(0);
  uStack0000000000000074 = auVar50._8_4_;
  if ((int)uVar7 <= (int)auVar50._8_4_) {
    uStack0000000000000074 = uVar7;
  }
  iVar8 = FUN_06901480(0);
  puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<SceneEntityReference>_TypeInfo;
  puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<SavegameSystem>_TypeInfo;
  puVar35 = (undefined8 *)PTR_DAT_06f8a030;
  puVar3 = PTR_DAT_06f6d508;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_052476e4(&stack0x00000330,*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<SaveGameSceneObject>_TypeInfo);
    memcpy(&stack0x000006d0,&stack0x00000330,0x98);
    piVar1 = unaff_x19 + 6;
    while (uVar14 = FUN_055b5484(&stack0x000006d0,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
      memcpy(&stack0x000005d0,&stack0x000006e0,0x80);
      FUN_0423bc90(&stack0x000005d0,&stack0x000002b4,&stack0x00000550,*(undefined8 *)puVar4);
      memcpy(&stack0x00000650,&stack0x00000550,0x78);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar2 = in_stack_000006b0 - iVar8;
      uVar7 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar7 = uVar2;
      }
      if (1 < uVar7) goto LAB_0674458c;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar14 = FUN_068fc830(in_stack_000006a8,0);
      if ((uVar14 & 1) == 0) goto LAB_0674458c;
      if (in_stack_000006a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      iVar9 = (**(code **)(*in_stack_000006a8 + 0x188))
                        (in_stack_000006a8,*(undefined8 *)(*in_stack_000006a8 + 400));
      if (in_stack_00000668 != iVar9) {
LAB_0674458c:
        lVar15 = *(long *)(unaff_x19 + 0x16);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar22 = *(long *)(lVar15 + 0x10);
        lVar25 = *(long *)PTR_DAT_06f6e778;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar7 = *(uint *)(lVar15 + 0x18);
        if (uVar7 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar7 + 1;
          *(undefined4 *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = in_stack_000002b4;
        }
        else {
          FUN_043b542c(lVar15,in_stack_000002b4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = -0x1c;
        do {
          if (*(int *)(&stack0x0000068c + lVar15) != -1) {
            in_stack_00000330 = 0;
            FUN_06732620(&stack0x00000330,*(undefined4 *)(&stack0x000006a8 + lVar15),
                         *(int *)(&stack0x0000068c + lVar15),0);
            FUN_06732d50(piVar1,0,0);
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
      }
    }
    FUN_055b5624(&stack0x000006d0,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveTexture2D>_TypeInfo);
    puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo;
    if (*(long *)(unaff_x19 + 0x16) != 0) {
      FUN_043b5e04(&stack0x00000330,*(long *)(unaff_x19 + 0x16),*(undefined8 *)PTR_DAT_06f8a040);
      puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<SaveRawData>_TypeInfo;
      while (uVar14 = FUN_054f5df0(&stack0x00000290,*puVar35), (uVar14 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0524886c(*(long *)(unaff_x19 + 0x10),in_stack_00000340 & 0xffffffff,
                     *(undefined8 *)puVar4);
      }
      FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
      lVar15 = *(long *)(unaff_x19 + 0x16);
      if (lVar15 != 0) {
        *(undefined4 *)(lVar15 + 0x18) = 0;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        puVar4 = Unity_Entities_TypeManager_SharedTypeIndex<ScaleBetweenPoints>_TypeInfo;
        if (*(long *)(unaff_x19 + 0x12) != 0) {
          FUN_052050b4(&stack0x00000330,*(long *)(unaff_x19 + 0x12),
                       *(undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<SaveGameSceneReferenceManager>_TypeInfo
                      );
          uVar14 = in_stack_00000340;
          while (uVar16 = FUN_055aca64(&stack0x00000270,*(undefined8 *)puVar4), (uVar16 & 1) != 0) {
            FUN_0423a910(&stack0x00000268,&stack0x000002b4,&stack0x00000264,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar2 = in_stack_00000264 - iVar8;
            uVar7 = -uVar2;
            if (-1 < (int)uVar2) {
              uVar7 = uVar2;
            }
            if (1 < uVar7) {
              lVar15 = *(long *)(unaff_x19 + 0x16);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              lVar22 = *(long *)(lVar15 + 0x10);
              lVar25 = *(long *)PTR_DAT_06f6e778;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar7 = *(uint *)(lVar15 + 0x18);
              if (uVar7 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar7 + 1;
                *(undefined4 *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = in_stack_000002b4;
              }
              else {
                FUN_043b542c(lVar15,in_stack_000002b4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_055acb64(&stack0x00000270,
                       *(undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<SaveTransform>_TypeInfo);
          if (*(long *)(unaff_x19 + 0x16) != 0) {
            FUN_043b5e04(&stack0x00000330,*(long *)(unaff_x19 + 0x16),
                         *(undefined8 *)PTR_DAT_06f8a040);
            puVar3 = PTR_DAT_06f72a20;
            while (uVar16 = FUN_054f5df0(&stack0x00000290,*puVar35), (uVar16 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_05206094(*(long *)(unaff_x19 + 0x12),in_stack_00000340 & 0xffffffff,
                           *(undefined8 *)puVar3);
            }
            FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
            lVar15 = *(long *)(unaff_x19 + 0x16);
            if (lVar15 != 0) {
              *(undefined4 *)(lVar15 + 0x18) = 0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              uVar21 = _UNK_0136caf8;
              uVar16 = _DAT_0136caf0;
              fVar39 = DAT_01369900;
              puVar31 = (undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
              ;
              if ((int)uStack0000000000000074 < 1) {
                iVar9 = 0;
                iVar11 = 0;
                uStack0000000000000094 = 0;
              }
              else {
                uVar23 = (ulong)uStack0000000000000074;
                uVar28 = 0;
                uVar30 = 0;
                uVar27 = 0;
                param_4 = 7;
                uStack0000000000000094 = 0;
                uStack0000000000000050 = 7;
                param_3 = _DAT_0136caf0;
                do {
                  memmove(&stack0x000001d8,(void *)(auVar50._0_8_ + uVar28 * 0x88),0x88);
                  plVar17 = (long *)FUN_06923448(&stack0x000001d8,0);
                  lVar15 = FUN_069234f0(&stack0x000001d8,0);
                  if (lVar15 == 0) goto LAB_06745790;
                  uVar10 = FUN_068fc544(lVar15,0);
                  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
                  uVar18 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar10,&stack0x000004d0,*puVar31
                                       );
                  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
                  }
                  uVar19 = FUN_068fc830(plVar17,0);
                  fVar48 = (float)uVar14;
                  if ((uVar19 & 1) != 0) {
                    if ((uVar18 & 1) == 0) {
                      if (plVar17 == (long *)0x0) goto LAB_06745790;
                      iVar9 = (**(code **)(*plVar17 + 0x188))
                                        (plVar17,*(undefined8 *)(*plVar17 + 400));
                      dVar24 = (double)((ulong)(iVar9 * 4 - 1) | 0x4330000000000000);
                      dVar37 = dVar24 + -4503599627370496.0;
                      iVar11 = FUN_06732974(piVar1,0);
                      iVar13 = (int)((long)dVar37 >> 0x34);
                      iVar9 = iVar13;
                      if (0x403 < iVar13) {
                        iVar9 = 0x404;
                      }
                      iVar9 = iVar9 + -0x3fd;
                      thunk_FUN_03048534(&stack0x00000528,plVar17);
                      fVar49 = (float)param_4;
                      if (iVar9 < 1) {
                        lVar15 = 0;
LAB_06744c28:
                        puVar26 = (undefined4 *)(&stack0x000004f0 + lVar15 * 4);
                        uVar14 = 0;
                        do {
                          bVar40 = (byte)(uVar14 >> 8);
                          bVar41 = (byte)(uVar14 >> 0x10);
                          bVar42 = (byte)(uVar14 >> 0x18);
                          bVar43 = (byte)(uVar14 >> 0x20);
                          bVar44 = (byte)(uVar14 >> 0x28);
                          bVar45 = (byte)(uVar14 >> 0x30);
                          bVar46 = (byte)(uVar14 >> 0x38);
                          fVar48 = (float)-(uint)(CONCAT17(bVar46 | (byte)(uVar16 >> 0x38),
                                                           CONCAT16(bVar45 | (byte)(uVar16 >> 0x30),
                                                                    CONCAT15(bVar44 | (byte)(uVar16 
                                                  >> 0x28),CONCAT14(bVar43 | (byte)(uVar16 >> 0x20),
                                                                    CONCAT13(bVar42 | (byte)(uVar16 
                                                  >> 0x18),CONCAT12(bVar41 | (byte)(uVar16 >> 0x10),
                                                                    CONCAT11(bVar40 | (byte)(uVar16 
                                                  >> 8),(byte)uVar14 | (byte)uVar16))))))) <=
                                                 6U - lVar15);
                          if (((uint)fVar48 & 1) != 0) {
                            *puVar26 = 0xffffffff;
                          }
                          if (CONCAT17(bVar46 | (byte)(uVar21 >> 0x38),
                                       CONCAT16(bVar45 | (byte)(uVar21 >> 0x30),
                                                CONCAT15(bVar44 | (byte)(uVar21 >> 0x28),
                                                         CONCAT14(bVar43 | (byte)(uVar21 >> 0x20),
                                                                  CONCAT13(bVar42 | (byte)(uVar21 >>
                                                                                          0x18),
                                                                           CONCAT12(bVar41 | (byte)(
                                                  uVar21 >> 0x10),
                                                  CONCAT11(bVar40 | (byte)(uVar21 >> 8),
                                                           (byte)uVar14 | (byte)uVar21))))))) <=
                              6U - lVar15) {
                            puVar26[1] = 0xffffffff;
                          }
                          uVar14 = uVar14 + 2;
                          puVar26 = puVar26 + 2;
                          param_3 = uVar16;
                        } while ((8U - lVar15 & 0xfffffffffffffffe) != uVar14);
                      }
                      else {
                        lVar15 = 0;
                        puVar26 = (undefined4 *)&stack0x0000050c;
                        do {
                          fVar48 = SUB84(dVar24,0);
                          fVar49 = (float)param_4;
                          iVar12 = FUN_06732974(piVar1,0);
                          iVar29 = (iVar11 - iVar13) + 0x3ff + (int)lVar15;
                          if (iVar12 + -1 <= iVar29) {
                            iVar29 = iVar12 + -1;
                          }
                          uVar14 = FUN_06732b20(piVar1,iVar29,&stack0x000001d0,0);
                          if ((uVar14 & 1) == 0) break;
                          *puVar26 = uStack00000000000001d0;
                          puVar26[-7] = uStack00000000000001d4;
                          fVar47 = (float)FUN_06745af4();
                          fVar47 = fVar47 * (float)*unaff_x19;
                          fVar36 = (float)param_3 * (float)*unaff_x19;
                          param_3 = (ulong)(uint)fVar36;
                          fVar49 = fVar49 * (float)unaff_x19[1];
                          param_4 = (ulong)(uint)fVar49;
                          uVar14 = 0x80000000;
                          if (fVar36 != INFINITY) {
                            uVar14 = (ulong)(uint)(int)fVar36;
                          }
                          uVar18 = 0x80000000;
                          if (fVar47 != INFINITY) {
                            uVar18 = (ulong)(uint)(int)fVar47;
                          }
                          fVar48 = fVar48 * (float)unaff_x19[1];
                          dVar24 = (double)(ulong)(uint)fVar48;
                          uVar19 = 0x8000000000000000;
                          if (fVar49 != INFINITY) {
                            uVar19 = (ulong)(uint)(int)fVar49 << 0x20;
                          }
                          lVar22 = -0x8000000000000000;
                          if (fVar48 != INFINITY) {
                            lVar22 = (ulong)(uint)(int)fVar48 << 0x20;
                          }
                          iVar29 = (int)uVar30;
                          uVar19 = (uVar19 | uVar14) + lVar22;
                          uVar30 = uVar30 & 0xffffffff;
                          if (iVar29 <= (int)(uVar18 + uVar14)) {
                            uVar30 = uVar18 + uVar14;
                          }
                          lVar15 = lVar15 + 1;
                          if ((int)uVar27 <= (int)(uVar19 >> 0x20)) {
                            uVar27 = uVar19 >> 0x20;
                          }
                          puVar26 = puVar26 + 1;
                        } while (lVar15 < iVar9);
                        puVar35 = (undefined8 *)PTR_DAT_06f8a030;
                        iVar11 = (int)lVar15;
                        if (iVar11 < iVar9) {
                          if (*(long *)(unaff_x19 + 0x12) != 0) {
                            uVar7 = FUN_05204ec8(*(long *)(unaff_x19 + 0x12),uVar10,
                                                 *(undefined8 *)PTR_DAT_06f729a0);
                            if (*(long *)(unaff_x19 + 0x12) != 0) {
                              FUN_05204cc8(*(long *)(unaff_x19 + 0x12),uVar10,iVar8,
                                           *(undefined8 *)PTR_DAT_06f729f0);
                              puVar26 = (undefined4 *)&stack0x0000050c;
                              if (0 < iVar11) {
                                do {
                                  in_stack_00000330 = 0;
                                  FUN_06732620(&stack0x00000330,*puVar26,puVar26[-7],0);
                                  FUN_06732d50(piVar1,0,0);
                                  lVar15 = lVar15 + -1;
                                  puVar26 = puVar26 + 1;
                                } while (lVar15 != 0);
                              }
                              uStack0000000000000094 = uStack0000000000000094 | uVar7 ^ 1;
                              lVar15 = -0x20;
                              uVar18 = uVar16;
                              uVar19 = uVar21;
                              do {
                                if (uVar18 < 7) {
                                  *(undefined4 *)(&stack0x00000510 + lVar15) = 0xffffffff;
                                }
                                uVar14 = CONCAT44(-(uint)(uVar19 < 7),-(uint)(uVar18 < 7));
                                if ((-(uint)(uVar19 < 7) & 1) != 0) {
                                  *(undefined4 *)(&stack0x00000514 + lVar15) = 0xffffffff;
                                }
                                lVar15 = lVar15 + 8;
                                uVar18 = uVar18 + 2;
                                uVar19 = uVar19 + 2;
                                puVar31 = (undefined8 *)
                                          Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                                ;
                                param_4 = uStack0000000000000050;
                              } while (lVar15 != 0);
                              goto LAB_06744e00;
                            }
                          }
                          goto LAB_06745790;
                        }
                        if (iVar11 < 7) goto LAB_06744c28;
                      }
                      fVar47 = (float)param_3;
                      bVar6 = true;
                    }
                    else {
                      if (plVar17 == (long *)0x0) goto LAB_06745790;
                      iVar9 = FUN_068dc838(plVar17,0);
                      fVar49 = (float)param_4;
                      fVar47 = (float)param_3;
                      bVar6 = in_stack_000004d0 != iVar9;
                    }
                    fVar36 = (float)FUN_069235ac(&stack0x000001d8,0);
                    puVar31 = (undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                    ;
                    fVar49 = in_stack_00000540 - fVar49;
                    param_4 = (ulong)(uint)fVar49;
                    fVar47 = (in_stack_0000053c - fVar47) * (in_stack_0000053c - fVar47);
                    param_3 = (ulong)(uint)fVar47;
                    uVar14 = (ulong)(uint)(fVar49 * fVar49);
                    if (bVar6 || fVar39 <= fVar49 * fVar49 +
                                           fVar47 + (in_stack_00000534 - fVar36) *
                                                    (in_stack_00000534 - fVar36) +
                                                    (in_stack_00000538 - fVar48) *
                                                    (in_stack_00000538 - fVar48)) {
                      if (plVar17 == (long *)0x0) goto LAB_06745790;
                      in_stack_000004d0 = FUN_068dc838(plVar17,0);
                      lVar15 = *(long *)(unaff_x19 + 0x14);
                      if (lVar15 == 0) goto LAB_06745790;
                      lVar22 = *(long *)(lVar15 + 0x10);
                      lVar25 = *(long *)PTR_DAT_06f6e778;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar22 == 0) goto LAB_06745790;
                      uVar7 = *(uint *)(lVar15 + 0x18);
                      if (uVar7 < *(uint *)(lVar22 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar7 + 1;
                        *(undefined4 *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = uVar10;
                      }
                      else {
                        FUN_043b542c(lVar15,uVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    lVar15 = FUN_069234f0(&stack0x000001d8,0);
                    if (lVar15 == 0) goto LAB_06745790;
                    FUN_068bc484(lVar15,0);
                    in_stack_00000534 = (float)FUN_069235ac(&stack0x000001d8,0);
                    in_stack_00000538 = (float)uVar14;
                    in_stack_0000053c = (float)param_3;
                    in_stack_00000540 = (float)param_4;
                    lVar15 = *(long *)(unaff_x19 + 0x10);
                    memcpy(&stack0x000002b8,&stack0x000004d0,0x78);
                    if (lVar15 == 0) goto LAB_06745790;
                    uVar33 = *(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SaveSlots>_TypeInfo;
                    memcpy(&stack0x00000330,&stack0x000002b8,0x78);
                    FUN_05246f50(lVar15,uVar10,&stack0x00000330,uVar33);
                  }
LAB_06744e00:
                  iVar9 = (int)uVar27;
                  iVar11 = (int)uVar30;
                  uVar28 = uVar28 + 1;
                } while (uVar28 != uVar23);
              }
              iVar13 = (int)*(undefined8 *)unaff_x19;
              iVar8 = (int)((ulong)*(undefined8 *)unaff_x19 >> 0x20);
              if (CONCAT11(iVar8 < iVar9,iVar13 < iVar11) != 0) {
                uVar7 = iVar9 - 1U | (int)(iVar9 - 1U) >> 1;
                uVar2 = iVar11 - 1U | (int)(iVar11 - 1U) >> 1;
                uVar14 = CONCAT44(uVar7,uVar2) | (ulong)(uint)((int)uVar2 >> 2);
                uVar16 = uVar14 | (ulong)(uint)((int)uVar7 >> 2) << 0x20;
                uVar14 = uVar16 | (uint)((int)uVar14 >> 4);
                uVar16 = uVar14 | (ulong)(uint)((long)uVar16 >> 0x24) << 0x20;
                uVar14 = uVar16 | (uint)((int)uVar14 >> 8);
                uVar16 = uVar14 | (ulong)(uint)((long)uVar16 >> 0x28) << 0x20;
                uVar14 = uVar16 | (uint)((int)uVar14 >> 0x10);
                iVar9 = (int)uVar14;
                plVar17 = (long *)(unaff_x19 + 2);
                if (iVar13 <= iVar9 + 1) {
                  iVar13 = iVar9 + 1;
                }
                iVar9 = (int)((uVar14 | (ulong)(uint)((long)uVar16 >> 0x30) << 0x20) + 0x100000000
                             >> 0x20);
                if (iVar8 <= iVar9) {
                  iVar8 = iVar9;
                }
                if (*plVar17 == 0) goto LAB_06745790;
                FUN_068e2f70(&stack0x00000330,*plVar17,0);
                plVar32 = (long *)(unaff_x19 + 4);
                plVar20 = (long *)*plVar32;
                if (plVar20 == (long *)0x0) goto LAB_06745790;
                (**(code **)(*plVar20 + 0x198))(plVar20,iVar13,*(undefined8 *)(*plVar20 + 0x1a0));
                plVar20 = (long *)*plVar32;
                if (plVar20 == (long *)0x0) goto LAB_06745790;
                (**(code **)(*plVar20 + 0x1b8))(plVar20,iVar8,*(undefined8 *)(*plVar20 + 0x1c0));
                if (*plVar32 == 0) goto LAB_06745790;
                FUN_068e25a0(*plVar32,0);
                plVar20 = (long *)*plVar17;
                if (plVar20 == (long *)0x0) goto LAB_06745790;
                iVar9 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
                if (iVar9 != 1) {
                  iVar9 = FUN_069007e0(0);
                  lVar15 = *plVar17;
                  if (iVar9 == 0) {
                    uVar33 = *(undefined8 *)(unaff_x19 + 4);
                    uVar14 = (ulong)(uint)((float)unaff_x19[1] / (float)iVar8);
                    uVar38 = FUN_06629278((float)*unaff_x19 / (float)iVar13,uVar14,0);
                    if (DAT_0738e667 == '\0') {
                      FUN_02fe925c(PTR_DAT_06f6dde0);
                      DAT_0738e667 = '\x01';
                    }
                    param_3 = (ulong)**(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
                    param_4 = (ulong)(*(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
                    if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    FUN_068c8788(uVar38,uVar14,param_3,param_4,lVar15,uVar33,0);
                  }
                  else {
                    iVar9 = *unaff_x19;
                    iVar11 = unaff_x19[1];
                    uVar33 = *(undefined8 *)(unaff_x19 + 4);
                    if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    FUN_068c760c(lVar15,0,0,0,0,iVar9,iVar11,uVar33);
                  }
                }
                if (*plVar17 == 0) goto LAB_06745790;
                FUN_068e25dc(*plVar17,0);
                uVar33 = *(undefined8 *)(unaff_x19 + 2);
                *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
                thunk_FUN_03048534(plVar17);
                *(undefined8 *)(unaff_x19 + 4) = uVar33;
                thunk_FUN_03048534(plVar32,uVar33);
                *unaff_x19 = iVar13;
                unaff_x19[1] = iVar8;
                puVar31 = (undefined8 *)
                          Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                ;
              }
              iVar8 = param_1._12_4_;
              if ((int)uStack0000000000000074 < 1) {
                iVar9 = 0;
              }
              else {
                iVar11 = 0;
                uVar14 = 0;
                uVar16 = (ulong)uStack0000000000000074;
                iVar9 = 0;
                do {
                  memmove(&stack0x00000148,(void *)(auVar50._0_8_ + uVar14 * 0x88),0x88);
                  lVar15 = FUN_069234f0(&stack0x00000148,0);
                  if (lVar15 == 0) goto LAB_06745790;
                  uVar10 = FUN_068fc544(lVar15,0);
                  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
                  uVar21 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar10,&stack0x00000450,*puVar31
                                       );
                  if ((uVar21 & 1) == 0) {
LAB_06745368:
                    iVar9 = iVar9 + 1;
                  }
                  else {
                    uVar33 = FUN_06923448(&stack0x00000148,0);
                    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
                    }
                    uVar21 = FUN_068fc830(uVar33,0);
                    if ((uVar21 & 1) == 0) goto LAB_06745368;
                    lVar15 = *(long *)(unaff_x19 + 0x18);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    fVar49 = (float)((ulong)in_stack_00000338 >> 0x20);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    fVar39 = (float)((ulong)in_stack_00000330 >> 0x20);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    fVar48 = (float)(in_stack_00000340 >> 0x20);
                    uVar10 = FUN_069235b8(&stack0x00000148,0);
                    if (lVar15 == 0) goto LAB_06745790;
                    uVar7 = (int)uVar14 - iVar9;
                    if (*(uint *)(lVar15 + 0x18) <= uVar7) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    lVar22 = (long)(int)uVar7;
                    lVar15 = lVar15 + lVar22 * 0x10;
                    *(float *)(lVar15 + 0x20) = (float)in_stack_00000330 + fVar49;
                    *(float *)(lVar15 + 0x24) = fVar39 + (float)in_stack_00000340;
                    *(float *)(lVar15 + 0x28) = (float)in_stack_00000338 + fVar48;
                    *(undefined4 *)(lVar15 + 0x2c) = uVar10;
                    lVar15 = *(long *)(unaff_x19 + 0x1a);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
                    iVar13 = FUN_069235c0(&stack0x00000148,0);
                    if (lVar15 == 0) goto LAB_06745790;
                    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_06745794;
                    fVar39 = fVar39 - (float)in_stack_00000340;
                    uVar28 = (ulong)(uint)fVar39;
                    fVar48 = (float)in_stack_00000338 - fVar48;
                    param_3 = (ulong)(uint)fVar48;
                    param_4 = (ulong)(uint)(float)iVar13;
                    lVar15 = lVar15 + lVar22 * 0x10;
                    *(float *)(lVar15 + 0x20) = (float)in_stack_00000330 - fVar49;
                    *(float *)(lVar15 + 0x24) = fVar39;
                    *(float *)(lVar15 + 0x28) = fVar48;
                    *(float *)(lVar15 + 0x2c) = (float)iVar13;
                    lVar15 = *(long *)(unaff_x19 + 0x1c);
                    FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                    FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                    FUN_06923590(&stack0x00000330,&stack0x00000148,0);
                    uVar21 = FUN_069235c8(&stack0x00000148,0);
                    iVar13 = -iVar8;
                    if ((uVar21 & 1) != 0) {
                      iVar13 = iVar8;
                    }
                    if (lVar15 == 0) goto LAB_06745790;
                    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_06745794;
                    lVar15 = lVar15 + lVar22 * 0x10;
                    *(undefined4 *)(lVar15 + 0x20) = in_stack_00000360;
                    *(undefined4 *)(lVar15 + 0x24) = in_stack_00000364;
                    *(undefined4 *)(lVar15 + 0x28) = in_stack_00000368;
                    *(float *)(lVar15 + 0x2c) = (float)iVar13;
                    puVar31 = (undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                    ;
                    puVar35 = (undefined8 *)PTR_DAT_06f8a030;
                    if (0 < iVar8) {
                      lVar15 = 0;
                      uVar21 = (ulong)(uint)(iVar11 + iVar9 * -7);
                      lVar22 = uVar21 << 0x20;
                      do {
                        lVar25 = *(long *)(unaff_x19 + 0x1e);
                        FUN_06745af4();
                        uVar10 = FUN_0662c39c(0);
                        if (lVar25 == 0) goto LAB_06745790;
                        if ((ulong)*(uint *)(lVar25 + 0x18) <= uVar21 + lVar15) goto LAB_06745794;
                        lVar25 = lVar25 + (lVar22 >> 0x20) * 0x10;
                        *(undefined4 *)(lVar25 + 0x20) = uVar10;
                        *(int *)(lVar25 + 0x24) = (int)uVar28;
                        *(int *)(lVar25 + 0x28) = (int)param_3;
                        *(int *)(lVar25 + 0x2c) = (int)param_4;
                        lVar15 = lVar15 + 1;
                        lVar22 = lVar22 + 0x100000000;
                        puVar31 = (undefined8 *)
                                  Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                        ;
                        puVar35 = (undefined8 *)PTR_DAT_06f8a030;
                      } while (lVar15 < iVar8);
                    }
                  }
                  uVar14 = uVar14 + 1;
                  iVar11 = iVar11 + 7;
                } while (uVar14 != uVar16);
              }
              if ((uStack0000000000000094 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_068bdec0(*(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SceneReference>_TypeInfo,0)
                ;
              }
              FUN_03d32664(9,*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
              FUN_06668eb0(&stack0x00000140);
              FUN_069114d4(&stack0x000002b8,*(undefined8 *)(unaff_x19 + 2),0);
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar14 = in_stack_000002c8;
              FUN_06914078();
              if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x14),
                           *(undefined8 *)PTR_DAT_06f8a040);
              while (uVar16 = FUN_054f5df0(&stack0x00000290,*puVar35), (uVar16 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x10),
                             in_stack_000002c8 & 0xffffffff,
                             *(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo);
                memcpy(&stack0x000003d0,&stack0x00000330,0x78);
                if (0 < iVar8) {
                  lVar15 = 0;
                  piVar34 = (int *)&stack0x0000040c;
                  uVar16 = uVar14;
                  do {
                    iVar11 = *piVar34;
                    FUN_06900600(0);
                    uVar33 = FUN_06745af4();
                    iVar13 = FUN_06732974(piVar1,0);
                    param_3 = FUN_0662c39c(uVar33,uVar16,param_3,param_4,0);
                    UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                              (param_1._4_4_,param_1._8_8_ & 0xffffffff,iVar8,0,&stack0x00000330,
                               *(undefined8 *)
                                Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
                    if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo +
                                0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar14 = (ulong)(uint)(float)((1 << (ulong)((iVar13 - iVar11) + 1U & 0x1f)) + -2
                                                 );
                    param_4 = uVar16;
                    FUN_0669cb80();
                    lVar15 = lVar15 + 1;
                    piVar34 = piVar34 + 1;
                    uVar16 = uVar14;
                  } while (lVar15 < iVar8);
                }
              }
              FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
              if (*(int *)(*(long *)
                            Unity_Entities_TypeManager_SharedTypeIndex<SceneObjectWatcher>_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_06913ac4();
              FUN_06913ac4();
              FUN_06913ac4();
              FUN_06913ac4();
              FUN_06913368((float)(int)(uStack0000000000000074 - iVar9));
              FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 2),0);
              FUN_069168e8();
              FUN_06668eb4(&stack0x00000140,0);
              lVar15 = *(long *)(unaff_x19 + 0x14);
              if (lVar15 != 0) {
                *(undefined4 *)(lVar15 + 0x18) = 0;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
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
  }
LAB_06745790:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


