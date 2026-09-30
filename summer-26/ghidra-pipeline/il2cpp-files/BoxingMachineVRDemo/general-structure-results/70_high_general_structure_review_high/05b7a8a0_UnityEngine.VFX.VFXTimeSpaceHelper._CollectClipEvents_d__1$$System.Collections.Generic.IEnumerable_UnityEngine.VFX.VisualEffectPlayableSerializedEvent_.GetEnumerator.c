/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper.<CollectClipEvents>d__1$$System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.GetEnumerator
ENTRY_POINT: 05b7a8a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05b7b05c) */
/* WARNING: Removing unreachable block (ram,0x05b7aab4) */
/* WARNING: Removing unreachable block (ram,0x05b7afac) */
/* WARNING: Removing unreachable block (ram,0x05b7ad6c) */
/* WARNING: Removing unreachable block (ram,0x05b7b00c) */
/* WARNING: Removing unreachable block (ram,0x05b7aec8) */

void UnityEngine_VFX_VFXTimeSpaceHelper_<CollectClipEvents>d__1__System_Collections_Generic_IEnumerable<UnityEngine_VFX_VisualEffectPlayableSerializedEvent>_GetEnumerator
               (long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long in_stack_00000008;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000040;
  undefined1 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  uint in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000b8;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7c248();
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(unaff_x27 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = FUN_059e0b14(*(long *)(unaff_x27 + 0x1a0),0);
    uStack0000000000000088 = 1;
    if ((uVar5 & 1) != 0) {
      uStack0000000000000088 = 2;
    }
    if (*(long *)(unaff_x27 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = FUN_059e0b14(*(long *)(unaff_x27 + 0x1a0),0);
    if ((uVar5 & 1) == 0) {
      uStack000000000000008c = 1;
    }
    else {
      if (*(long *)(unaff_x27 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uStack000000000000008c = FUN_059e21f8(*(long *)(unaff_x27 + 0x1a0),0);
    }
    if (*(long *)(unaff_x27 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_stack_00000090 = *(uint *)(*(long *)(unaff_x27 + 0x1a0) + 0x24);
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0637e2bc();
    lVar6 = *unaff_x23;
    bVar1 = *(byte *)(unaff_x27 + 0x192);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *unaff_x23;
    }
    *(byte *)(unaff_x27 + 0x192) = **(byte **)(lVar6 + 0xb8) | bVar1;
    uVar5 = FUN_059e0b14(unaff_x26,0);
    uVar3 = uStack0000000000000040;
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_059e4c34(unaff_x26,0);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar6 = FUN_05b6a66c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((uVar3 & *(char *)(lVar6 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
      cVar12 = '\0';
    }
    else {
      uVar7 = FUN_0601dad4();
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = UnityEngine_Font__add_textureRebuilt(uVar7,0,0);
      if (((uVar5 & 1) == 0) ||
         ((iVar4 = FUN_0601cdec(), iVar4 != 1 && (iVar4 = FUN_0601cdec(), iVar4 != 8))))
      goto LAB_05b7aa44;
      cVar12 = *(char *)(unaff_x27 + 0x18e);
    }
    uVar7 = in_stack_000000d8;
    *(char *)(unaff_x27 + 0x195) = cVar12;
    *(undefined1 *)(unaff_x27 + 0x1ad) = uStack0000000000000044;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b7ca84(uVar7,unaff_x27);
    if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b82b68(&stack0x00000070,0);
    uVar5 = FUN_059e0b14(unaff_x26,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b889ac();
    }
    lVar6 = in_stack_00000098;
    if (unaff_w22 != -1) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (0 < *(int *)(unaff_x21 + 0x18)) {
        uVar7 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        iVar4 = 0;
        uVar5 = (ulong)in_stack_00000090;
        do {
          lVar8 = FUN_03aac1c4();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar9 = FUN_060664f4(lVar8,0);
          if ((uVar9 & 1) != 0) {
            FUN_0335c1c4(lVar8,&stack0x00000068,
                         *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
            lVar10 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_0606a004(lVar10,0,0);
            lVar10 = in_stack_00000068;
            if ((uVar9 & 1) != 0) {
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              lVar10 = FUN_05b7bbe4(lVar8,lVar10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar10 = FUN_05b7bccc(*(undefined8 *)(lVar10 + 0x138));
              uVar9 = FUN_059e0b14(unaff_x26,0);
              if ((uVar9 & 1) != 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(long *)(lVar10 + 0x1a0) = unaff_x26;
                thunk_FUN_02dd37b4(lVar10 + 0x1a0,unaff_x26);
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b80090(lVar10,&stack0x00000098);
              }
              lVar2 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7c248(lVar8,lVar2,0,lVar10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              *(long *)(lVar10 + 0xd8) = lVar8;
              thunk_FUN_02dd37b4((long *)(lVar10 + 0xd8),lVar8);
              *(undefined8 *)(lVar10 + 0x230) = unaff_x19;
              thunk_FUN_02dd37b4(lVar10 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar11 = FUN_05b67a80(in_stack_00000068,0);
              FUN_05b7feec(uVar11,lVar6);
              in_stack_00000048 = 0;
              in_stack_00000050 = 0;
              FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar8,0);
              in_stack_00000078 = in_stack_00000050;
              in_stack_00000070 = in_stack_00000048;
              if (*(int *)(*(long *)
                            UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar5;
              FUN_0637e2bc(lVar8,uVar7,in_stack_00000028,0);
              lVar2 = in_stack_00000068;
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b7b3a4(lVar8,lVar2);
              FUN_05b7c248(lVar8,in_stack_00000068,unaff_w22 == iVar4,lVar10);
              *(bool *)(lVar10 + 0x195) = cVar12 != '\0';
              *(undefined1 *)(lVar10 + 0x1ad) = uStack0000000000000044;
              FUN_059e1888(in_stack_00000038,*(undefined8 *)(lVar10 + 0x1a0),lVar8,0);
              FUN_05b7ca84(in_stack_000000d8,lVar10);
              if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05b82b68(&stack0x00000070,0);
            }
          }
          iVar4 = iVar4 + 1;
          unaff_x28 = in_stack_00000008;
        } while (iVar4 < *(int *)(unaff_x21 + 0x18));
      }
    }
    uVar5 = FUN_04a516c4(&stack0x000000a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                        );
    unaff_x26 = in_stack_000000b8;
    if ((uVar5 & 1) == 0) {
      FUN_04a516c0(&stack0x000000a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_Dispose__
                  );
      if ((in_stack_00000030._4_4_ & 1) != 0) {
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_059efb34(0);
        if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_059e6b48(uVar7);
        if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_060a5608(&stack0x000000d8,uVar7,0);
        FUN_060a54b8(&stack0x000000d8,0);
        FUN_059efc74(uVar7,0);
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
    uVar5 = FUN_059e0b14(in_stack_000000b8,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b7feec();
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_059e69a8(0);
      FUN_0602ea18(uVar7,uVar7,0);
      in_stack_00000030._4_4_ = 1;
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
    unaff_x27 = FUN_05b7bccc(*(undefined8 *)(unaff_x28 + 0x138));
    uVar5 = FUN_059e0b14(unaff_x26,0);
    if ((uVar5 & 1) != 0) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(long *)(unaff_x27 + 0x1a0) = unaff_x26;
      thunk_FUN_02dd37b4(unaff_x27 + 0x1a0,unaff_x26);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b80090(unaff_x27,&stack0x00000098);
      FUN_059e1888(in_stack_00000038,unaff_x26);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b888dc();
    }
    param_1 = *unaff_x23;
  } while( true );
}


