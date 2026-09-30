/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsArrayConverter$$TryDeserialize
ENTRY_POINT: 06767b18
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06768a84) */
/* WARNING: Removing unreachable block (ram,0x06768a60) */
/* WARNING: Removing unreachable block (ram,0x06768324) */
/* WARNING: Removing unreachable block (ram,0x067685dc) */
/* WARNING: Removing unreachable block (ram,0x06768a74) */
/* WARNING: Removing unreachable block (ram,0x0676878c) */
/* WARNING: Removing unreachable block (ram,0x06768aec) */
/* WARNING: Removing unreachable block (ram,0x06768864) */
/* WARNING: Removing unreachable block (ram,0x06768948) */
/* WARNING: Removing unreachable block (ram,0x06768a6c) */
/* WARNING: Removing unreachable block (ram,0x06768988) */

void Unity_VisualScripting_FullSerializer_fsArrayConverter__TryDeserialize
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  uint uStack0000000000000034;
  int iStack0000000000000054;
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
  
  uVar7 = FUN_06724000(param_1,param_2,0);
  lVar18 = 0;
  if ((in_stack_00000708 != 0) && (((uVar7 ^ 1) & 1) == 0)) {
    lVar18 = FUN_0675d8dc(in_stack_00000708,0);
  }
  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_068f8810(in_stack_00000708,0,0);
  if (((uVar9 & 1) != 0) && (in_stack_00000708 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uStack0000000000000034 = FUN_0676b72c();
  lVar10 = FUN_067676ac();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (lVar18 != 0) {
    if (in_stack_00000708 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      lVar10 = FUN_0675da60(in_stack_00000708,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      plVar11 = (long *)thunk_FUN_02fe6234(lVar10,0);
    }
    lVar10 = *(long *)PTR_DAT_06f9a540;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar10 = *(long *)PTR_DAT_06f9a540;
    }
    **(undefined1 **)(lVar10 + 0xb8) = 0;
    puVar3 = PTR_DAT_06f6d6a0;
    if (0 < *(int *)(lVar18 + 0x18)) {
      iStack0000000000000054 = -1;
      bVar2 = false;
      iVar8 = 0;
      do {
        lVar10 = FUN_04430018(lVar18,iVar8,*(undefined8 *)PTR_DAT_06f7a948);
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_068f9b78(lVar10,0,0);
        if ((uVar9 & 1) == 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar9 = FUN_068f52cc(lVar10,0);
          iVar5 = iStack0000000000000054;
          if ((uVar9 & 1) != 0) {
            FUN_03bbf6cc(lVar10,&stack0x00000700,
                         *(undefined8 *)
                          OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                        );
            if (in_stack_00000700 == 0) {
              plVar13 = (long *)0x0;
            }
            else {
              lVar12 = FUN_0675da60(in_stack_00000700,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              plVar13 = (long *)thunk_FUN_02fe6234(lVar12,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_05b07f44(plVar13,plVar11,0);
            if ((uVar9 & 1) == 0) {
              if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              plVar13 = (long *)FUN_0675da60(in_stack_00000700,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
              if ((uVar7 >> 1 & 1) == 0) {
                lVar12 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,5);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                *(undefined8 *)(lVar12 + 0x20) =
                     *(undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<BeginPresentationEntityCommandBufferSystem_Singleton>_TypeInfo
                ;
                thunk_FUN_03048534();
                uVar16 = FUN_068fc8bc(lVar10,0);
                if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                *(undefined8 *)(lVar12 + 0x28) = uVar16;
                thunk_FUN_03048534();
                if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                *(undefined8 *)(lVar12 + 0x30) =
                     *(undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<BeginFixedStepSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
                ;
                thunk_FUN_03048534();
                if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                plVar13 = (long *)thunk_FUN_02fe6234();
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                uVar16 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                *(undefined8 *)(lVar12 + 0x38) = uVar16;
                thunk_FUN_03048534();
                if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                *(undefined8 *)(lVar12 + 0x40) =
                     *(undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_FolderNode>_TypeInfo
                ;
                thunk_FUN_03048534();
                uVar16 = FUN_059722f0(lVar12,0);
                if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_068bdec0(uVar16,0);
                iVar5 = iStack0000000000000054;
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uVar9 = FUN_068f9b78(in_stack_00000700,0,0);
                if ((uVar9 & 1) == 0) {
                  if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  if (*(int *)(in_stack_00000700 + 0x2c) == 1) {
                    lVar10 = *(long *)PTR_DAT_06f9a540;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                      lVar10 = *(long *)PTR_DAT_06f9a540;
                    }
                    bVar1 = **(byte **)(lVar10 + 0xb8);
                    bVar6 = FUN_0676b83c();
                    **(byte **)(*(long *)PTR_DAT_06f9a540 + 0xb8) = bVar1 | bVar6 & 1;
                    iVar5 = iVar8;
                    if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    goto LAB_06768164;
                  }
                }
                uVar16 = FUN_068fc8bc(lVar10,0);
                if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                in_stack_00000058 = *(uint *)(in_stack_00000700 + 0x2c);
                uVar14 = thunk_FUN_0301043c(*(undefined8 *)
                                             Unity_Entities_TypeManager_SharedTypeIndex<UISliderHandle>_TypeInfo
                                            ,&stack0x00000058);
                uVar14 = FUN_059693f4(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<BeginVariableRateSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
                                      ,uVar14,0);
                uVar16 = FUN_059721e8(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<BakingOnlyEntityAuthoringBaker_BakingOnlyChildren>_TypeInfo
                                      ,uVar16,*(undefined8 *)PTR_DAT_06f6d5e0,uVar14,0);
                if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_068bdec0(uVar16,0);
                iVar5 = iStack0000000000000054;
              }
            }
            else {
              lVar12 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,9);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x20) =
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<randomParticleRotation>_TypeInfo;
              thunk_FUN_03048534();
              uVar16 = FUN_068fc8bc(lVar10,0);
              if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x28) = uVar16;
              thunk_FUN_03048534();
              if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x30) =
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_NodeHeader>_TypeInfo
              ;
              thunk_FUN_03048534();
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar16 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x38) = uVar16;
              thunk_FUN_03048534();
              if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x40) =
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<rotation>_TypeInfo;
              thunk_FUN_03048534();
              uVar16 = FUN_068fc8bc();
              if (*(uint *)(lVar12 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x48) = uVar16;
              thunk_FUN_03048534();
              if (*(uint *)(lVar12 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x50) =
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<BeginSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
              ;
              thunk_FUN_03048534();
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar16 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (*(uint *)(lVar12 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x58) = uVar16;
              thunk_FUN_03048534();
              if (*(uint *)(lVar12 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined8 *)(lVar12 + 0x60) =
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<BeginInitializationEntityCommandBufferSystem_Singleton>_TypeInfo
              ;
              thunk_FUN_03048534();
              uVar16 = FUN_059722f0(lVar12,0);
              if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_068bdec0(uVar16,0);
              iVar5 = iStack0000000000000054;
            }
          }
        }
        else {
          bVar2 = true;
          iVar5 = iStack0000000000000054;
        }
LAB_06768164:
        iStack0000000000000054 = iVar5;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar18 + 0x18));
      if (bVar2) {
        if (in_stack_00000708 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_0675dd44(in_stack_00000708,0);
      }
      goto LAB_06768194;
    }
  }
  iStack0000000000000054 = -1;
LAB_06768194:
  FUN_069005b0(0);
  if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo
              + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar10 = FUN_066400d8(0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_0663b37c(lVar10);
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_0433a7c0(&stack0x00000058,*(long *)(lVar10 + 0x10),
               *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Zipline>_TypeInfo);
  lVar12 = in_stack_00000070;
  puVar3 = PTR_DAT_06f9a530;
  bVar2 = false;
  while( true ) {
    uVar9 = Unity_Collections_LowLevel_Unsafe_UnsafeHashMap_Enumerator<UntypedWeakReferenceId,_RuntimeContentCatalog_SceneLocation>__get_Current
                      (&stack0x000006e0,
                       *(undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<WorldTimeQueue>_TypeInfo);
    puVar4 = System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo;
    if ((uVar9 & 1) == 0) {
      FUN_054df3c0(&stack0x000006e0,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<WorldTime>_TypeInfo);
      if (bVar2) {
        if (*(int *)(*(long *)
                      System_IO_Enumeration_FileSystemEnumerable_FindTransform<FileSystemInfo>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar16 = FUN_06654790(0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_066402a0(uVar16);
        if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_0691ff78(&stack0x00000718,uVar16,0);
        FUN_0691f8fc(&stack0x00000718,0);
        FUN_066548d0(uVar16,0);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_066401d0(0);
      FUN_06668eb4(&stack0x00000710,0);
      return;
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = FUN_0663aecc(lVar12,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0676b908();
      bVar2 = true;
    }
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar3;
    }
    in_stack_00000058 = in_stack_00000058 & 0xffffff00;
    FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
    FUN_0691b518(in_stack_00000718);
    FUN_06668eb4(&stack0x00000488,0);
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06768f2c();
    FUN_06769484();
    memcpy(&stack0x00000058,&stack0x000004d0,0x210);
    uVar9 = FUN_0663aecc(lVar12,0);
    if ((uVar9 & 1) != 0) {
      thunk_FUN_03048534(&stack0x00000648,lVar12);
      if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0676baac(&stack0x000004d0,&stack0x00000480);
      FUN_0663bcc0(lVar10,lVar12);
      FUN_0676be48(&stack0x000004d0);
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0676bec4();
      in_stack_00000648 = lVar12;
    }
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_067698e0();
    uVar9 = FUN_0663aecc(lVar12,0);
    uVar7 = uStack0000000000000034;
    if ((uVar9 & 1) != 0) {
      uVar7 = FUN_0663ea24(lVar12,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar15 = FUN_067676ac();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((uVar7 & *(char *)(lVar15 + 0x55) != '\0') != 0) {
      uVar16 = FUN_068ba5c0();
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_068f9b78(uVar16,0,0);
      if (((uVar9 & 1) != 0) && (iVar8 = FUN_068b9b54(), iVar8 != 1)) {
        FUN_068b9b54();
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0676a058(in_stack_00000718,&stack0x000004d0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar3;
    }
    in_stack_00000058 = in_stack_00000058 & 0xffffff00;
    FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
    FUN_0691b764(in_stack_00000718);
    FUN_06668eb4(&stack0x00000488,0);
    if (in_stack_00000648 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = FUN_0663aecc(in_stack_00000648,0);
    if ((uVar9 & 1) != 0) {
      FUN_0676be48(&stack0x000004d0);
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0676bf94();
    }
    if (iStack0000000000000054 != -1) {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (0 < *(int *)(lVar18 + 0x18)) {
        iVar8 = 0;
        do {
          lVar15 = FUN_04430018(lVar18,iVar8,*(undefined8 *)PTR_DAT_06f7a948);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar9 = FUN_068f52cc(lVar15,0);
          if ((uVar9 & 1) != 0) {
            FUN_03bbf6cc(lVar15,&stack0x00000478,
                         *(undefined8 *)
                          OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                        );
            if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_068f8810(in_stack_00000478,0,0);
            if ((uVar9 & 1) != 0) {
              memcpy(&stack0x00000268,&stack0x000004d0,0x210);
              thunk_FUN_03048534(&stack0x00000328,lVar15);
              thunk_FUN_03048534(&stack0x00000470);
              if (in_stack_00000478 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar16 = FUN_0675d7f0(in_stack_00000478,0);
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_0676b908(uVar16,lVar12);
              lVar17 = *(long *)puVar3;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar17 = *(long *)puVar3;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x10),0);
              FUN_0691b518(in_stack_00000718,lVar15,0);
              FUN_06668eb4(&stack0x00000488,0);
              if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_06768f2c(lVar15,in_stack_00000478);
              FUN_067698e0(lVar15,in_stack_00000478,iStack0000000000000054 == iVar8,&stack0x00000268
                          );
              FUN_0663bcc0(lVar10,in_stack_000003e0,lVar15,0);
              FUN_0676a058(in_stack_00000718,&stack0x00000268);
              lVar17 = *(long *)puVar3;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar17 = *(long *)puVar3;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
              FUN_0691b764(in_stack_00000718,lVar15,0);
              FUN_06668eb4(&stack0x00000488,0);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar18 + 0x18));
      }
    }
    if (in_stack_00000648 == 0) break;
    FUN_0663aecc(in_stack_00000648,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


