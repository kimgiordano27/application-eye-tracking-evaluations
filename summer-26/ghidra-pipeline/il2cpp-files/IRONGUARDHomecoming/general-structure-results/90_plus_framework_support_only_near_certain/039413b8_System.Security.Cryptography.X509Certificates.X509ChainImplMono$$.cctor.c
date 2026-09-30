/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$.cctor
ENTRY_POINT: 039413b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03941e2c) */
/* WARNING: Removing unreachable block (ram,0x03941e34) */
/* WARNING: Removing unreachable block (ram,0x03941e08) */
/* WARNING: Removing unreachable block (ram,0x03941e3c) */

long System_Security_Cryptography_X509Certificates_X509ChainImplMono___cctor(void)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined8 *unaff_x20;
  int iVar22;
  long *plVar23;
  long unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  lVar4 = thunk_FUN_01f117cc();
  FUN_030f2380(lVar4,*unaff_x20);
  if (*(int *)(unaff_x28 + 0x18) < 1) {
    iVar21 = 0;
  }
  else {
    iVar22 = 0;
    iVar20 = 0;
    do {
      lVar5 = FUN_030f28e4();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar22 = iVar22 + 1;
      iVar21 = *(int *)(lVar5 + 0x10) * 2;
      if (iVar21 <= iVar20) {
        iVar21 = iVar20;
      }
      iVar20 = iVar21;
    } while (iVar22 < *(int *)(unaff_x28 + 0x18));
  }
  puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                               );
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
  }
  plVar7 = (long *)FUN_03910c7c(iVar21,0);
  if (*(int *)(*(long *)StringLiteral_3560 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3558);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)FUN_039109dc(plVar7[3],0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar23 = (long *)plVar8[3];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_029dad5c(plVar6,*(undefined8 *)
                               Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
  if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar23[4] = lVar5;
  thunk_FUN_01f51358();
  (**(code **)(*plVar23 + 0x438))(plVar23,plVar10,*(undefined8 *)(*plVar23 + 0x440));
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8();
  lVar5 = FUN_038d7894(plVar23,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar5 + 0x50) = plVar9[3];
  thunk_FUN_01f51358();
  puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  if (0 < *(int *)(unaff_x28 + 0x18)) {
    iVar21 = 0;
    do {
      uVar11 = FUN_030f28e4(unaff_x28,iVar21,
                            *(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
      plVar12 = (long *)FUN_03426d90(0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = (**(code **)(*plVar12 + 0x238))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x240));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar10 + 0x318))
                (plVar10,(long)*(int *)(lVar5 + 0x18),*(undefined8 *)(*plVar10 + 800));
      (**(code **)(*plVar10 + 0x208))(plVar10,0,*(undefined8 *)(*plVar10 + 0x210));
      (**(code **)(*plVar10 + 0x358))
                (plVar10,lVar5,0,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*plVar10 + 0x360));
      (**(code **)(*plVar10 + 0x208))(plVar10,0,*(undefined8 *)(*plVar10 + 0x210));
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3926);
      FUN_0391b098(lVar5,0);
      (**(code **)(*plVar23 + 0x608))(plVar23,*(undefined8 *)(*plVar23 + 0x610));
      cVar2 = (**(code **)(*plVar23 + 0x498))
                        (plVar23,&stack0x00000068,*(undefined8 *)(*plVar23 + 0x4a0));
      if (cVar2 == '\x0f') {
        (**(code **)(*plVar23 + 0x5e8))(plVar23,*(undefined8 *)(*plVar23 + 0x5f0));
      }
      plVar12 = (long *)(lVar5 + 0x20);
LAB_039416f8:
      uVar3 = (**(code **)(*plVar23 + 0x498))
                        (plVar23,&stack0x00000068,*(undefined8 *)(*plVar23 + 0x4a0));
      if ((0xf < (uVar3 & 0xff)) || ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) == 0)) {
        if (in_stack_00000068 == 0) {
          in_stack_00000050 = (undefined1)uVar3;
          in_stack_00000040 =
               *(undefined8 *)
                Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
          ;
          in_stack_00000048 = 0xffffffffffffffff;
          uVar11 = FUN_0359ff90(&stack0x00000040,0);
          uVar11 = FUN_0340ebc0(*(undefined8 *)
                                 Method_System_Linq_Enumerable_Select<ControlConnection,_ControlOutput>__
                                ,uVar11,*(undefined8 *)StringLiteral_3929,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ed64(uVar11,0);
          (**(code **)(*plVar23 + 0x5e8))(plVar23,*(undefined8 *)(*plVar23 + 0x5f0));
        }
        else {
          uVar13 = FUN_0340e080(in_stack_00000068,
                                *(undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__
                                ,3,0);
          if ((uVar13 & 1) == 0) {
            if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar13 = FUN_0340e080(in_stack_00000068,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                                  ,3,0);
            if ((uVar13 & 1) == 0) {
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar13 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3919,3,0);
              if ((uVar13 & 1) == 0) {
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = FUN_0340e080(in_stack_00000068,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                      ,3,0);
                if ((uVar13 & 1) != 0) {
                  if (*(int *)(*(long *)
                                Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  plVar15 = (long *)FUN_023f9e30(*(undefined8 *)
                                                  Method_System_Linq_Enumerable_ToArray<ValueOutput>__
                                                );
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar11 = (**(code **)(*plVar15 + 0x198))
                                     (plVar15,plVar23,*(undefined8 *)(*plVar15 + 0x1a0));
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  *(undefined8 *)(lVar5 + 0x28) = uVar11;
                  thunk_FUN_01f51358();
                  *(undefined4 *)(lVar5 + 0x10) = 0;
                  goto LAB_039416f8;
                }
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3920,3,0);
                if ((uVar13 & 1) == 0) {
                  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar13 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3921,3,0);
                  if ((uVar13 & 1) == 0) {
                    uVar11 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3927,in_stack_00000068,
                                          *(undefined8 *)StringLiteral_3928,0);
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    FUN_0403ed64(uVar11,0);
                    (**(code **)(*plVar23 + 0x5e8))(plVar23,*(undefined8 *)(*plVar23 + 0x5f0));
                    goto LAB_039416f8;
                  }
                  if (*(int *)(*(long *)
                                Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  plVar15 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar11 = (**(code **)(*plVar15 + 0x198))
                                     (plVar15,plVar23,*(undefined8 *)(*plVar15 + 0x1a0));
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  *(undefined8 *)(lVar5 + 0x40) = uVar11;
                  thunk_FUN_01f51358();
                }
                else {
                  if (*(int *)(*(long *)
                                Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  plVar15 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar11 = (**(code **)(*plVar15 + 0x198))
                                     (plVar15,plVar23,*(undefined8 *)(*plVar15 + 0x1a0));
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  *(undefined8 *)(lVar5 + 0x38) = uVar11;
                  thunk_FUN_01f51358();
                }
                *(undefined4 *)(lVar5 + 0x10) = 2;
                goto LAB_039416f8;
              }
              lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__
                                         );
              FUN_030f2380(lVar14,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              *plVar12 = lVar14;
              thunk_FUN_01f51358(plVar12,lVar14);
              (**(code **)(*plVar23 + 0x448))
                        (plVar23,&stack0x00000060,*(undefined8 *)(*plVar23 + 0x450));
              while( true ) {
                cVar2 = (**(code **)(*plVar23 + 0x498))
                                  (plVar23,&stack0x00000068,*(undefined8 *)(*plVar23 + 0x4a0));
                lVar14 = *plVar23;
                if (cVar2 != '\x01') break;
                (**(code **)(lVar14 + 0x4f8))
                          (plVar23,&stack0x00000058,*(undefined8 *)(lVar14 + 0x500));
                lVar14 = *plVar12;
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar16 = *(long *)(lVar14 + 0x10);
                lVar18 = *(long *)puVar1;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar3 = *(uint *)(lVar14 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                  puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar17 = in_stack_00000058;
                  thunk_FUN_01f51358(puVar17);
                }
                else {
                  FUN_030f2bb4(lVar14,in_stack_00000058,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              (**(code **)(lVar14 + 0x458))(plVar23,*(undefined8 *)(lVar14 + 0x460));
            }
            else {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              (**(code **)(*plVar23 + 0x538))
                        (plVar23,lVar5 + 0x30,*(undefined8 *)(*plVar23 + 0x540));
              *(undefined4 *)(lVar5 + 0x10) = 1;
            }
          }
          else {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar23 + 0x4f8))
                      (plVar23,(long *)(lVar5 + 0x18),*(undefined8 *)(*plVar23 + 0x500));
          }
        }
        goto LAB_039416f8;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar4 + 0x10);
        lVar16 = *(long *)StringLiteral_3923;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          plVar12 = (long *)(lVar14 + (long)(int)uVar3 * 8 + 0x20);
          *plVar12 = lVar5;
          thunk_FUN_01f51358(plVar12,lVar5);
        }
        else {
          FUN_030f2bb4(lVar4,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(unaff_x28 + 0x18));
    if (plVar9 == (long *)0x0) goto LAB_03941c4c;
  }
  lVar5 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar13 != 0) {
    piVar19 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar17 = (undefined8 *)(lVar5 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_03941c40;
      }
      uVar13 = uVar13 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar13 != 0);
  }
  puVar17 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03941c40:
  (*(code *)*puVar17)(plVar9,puVar17[1]);
LAB_03941c4c:
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar17 = (undefined8 *)(lVar5 + (long)*piVar19 * 0x10 + 0x138);
          goto FUN_03941ca8;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_01ecb238(plVar8,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_03941ca8:
    (*(code *)*puVar17)(plVar8,puVar17[1]);
  }
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar17 = (undefined8 *)(lVar5 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03941d10;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_01ecb238(plVar7,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d10:
    (*(code *)*puVar17)(plVar7,puVar17[1]);
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar17 = (undefined8 *)(lVar5 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03941d78;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_01ecb238(plVar6,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d78:
    (*(code *)*puVar17)(plVar6,puVar17[1]);
  }
  return lVar4;
}


