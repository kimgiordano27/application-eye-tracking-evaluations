/*
FUNCTION_NAME: UnityEngine.UI.SetPropertyUtility$$SetStruct<SpriteState>
ENTRY_POINT: 022fac78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x022fb158) */

void UnityEngine_UI_SetPropertyUtility__SetStruct<SpriteState>
               (long *param_1,void *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong __n;
  int *__src;
  ulong uVar9;
  void *__s;
  long lVar10;
  void *__s_00;
  int iVar11;
  int *piStack_20;
  int *piStack_18;
  int iStack_c;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(param_3 + 0x38);
  if (lVar10 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar10 = *(long *)(param_3 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_3);
      lVar10 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x28) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = (int *)((long)&piStack_20 - uVar9);
  __s_00 = (void *)((long)__src - uVar9);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar9);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar6 = FUN_03971094(uVar6,0);
    goto LAB_022fb14c;
  }
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  plVar4 = (long *)thunk_FUN_01f116d0(param_1,lVar10);
  if (plVar4 == (long *)0x0) {
    lVar10 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022faec4;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar10,0);
LAB_022faec4:
    plVar4 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022faf2c;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_022faf2c:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      iVar11 = 6;
      iVar3 = 6;
    }
    else {
      do {
        lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar10) {
              lVar10 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
              goto LAB_022fafa0;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar9 != 0);
        }
        lVar10 = FUN_01ecb238(plVar4,lVar10,0);
LAB_022fafa0:
        lVar10 = *(long *)(lVar10 + 8);
        piStack_20 = __src;
        (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&piStack_20,__src);
        memcpy(__s_00,__src,__n);
        lVar10 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_022fb018;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_022fb018:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      } while ((uVar9 & 1) != 0);
      memcpy(__src,__s_00,__n);
      memcpy(__s,__src,__n);
      iVar11 = 9;
      iVar3 = 9;
    }
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022fb0b8;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022fb0b8:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      iVar3 = iVar11;
    }
    if (iVar3 != 9) {
      if ((iVar3 != 6) && (iVar3 != 0)) goto LAB_022fb108;
      goto LAB_022fb0dc;
    }
    memcpy(__src,__s,__n);
  }
  else {
    lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022fae18;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar10,0);
LAB_022fae18:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 < 1) {
LAB_022fb0dc:
      uVar6 = FUN_03971224(0);
LAB_022fb14c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,param_3);
    }
    lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    iStack_c = iVar3 + -1;
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          lVar10 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022fae94;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    lVar10 = FUN_01ecb238(plVar4,lVar10,0);
LAB_022fae94:
    piStack_20 = &iStack_c;
    lVar10 = *(long *)(lVar10 + 8);
    piStack_18 = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&piStack_20,__src);
  }
  memcpy(param_2,__src,__n);
LAB_022fb108:
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


