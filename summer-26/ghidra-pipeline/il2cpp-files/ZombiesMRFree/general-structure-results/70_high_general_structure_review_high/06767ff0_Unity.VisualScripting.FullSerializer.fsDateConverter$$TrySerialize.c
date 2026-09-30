/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDateConverter$$TrySerialize
ENTRY_POINT: 06767ff0
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

void Unity_VisualScripting_FullSerializer_fsDateConverter__TrySerialize(void)

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
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int in_w8;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 unaff_x25;
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
    if (in_w8 == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_068bdec0(unaff_x25,0);
    while( true ) {
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
              lVar11 = FUN_066400d8(0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_0663b37c(lVar11);
              if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              FUN_0433a7c0(&stack0x00000058,*(long *)(lVar11 + 0x10),
                           *(undefined8 *)
                            Unity_Entities_TypeManager_SharedTypeIndex<Zipline>_TypeInfo);
              lVar8 = in_stack_00000070;
              puVar3 = PTR_DAT_06f9a530;
              bVar2 = false;
              while( true ) {
                uVar12 = Unity_Collections_LowLevel_Unsafe_UnsafeHashMap_Enumerator<UntypedWeakReferenceId,_RuntimeContentCatalog_SceneLocation>__get_Current
                                   (&stack0x000006e0,
                                    *(undefined8 *)
                                     Unity_Entities_TypeManager_SharedTypeIndex<WorldTimeQueue>_TypeInfo
                                   );
                puVar4 = 
                System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo;
                if ((uVar12 & 1) == 0) {
                  FUN_054df3c0(&stack0x000006e0,
                               *(undefined8 *)
                                Unity_Entities_TypeManager_SharedTypeIndex<WorldTime>_TypeInfo);
                  if (bVar2) {
                    if (*(int *)(*(long *)
                                  System_IO_Enumeration_FileSystemEnumerable_FindTransform<FileSystemInfo>_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar14 = FUN_06654790(0);
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    FUN_066402a0(uVar14);
                    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    FUN_0691ff78(&stack0x00000718,uVar14,0);
                    FUN_0691f8fc(&stack0x00000718,0);
                    FUN_066548d0(uVar14,0);
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
                uVar12 = FUN_0663aecc(lVar8,0);
                if ((uVar12 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_0676b908();
                  bVar2 = true;
                }
                lVar13 = *(long *)puVar3;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                  lVar13 = *(long *)puVar3;
                }
                in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),0);
                FUN_0691b518(in_stack_00000718);
                FUN_06668eb4(&stack0x00000488,0);
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_06768f2c();
                FUN_06769484();
                memcpy(&stack0x00000058,&stack0x000004d0,0x210);
                uVar12 = FUN_0663aecc(lVar8,0);
                if ((uVar12 & 1) != 0) {
                  thunk_FUN_03048534(&stack0x00000648,lVar8);
                  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_0676baac(&stack0x000004d0,&stack0x00000480);
                  FUN_0663bcc0(lVar11,lVar8);
                  FUN_0676be48(&stack0x000004d0);
                  if (*(int *)(*(long *)
                                Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  FUN_0676bec4();
                  in_stack_00000648 = lVar8;
                }
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_067698e0();
                uVar12 = FUN_0663aecc(lVar8,0);
                uVar6 = in_stack_00000030._4_4_;
                if ((uVar12 & 1) != 0) {
                  uVar6 = FUN_0663ea24(lVar8,0);
                }
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                lVar13 = FUN_067676ac();
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                if ((uVar6 & *(char *)(lVar13 + 0x55) != '\0') != 0) {
                  uVar14 = FUN_068ba5c0();
                  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar12 = FUN_068f9b78(uVar14,0,0);
                  if (((uVar12 & 1) != 0) && (iVar7 = FUN_068b9b54(), iVar7 != 1)) {
                    FUN_068b9b54();
                  }
                }
                if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                FUN_0676a058(in_stack_00000718,&stack0x000004d0);
                lVar13 = *(long *)puVar3;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                  lVar13 = *(long *)puVar3;
                }
                in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                FUN_06668eb0(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
                FUN_0691b764(in_stack_00000718);
                FUN_06668eb4(&stack0x00000488,0);
                if (in_stack_00000648 == 0) break;
                uVar12 = FUN_0663aecc(in_stack_00000648,0);
                if ((uVar12 & 1) != 0) {
                  FUN_0676be48(&stack0x000004d0);
                  if (*(int *)(*(long *)
                                Unity_Entities_TypeManager_SharedTypeIndex<MR_WallElement>_TypeInfo
                              + 0xe0) == 0) {
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
                      lVar13 = FUN_04430018();
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02fe94e8();
                      }
                      uVar12 = FUN_068f52cc(lVar13,0);
                      if ((uVar12 & 1) != 0) {
                        FUN_03bbf6cc(lVar13,&stack0x00000478,
                                     *(undefined8 *)
                                      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                                    );
                        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                        }
                        uVar12 = FUN_068f8810(in_stack_00000478,0,0);
                        if ((uVar12 & 1) != 0) {
                          memcpy(&stack0x00000268,&stack0x000004d0,0x210);
                          thunk_FUN_03048534(&stack0x00000328,lVar13);
                          thunk_FUN_03048534(&stack0x00000470);
                          if (in_stack_00000478 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02fe94e8();
                          }
                          uVar14 = FUN_0675d7f0(in_stack_00000478,0);
                          if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                          }
                          FUN_0676b908(uVar14,lVar8);
                          lVar15 = *(long *)puVar3;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                            lVar15 = *(long *)puVar3;
                          }
                          in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                          FUN_06668eb0(&stack0x00000058,0,
                                       *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
                          FUN_0691b518(in_stack_00000718,lVar13,0);
                          FUN_06668eb4(&stack0x00000488,0);
                          if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                          }
                          FUN_06768f2c(lVar13,in_stack_00000478);
                          FUN_067698e0(lVar13,in_stack_00000478,in_stack_00000050._4_4_ == iVar7,
                                       &stack0x00000268);
                          FUN_0663bcc0(lVar11,in_stack_000003e0,lVar13,0);
                          FUN_0676a058(in_stack_00000718,&stack0x00000268);
                          lVar15 = *(long *)puVar3;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                            lVar15 = *(long *)puVar3;
                          }
                          in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                          FUN_06668eb0(&stack0x00000058,0,
                                       *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
                          FUN_0691b764(in_stack_00000718,lVar13,0);
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
            lVar11 = FUN_04430018();
            if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar12 = FUN_068f9b78(lVar11,0,0);
            if ((uVar12 & 1) == 0) break;
            unaff_x29 = 1;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar12 = FUN_068f52cc(lVar11,0);
        } while ((uVar12 & 1) == 0);
        FUN_03bbf6cc(lVar11,&stack0x00000700,
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
        uVar12 = FUN_05b07f44(plVar9);
        if ((uVar12 & 1) == 0) break;
        lVar8 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,9);
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
              Unity_Entities_TypeManager_SharedTypeIndex<randomParticleRotation>_TypeInfo;
        thunk_FUN_03048534();
        uVar14 = FUN_068fc8bc(lVar11,0);
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x28) = uVar14;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x30) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_NodeHeader>_TypeInfo;
        thunk_FUN_03048534();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar14 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x38) = uVar14;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x40) =
             *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<rotation>_TypeInfo;
        thunk_FUN_03048534();
        uVar14 = FUN_068fc8bc();
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x48) = uVar14;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x50) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<BeginSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
        ;
        thunk_FUN_03048534();
        if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar14 = (**(code **)(*unaff_x28 + 0x1b8))();
        if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x58) = uVar14;
        thunk_FUN_03048534();
        if (*(uint *)(lVar8 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        *(undefined8 *)(lVar8 + 0x60) =
             *(undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<BeginInitializationEntityCommandBufferSystem_Singleton>_TypeInfo
        ;
        thunk_FUN_03048534();
        uVar14 = FUN_059722f0(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bdec0(uVar14,0);
      }
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
      if ((uVar6 >> 1 & 1) == 0) break;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_068f9b78(in_stack_00000700,0,0);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(int *)(in_stack_00000700 + 0x2c) != 1) goto LAB_06768068;
        lVar11 = *(long *)PTR_DAT_06f9a540;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar11 = *(long *)PTR_DAT_06f9a540;
        }
        bVar1 = **(byte **)(lVar11 + 0xb8);
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
        uVar14 = FUN_068fc8bc(lVar11,0);
        if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        in_stack_00000058 = *(uint *)(in_stack_00000700 + 0x2c);
        uVar10 = thunk_FUN_0301043c(*(undefined8 *)
                                     Unity_Entities_TypeManager_SharedTypeIndex<UISliderHandle>_TypeInfo
                                    ,&stack0x00000058);
        uVar10 = FUN_059693f4(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<BeginVariableRateSimulationEntityCommandBufferSystem_Singleton>_TypeInfo
                              ,uVar10,0);
        uVar14 = FUN_059721e8(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<BakingOnlyEntityAuthoringBaker_BakingOnlyChildren>_TypeInfo
                              ,uVar14,*(undefined8 *)PTR_DAT_06f6d5e0,uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bdec0(uVar14,0);
      }
    }
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
    uVar14 = FUN_068fc8bc(lVar11,0);
    if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(lVar8 + 0x28) = uVar14;
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
    uVar14 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(lVar8 + 0x38) = uVar14;
    thunk_FUN_03048534();
    if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(lVar8 + 0x40) =
         *(undefined8 *)
          Unity_Entities_TypeManager_SharedTypeIndex<DotsSerialization_FolderNode>_TypeInfo;
    thunk_FUN_03048534();
    unaff_x25 = FUN_059722f0(lVar8,0);
    in_w8 = *(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0);
  } while( true );
}


