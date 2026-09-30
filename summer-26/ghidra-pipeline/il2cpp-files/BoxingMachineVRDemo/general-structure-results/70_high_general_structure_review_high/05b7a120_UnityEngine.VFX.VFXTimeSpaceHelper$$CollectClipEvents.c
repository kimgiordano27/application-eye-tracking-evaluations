/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper$$CollectClipEvents
ENTRY_POINT: 05b7a120
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

void UnityEngine_VFX_VFXTimeSpaceHelper__CollectClipEvents(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  char cVar18;
  undefined8 unaff_x19;
  long unaff_x21;
  int iVar19;
  long *unaff_x23;
  long *unaff_x28;
  undefined8 uVar20;
  long in_stack_00000008;
  ulong in_stack_00000028;
  uint uStack0000000000000034;
  uint uStack0000000000000040;
  byte bStack0000000000000044;
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
  
  puVar3 = PTR_DAT_0675e258;
  bVar2 = false;
  iVar7 = 0;
  iVar19 = -1;
  do {
    lVar8 = FUN_03aac1c4();
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = UnityEngine_Font__add_textureRebuilt(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = FUN_060664f4(lVar8,0);
      if ((uVar9 & 1) != 0) {
        FUN_0335c1c4(lVar8,&stack0x000000c0,
                     *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
        lVar12 = in_stack_000000c0;
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar10 = (long *)FUN_05b7bbe4(lVar8,lVar12);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar11 = (long *)thunk_FUN_02d709fc(plVar10,0);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar9 = FUN_0501fa14(plVar11);
        if ((uVar9 & 1) == 0) {
          uVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          lVar12 = in_stack_000000c0;
          if ((uVar6 >> 1 & 1) == 0) {
            lVar12 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar12 + 0x20) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Dispose__
            ;
            thunk_FUN_02dd37b4();
            uVar20 = thunk_FUN_0606f5c0(lVar8,0);
            if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar12 + 0x28) = uVar20;
            thunk_FUN_02dd37b4();
            if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar12 + 0x30) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_MoveNext__
            ;
            thunk_FUN_02dd37b4();
            plVar10 = (long *)thunk_FUN_02d709fc(in_stack_00000008,0);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar20 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar12 + 0x38) = uVar20;
            thunk_FUN_02dd37b4();
            if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar12 + 0x40) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_Dispose__
            ;
            thunk_FUN_02dd37b4();
            uVar20 = FUN_04e8e3a4(lVar12,0);
            if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0601ea80(uVar20,0);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = UnityEngine_Font__add_textureRebuilt(lVar12,0,0);
            if ((uVar9 & 1) == 0) {
              if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(int *)(in_stack_000000c0 + 0x2c) == 1) {
                lVar8 = *unaff_x23;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar8 = *unaff_x23;
                }
                bVar1 = **(byte **)(lVar8 + 0xb8);
                bVar5 = FUN_05b7fe20();
                **(byte **)(*unaff_x23 + 0xb8) = bVar1 | bVar5 & 1;
                if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                bStack0000000000000044 =
                     bStack0000000000000044 | *(char *)(in_stack_000000c0 + 0x4c) != '\0';
                iVar19 = iVar7;
                goto LAB_05b7a634;
              }
            }
            uVar20 = thunk_FUN_0606f5c0(lVar8,0);
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            in_stack_00000048 =
                 CONCAT44(in_stack_00000048._4_4_,*(undefined4 *)(in_stack_000000c0 + 0x2c));
            uVar17 = thunk_FUN_02d9d164(*(undefined8 *)
                                         Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                                        ,&stack0x00000048);
            uVar17 = System_Char__System_IConvertible_ToSByte
                               (*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Current__
                                ,uVar17,0);
            uVar20 = FUN_04e8e29c(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_Dispose__
                                  ,uVar20,*(undefined8 *)PTR_DAT_06760790,uVar17,0);
            if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0601ea80(uVar20,0);
          }
        }
        else {
          lVar12 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,9);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x20) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_MoveNext__
          ;
          thunk_FUN_02dd37b4();
          uVar20 = thunk_FUN_0606f5c0(lVar8,0);
          if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x28) = uVar20;
          thunk_FUN_02dd37b4();
          if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x30) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_MoveNext__;
          thunk_FUN_02dd37b4();
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar20 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x38) = uVar20;
          thunk_FUN_02dd37b4();
          if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x40) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_get_Current__
          ;
          thunk_FUN_02dd37b4();
          uVar20 = thunk_FUN_0606f5c0();
          if (*(uint *)(lVar12 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x48) = uVar20;
          thunk_FUN_02dd37b4();
          if (*(uint *)(lVar12 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x50) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_MoveNext__
          ;
          thunk_FUN_02dd37b4();
          if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar20 = (**(code **)(*unaff_x28 + 0x1b8))();
          if (*(uint *)(lVar12 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x58) = uVar20;
          thunk_FUN_02dd37b4();
          if (*(uint *)(lVar12 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined8 *)(lVar12 + 0x60) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_get_Current__
          ;
          thunk_FUN_02dd37b4();
          uVar20 = FUN_04e8e3a4(lVar12,0);
          if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0601ea80(uVar20,0);
        }
      }
    }
    else {
      bVar2 = true;
    }
LAB_05b7a634:
    iVar7 = iVar7 + 1;
  } while (iVar7 < *(int *)(unaff_x21 + 0x18));
  if (bVar2) {
    if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05b67e84(in_stack_000000c8,0);
  }
  if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = FUN_059e6a0c(0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_059e0fc4(lVar8);
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_039d1780(&stack0x00000048,*(long *)(lVar8 + 0x10),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_Dispose__
              );
  uStack0000000000000034 = 0;
  in_stack_000000a8 = in_stack_00000050;
  in_stack_000000a0 = in_stack_00000048;
  in_stack_000000b8 = in_stack_00000060;
  in_stack_000000b0 = in_stack_00000058;
  do {
    uVar9 = FUN_04a516c4(&stack0x000000a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                        );
    lVar12 = in_stack_000000b8;
    if ((uVar9 & 1) == 0) {
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
        uVar20 = FUN_059efb34(0);
        if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_059e6b48(uVar20);
        if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_060a5608(&stack0x000000d8,uVar20,0);
        FUN_060a54b8(&stack0x000000d8,0);
        FUN_059efc74(uVar20,0);
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
    uVar9 = FUN_059e0b14(in_stack_000000b8,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b7feec();
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar20 = FUN_059e69a8(0);
      FUN_0602ea18(uVar20,uVar20,0);
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
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar13 = FUN_05b7bccc(*(undefined8 *)(in_stack_00000008 + 0x138));
    uVar9 = FUN_059e0b14(lVar12,0);
    if ((uVar9 & 1) != 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(long *)(lVar13 + 0x1a0) = lVar12;
      thunk_FUN_02dd37b4(lVar13 + 0x1a0,lVar12);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b80090(lVar13,&stack0x00000098);
      FUN_059e1888(lVar8,lVar12);
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
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar13 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = FUN_059e0b14(*(long *)(lVar13 + 0x1a0),0);
    uStack0000000000000088 = 1;
    if ((uVar9 & 1) != 0) {
      uStack0000000000000088 = 2;
    }
    if (*(long *)(lVar13 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = FUN_059e0b14(*(long *)(lVar13 + 0x1a0),0);
    if ((uVar9 & 1) == 0) {
      uStack000000000000008c = 1;
    }
    else {
      if (*(long *)(lVar13 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uStack000000000000008c = FUN_059e21f8(*(long *)(lVar13 + 0x1a0),0);
    }
    if (*(long *)(lVar13 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000090 = *(uint *)(*(long *)(lVar13 + 0x1a0) + 0x24);
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0637e2bc();
    lVar14 = *unaff_x23;
    bVar1 = *(byte *)(lVar13 + 0x192);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar14 = *unaff_x23;
    }
    *(byte *)(lVar13 + 0x192) = **(byte **)(lVar14 + 0xb8) | bVar1;
    uVar9 = FUN_059e0b14(lVar12,0);
    uVar6 = uStack0000000000000040;
    if ((uVar9 & 1) != 0) {
      uVar6 = FUN_059e4c34(lVar12,0);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar14 = FUN_05b6a66c();
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((uVar6 & *(char *)(lVar14 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
      cVar18 = '\0';
    }
    else {
      uVar20 = FUN_0601dad4();
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = UnityEngine_Font__add_textureRebuilt(uVar20,0,0);
      if (((uVar9 & 1) == 0) ||
         ((iVar7 = FUN_0601cdec(), iVar7 != 1 && (iVar7 = FUN_0601cdec(), iVar7 != 8))))
      goto LAB_05b7aa44;
      cVar18 = *(char *)(lVar13 + 0x18e);
    }
    uVar20 = in_stack_000000d8;
    *(char *)(lVar13 + 0x195) = cVar18;
    *(byte *)(lVar13 + 0x1ad) = bStack0000000000000044 & 1;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7ca84(uVar20,lVar13);
    if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b82b68(&stack0x00000070,0);
    uVar9 = FUN_059e0b14(lVar12,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b889ac();
    }
    lVar13 = in_stack_00000098;
    if (iVar19 != -1) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (0 < *(int *)(unaff_x21 + 0x18)) {
        uVar20 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        iVar7 = 0;
        uVar9 = (ulong)in_stack_00000090;
        do {
          lVar14 = FUN_03aac1c4();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar15 = FUN_060664f4(lVar14,0);
          if ((uVar15 & 1) != 0) {
            FUN_0335c1c4(lVar14,&stack0x00000068,
                         *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
            lVar16 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar15 = FUN_0606a004(lVar16,0,0);
            lVar16 = in_stack_00000068;
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              lVar16 = FUN_05b7bbe4(lVar14,lVar16);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar16 = FUN_05b7bccc(*(undefined8 *)(lVar16 + 0x138));
              uVar15 = FUN_059e0b14(lVar12,0);
              if ((uVar15 & 1) != 0) {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(long *)(lVar16 + 0x1a0) = lVar12;
                thunk_FUN_02dd37b4(lVar16 + 0x1a0,lVar12);
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b80090(lVar16,&stack0x00000098);
              }
              lVar4 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7c248(lVar14,lVar4,0,lVar16);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(long *)(lVar16 + 0xd8) = lVar14;
              thunk_FUN_02dd37b4((long *)(lVar16 + 0xd8),lVar14);
              *(undefined8 *)(lVar16 + 0x230) = unaff_x19;
              thunk_FUN_02dd37b4(lVar16 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar17 = FUN_05b67a80(in_stack_00000068,0);
              FUN_05b7feec(uVar17,lVar13);
              in_stack_00000048 = 0;
              in_stack_00000050 = 0;
              FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar14,0);
              in_stack_00000078 = in_stack_00000050;
              in_stack_00000070 = in_stack_00000048;
              if (*(int *)(*(long *)
                            UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar9;
              FUN_0637e2bc(lVar14,uVar20,in_stack_00000028,0);
              lVar4 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7b3a4(lVar14,lVar4);
              FUN_05b7c248(lVar14,in_stack_00000068,iVar19 == iVar7,lVar16);
              *(bool *)(lVar16 + 0x195) = cVar18 != '\0';
              *(byte *)(lVar16 + 0x1ad) = bStack0000000000000044 & 1;
              FUN_059e1888(lVar8,*(undefined8 *)(lVar16 + 0x1a0),lVar14,0);
              FUN_05b7ca84(in_stack_000000d8,lVar16);
              if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b82b68(&stack0x00000070,0);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_x21 + 0x18));
      }
    }
  } while( true );
}


