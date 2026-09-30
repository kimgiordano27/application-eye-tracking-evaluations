/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainPolicy$$get_VerificationFlags
ENTRY_POINT: 039415ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03941e2c) */
/* WARNING: Removing unreachable block (ram,0x03941e34) */
/* WARNING: Removing unreachable block (ram,0x03941e08) */
/* WARNING: Removing unreachable block (ram,0x03941e3c) */

long System_Security_Cryptography_X509Certificates_X509ChainPolicy__get_VerificationFlags(void)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x25;
  long *unaff_x26;
  int iVar14;
  long unaff_x28;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  iVar14 = 0;
  do {
    uVar4 = FUN_030f28e4(unaff_x28,iVar14,
                         *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    plVar5 = (long *)FUN_03426d90(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x240));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*unaff_x25 + 0x318))();
    (**(code **)(*unaff_x25 + 0x208))();
    (**(code **)(*unaff_x25 + 0x358))();
    (**(code **)(*unaff_x25 + 0x208))();
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3926);
    FUN_0391b098(lVar6,0);
    (**(code **)(*unaff_x26 + 0x608))();
    cVar2 = (**(code **)(*unaff_x26 + 0x498))();
    if (cVar2 == '\x0f') {
      (**(code **)(*unaff_x26 + 0x5e8))();
    }
    plVar5 = (long *)(lVar6 + 0x20);
LAB_039416f8:
    uVar3 = (**(code **)(*unaff_x26 + 0x498))();
    if ((0xf < (uVar3 & 0xff)) || ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) == 0)) {
      if (in_stack_00000068 == 0) {
        in_stack_00000050 = (undefined1)uVar3;
        in_stack_00000040 =
             *(undefined8 *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        in_stack_00000048 = 0xffffffffffffffff;
        uVar4 = FUN_0359ff90(&stack0x00000040,0);
        uVar4 = FUN_0340ebc0(*(undefined8 *)
                              Method_System_Linq_Enumerable_Select<ControlConnection,_ControlOutput>__
                             ,uVar4,*(undefined8 *)StringLiteral_3929,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ed64(uVar4,0);
        (**(code **)(*unaff_x26 + 0x5e8))();
      }
      else {
        uVar7 = FUN_0340e080(in_stack_00000068,
                             *(undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__,3,
                             0);
        if ((uVar7 & 1) == 0) {
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = FUN_0340e080(in_stack_00000068,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                               ,3,0);
          if ((uVar7 & 1) == 0) {
            if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3919,3,0);
            if ((uVar7 & 1) == 0) {
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = FUN_0340e080(in_stack_00000068,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                   ,3,0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar9 = (long *)FUN_023f9e30(*(undefined8 *)
                                               Method_System_Linq_Enumerable_ToArray<ValueOutput>__)
                ;
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = (**(code **)(*plVar9 + 0x198))();
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar6 + 0x28) = uVar4;
                thunk_FUN_01f51358();
                *(undefined4 *)(lVar6 + 0x10) = 0;
                goto LAB_039416f8;
              }
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3920,3,0);
              if ((uVar7 & 1) == 0) {
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3921,3,0);
                if ((uVar7 & 1) == 0) {
                  uVar4 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3927,in_stack_00000068,
                                       *(undefined8 *)StringLiteral_3928,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_0403ed64(uVar4,0);
                  (**(code **)(*unaff_x26 + 0x5e8))();
                  goto LAB_039416f8;
                }
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar9 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = (**(code **)(*plVar9 + 0x198))();
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar6 + 0x40) = uVar4;
                thunk_FUN_01f51358();
              }
              else {
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar9 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = (**(code **)(*plVar9 + 0x198))();
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar6 + 0x38) = uVar4;
                thunk_FUN_01f51358();
              }
              *(undefined4 *)(lVar6 + 0x10) = 2;
              goto LAB_039416f8;
            }
            lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__
                                      );
            FUN_030f2380(lVar8,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *plVar5 = lVar8;
            thunk_FUN_01f51358(plVar5,lVar8);
            (**(code **)(*unaff_x26 + 0x448))();
            while( true ) {
              cVar2 = (**(code **)(*unaff_x26 + 0x498))();
              if (cVar2 != '\x01') break;
              (**(code **)(*unaff_x26 + 0x4f8))();
              lVar8 = *plVar5;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar10 = *(long *)(lVar8 + 0x10);
              lVar12 = *(long *)puVar1;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar3 = *(uint *)(lVar8 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                *puVar11 = in_stack_00000058;
                thunk_FUN_01f51358(puVar11);
              }
              else {
                FUN_030f2bb4(lVar8,in_stack_00000058,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
            (**(code **)(*unaff_x26 + 0x458))();
          }
          else {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*unaff_x26 + 0x538))();
            *(undefined4 *)(lVar6 + 0x10) = 1;
          }
        }
        else {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*unaff_x26 + 0x4f8))();
        }
      }
      goto LAB_039416f8;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(in_stack_00000020 + 0x10);
      lVar10 = *(long *)StringLiteral_3923;
      *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = *(uint *)(in_stack_00000020 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(in_stack_00000020 + 0x18) = uVar3 + 1;
        plVar5 = (long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
        *plVar5 = lVar6;
        thunk_FUN_01f51358(plVar5,lVar6);
      }
      else {
        FUN_030f2bb4(in_stack_00000020,lVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < *(int *)(unaff_x28 + 0x18));
  if (in_stack_00000018 != (long *)0x0) {
    lVar6 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03941c40;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(in_stack_00000018,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941c40:
    (*(code *)*puVar11)(in_stack_00000018,puVar11[1]);
  }
  if (in_stack_00000010 != (long *)0x0) {
    lVar6 = *in_stack_00000010;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto FUN_03941ca8;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(in_stack_00000010,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_03941ca8:
    (*(code *)*puVar11)(in_stack_00000010,puVar11[1]);
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar6 = *in_stack_00000000;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03941d10;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(in_stack_00000000,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d10:
    (*(code *)*puVar11)(in_stack_00000000,puVar11[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03941d78;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(in_stack_00000008,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d78:
    (*(code *)*puVar11)(in_stack_00000008,puVar11[1]);
  }
  return in_stack_00000020;
}


