/*
FUNCTION_NAME: UnityEngine.Behaviour$$set_enabled
ENTRY_POINT: 03f6f8a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f6fbe8) */
/* WARNING: Removing unreachable block (ram,0x03f6fe44) */
/* WARNING: Removing unreachable block (ram,0x03f6fa98) */

void UnityEngine_Behaviour__set_enabled(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uVar6;
  long *unaff_x28;
  long *in_stack_00000008;
  
code_r0x03f6f8a4:
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04581178) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03f6f8f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(unaff_x26,*(long *)PTR_DAT_04581178,0);
LAB_03f6f8f4:
  plVar2 = (long *)(*(code *)*puVar1)(unaff_x26,puVar1[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03f6f908:
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03f6f954;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x22,0);
LAB_03f6f954:
  uVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
  if ((uVar4 & 1) != 0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6f9b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x23,0);
LAB_03f6f9b0:
    lVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = FUN_02b6b4d8();
    if ((uVar4 & 1) == 0) {
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
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6fa88;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03f6fa88:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  do {
    lVar3 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6f7b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(unaff_x25,*unaff_x22,0);
LAB_03f6f7b8:
    uVar4 = (*(code *)*puVar1)(unaff_x25,puVar1[1]);
    if ((uVar4 & 1) != 0) break;
    if (unaff_x25 != (long *)0x0) {
      lVar3 = *unaff_x25;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03f6fbd8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(unaff_x25,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6fbd8:
      (*(code *)*puVar1)(unaff_x25,puVar1[1]);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6f664;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*unaff_x22,0);
LAB_03f6f664:
    uVar4 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000008 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03f6fd68;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_03f6fd50;
    }
    lVar3 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_045810f0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_03f6f6cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(in_stack_00000008,*(long *)PTR_DAT_045810f0,0);
FUN_03f6f6cc:
    uVar6 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_03f6cc30(uVar6);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f6f758;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)StringLiteral_5819,0);
LAB_03f6f758:
    unaff_x25 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar3 = *unaff_x25;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5820) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03f6f81c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(unaff_x25,*(long *)StringLiteral_5820,0);
LAB_03f6f81c:
  unaff_x28 = (long *)(*(code *)*puVar1)(unaff_x25,puVar1[1]);
  uVar6 = *(undefined8 *)PTR_DAT_04581188;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  uVar6 = FUN_03595430(unaff_x28,uVar6,0,0);
  unaff_x26 = (long *)FUN_022e50c4(uVar6,*(undefined8 *)PTR_DAT_04581170);
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*unaff_x28 + 0x2e8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2f0));
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_1 = *unaff_x26;
  goto code_r0x03f6f8a4;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03f6fd50:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03f6fd84;
    }
  }
LAB_03f6fd68:
  puVar1 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03f6fd84:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


