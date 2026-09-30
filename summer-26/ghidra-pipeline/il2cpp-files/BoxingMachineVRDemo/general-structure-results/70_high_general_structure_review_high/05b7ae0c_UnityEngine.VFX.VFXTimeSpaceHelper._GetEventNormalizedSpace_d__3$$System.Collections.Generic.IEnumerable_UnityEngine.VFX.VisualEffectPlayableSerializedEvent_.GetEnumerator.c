/*
FUNCTION_NAME: UnityEngine.VFX.VFXTimeSpaceHelper.<GetEventNormalizedSpace>d__3$$System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.GetEnumerator
ENTRY_POINT: 05b7ae0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05b7b00c) */
/* WARNING: Removing unreachable block (ram,0x05b7b368) */
/* WARNING: Removing unreachable block (ram,0x05b7b398) */
/* WARNING: Removing unreachable block (ram,0x05b7ad6c) */
/* WARNING: Removing unreachable block (ram,0x05b7afe8) */

void UnityEngine_VFX_VFXTimeSpaceHelper_<GetEventNormalizedSpace>d__3__System_Collections_Generic_IEnumerable<UnityEngine_VFX_VisualEffectPlayableSerializedEvent>_GetEnumerator
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  char cVar12;
  undefined8 unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long lVar13;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar14;
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
  
  bVar3 = false;
  if (param_2 == 1) {
    plVar11 = (long *)__cxa_begin_catch();
    lVar13 = *plVar11;
    __cxa_end_catch();
    iVar5 = 0;
    while( true ) {
      if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b82b68(&stack0x00000070,0);
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae0(lVar13);
      }
      if ((iVar5 != 0x22) && (iVar5 != 0)) break;
      uVar6 = FUN_059e0b14(unaff_x26,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<DataRow>_Dispose__ +
                    0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b889ac();
      }
      lVar13 = in_stack_00000098;
      if (unaff_w22 != -1) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (0 < *(int *)(unaff_x21 + 0x18)) {
          uVar14 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
          iVar5 = 0;
          uVar6 = (ulong)in_stack_00000090;
          do {
            lVar7 = FUN_03aac1c4();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar8 = FUN_060664f4(lVar7,0);
            if ((uVar8 & 1) != 0) {
              FUN_0335c1c4(lVar7,&stack0x00000068,
                           *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
              lVar9 = in_stack_00000068;
              if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar8 = FUN_0606a004(lVar9,0,0);
              lVar9 = in_stack_00000068;
              if ((uVar8 & 1) != 0) {
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                lVar9 = FUN_05b7bbe4(lVar7,lVar9);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                lVar9 = FUN_05b7bccc(*(undefined8 *)(lVar9 + 0x138));
                uVar8 = FUN_059e0b14(unaff_x26,0);
                if ((uVar8 & 1) != 0) {
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  *(long *)(lVar9 + 0x1a0) = unaff_x26;
                  thunk_FUN_02dd37b4(lVar9 + 0x1a0,unaff_x26);
                  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_05b80090(lVar9,&stack0x00000098);
                }
                lVar2 = in_stack_00000068;
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b7c248(lVar7,lVar2,0,lVar9);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                *(long *)(lVar9 + 0xd8) = lVar7;
                thunk_FUN_02dd37b4((long *)(lVar9 + 0xd8),lVar7);
                *(undefined8 *)(lVar9 + 0x230) = unaff_x19;
                thunk_FUN_02dd37b4(lVar9 + 0x230);
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                uVar10 = FUN_05b67a80(in_stack_00000068,0);
                FUN_05b7feec(uVar10,lVar13);
                in_stack_00000048 = 0;
                in_stack_00000050 = 0;
                FUN_05b82a4c(&stack0x00000048,in_stack_000000d8,lVar7,0);
                in_stack_00000078 = in_stack_00000050;
                in_stack_00000070 = in_stack_00000048;
                if (*(int *)(*(long *)
                              UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | uVar6;
                FUN_0637e2bc(lVar7,uVar14,in_stack_00000028,0);
                lVar2 = in_stack_00000068;
                if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b7b3a4(lVar7,lVar2);
                FUN_05b7c248(lVar7,in_stack_00000068,unaff_w22 == iVar5,lVar9);
                *(bool *)(lVar9 + 0x195) = bVar3;
                *(undefined1 *)(lVar9 + 0x1ad) = uStack0000000000000044;
                FUN_059e1888(in_stack_00000038,*(undefined8 *)(lVar9 + 0x1a0),lVar7,0);
                FUN_05b7ca84(in_stack_000000d8,lVar9);
                if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_05b82b68(&stack0x00000070,0);
              }
            }
            iVar5 = iVar5 + 1;
            unaff_x28 = in_stack_00000008;
          } while (iVar5 < *(int *)(unaff_x21 + 0x18));
        }
      }
      uVar6 = FUN_04a516c4(&stack0x000000a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_MoveNext__
                          );
      unaff_x26 = in_stack_000000b8;
      if ((uVar6 & 1) == 0) {
        lVar13 = 0;
        iVar5 = 0x28;
        goto LAB_05b7aea8;
      }
      in_stack_00000098 = in_stack_000000b8;
      if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = FUN_059e0b14(in_stack_000000b8,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b7feec();
        if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_059e69a8(0);
        FUN_0602ea18(uVar14,uVar14,0);
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
      lVar13 = FUN_05b7bccc(*(undefined8 *)(unaff_x28 + 0x138));
      uVar6 = FUN_059e0b14(unaff_x26,0);
      if ((uVar6 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(long *)(lVar13 + 0x1a0) = unaff_x26;
        thunk_FUN_02dd37b4(lVar13 + 0x1a0,unaff_x26);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b80090(lVar13,&stack0x00000098);
        FUN_059e1888(in_stack_00000038,unaff_x26);
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
      uVar6 = FUN_059e0b14(*(long *)(lVar13 + 0x1a0),0);
      uStack0000000000000088 = 1;
      if ((uVar6 & 1) != 0) {
        uStack0000000000000088 = 2;
      }
      if (*(long *)(lVar13 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = FUN_059e0b14(*(long *)(lVar13 + 0x1a0),0);
      if ((uVar6 & 1) == 0) {
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
      if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0637e2bc();
      lVar7 = *unaff_x23;
      bVar1 = *(byte *)(lVar13 + 0x192);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *unaff_x23;
      }
      *(byte *)(lVar13 + 0x192) = **(byte **)(lVar7 + 0xb8) | bVar1;
      uVar6 = FUN_059e0b14(unaff_x26,0);
      uVar4 = uStack0000000000000040;
      if ((uVar6 & 1) != 0) {
        uVar4 = FUN_059e4c34(unaff_x26,0);
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar7 = FUN_05b6a66c();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if ((uVar4 & *(char *)(lVar7 + 0x4d) != '\0') == 0) {
LAB_05b7aa44:
        cVar12 = '\0';
      }
      else {
        uVar14 = FUN_0601dad4();
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = UnityEngine_Font__add_textureRebuilt(uVar14,0,0);
        if (((uVar6 & 1) == 0) ||
           ((iVar5 = FUN_0601cdec(), iVar5 != 1 && (iVar5 = FUN_0601cdec(), iVar5 != 8))))
        goto LAB_05b7aa44;
        cVar12 = *(char *)(lVar13 + 0x18e);
      }
      uVar14 = in_stack_000000d8;
      *(char *)(lVar13 + 0x195) = cVar12;
      bVar3 = cVar12 != '\0';
      *(undefined1 *)(lVar13 + 0x1ad) = uStack0000000000000044;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05b7ca84(uVar14,lVar13);
      lVar13 = 0;
      iVar5 = 0x22;
    }
    lVar13 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06769100 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05b82b68(&stack0x00000070,0);
    if (param_2 != 1) {
      FUN_04a516c0(&stack0x000000a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_Dispose__
                  );
      if (param_2 != 1) {
        FUN_05a09978(&stack0x000000d0,0);
                    /* WARNING: Subroutine does not return */
        FUN_02e42304(param_1);
      }
      plVar11 = (long *)__cxa_begin_catch(param_1);
      lVar13 = *plVar11;
      __cxa_end_catch();
      FUN_05a09978(&stack0x000000d0,0);
      if (lVar13 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0(lVar13);
    }
    plVar11 = (long *)__cxa_begin_catch(param_1);
    lVar13 = *plVar11;
    __cxa_end_catch();
    iVar5 = 0;
  }
LAB_05b7aea8:
  FUN_04a516c0(&stack0x000000a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<GraphReference>>_Dispose__
              );
  if (lVar13 == 0) {
    if ((iVar5 == 0x28) || (iVar5 == 0)) {
      if ((in_stack_00000030._4_4_ & 1) != 0) {
        if (*(int *)(*(long *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000089E_PostfixBurstDelegate_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_059efb34(0);
        if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_059e6b48(uVar14);
        if (*(int *)(*(long *)Method_System_Runtime_Serialization_DataNode<bool>__ctor__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_060a5608(&stack0x000000d8,uVar14,0);
        FUN_060a54b8(&stack0x000000d8,0);
        FUN_059efc74(uVar14,0);
      }
      if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_059e6a70(0);
    }
    FUN_05a09978(&stack0x000000d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0(lVar13);
}


