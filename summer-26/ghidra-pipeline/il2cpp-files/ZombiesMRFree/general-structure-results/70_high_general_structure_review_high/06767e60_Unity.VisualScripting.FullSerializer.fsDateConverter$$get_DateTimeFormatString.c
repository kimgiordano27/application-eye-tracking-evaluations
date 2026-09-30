/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDateConverter$$get_DateTimeFormatString
ENTRY_POINT: 06767e60
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06768a74) */
/* WARNING: Removing unreachable block (ram,0x06768324) */
/* WARNING: Removing unreachable block (ram,0x06768aec) */
/* WARNING: Removing unreachable block (ram,0x067685dc) */
/* WARNING: Removing unreachable block (ram,0x06768a84) */
/* WARNING: Removing unreachable block (ram,0x0676878c) */
/* WARNING: Removing unreachable block (ram,0x06768a60) */
/* WARNING: Removing unreachable block (ram,0x06768864) */
/* WARNING: Removing unreachable block (ram,0x06768948) */
/* WARNING: Removing unreachable block (ram,0x06768a6c) */
/* WARNING: Removing unreachable block (ram,0x06768988) */

void Unity_VisualScripting_FullSerializer_fsDateConverter__get_DateTimeFormatString
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long *unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  uint in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_000003e0;
  long in_stack_00000478;
  long in_stack_00000648;
  long in_stack_00000700;
  long in_stack_00000708;
  undefined8 in_stack_00000718;
  
  do {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    thunk_FUN_03048534();
    if (*(uint *)(unaff_x26 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(unaff_x26 + 0x60) =
         *(undefined8 *)
          Unity_Entities_TypeManager_SharedTypeIndex<BeginInitializationEntityCommandBufferSystem_Singleton>_TypeInfo
    ;
    thunk_FUN_03048534();
    uVar10 = FUN_059722f0(unaff_x26,0);
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_068bdec0(uVar10,0);
    while( true ) {
      do {
        while( true ) {
          unaff_w24 = unaff_w24 + 1;
          if (*(int *)(unaff_x20 + 0x18) <= unaff_w24) {
            if ((unaff_x29 & 1) != 0) {
              if (in_stack_00000708 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_0675dd44(in_stack_00000708,0);
            }
            FUN_069005b0(0);
            if (*(int *)(*(long *)
                          System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar12 = FUN_066400d8(0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0663b37c(lVar12);
            if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_0433a7c0(&stack0x00000058,*(long *)(lVar12 + 0x10),
                         *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Zipline>_TypeInfo
                        );
            lVar8 = in_stack_00000070;
            puVar3 = PTR_DAT_06f9a530;
            bVar2 = false;
            while( true ) {
              uVar13 = Unity_Collections_LowLevel_Unsafe_UnsafeHashMap_Enumerator<UntypedWeakReferenceId,_RuntimeContentCatalog_SceneLocation>__get_Current
                                 (&stack0x000006e0,
                                  *(undefined8 *)
                                   Unity_Entities_TypeManager_SharedTypeIndex<WorldTimeQueue>_TypeInfo
                                 );
              puVar4 = System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo;
              if ((uVar13 & 1) == 0) {
                FUN_054df3c0(&stack0x000006e0,
                             *(undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<WorldTime>_TypeInfo);
                if (bVar2) {
                  if (*(int *)(*(long *)
                                System_IO_Enumeration_FileSystemEnumerable_FindTransform<FileSystemInfo>_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar10 = FUN_06654790(0);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_066402a0(uVar10);
                  if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_0691ff78(&stack0x00000718,uVar10,0);
                  FUN_0691f8fc(&stack0x00000718,0);
                  FUN_066548d0(uVar10,0);
                }
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_066401d0(0);
                FUN_06668eb4(&stack0x00000710,0);
                return;
              }
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar13 = FUN_0663aecc(lVar8,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_0676b908();
                bVar2 = true;
              }
              lVar14 = *(long *)puVar3;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar14 = *(long *)puVar3;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x10),0);
              FUN_0691b518(in_stack_00000718);
              FUN_06668eb4(&stack0x00000488,0);
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_06768f2c();
              FUN_06769484();
              memcpy(&stack0x00000058,&stack0x000004d0,0x210);
              uVar13 = FUN_0663aecc(lVar8,0);
              if ((uVar13 & 1) != 0) {
                thunk_FUN_03048534(&stack0x00000648,lVar8);
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_0676baac(&stack0x000004d0,&stack0x00000480);
                FUN_0663bcc0(lVar12,lVar8);
                FUN_0676be48(&stack0x000004d0);
                if (*(int *)(*(long *)
                              Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo +
                            0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_0676bec4();
                in_stack_00000648 = lVar8;
              }
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_067698e0();
              uVar13 = FUN_0663aecc(lVar8,0);
              uVar6 = in_stack_00000030._4_4_;
              if ((uVar13 & 1) != 0) {
                uVar6 = FUN_0663ea24(lVar8,0);
              }
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar14 = FUN_067676ac();
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              if ((uVar6 & *(char *)(lVar14 + 0x55) != '\0') != 0) {
                uVar10 = FUN_068ba5c0();
                if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar13 = FUN_068f9b78(uVar10,0,0);
                if (((uVar13 & 1) != 0) && (iVar7 = FUN_068b9b54(), iVar7 != 1)) {
                  FUN_068b9b54();
                }
              }
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_0676a058(in_stack_00000718,&stack0x000004d0);
              lVar14 = *(long *)puVar3;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar14 = *(long *)puVar3;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x18),0);
              FUN_0691b764(in_stack_00000718);
              FUN_06668eb4(&stack0x00000488,0);
              if (in_stack_00000648 == 0) break;
              uVar13 = FUN_0663aecc(in_stack_00000648,0);
              if ((uVar13 & 1) != 0) {
                FUN_0676be48(&stack0x000004d0);
                if (*(int *)(*(long *)
                              Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo +
                            0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_0676bf94();
              }
              if (in_stack_00000050._4_4_ != -1) {
                if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                if (0 < *(int *)(unaff_x20 + 0x18)) {
                  iVar7 = 0;
                  do {
                    lVar14 = FUN_04430018();
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    uVar13 = FUN_068f52cc(lVar14,0);
                    if ((uVar13 & 1) != 0) {
                      FUN_03bbf6cc(lVar14,&stack0x00000478,
                                   *(undefined8 *)
                                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                                  );
                      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      uVar13 = FUN_068f8810(in_stack_00000478,0,0);
                      if ((uVar13 & 1) != 0) {
                        memcpy(&stack0x00000268,&stack0x000004d0,0x210);
                        thunk_FUN_03048534(&stack0x00000328,lVar14);
                        thunk_FUN_03048534(&stack0x00000470);
                        if (in_stack_00000478 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02fe94e8();
                        }
                        uVar10 = FUN_0675d7f0(in_stack_00000478,0);
                        if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                        }
                        FUN_0676b908(uVar10,lVar8);
                        lVar15 = *(long *)puVar3;
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                          lVar15 = *(long *)puVar3;
                        }
                        in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                        FUN_06668eb0(&stack0x00000058,0,
                                     *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
                        FUN_0691b518(in_stack_00000718,lVar14,0);
                        FUN_06668eb4(&stack0x00000488,0);
                        if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                        }
                        FUN_06768f2c(lVar14,in_stack_00000478);
                        FUN_067698e0(lVar14,in_stack_00000478,in_stack_00000050._4_4_ == iVar7,
                                     &stack0x00000268);
                        FUN_0663bcc0(lVar12,in_stack_000003e0,lVar14,0);
                        FUN_0676a058(in_stack_00000718,&stack0x00000268);
                        lVar15 = *(long *)puVar3;
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                          lVar15 = *(long *)puVar3;
                        }
                        in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                        FUN_06668eb0(&stack0x00000058,0,
                                     *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
                        FUN_0691b764(in_stack_00000718,lVar14,0);
                        FUN_06668eb4(&stack0x00000488,0);
                      }
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < *(int *)(unaff_x20 + 0x18));
                }
              }
              if (in_stack_00000648 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_0663aecc(in_stack_00000648,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar12 = FUN_04430018();
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar13 = FUN_068f9b78(lVar12,0,0);
          if ((uVar13 & 1) == 0) break;
          unaff_x29 = 1;
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar13 = FUN_068f52cc(lVar12,0);
      } while ((uVar13 & 1) == 0);
      FUN_03bbf6cc(lVar12,&stack0x00000700,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                  );
      if (in_stack_00000700 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        lVar8 = FUN_0675da60(in_stack_00000700,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        plVar9 = (long *)thunk_FUN_02fe6234(lVar8,0);
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar13 = FUN_05b07f44(plVar9);
      if ((uVar13 & 1) != 0) break;
      if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      plVar9 = (long *)FUN_0675da60(in_stack_00000700,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar6 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      if ((uVar6 >> 1 & 1) == 0) {
        lVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,5);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x20) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<BeginPresentationEntityCommandBufferSystem_Singleton>_TypeInfo
        ;
        thunk_FUN_03048534();
        uVar10 = FUN_068fc8bc(lVar12,0);
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x28) = uVar10;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x30) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<BeginFixedStepSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
        ;
        thunk_FUN_03048534();
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        plVar9 = (long *)thunk_FUN_02fe6234();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x38) = uVar10;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x40) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_FolderNode>_TypeInfo;
        thunk_FUN_03048534();
        uVar10 = FUN_059722f0(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bdec0(uVar10,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar13 = FUN_068f9b78(in_stack_00000700,0,0);
        if ((uVar13 & 1) == 0) {
          if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(int *)(in_stack_00000700 + 0x2c) != 1) goto LAB_06768068;
          lVar12 = *(long *)PTR_DAT_06f9a540;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar12 = *(long *)PTR_DAT_06f9a540;
          }
          bVar1 = **(byte **)(lVar12 + 0xb8);
          bVar5 = FUN_0676b83c();
          **(byte **)(*(long *)PTR_DAT_06f9a540 + 0xb8) = bVar1 | bVar5 & 1;
          in_stack_00000050._4_4_ = unaff_w24;
          if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
        }
        else {
LAB_06768068:
          uVar10 = FUN_068fc8bc(lVar12,0);
          if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          in_stack_00000058 = *(uint *)(in_stack_00000700 + 0x2c);
          uVar11 = thunk_FUN_0301043c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<UISliderHandle>_TypeInfo
                                      ,&stack0x00000058);
          uVar11 = FUN_059693f4(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<BeginVariableRateSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
                                ,uVar11,0);
          uVar10 = FUN_059721e8(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<BakingOnlyEntityAuthoringBaker_BakingOnlyChildren>_TypeInfo
                                ,uVar10,*(undefined8 *)PTR_DAT_06f6d5e0,uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          FUN_068bdec0(uVar10,0);
        }
      }
    }
    param_1 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,9);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x20) =
         *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<randomParticleRotation>_TypeInfo;
    thunk_FUN_03048534();
    uVar10 = FUN_068fc8bc(lVar12,0);
    if (*(uint *)(param_1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    thunk_FUN_03048534();
    if (*(uint *)(param_1 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x30) =
         *(undefined8 *)
          Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_NodeHeader>_TypeInfo;
    thunk_FUN_03048534();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (*(uint *)(param_1 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    thunk_FUN_03048534();
    if (*(uint *)(param_1 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x40) =
         *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<rotation>_TypeInfo;
    thunk_FUN_03048534();
    uVar10 = FUN_068fc8bc();
    if (*(uint *)(param_1 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    thunk_FUN_03048534();
    if (*(uint *)(param_1 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(param_1 + 0x50) =
         *(undefined8 *)
          Unity_Entities_TypeManager_SharedTypeIndex<BeginSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
    ;
    thunk_FUN_03048534();
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_2 = (**(code **)(*unaff_x28 + 0x1b8))();
    unaff_x26 = param_1;
    if (*(uint *)(param_1 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  } while( true );
}


