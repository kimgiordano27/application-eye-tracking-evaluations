/*
FUNCTION_NAME: UnityEngine.ClassLibraryInitializer.<>c$$<InitAssemblyRedirections>b__2_0
ENTRY_POINT: 03f6fc1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_20;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03f6fa98) */
/* WARNING: Removing unreachable block (ram,0x03f6ff28) */
/* WARNING: Removing unreachable block (ram,0x03f6fe28) */

void UnityEngine_ClassLibraryInitializer_<>c__<InitAssemblyRedirections>b__2_0
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long lVar8;
  long unaff_x28;
  int in_stack_00000000;
  long *in_stack_00000008;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto code_r0x03f6fc4c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
code_r0x03f6fc4c:
  (*(code *)*puVar3)();
  if (unaff_x28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (in_stack_00000000 == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    lVar8 = *plVar4;
    __cxa_end_catch();
    do {
      if (unaff_x25 != (long *)0x0) {
        lVar5 = *unaff_x25;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f6fbd8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(unaff_x25,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03f6fbd8:
        (*(code *)*puVar3)(unaff_x25,puVar3[1]);
      }
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(lVar8);
      }
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f6f664;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*unaff_x22,0);
LAB_03f6f664:
      uVar6 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        lVar8 = 0;
        goto code_r0x03f6fd2c;
      }
      lVar8 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_045810f0) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto FUN_03f6f6cc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*(long *)PTR_DAT_045810f0,0);
FUN_03f6f6cc:
      uVar1 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      if (*(int *)(*(long *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_03f6cc30(uVar1);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_5819) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f6f758;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)StringLiteral_5819,0);
LAB_03f6f758:
      unaff_x25 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6f76c:
      lVar8 = *unaff_x25;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03f6f7b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x22,0);
LAB_03f6f7b8:
      uVar6 = (*(code *)*puVar3)(unaff_x25,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        lVar8 = *unaff_x25;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_5820) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f6f81c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x25,*(long *)StringLiteral_5820,0);
LAB_03f6f81c:
        plVar4 = (long *)(*(code *)*puVar3)(unaff_x25,puVar3[1]);
        uVar1 = *(undefined8 *)PTR_DAT_04581188;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar1 = FUN_03579868(uVar1,0);
        uVar1 = FUN_03595430(plVar4,uVar1,0,0);
        plVar2 = (long *)FUN_022e50c4(uVar1,*(undefined8 *)PTR_DAT_04581170);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04581178) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f6f8f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)PTR_DAT_04581178,0);
LAB_03f6f8f4:
        plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_03f6f908:
        lVar8 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03f6f954;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x22,0);
LAB_03f6f954:
        uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar6 & 1) != 0) {
          lVar8 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03f6f9b0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x23,0);
LAB_03f6f9b0:
          lVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(undefined8 *)(lVar8 + 0x10);
          uVar6 = FUN_02b6b4d8();
          if ((uVar6 & 1) == 0) {
            FUN_02b6b2e4();
          }
          else {
            uVar1 = FUN_0340f2f0(*unaff_x24,uVar1,plVar4,0);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403f2cc(uVar1,0);
          }
          goto LAB_03f6f908;
        }
        if (plVar2 != (long *)0x0) {
          lVar8 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03f6fa88;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar2,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_03f6fa88:
          (*(code *)*puVar3)(plVar2,puVar3[1]);
        }
        goto LAB_03f6f76c;
      }
      lVar8 = 0;
    } while( true );
  }
  if (unaff_x25 != (long *)0x0) {
    lVar8 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x03f6fe18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
code_r0x03f6fe18:
    (*(code *)*puVar3)();
  }
  if (in_stack_00000000 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar8 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03f6ff10;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(in_stack_00000008,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x03f6ff10:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
code_r0x03f6fd2c:
  if (in_stack_00000008 != (long *)0x0) {
    lVar5 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f6fd84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03f6fd84:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar8);
}


