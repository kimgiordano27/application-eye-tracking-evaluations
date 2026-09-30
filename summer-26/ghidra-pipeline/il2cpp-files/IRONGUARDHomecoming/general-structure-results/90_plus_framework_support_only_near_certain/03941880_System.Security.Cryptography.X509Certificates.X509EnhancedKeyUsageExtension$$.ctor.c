/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension$$.ctor
ENTRY_POINT: 03941880
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

long System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension___ctor
               (undefined8 *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long *unaff_x23;
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
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  do {
    FUN_030f2380(param_2,*param_1);
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *unaff_x19 = param_2;
    thunk_FUN_01f51358(unaff_x19,param_2);
    (**(code **)(*unaff_x26 + 0x448))();
    while( true ) {
      cVar1 = (**(code **)(*unaff_x26 + 0x498))();
      if (cVar1 != '\x01') break;
      (**(code **)(*unaff_x26 + 0x4f8))();
      lVar4 = *unaff_x19;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar9 = *unaff_x24;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = in_stack_00000058;
        thunk_FUN_01f51358(puVar8);
      }
      else {
        FUN_030f2bb4(lVar4,in_stack_00000058,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    (**(code **)(*unaff_x26 + 0x458))();
LAB_039416f8:
    while( true ) {
      while( true ) {
        while( true ) {
          while ((uVar2 = (**(code **)(*unaff_x26 + 0x498))(), (uVar2 & 0xff) < 0x10 &&
                 ((unaff_w22 << (ulong)(uVar2 & 0x1f) & 0xa100U) != 0))) {
            if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*unaff_x23 != 0) {
              if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar4 = *(long *)(in_stack_00000020 + 0x10);
              lVar7 = *(long *)StringLiteral_3923;
              *(int *)(in_stack_00000020 + 0x1c) = *(int *)(in_stack_00000020 + 0x1c) + 1;
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar2 = *(uint *)(in_stack_00000020 + 0x18);
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(in_stack_00000020 + 0x18) = uVar2 + 1;
                plVar5 = (long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
                *plVar5 = unaff_x28;
                thunk_FUN_01f51358(plVar5,unaff_x28);
              }
              else {
                FUN_030f2bb4(in_stack_00000020,unaff_x28,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
            unaff_w27 = unaff_w27 + 1;
            if (*(int *)(unaff_x20 + 0x18) <= unaff_w27) {
              if (in_stack_00000018 == (long *)0x0) goto LAB_03941c4c;
              lVar4 = *in_stack_00000018;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar3 == 0) goto LAB_03941c24;
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_03941c0c;
            }
            uVar6 = FUN_030f28e4(unaff_x20,unaff_w27,
                                 *(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
            plVar5 = (long *)FUN_03426d90(0);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x240));
            if (lVar4 == 0) {
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
            unaff_x28 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3926);
            FUN_0391b098(unaff_x28,0);
            (**(code **)(*unaff_x26 + 0x608))();
            cVar1 = (**(code **)(*unaff_x26 + 0x498))();
            if (cVar1 == '\x0f') {
              (**(code **)(*unaff_x26 + 0x5e8))();
            }
            in_stack_00000028 = (undefined8 *)(unaff_x28 + 0x40);
            in_stack_00000030 = (undefined8 *)(unaff_x28 + 0x38);
            in_stack_00000038 = (undefined8 *)(unaff_x28 + 0x28);
            unaff_x19 = (long *)(unaff_x28 + 0x20);
            unaff_x23 = (long *)(unaff_x28 + 0x18);
          }
          if (in_stack_00000068 != 0) break;
          in_stack_00000050 = (undefined1)uVar2;
          in_stack_00000040 =
               *(undefined8 *)
                Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
          ;
          in_stack_00000048 = 0xffffffffffffffff;
          uVar6 = FUN_0359ff90(&stack0x00000040,0);
          uVar6 = FUN_0340ebc0(*(undefined8 *)
                                Method_System_Linq_Enumerable_Select<ControlConnection,_ControlOutput>__
                               ,uVar6,*(undefined8 *)StringLiteral_3929,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ed64(uVar6,0);
          (**(code **)(*unaff_x26 + 0x5e8))();
        }
        uVar3 = FUN_0340e080(in_stack_00000068,
                             *(undefined8 *)Method_System_Globalization_CompareInfo_GetHashCode__,3,
                             0);
        if ((uVar3 & 1) == 0) break;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*unaff_x26 + 0x4f8))();
      }
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_0340e080(in_stack_00000068,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                           ,3,0);
      if ((uVar3 & 1) == 0) break;
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*unaff_x26 + 0x538))();
      *(int *)(unaff_x28 + 0x10) = unaff_w22;
    }
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3919,3,0);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_0340e080(in_stack_00000068,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                           ,3,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar5 + 0x198))();
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *in_stack_00000038 = uVar6;
        thunk_FUN_01f51358();
        *(undefined4 *)(unaff_x28 + 0x10) = 0;
        goto LAB_039416f8;
      }
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3920,3,0);
      if ((uVar3 & 1) == 0) {
        if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_0340e080(in_stack_00000068,*(undefined8 *)StringLiteral_3921,3,0);
        if ((uVar3 & 1) == 0) {
          uVar6 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3927,in_stack_00000068,
                               *(undefined8 *)StringLiteral_3928,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ed64(uVar6,0);
          (**(code **)(*unaff_x26 + 0x5e8))();
          goto LAB_039416f8;
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar5 + 0x198))();
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *in_stack_00000028 = uVar6;
        thunk_FUN_01f51358();
      }
      else {
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar5 + 0x198))();
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *in_stack_00000030 = uVar6;
        thunk_FUN_01f51358();
      }
      *(undefined4 *)(unaff_x28 + 0x10) = 2;
      goto LAB_039416f8;
    }
    param_2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    param_1 = (undefined8 *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_03941c0c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03941c40;
    }
  }
LAB_03941c24:
  puVar8 = (undefined8 *)
           FUN_01ecb238(in_stack_00000018,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03941c40:
  (*(code *)*puVar8)(in_stack_00000018,puVar8[1]);
LAB_03941c4c:
  if (in_stack_00000010 != (long *)0x0) {
    lVar4 = *in_stack_00000010;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_03941ca8;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(in_stack_00000010,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
FUN_03941ca8:
    (*(code *)*puVar8)(in_stack_00000010,puVar8[1]);
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar4 = *in_stack_00000000;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03941d10;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(in_stack_00000000,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03941d10:
    (*(code *)*puVar8)(in_stack_00000000,puVar8[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar4 = *in_stack_00000008;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03941d78;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03941d78:
    (*(code *)*puVar8)(in_stack_00000008,puVar8[1]);
  }
  return in_stack_00000020;
}


