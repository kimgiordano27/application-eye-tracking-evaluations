/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainStatus$$set_StatusInformation
ENTRY_POINT: 0394162c
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

long System_Security_Cryptography_X509Certificates_X509ChainStatus__set_StatusInformation(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  code *in_x9;
  long lVar11;
  int *piVar12;
  int unaff_w22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
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
  
  do {
    (*in_x9)();
    (**(code **)(*unaff_x25 + 0x358))();
    (**(code **)(*unaff_x25 + 0x208))();
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3926);
    FUN_0391b098(lVar3,0);
    (**(code **)(*unaff_x26 + 0x608))();
    cVar1 = (**(code **)(*unaff_x26 + 0x498))();
    if (cVar1 == '\x0f') {
      (**(code **)(*unaff_x26 + 0x5e8))();
    }
    plVar8 = (long *)(lVar3 + 0x20);
LAB_039416f8:
    uVar2 = (**(code **)(*unaff_x26 + 0x498))();
    if ((0xf < (uVar2 & 0xff)) || ((unaff_w22 << (ulong)(uVar2 & 0x1f) & 0xa100U) == 0)) {
      if (in_stack_00000068 == 0) {
        in_stack_00000050 = (undefined1)uVar2;
        in_stack_00000040 =
             *(undefined8 *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        in_stack_00000048 = 0xffffffffffffffff;
        uVar7 = FUN_0359ff90(&stack0x00000040,0);
        uVar7 = FUN_0340ebc0(*(undefined8 *)
                              Method_System_Linq_Enumerable_Select<ControlConnection,_ControlOutput>__
                             ,uVar7,*(undefined8 *)StringLiteral_3929,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ed64(uVar7,0);
        (**(code **)(*unaff_x26 + 0x5e8))();
      }
      else {
        uVar4 = FUN_0340e080(in_stack_00000068,
                             *(undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__,3,
                             0);
        if ((uVar4 & 1) == 0) {
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_0340e080(in_stack_00000068,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                               ,3,0);
          if ((uVar4 & 1) == 0) {
            if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3919,3,0);
            if ((uVar4 & 1) == 0) {
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar4 = FUN_0340e080(in_stack_00000068,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                   ,3,0);
              if ((uVar4 & 1) != 0) {
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar6 = (long *)FUN_023f9e30(*(undefined8 *)
                                               Method_System_Linq_Enumerable_ToArray<ValueOutput>__)
                ;
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = (**(code **)(*plVar6 + 0x198))();
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar3 + 0x28) = uVar7;
                thunk_FUN_01f51358();
                *(undefined4 *)(lVar3 + 0x10) = 0;
                goto LAB_039416f8;
              }
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar4 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3920,3,0);
              if ((uVar4 & 1) == 0) {
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar4 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3921,3,0);
                if ((uVar4 & 1) == 0) {
                  uVar7 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3927,in_stack_00000068,
                                       *(undefined8 *)StringLiteral_3928,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_0403ed64(uVar7,0);
                  (**(code **)(*unaff_x26 + 0x5e8))();
                  goto LAB_039416f8;
                }
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar6 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = (**(code **)(*plVar6 + 0x198))();
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar3 + 0x40) = uVar7;
                thunk_FUN_01f51358();
              }
              else {
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar6 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = (**(code **)(*plVar6 + 0x198))();
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(undefined8 *)(lVar3 + 0x38) = uVar7;
                thunk_FUN_01f51358();
              }
              *(undefined4 *)(lVar3 + 0x10) = 2;
              goto LAB_039416f8;
            }
            lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__
                                      );
            FUN_030f2380(lVar5,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *plVar8 = lVar5;
            thunk_FUN_01f51358(plVar8,lVar5);
            (**(code **)(*unaff_x26 + 0x448))();
            while( true ) {
              cVar1 = (**(code **)(*unaff_x26 + 0x498))();
              if (cVar1 != '\x01') break;
              (**(code **)(*unaff_x26 + 0x4f8))();
              lVar5 = *plVar8;
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar9 = *(long *)(lVar5 + 0x10);
              lVar11 = *unaff_x24;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *puVar10 = in_stack_00000058;
                thunk_FUN_01f51358(puVar10);
              }
              else {
                FUN_030f2bb4(lVar5,in_stack_00000058,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
            (**(code **)(*unaff_x26 + 0x458))();
          }
          else {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*unaff_x26 + 0x538))();
            *(int *)(lVar3 + 0x10) = unaff_w22;
          }
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*unaff_x26 + 0x4f8))();
        }
      }
      goto LAB_039416f8;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(in_stack_00000020 + 0x10);
      lVar9 = *(long *)StringLiteral_3923;
      *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(in_stack_00000020 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(in_stack_00000020 + 0x18) = uVar2 + 1;
        plVar8 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        *plVar8 = lVar3;
        thunk_FUN_01f51358(plVar8,lVar3);
      }
      else {
        FUN_030f2bb4(in_stack_00000020,lVar3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    unaff_w27 = unaff_w27 + 1;
    if (*(int *)(unaff_x28 + 0x18) <= unaff_w27) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_03941c4c;
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03941c24;
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    uVar7 = FUN_030f28e4(unaff_x28,unaff_w27,
                         *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    plVar8 = (long *)FUN_03426d90(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = (**(code **)(*plVar8 + 0x238))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x240));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*unaff_x25 + 0x318))();
    in_x9 = *(code **)(*unaff_x25 + 0x208);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03941c40;
    }
  }
LAB_03941c24:
  puVar10 = (undefined8 *)
            FUN_01ecb238(in_stack_00000018,
                         *(long *)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0
                        );
LAB_03941c40:
  (*(code *)*puVar10)(in_stack_00000018,puVar10[1]);
LAB_03941c4c:
  if (in_stack_00000010 != (long *)0x0) {
    lVar3 = *in_stack_00000010;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto FUN_03941ca8;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(in_stack_00000010,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_03941ca8:
    (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar3 = *in_stack_00000000;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03941d10;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(in_stack_00000000,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d10:
    (*(code *)*puVar10)(in_stack_00000000,puVar10[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar3 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03941d78;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(in_stack_00000008,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03941d78:
    (*(code *)*puVar10)(in_stack_00000008,puVar10[1]);
  }
  return in_stack_00000020;
}


