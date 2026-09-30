/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper$$GetEventNormalizedSpace
ENTRY_POINT: 05b7a1d0
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


/* WARNING: Removing unreachable block (ram,0x05b7b00c) */
/* WARNING: Removing unreachable block (ram,0x05b7ad6c) */
/* WARNING: Removing unreachable block (ram,0x05b7afac) */
/* WARNING: Removing unreachable block (ram,0x05b7aab4) */
/* WARNING: Removing unreachable block (ram,0x05b7aea4) */
/* WARNING: Removing unreachable block (ram,0x05b7aec8) */
/* WARNING: Removing unreachable block (ram,0x05b7b05c) */

void UnityEngine_VFX_VFXTimeSpaceHelper__GetEventNormalizedSpace(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  char cVar16;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
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
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar7 = (long *)thunk_FUN_02d709fc(param_1,0);
    if (*(int *)(*(long *)(unaff_x20 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_0501fa14(plVar7);
    if ((uVar8 & 1) == 0) {
      uVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      lVar9 = in_stack_000000c0;
      if ((uVar5 >> 1 & 1) == 0) {
        lVar9 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar9 + 0x20) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_Dispose__
        ;
        thunk_FUN_02dd37b4();
        uVar10 = thunk_FUN_0606f5c0(unaff_x25,0);
        if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        thunk_FUN_02dd37b4();
        if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_MoveNext__;
        thunk_FUN_02dd37b4();
        plVar7 = (long *)thunk_FUN_02d709fc(in_stack_00000008,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        if (*(uint *)(lVar9 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar9 + 0x38) = uVar10;
        thunk_FUN_02dd37b4();
        if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_Dispose__;
        thunk_FUN_02dd37b4();
        uVar10 = FUN_04e8e3a4(lVar9,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0601ea80(uVar10,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(lVar9,0,0);
        if ((uVar8 & 1) == 0) {
          if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(int *)(in_stack_000000c0 + 0x2c) == 1) {
            lVar9 = *unaff_x23;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar9 = *unaff_x23;
            }
            bVar1 = **(byte **)(lVar9 + 0xb8);
            bVar4 = FUN_05b7fe20();
            **(byte **)(*unaff_x23 + 0xb8) = bVar1 | bVar4 & 1;
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
        uVar10 = thunk_FUN_0606f5c0(unaff_x25,0);
        if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        in_stack_00000048 =
             CONCAT44(in_stack_00000048._4_4_,*(undefined4 *)(in_stack_000000c0 + 0x2c));
        uVar15 = thunk_FUN_02d9d164(*(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                                    ,&stack0x00000048);
        uVar15 = System_Char__System_IConvertible_ToSByte
                           (*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Current__
                            ,uVar15,0);
        uVar10 = FUN_04e8e29c(*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_Dispose__
                              ,uVar10,*(undefined8 *)PTR_DAT_06760790,uVar15,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0601ea80(uVar10,0);
      }
    }
    else {
      lVar9 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,9);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x20) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_MoveNext__
      ;
      thunk_FUN_02dd37b4();
      uVar10 = thunk_FUN_0606f5c0(unaff_x25,0);
      if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x28) = uVar10;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x30) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_RTHandle[]>_MoveNext__;
      thunk_FUN_02dd37b4();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (*(uint *)(lVar9 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x38) = uVar10;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x40) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<int>>_get_Current__
      ;
      thunk_FUN_02dd37b4();
      uVar10 = thunk_FUN_0606f5c0();
      if (*(uint *)(lVar9 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x48) = uVar10;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar9 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x50) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_MoveNext__
      ;
      thunk_FUN_02dd37b4();
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = (**(code **)(*unaff_x28 + 0x1b8))();
      if (*(uint *)(lVar9 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x58) = uVar10;
      thunk_FUN_02dd37b4();
      if (*(uint *)(lVar9 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar9 + 0x60) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<Volume>>_get_Current__
      ;
      thunk_FUN_02dd37b4();
      uVar10 = FUN_04e8e3a4(lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0601ea80(uVar10,0);
    }
LAB_05b7a634:
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
          lVar9 = FUN_059e6a0c(0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_059e0fc4(lVar9);
          if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_039d1780(&stack0x00000048,*(long *)(lVar9 + 0x10),
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
        unaff_x25 = FUN_03aac1c4();
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(unaff_x25,0,0);
        if ((uVar8 & 1) == 0) break;
        unaff_x29 = 1;
      }
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar8 = FUN_060664f4(unaff_x25,0);
    } while ((uVar8 & 1) == 0);
    FUN_0335c1c4(unaff_x25,&stack0x000000c0,
                 *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    lVar9 = in_stack_000000c0;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    param_1 = (long *)FUN_05b7bbe4(unaff_x25,lVar9);
  } while( true );
LAB_05b7a700:
  uVar8 = FUN_04a516c4(&stack0x000000a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                      );
  lVar3 = in_stack_000000b8;
  if ((uVar8 & 1) == 0) {
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
      uVar10 = FUN_059efb34(0);
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_059e6b48(uVar10);
      if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02dbd7b4();
      }
      FUN_060a5608(&stack0x000000d8,uVar10,0);
      FUN_060a54b8(&stack0x000000d8,0);
      FUN_059efc74(uVar10,0);
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
  uVar8 = FUN_059e0b14(in_stack_000000b8,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7feec();
    if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_059e69a8(0);
    FUN_0602ea18(uVar10,uVar10,0);
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
  lVar11 = FUN_05b7bccc(*(undefined8 *)(in_stack_00000008 + 0x138));
  uVar8 = FUN_059e0b14(lVar3,0);
  if ((uVar8 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(long *)(lVar11 + 0x1a0) = lVar3;
    thunk_FUN_02dd37b4(lVar11 + 0x1a0,lVar3);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b80090(lVar11,&stack0x00000098);
    FUN_059e1888(lVar9,lVar3);
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
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar11 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar8 = FUN_059e0b14(*(long *)(lVar11 + 0x1a0),0);
  uStack0000000000000088 = 1;
  if ((uVar8 & 1) != 0) {
    uStack0000000000000088 = 2;
  }
  if (*(long *)(lVar11 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar8 = FUN_059e0b14(*(long *)(lVar11 + 0x1a0),0);
  if ((uVar8 & 1) == 0) {
    uStack000000000000008c = 1;
  }
  else {
    if (*(long *)(lVar11 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uStack000000000000008c = FUN_059e21f8(*(long *)(lVar11 + 0x1a0),0);
  }
  if (*(long *)(lVar11 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  in_stack_00000090 = *(uint *)(*(long *)(lVar11 + 0x1a0) + 0x24);
  if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0637e2bc();
  lVar12 = *unaff_x23;
  bVar1 = *(byte *)(lVar11 + 0x192);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *unaff_x23;
  }
  *(byte *)(lVar11 + 0x192) = **(byte **)(lVar12 + 0xb8) | bVar1;
  uVar8 = FUN_059e0b14(lVar3,0);
  uVar5 = uStack0000000000000040;
  if ((uVar8 & 1) != 0) {
    uVar5 = FUN_059e4c34(lVar3,0);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar12 = FUN_05b6a66c();
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((uVar5 & *(char *)(lVar12 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
    cVar16 = '\0';
  }
  else {
    uVar10 = FUN_0601dad4();
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,0,0);
    if (((uVar8 & 1) == 0) ||
       ((iVar6 = FUN_0601cdec(), iVar6 != 1 && (iVar6 = FUN_0601cdec(), iVar6 != 8))))
    goto LAB_05b7aa44;
    cVar16 = *(char *)(lVar11 + 0x18e);
  }
  uVar10 = in_stack_000000d8;
  *(char *)(lVar11 + 0x195) = cVar16;
  *(byte *)(lVar11 + 0x1ad) = bStack0000000000000044 & 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b7ca84(uVar10,lVar11);
  if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b82b68(&stack0x00000070,0);
  uVar8 = FUN_059e0b14(lVar3,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b889ac();
  }
  lVar11 = in_stack_00000098;
  if (unaff_w22 != -1) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      uVar10 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      iVar6 = 0;
      uVar8 = (ulong)in_stack_00000090;
      do {
        lVar12 = FUN_03aac1c4();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar13 = FUN_060664f4(lVar12,0);
        if ((uVar13 & 1) != 0) {
          FUN_0335c1c4(lVar12,&stack0x00000068,
                       *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
          lVar14 = in_stack_00000068;
          if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar13 = FUN_0606a004(lVar14,0,0);
          lVar14 = in_stack_00000068;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar14 = FUN_05b7bbe4(lVar12,lVar14);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar14 = FUN_05b7bccc(*(undefined8 *)(lVar14 + 0x138));
            uVar13 = FUN_059e0b14(lVar3,0);
            if ((uVar13 & 1) != 0) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(long *)(lVar14 + 0x1a0) = lVar3;
              thunk_FUN_02dd37b4(lVar14 + 0x1a0,lVar3);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b80090(lVar14,&stack0x00000098);
            }
            lVar2 = in_stack_00000068;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b7c248(lVar12,lVar2,0,lVar14);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(long *)(lVar14 + 0xd8) = lVar12;
            thunk_FUN_02dd37b4((long *)(lVar14 + 0xd8),lVar12);
            *(undefined8 *)(lVar14 + 0x230) = unaff_x19;
            thunk_FUN_02dd37b4(lVar14 + 0x230);
            if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar15 = FUN_05b67a80(in_stack_00000068,0);
            FUN_05b7feec(uVar15,lVar11);
            in_stack_00000048 = 0;
            in_stack_00000050 = 0;
            FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar12,0);
            in_stack_00000078 = in_stack_00000050;
            in_stack_00000070 = in_stack_00000048;
            if (*(int *)(*(long *)
                          UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar8;
            FUN_0637e2bc(lVar12,uVar10,in_stack_00000028,0);
            lVar2 = in_stack_00000068;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b7b3a4(lVar12,lVar2);
            FUN_05b7c248(lVar12,in_stack_00000068,unaff_w22 == iVar6,lVar14);
            *(bool *)(lVar14 + 0x195) = cVar16 != '\0';
            *(byte *)(lVar14 + 0x1ad) = bStack0000000000000044 & 1;
            FUN_059e1888(lVar9,*(undefined8 *)(lVar14 + 0x1a0),lVar12,0);
            FUN_05b7ca84(in_stack_000000d8,lVar14);
            if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05b82b68(&stack0x00000070,0);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x21 + 0x18));
    }
  }
  goto LAB_05b7a700;
}


