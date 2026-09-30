/*
FUNCTION_NAME: UnityEngine.AddComponentMenu$$.ctor
ENTRY_POINT: 03f6f668
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03f6fbe8) */
/* WARNING: Removing unreachable block (ram,0x03f6fa98) */
/* WARNING: Removing unreachable block (ram,0x03f6fe44) */

void UnityEngine_AddComponentMenu___ctor(code *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000008;
  
  while (uVar1 = (*param_1)(in_stack_00000008,param_3), (uVar1 & 1) != 0) {
    lVar7 = *in_stack_00000008;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_045810f0) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_03f6f6cc;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*(long *)PTR_DAT_045810f0,0);
FUN_03f6f6cc:
    uVar3 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03f6cc30(uVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar4;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_5819) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6f758;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)StringLiteral_5819,0);
LAB_03f6f758:
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f6f76c:
    lVar7 = *plVar4;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6f7b8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x22,0);
LAB_03f6f7b8:
    uVar1 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar1 & 1) != 0) {
      lVar7 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_5820) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6f81c;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)StringLiteral_5820,0);
LAB_03f6f81c:
      plVar5 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      uVar3 = *(undefined8 *)PTR_DAT_04581188;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03579868(uVar3,0);
      uVar3 = FUN_03595430(plVar5,uVar3,0,0);
      plVar6 = (long *)FUN_022e50c4(uVar3,*(undefined8 *)PTR_DAT_04581170);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04581178) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6f8f4;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_04581178,0);
LAB_03f6f8f4:
      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6f908:
      lVar7 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6f954;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x22,0);
LAB_03f6f954:
      uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if ((uVar1 & 1) != 0) {
        lVar7 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f6f9b0;
            }
            uVar1 = uVar1 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x23,0);
LAB_03f6f9b0:
        lVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = *(undefined8 *)(lVar7 + 0x10);
        uVar1 = FUN_02b6b4d8();
        if ((uVar1 & 1) == 0) {
          FUN_02b6b2e4();
        }
        else {
          uVar3 = FUN_0340f2f0(*unaff_x24,uVar3,plVar5,0);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar3,0);
        }
        goto LAB_03f6f908;
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03f6fa88;
            }
            uVar1 = uVar1 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03f6fa88:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
      }
      goto LAB_03f6f76c;
    }
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6fbd8;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6fbd8:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *in_stack_00000008;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6f664;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*unaff_x22,0);
LAB_03f6f664:
    param_1 = (code *)*puVar2;
    param_3 = puVar2[1];
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar7 = *in_stack_00000008;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6fd84;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03f6fd84:
    (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  }
  return;
}


