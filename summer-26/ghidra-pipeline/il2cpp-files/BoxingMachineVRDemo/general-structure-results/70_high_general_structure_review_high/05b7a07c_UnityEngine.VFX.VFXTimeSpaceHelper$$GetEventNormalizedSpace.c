/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper$$GetEventNormalizedSpace
ENTRY_POINT: 05b7a07c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b7aab4) */
/* WARNING: Removing unreachable block (ram,0x05b7afac) */
/* WARNING: Removing unreachable block (ram,0x05b7ad6c) */
/* WARNING: Removing unreachable block (ram,0x05b7aea4) */
/* WARNING: Removing unreachable block (ram,0x05b7b00c) */
/* WARNING: Removing unreachable block (ram,0x05b7aec8) */
/* WARNING: Removing unreachable block (ram,0x05b7b05c) */

void UnityEngine_VFX_VFXTimeSpaceHelper__GetEventNormalizedSpace(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  char cVar21;
  undefined8 unaff_x19;
  long unaff_x21;
  int iVar22;
  long *unaff_x23;
  long unaff_x28;
  undefined8 uVar23;
  ulong in_stack_00000028;
  uint uStack0000000000000034;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  uint in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d8;
  
  thunk_FUN_02dbd7b4();
  uVar10 = FUN_0606a004();
  if ((uVar10 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar4 = *(char *)(in_stack_000000c8 + 0x4c) != '\0';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  bVar5 = FUN_05b7fd40();
  lVar11 = FUN_05b6a66c();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_x21 != 0) {
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar12 = (long *)thunk_FUN_02d709fc();
    lVar11 = *unaff_x23;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *unaff_x23;
    }
    **(undefined1 **)(lVar11 + 0xb8) = 0;
    puVar2 = PTR_DAT_0675e258;
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      bVar1 = false;
      iVar9 = 0;
      iVar22 = -1;
      do {
        lVar11 = FUN_03aac1c4();
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
        if ((uVar10 & 1) == 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar10 = FUN_060664f4(lVar11,0);
          if ((uVar10 & 1) != 0) {
            FUN_0335c1c4(lVar11,&stack0x000000c0,
                         *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
            lVar15 = in_stack_000000c0;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            plVar13 = (long *)FUN_05b7bbe4(lVar11,lVar15);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            plVar14 = (long *)thunk_FUN_02d709fc(plVar13,0);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0501fa14(plVar14,plVar12,0);
            if ((uVar10 & 1) == 0) {
              uVar8 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
              lVar15 = in_stack_000000c0;
              if ((uVar8 >> 1 & 1) == 0) {
                lVar15 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                *(undefined8 *)(lVar15 + 0x20) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Dispose__
                ;
                thunk_FUN_02dd37b4();
                uVar23 = thunk_FUN_0606f5c0(lVar11,0);
                if (*(uint *)(lVar15 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                *(undefined8 *)(lVar15 + 0x28) = uVar23;
                thunk_FUN_02dd37b4();
                if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                *(undefined8 *)(lVar15 + 0x30) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_MoveNext__
                ;
                thunk_FUN_02dd37b4();
                plVar13 = (long *)thunk_FUN_02d709fc(unaff_x28,0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                uVar23 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                if (*(uint *)(lVar15 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                *(undefined8 *)(lVar15 + 0x38) = uVar23;
                thunk_FUN_02dd37b4();
                if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                *(undefined8 *)(lVar15 + 0x40) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_Dispose__
                ;
                thunk_FUN_02dd37b4();
                uVar23 = FUN_04e8e3a4(lVar15,0);
                if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0601ea80(uVar23,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = UnityEngine_Font__add_textureRebuilt(lVar15,0,0);
                if ((uVar10 & 1) == 0) {
                  if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  if (*(int *)(in_stack_000000c0 + 0x2c) == 1) {
                    lVar11 = *unaff_x23;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar11 = *unaff_x23;
                    }
                    bVar7 = **(byte **)(lVar11 + 0xb8);
                    bVar6 = FUN_05b7fe20();
                    **(byte **)(*unaff_x23 + 0xb8) = bVar7 | bVar6 & 1;
                    if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    bVar4 = (bool)(bVar4 | *(char *)(in_stack_000000c0 + 0x4c) != '\0');
                    iVar22 = iVar9;
                    goto LAB_05b7a634;
                  }
                }
                uVar23 = thunk_FUN_0606f5c0(lVar11,0);
                if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                in_stack_00000048 =
                     CONCAT44(in_stack_00000048._4_4_,*(undefined4 *)(in_stack_000000c0 + 0x2c));
                uVar20 = thunk_FUN_02d9d164(*(undefined8 *)
                                             Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                                            ,&stack0x00000048);
                uVar20 = System_Char__System_IConvertible_ToSByte
                                   (*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Current__
                                    ,uVar20,0);
                uVar23 = FUN_04e8e29c(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_Dispose__
                                      ,uVar23,*(undefined8 *)PTR_DAT_06760790,uVar20,0);
                if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0601ea80(uVar23,0);
              }
            }
            else {
              lVar15 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,9);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x20) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_MoveNext__
              ;
              thunk_FUN_02dd37b4();
              uVar23 = thunk_FUN_0606f5c0(lVar11,0);
              if (*(uint *)(lVar15 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x28) = uVar23;
              thunk_FUN_02dd37b4();
              if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x30) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_MoveNext__
              ;
              thunk_FUN_02dd37b4();
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar23 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
              if (*(uint *)(lVar15 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x38) = uVar23;
              thunk_FUN_02dd37b4();
              if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x40) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_get_Current__
              ;
              thunk_FUN_02dd37b4();
              uVar23 = thunk_FUN_0606f5c0();
              if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x48) = uVar23;
              thunk_FUN_02dd37b4();
              if (*(uint *)(lVar15 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x50) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_MoveNext__
              ;
              thunk_FUN_02dd37b4();
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar23 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              if (*(uint *)(lVar15 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x58) = uVar23;
              thunk_FUN_02dd37b4();
              if (*(uint *)(lVar15 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              *(undefined8 *)(lVar15 + 0x60) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_get_Current__
              ;
              thunk_FUN_02dd37b4();
              uVar23 = FUN_04e8e3a4(lVar15,0);
              if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0601ea80(uVar23,0);
            }
          }
        }
        else {
          bVar1 = true;
        }
LAB_05b7a634:
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(unaff_x21 + 0x18));
      if (bVar1) {
        if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_05b67e84(in_stack_000000c8,0);
      }
      goto LAB_05b7a674;
    }
  }
  iVar22 = -1;
LAB_05b7a674:
  if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar11 = FUN_059e6a0c(0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_059e0fc4(lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_039d1780(&stack0x00000048,*(long *)(lVar11 + 0x10),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_Dispose__
              );
  uStack0000000000000034 = 0;
  in_stack_000000a8 = in_stack_00000050;
  in_stack_000000a0 = in_stack_00000048;
  in_stack_000000b8 = in_stack_00000060;
  in_stack_000000b0 = in_stack_00000058;
  do {
    uVar10 = FUN_04a516c4(&stack0x000000a0,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                         );
    lVar15 = in_stack_000000b8;
    if ((uVar10 & 1) == 0) {
      FUN_04a516c0(&stack0x000000a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_Dispose__
                  );
      if ((uStack0000000000000034 & 1) != 0) {
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar23 = FUN_059efb34(0);
        if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_059e6b48(uVar23);
        if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_060a5608(&stack0x000000d8,uVar23,0);
        FUN_060a54b8(&stack0x000000d8,0);
        FUN_059efc74(uVar23,0);
      }
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_059e6a70(0);
      FUN_05a09978(&stack0x000000d0,0);
      return;
    }
    in_stack_00000098 = in_stack_000000b8;
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar10 = FUN_059e0b14(in_stack_000000b8,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b7feec();
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar23 = FUN_059e69a8(0);
      FUN_0602ea18(uVar23,uVar23,0);
      uStack0000000000000034 = 1;
    }
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    FUN_05b82a4c(&stack0x00000048,in_stack_000000d8);
    in_stack_00000078 = in_stack_00000050;
    in_stack_00000070 = in_stack_00000048;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7b3a4();
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar16 = FUN_05b7bccc(*(undefined8 *)(unaff_x28 + 0x138));
    uVar10 = FUN_059e0b14(lVar15,0);
    if ((uVar10 & 1) != 0) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(long *)(lVar16 + 0x1a0) = lVar15;
      thunk_FUN_02dd37b4(lVar16 + 0x1a0,lVar15);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b80090(lVar16,&stack0x00000098);
      FUN_059e1888(lVar11,lVar15);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b888dc();
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7c248();
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar16 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar10 = FUN_059e0b14(*(long *)(lVar16 + 0x1a0),0);
    uStack0000000000000088 = 1;
    if ((uVar10 & 1) != 0) {
      uStack0000000000000088 = 2;
    }
    if (*(long *)(lVar16 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar10 = FUN_059e0b14(*(long *)(lVar16 + 0x1a0),0);
    if ((uVar10 & 1) == 0) {
      uStack000000000000008c = 1;
    }
    else {
      if (*(long *)(lVar16 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uStack000000000000008c = FUN_059e21f8(*(long *)(lVar16 + 0x1a0),0);
    }
    if (*(long *)(lVar16 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000090 = *(uint *)(*(long *)(lVar16 + 0x1a0) + 0x24);
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0637e2bc();
    lVar17 = *unaff_x23;
    bVar7 = *(byte *)(lVar16 + 0x192);
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar17 = *unaff_x23;
    }
    *(byte *)(lVar16 + 0x192) = **(byte **)(lVar17 + 0xb8) | bVar7;
    uVar10 = FUN_059e0b14(lVar15,0);
    bVar7 = bVar5;
    if ((uVar10 & 1) != 0) {
      bVar7 = FUN_059e4c34(lVar15,0);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar17 = FUN_05b6a66c();
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((bVar7 & *(char *)(lVar17 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
      cVar21 = '\0';
    }
    else {
      uVar23 = FUN_0601dad4();
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = UnityEngine_Font__add_textureRebuilt(uVar23,0,0);
      if (((uVar10 & 1) == 0) ||
         ((iVar9 = FUN_0601cdec(), iVar9 != 1 && (iVar9 = FUN_0601cdec(), iVar9 != 8))))
      goto LAB_05b7aa44;
      cVar21 = *(char *)(lVar16 + 0x18e);
    }
    uVar23 = in_stack_000000d8;
    *(char *)(lVar16 + 0x195) = cVar21;
    *(bool *)(lVar16 + 0x1ad) = bVar4;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7ca84(uVar23,lVar16);
    if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b82b68(&stack0x00000070,0);
    uVar10 = FUN_059e0b14(lVar15,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b889ac();
    }
    lVar16 = in_stack_00000098;
    if (iVar22 != -1) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (0 < *(int *)(unaff_x21 + 0x18)) {
        uVar23 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        iVar9 = 0;
        uVar10 = (ulong)in_stack_00000090;
        do {
          lVar17 = FUN_03aac1c4();
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar18 = FUN_060664f4(lVar17,0);
          if ((uVar18 & 1) != 0) {
            FUN_0335c1c4(lVar17,&stack0x00000068,
                         *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
            lVar19 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar18 = FUN_0606a004(lVar19,0,0);
            lVar19 = in_stack_00000068;
            if ((uVar18 & 1) != 0) {
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              lVar19 = FUN_05b7bbe4(lVar17,lVar19);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar19 = FUN_05b7bccc(*(undefined8 *)(lVar19 + 0x138));
              uVar18 = FUN_059e0b14(lVar15,0);
              if ((uVar18 & 1) != 0) {
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(long *)(lVar19 + 0x1a0) = lVar15;
                thunk_FUN_02dd37b4(lVar19 + 0x1a0,lVar15);
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b80090(lVar19,&stack0x00000098);
              }
              lVar3 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7c248(lVar17,lVar3,0,lVar19);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(long *)(lVar19 + 0xd8) = lVar17;
              thunk_FUN_02dd37b4((long *)(lVar19 + 0xd8),lVar17);
              *(undefined8 *)(lVar19 + 0x230) = unaff_x19;
              thunk_FUN_02dd37b4(lVar19 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar20 = FUN_05b67a80(in_stack_00000068,0);
              FUN_05b7feec(uVar20,lVar16);
              in_stack_00000048 = 0;
              in_stack_00000050 = 0;
              FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar17,0);
              in_stack_00000078 = in_stack_00000050;
              in_stack_00000070 = in_stack_00000048;
              if (*(int *)(*(long *)
                            UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar10;
              FUN_0637e2bc(lVar17,uVar23,in_stack_00000028,0);
              lVar3 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7b3a4(lVar17,lVar3);
              FUN_05b7c248(lVar17,in_stack_00000068,iVar22 == iVar9,lVar19);
              *(bool *)(lVar19 + 0x195) = cVar21 != '\0';
              *(bool *)(lVar19 + 0x1ad) = bVar4;
              FUN_059e1888(lVar11,*(undefined8 *)(lVar19 + 0x1a0),lVar17,0);
              FUN_05b7ca84(in_stack_000000d8,lVar19);
              if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b82b68(&stack0x00000070,0);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(unaff_x21 + 0x18));
      }
    }
  } while( true );
}


