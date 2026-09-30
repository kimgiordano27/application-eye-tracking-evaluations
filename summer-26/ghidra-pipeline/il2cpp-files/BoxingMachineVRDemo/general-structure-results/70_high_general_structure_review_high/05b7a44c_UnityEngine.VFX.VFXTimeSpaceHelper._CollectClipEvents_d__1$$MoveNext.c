/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper.<CollectClipEvents>d__1$$MoveNext
ENTRY_POINT: 05b7a44c
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


/* WARNING: Removing unreachable block (ram,0x05b7afac) */
/* WARNING: Removing unreachable block (ram,0x05b7aab4) */
/* WARNING: Removing unreachable block (ram,0x05b7ad6c) */
/* WARNING: Removing unreachable block (ram,0x05b7aea4) */
/* WARNING: Removing unreachable block (ram,0x05b7b00c) */
/* WARNING: Removing unreachable block (ram,0x05b7b05c) */
/* WARNING: Removing unreachable block (ram,0x05b7aec8) */

void UnityEngine_VFX_VFXTimeSpaceHelper_<CollectClipEvents>d__1__MoveNext(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  char cVar17;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long *unaff_x28;
  ulong unaff_x29;
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
  
  do {
    *(undefined8 *)(unaff_x26 + 0x30) = *param_1;
    thunk_FUN_02dd37b4();
    plVar8 = (long *)thunk_FUN_02d709fc(in_stack_00000008,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (*(uint *)(unaff_x26 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(unaff_x26 + 0x38) = uVar9;
    thunk_FUN_02dd37b4();
    if (*(uint *)(unaff_x26 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(unaff_x26 + 0x40) =
         *(undefined8 *)
          Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_Dispose__;
    thunk_FUN_02dd37b4();
    uVar9 = FUN_04e8e3a4(unaff_x26,0);
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0601ea80(uVar9,0);
LAB_05b7a634:
    while( true ) {
      do {
        while( true ) {
          unaff_w24 = unaff_w24 + 1;
          if (*(int *)(unaff_x21 + 0x18) <= unaff_w24) {
            if ((unaff_x29 & 1) != 0) {
              if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              FUN_05b67e84(in_stack_000000c8,0);
            }
            if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar10 = FUN_059e6a0c(0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            FUN_059e0fc4(lVar10);
            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            FUN_039d1780(&stack0x00000048,*(long *)(lVar10 + 0x10),
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_Dispose__
                        );
            uStack0000000000000034 = 0;
            in_stack_000000a8 = in_stack_00000050;
            in_stack_000000a0 = in_stack_00000048;
            in_stack_000000b8 = in_stack_00000060;
            in_stack_000000b0 = in_stack_00000058;
            goto LAB_05b7a700;
          }
          lVar10 = FUN_03aac1c4();
          if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
          if ((uVar11 & 1) == 0) break;
          unaff_x29 = 1;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar11 = FUN_060664f4(lVar10,0);
      } while ((uVar11 & 1) == 0);
      FUN_0335c1c4(lVar10,&stack0x000000c0,
                   *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
      lVar7 = in_stack_000000c0;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar8 = (long *)FUN_05b7bbe4(lVar10,lVar7);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar6 = (long *)thunk_FUN_02d709fc(plVar8,0);
      if (*(int *)(*(long *)(unaff_x20 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_0501fa14(plVar6);
      if ((uVar11 & 1) == 0) break;
      lVar7 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x20) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_MoveNext__
      ;
      thunk_FUN_02dd37b4();
      uVar9 = thunk_FUN_0606f5c0(lVar10,0);
      if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x30) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_MoveNext__;
      thunk_FUN_02dd37b4();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x38) = uVar9;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x40) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_get_Current__
      ;
      thunk_FUN_02dd37b4();
      uVar9 = thunk_FUN_0606f5c0();
      if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x48) = uVar9;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar7 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x50) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_MoveNext__
      ;
      thunk_FUN_02dd37b4();
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = (**(code **)(*unaff_x28 + 0x1b8))();
      if (*(uint *)(lVar7 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x58) = uVar9;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar7 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x60) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_get_Current__
      ;
      thunk_FUN_02dd37b4();
      uVar9 = FUN_04e8e3a4(lVar7,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0601ea80(uVar9,0);
    }
    uVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    lVar7 = in_stack_000000c0;
    if ((uVar4 >> 1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = UnityEngine_Font__add_textureRebuilt(lVar7,0,0);
      if ((uVar11 & 1) == 0) {
        if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(int *)(in_stack_000000c0 + 0x2c) == 1) {
          lVar10 = *unaff_x23;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar10 = *unaff_x23;
          }
          bVar1 = **(byte **)(lVar10 + 0xb8);
          bVar3 = FUN_05b7fe20();
          **(byte **)(*unaff_x23 + 0xb8) = bVar1 | bVar3 & 1;
          if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          bStack0000000000000044 =
               bStack0000000000000044 | *(char *)(in_stack_000000c0 + 0x4c) != '\0';
          unaff_w22 = unaff_w24;
          goto LAB_05b7a634;
        }
      }
      uVar9 = thunk_FUN_0606f5c0(lVar10,0);
      if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      in_stack_00000048 =
           CONCAT44(in_stack_00000048._4_4_,*(undefined4 *)(in_stack_000000c0 + 0x2c));
      uVar16 = thunk_FUN_02d9d164(*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                                  ,&stack0x00000048);
      uVar16 = System_Char__System_IConvertible_ToSByte
                         (*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Current__
                          ,uVar16,0);
      uVar9 = FUN_04e8e29c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_Dispose__
                           ,uVar9,*(undefined8 *)PTR_DAT_06760790,uVar16,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0601ea80(uVar9,0);
      goto LAB_05b7a634;
    }
    unaff_x26 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(unaff_x26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(unaff_x26 + 0x20) =
         *(undefined8 *)
          Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Dispose__
    ;
    thunk_FUN_02dd37b4();
    uVar9 = thunk_FUN_0606f5c0(lVar10,0);
    if (*(uint *)(unaff_x26 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(unaff_x26 + 0x28) = uVar9;
    thunk_FUN_02dd37b4();
    param_1 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_MoveNext__;
    if (*(uint *)(unaff_x26 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  } while( true );
LAB_05b7a700:
  uVar11 = FUN_04a516c4(&stack0x000000a0,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                       );
  lVar7 = in_stack_000000b8;
  if ((uVar11 & 1) == 0) {
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
      uVar9 = FUN_059efb34(0);
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_059e6b48(uVar9);
      if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02dbd7b4();
      }
      FUN_060a5608(&stack0x000000d8,uVar9,0);
      FUN_060a54b8(&stack0x000000d8,0);
      FUN_059efc74(uVar9,0);
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
  uVar11 = FUN_059e0b14(in_stack_000000b8,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7feec();
    if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_059e69a8(0);
    FUN_0602ea18(uVar9,uVar9,0);
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
  lVar12 = FUN_05b7bccc(*(undefined8 *)(in_stack_00000008 + 0x138));
  uVar11 = FUN_059e0b14(lVar7,0);
  if ((uVar11 & 1) != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(long *)(lVar12 + 0x1a0) = lVar7;
    thunk_FUN_02dd37b4(lVar12 + 0x1a0,lVar7);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b80090(lVar12,&stack0x00000098);
    FUN_059e1888(lVar10,lVar7);
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
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar12 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar11 = FUN_059e0b14(*(long *)(lVar12 + 0x1a0),0);
  uStack0000000000000088 = 1;
  if ((uVar11 & 1) != 0) {
    uStack0000000000000088 = 2;
  }
  if (*(long *)(lVar12 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar11 = FUN_059e0b14(*(long *)(lVar12 + 0x1a0),0);
  if ((uVar11 & 1) == 0) {
    uStack000000000000008c = 1;
  }
  else {
    if (*(long *)(lVar12 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uStack000000000000008c = FUN_059e21f8(*(long *)(lVar12 + 0x1a0),0);
  }
  if (*(long *)(lVar12 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  in_stack_00000090 = *(uint *)(*(long *)(lVar12 + 0x1a0) + 0x24);
  if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0637e2bc();
  lVar13 = *unaff_x23;
  bVar1 = *(byte *)(lVar12 + 0x192);
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *unaff_x23;
  }
  *(byte *)(lVar12 + 0x192) = **(byte **)(lVar13 + 0xb8) | bVar1;
  uVar11 = FUN_059e0b14(lVar7,0);
  uVar4 = uStack0000000000000040;
  if ((uVar11 & 1) != 0) {
    uVar4 = FUN_059e4c34(lVar7,0);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar13 = FUN_05b6a66c();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((uVar4 & *(char *)(lVar13 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
    cVar17 = '\0';
  }
  else {
    uVar9 = FUN_0601dad4();
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(uVar9,0,0);
    if (((uVar11 & 1) == 0) ||
       ((iVar5 = FUN_0601cdec(), iVar5 != 1 && (iVar5 = FUN_0601cdec(), iVar5 != 8))))
    goto LAB_05b7aa44;
    cVar17 = *(char *)(lVar12 + 0x18e);
  }
  uVar9 = in_stack_000000d8;
  *(char *)(lVar12 + 0x195) = cVar17;
  *(byte *)(lVar12 + 0x1ad) = bStack0000000000000044 & 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b7ca84(uVar9,lVar12);
  if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b82b68(&stack0x00000070,0);
  uVar11 = FUN_059e0b14(lVar7,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b889ac();
  }
  lVar12 = in_stack_00000098;
  if (unaff_w22 != -1) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      uVar9 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      iVar5 = 0;
      uVar11 = (ulong)in_stack_00000090;
      do {
        lVar13 = FUN_03aac1c4();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar14 = FUN_060664f4(lVar13,0);
        if ((uVar14 & 1) != 0) {
          FUN_0335c1c4(lVar13,&stack0x00000068,
                       *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
          lVar15 = in_stack_00000068;
          if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_0606a004(lVar15,0,0);
          lVar15 = in_stack_00000068;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar15 = FUN_05b7bbe4(lVar13,lVar15);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar15 = FUN_05b7bccc(*(undefined8 *)(lVar15 + 0x138));
            uVar14 = FUN_059e0b14(lVar7,0);
            if ((uVar14 & 1) != 0) {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(long *)(lVar15 + 0x1a0) = lVar7;
              thunk_FUN_02dd37b4(lVar15 + 0x1a0,lVar7);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b80090(lVar15,&stack0x00000098);
            }
            lVar2 = in_stack_00000068;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b7c248(lVar13,lVar2,0,lVar15);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(long *)(lVar15 + 0xd8) = lVar13;
            thunk_FUN_02dd37b4((long *)(lVar15 + 0xd8),lVar13);
            *(undefined8 *)(lVar15 + 0x230) = unaff_x19;
            thunk_FUN_02dd37b4(lVar15 + 0x230);
            if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar16 = FUN_05b67a80(in_stack_00000068,0);
            FUN_05b7feec(uVar16,lVar12);
            in_stack_00000048 = 0;
            in_stack_00000050 = 0;
            FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar13,0);
            in_stack_00000078 = in_stack_00000050;
            in_stack_00000070 = in_stack_00000048;
            if (*(int *)(*(long *)
                          UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar11;
            FUN_0637e2bc(lVar13,uVar9,in_stack_00000028,0);
            lVar2 = in_stack_00000068;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b7b3a4(lVar13,lVar2);
            FUN_05b7c248(lVar13,in_stack_00000068,unaff_w22 == iVar5,lVar15);
            *(bool *)(lVar15 + 0x195) = cVar17 != '\0';
            *(byte *)(lVar15 + 0x1ad) = bStack0000000000000044 & 1;
            FUN_059e1888(lVar10,*(undefined8 *)(lVar15 + 0x1a0),lVar13,0);
            FUN_05b7ca84(in_stack_000000d8,lVar15);
            if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b82b68(&stack0x00000070,0);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_x21 + 0x18));
    }
  }
  goto LAB_05b7a700;
}


