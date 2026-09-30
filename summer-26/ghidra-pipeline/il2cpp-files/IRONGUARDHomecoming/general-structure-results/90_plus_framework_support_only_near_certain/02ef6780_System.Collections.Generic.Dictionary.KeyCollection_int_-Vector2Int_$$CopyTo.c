/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<int,-Vector2Int>$$CopyTo
ENTRY_POINT: 02ef6780
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02ef6c04) */
/* WARNING: Removing unreachable block (ram,0x02ef6cd8) */

undefined8
System_Collections_Generic_Dictionary_KeyCollection<int,_Vector2Int>__CopyTo
          (undefined8 param_1,long param_2,long *param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  undefined1 *__s;
  long unaff_x26;
  int iVar13;
  long unaff_x29;
  undefined1 auVar14 [16];
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((DAT_04831929 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831929 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_2 + 0x20) == 0) {
    if (param_3 == (long *)0x0) {
LAB_02ef6cd4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar8 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_02ef68d0;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_3,lVar5,0);
FUN_02ef68d0:
    plVar7 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar7;
    lVar5 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ef6930;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar5,0);
LAB_02ef6930:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      iVar12 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar8 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02ef6c14;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar5,0);
LAB_02ef6c14:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar12 = 1;
    }
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02ef6c80;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ef6c80:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    iVar13 = 0;
  }
  else {
    uVar2 = FUN_039dcc94(*(undefined4 *)(param_2 + 0x24),0);
    uVar11 = (ulong)uVar2;
    if ((int)uVar2 < 0x65) {
      uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
      if (uVar2 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = &stack0x00000000 + -(uVar11 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar11);
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb20(lVar5,__s,uVar2,0);
    }
    else {
      uVar4 = FUN_01f08890(*(undefined8 *)
                            Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                           uVar11);
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb58(lVar5,uVar4,uVar11,0);
    }
    if (param_3 == (long *)0x0) goto LAB_02ef6cd4;
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ef6a4c;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_3,lVar8,0);
LAB_02ef6a4c:
    plVar7 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
    iVar13 = 0;
    iVar12 = 0;
LAB_02ef6a64:
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar7;
      lVar8 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02ef6ab4;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02ef6ab4:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) == 0) break;
      lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02ef6b2c;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02ef6b2c:
      auVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar3 = FUN_02ef5ba8(param_2,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar3) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar5,iVar3,0);
        if ((uVar11 & 1) == 0) {
          FUN_039dcb94(lVar5,iVar3,0);
          iVar13 = iVar13 + 1;
        }
        goto LAB_02ef6a64;
      }
      iVar12 = iVar12 + 1;
    } while ((param_4 & 1) == 0);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02ef6bf4;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ef6bf4:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar12,iVar13);
}


