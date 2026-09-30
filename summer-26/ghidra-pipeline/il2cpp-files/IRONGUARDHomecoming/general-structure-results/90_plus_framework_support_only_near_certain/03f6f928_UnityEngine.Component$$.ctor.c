/*
FUNCTION_NAME: UnityEngine.Component$$.ctor
ENTRY_POINT: 03f6f928
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03f6fbe8) */
/* WARNING: Removing unreachable block (ram,0x03f6fe44) */
/* WARNING: Removing unreachable block (ram,0x03f6fa98) */

void UnityEngine_Component___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  int *in_x10;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 uVar6;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000008;
  
code_r0x03f6f928:
  if ((bool)in_ZR) {
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_03f6f954;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_03f6f938:
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x27,param_3,0);
LAB_03f6f954:
    uVar3 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
    if ((uVar3 & 1) == 0) {
      if (unaff_x27 != (long *)0x0) {
        lVar4 = *unaff_x27;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03f6fa88;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(unaff_x27,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03f6fa88:
        (*(code *)*puVar2)(unaff_x27,puVar2[1]);
      }
      do {
        lVar4 = *unaff_x25;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x22) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03f6f7b8;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x22,0);
LAB_03f6f7b8:
        uVar3 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
        if ((uVar3 & 1) != 0) goto code_r0x03f6f7c8;
        if (unaff_x25 != (long *)0x0) {
          lVar4 = *unaff_x25;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_03f6fbd8;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01ecb238(unaff_x25,
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_03f6fbd8:
          (*(code *)*puVar2)(unaff_x25,puVar2[1]);
        }
        if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *in_stack_00000008;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x22) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03f6f664;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*unaff_x22,0);
LAB_03f6f664:
        uVar3 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
        if ((uVar3 & 1) == 0) {
          if (in_stack_00000008 == (long *)0x0) {
            return;
          }
          lVar4 = *in_stack_00000008;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_03f6fd68;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03f6fd50;
        }
        lVar4 = *in_stack_00000008;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_045810f0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto FUN_03f6f6cc;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*(long *)PTR_DAT_045810f0,0);
FUN_03f6f6cc:
        uVar6 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar1 = (long *)FUN_03f6cc30(uVar6);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *plVar1;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03f6f758;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)StringLiteral_5819,0);
LAB_03f6f758:
        unaff_x25 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      } while( true );
    }
    lVar4 = *unaff_x27;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6f9b0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x27,*unaff_x23,0);
LAB_03f6f9b0:
    lVar4 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    uVar3 = FUN_02b6b4d8();
    if ((uVar3 & 1) == 0) {
      FUN_02b6b2e4();
    }
    else {
      uVar6 = FUN_0340f2f0(*unaff_x24,uVar6,unaff_x28,0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar6,0);
    }
    goto LAB_03f6f908;
  }
  goto LAB_03f6f920;
code_r0x03f6f7c8:
  lVar4 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5820) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03f6f81c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x25,*(long *)StringLiteral_5820,0);
LAB_03f6f81c:
  unaff_x28 = (long *)(*(code *)*puVar2)(unaff_x25,puVar2[1]);
  uVar6 = *(undefined8 *)PTR_DAT_04581188;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  uVar6 = FUN_03595430(unaff_x28,uVar6,0,0);
  plVar1 = (long *)FUN_022e50c4(uVar6,*(undefined8 *)PTR_DAT_04581170);
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*unaff_x28 + 0x2e8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2f0));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar1;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04581178) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03f6f8f4;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)PTR_DAT_04581178,0);
LAB_03f6f8f4:
  unaff_x27 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03f6f908:
  param_1 = *unaff_x27;
  param_3 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x03f6f918;
  goto LAB_03f6f938;
code_r0x03f6f918:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03f6f920:
  in_ZR = *(long *)(in_x10 + -2) == param_3;
  goto code_r0x03f6f928;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
LAB_03f6fd50:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03f6fd84;
    }
  }
LAB_03f6fd68:
  puVar2 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03f6fd84:
  (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  return;
}


