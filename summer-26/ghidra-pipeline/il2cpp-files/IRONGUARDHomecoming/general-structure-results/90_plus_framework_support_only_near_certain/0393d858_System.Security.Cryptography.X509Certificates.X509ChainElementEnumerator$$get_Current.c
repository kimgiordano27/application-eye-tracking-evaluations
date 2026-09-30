/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator$$get_Current
ENTRY_POINT: 0393d858
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0393e32c) */
/* WARNING: Removing unreachable block (ram,0x0393e34c) */
/* WARNING: Removing unreachable block (ram,0x0393dee4) */
/* WARNING: Removing unreachable block (ram,0x0393e340) */
/* WARNING: Removing unreachable block (ram,0x0393e108) */

void System_Security_Cryptography_X509Certificates_X509ChainElementEnumerator__get_Current(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 uVar11;
  long unaff_x25;
  undefined8 uVar12;
  long lVar13;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  uint uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000098;
  
  thunk_FUN_01efb3a4(StringLiteral_3888);
  thunk_FUN_01efb3a4(StringLiteral_2862);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__);
  thunk_FUN_01efb3a4(StringLiteral_3889);
  thunk_FUN_01efb3a4(StringLiteral_3890);
  thunk_FUN_01efb3a4(StringLiteral_3891);
  thunk_FUN_01efb3a4(StringLiteral_3892);
  *(undefined1 *)(unaff_x23 + 0x340) = 1;
  in_stack_00000098 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_3863);
    FUN_034efd20(uVar11,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_3893);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,uVar12);
  }
  if ((unaff_x25 == 0) && ((unaff_x24 & 1) != 0)) {
    unaff_x25 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
    FUN_030f2380(unaff_x25,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
  }
  puVar3 = StringLiteral_2862;
  lVar13 = *(long *)(unaff_x21 + 2);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) &&
     ((*(long *)(unaff_x21 + 0xe) == 0 || (*(int *)(*(long *)(unaff_x21 + 0xe) + 0x18) == 0)))) {
    if (*unaff_x21 == 2) {
      if ((int)*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      cVar1 = *(char *)(lVar13 + 0x20);
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_0391b48c(lVar13,1,0);
      in_stack_00000010 = *(undefined8 *)StringLiteral_3545;
      in_stack_00000018 = -1;
      uStack0000000000000020 = (uint)(cVar1 == '{');
      uVar12 = FUN_0359ff90(&stack0x00000010,0);
      uVar11 = FUN_0340eee0(*(undefined8 *)StringLiteral_3892,uVar12,
                            *(undefined8 *)StringLiteral_3891,uVar11,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar11,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393b0d8();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e72c();
    return;
  }
  if (unaff_x22 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    lVar13 = FUN_029da4a8(*(undefined8 *)
                           Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    unaff_x22 = FUN_029dad5c(lVar13,*(undefined8 *)
                                     Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = FUN_0390b368(unaff_x22,0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_0391cfa8(0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar11,uVar11);
    }
    FUN_0391d334(lVar9,uVar11,0);
    uVar4 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
    if ((uVar4 & 1) == 0) {
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar9,0,0);
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar9,0,0);
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_038d6628(0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      FUN_0391d75c(lVar9,uVar11,0);
    }
    else {
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      puVar2 = StringLiteral_3859;
      lVar7 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar9,*(undefined4 *)(lVar7 + 0x28),0);
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar9,*(undefined4 *)(lVar7 + 0x24),0);
      lVar9 = FUN_0390b368(unaff_x22,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_0390b70c(lVar9,0);
      lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_038d6930(lVar7,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      FUN_0391d75c(lVar9,uVar11,0);
    }
  }
  else {
    lVar13 = 0;
  }
  puVar2 = StringLiteral_3884;
  plVar5 = (long *)thunk_FUN_01f116d0();
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0393dcc8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0393dcc8:
    lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar9 != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = FUN_0390b368(unaff_x22,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d334(lVar7,lVar9,0);
    }
  }
  if ((unaff_x24 & 1) == 0) {
    uVar11 = *(undefined8 *)(unaff_x21 + 8);
    if (*(int *)(*(long *)StringLiteral_3888 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0394efcc(uVar11,0);
    puVar2 = StringLiteral_3886;
    if ((uVar4 & 1) == 0) {
      lVar9 = thunk_FUN_01f116d0(*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)StringLiteral_3886);
      if (lVar9 == 0) {
        if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
        puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03579868(uVar12,0);
        uVar4 = FUN_03583338(uVar11,uVar12,0);
        if ((uVar4 & 1) != 0) {
          lVar9 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar9 + 0x20) =
               *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__;
          thunk_FUN_01f51358();
          if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_0392f420(uVar11);
          if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar9 + 0x28) = uVar11;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)StringLiteral_3890;
          thunk_FUN_01f51358();
          uVar11 = *(undefined8 *)StringLiteral_3885;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03579868(uVar11,0);
          uVar11 = FUN_0392f420();
          if (*(uint *)(lVar9 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar9 + 0x38) = uVar11;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)StringLiteral_3889;
          thunk_FUN_01f51358();
          uVar11 = FUN_0340efe8(lVar9,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar11,0);
        }
      }
      else {
        lVar9 = *(long *)(unaff_x21 + 8);
        if (((lVar9 != unaff_x20) || (*(long *)(unaff_x21 + 0xc) == 0)) ||
           (*(int *)(*(long *)(unaff_x21 + 0xc) + 0x18) < 1)) {
          lVar7 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)puVar2);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *(long *)puVar2;
          plVar5 = (long *)thunk_FUN_01f116d0(lVar9,lVar7);
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0393e218;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_0393e218:
          (*(code *)*puVar6)(&stack0x00000010,plVar5,puVar6[1]);
          in_stack_00000060 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          in_stack_00000068 = in_stack_00000028;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          if (((in_stack_00000018 == 0) || (in_stack_00000048 == 0)) || (in_stack_00000040 == 0)) {
            lVar9 = *(long *)puVar3;
LAB_0393e294:
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar9);
            }
            FUN_0393d6d0();
          }
          else {
            lVar9 = *(long *)puVar3;
            if (in_stack_00000060 == 0) goto LAB_0393e294;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar9);
            }
            FUN_0393d6d0();
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0393e72c();
          goto LAB_0393e19c;
        }
      }
    }
    unaff_x25 = *(long *)(unaff_x21 + 4);
  }
  in_stack_00000098 = unaff_x25;
  if (*unaff_x21 == 2) {
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3887);
    FUN_038efcd0(plVar5,unaff_x22,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03937bf8(plVar8[3],in_stack_00000098);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(unaff_x22 + 0x50) = plVar8[3];
    thunk_FUN_01f51358();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_038f05a8(plVar5,*(undefined8 *)(unaff_x21 + 0xe),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e9c4();
    lVar9 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0393decc;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393decc:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0393e0f0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393e0f0:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  else {
    lVar9 = *(long *)(unaff_x21 + 2);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0393f988();
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0393b0d8();
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0393e72c();
LAB_0393e19c:
  if (lVar13 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814(lVar13,*(undefined8 *)StringLiteral_3883);
  }
  return;
}


