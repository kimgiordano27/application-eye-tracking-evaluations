/*
FUNCTION_NAME: System.Array$$IndexOf<X509ChainStatus>
ENTRY_POINT: 022efce4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x022f00d4) */
/* WARNING: Type propagation algorithm not settling */

uint System_Array__IndexOf<X509ChainStatus>
               (long *param_1,undefined8 *******param_2,long *param_3,long param_4)

{
  undefined8 *******__src;
  void *__src_00;
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong __n;
  void *__src_01;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *__dest;
  long lStack_40;
  void *pvStack_38;
  undefined8 *******pppppppuStack_30;
  undefined8 *******pppppppuStack_28;
  void *pvStack_20;
  undefined8 *puStack_18;
  char acStack_c [4];
  long lStack_8;
  
  lVar6 = tpidr_el0;
  lStack_8 = *(long *)(lVar6 + 0x28);
  lVar10 = *(long *)(param_4 + 0x38);
  pppppppuStack_30 = param_2;
  pppppppuStack_28 = param_2;
  if (lVar10 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar10 = *(long *)(param_4 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_4);
      lVar10 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x40) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src_01 = (void *)((long)&lStack_40 - uVar7);
  puVar9 = (undefined8 *)((long)__src_01 - uVar7);
  __dest = (undefined8 *)((long)puVar9 - uVar7);
  pvStack_38 = (void *)((long)__dest - uVar7);
  memset(pvStack_38,0,__n);
  if (param_3 == (long *)0x0) {
    param_3 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))();
  }
  if (param_1 == (long *)0x0) {
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar4 = FUN_03971094(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_4);
  }
  lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  lVar5 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar10) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022efe08;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar10,0);
LAB_022efe08:
  lStack_40 = lVar6;
  plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022efe74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_022efe74:
    uVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      break;
    }
    lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar10 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          lVar6 = lVar10 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022efeec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_01ecb238(plVar3,lVar6,0);
LAB_022efeec:
    lVar6 = *(long *)(lVar6 + 8);
    pvStack_20 = __src_01;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,&pvStack_20,__src_01);
    __src_00 = pvStack_38;
    memcpy(pvStack_38,__src_01,__n);
    memcpy(puVar9,__src_00,__n);
    plVar11 = *(long **)(param_4 + 0x38);
    __src = pppppppuStack_30;
    if (-1 < *(int *)(plVar11[8] + 0x28)) {
      __src = &pppppppuStack_28;
    }
    memcpy(__dest,__src,__n);
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar11;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
      plVar11 = *(long **)(param_4 + 0x38);
    }
    puVar2 = puVar9;
    puVar12 = __dest;
    if (-1 < *(int *)(plVar11[8] + 0x28)) {
      puVar2 = (undefined8 *)*puVar9;
      puVar12 = (undefined8 *)*__dest;
    }
    lVar10 = *param_3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          lVar6 = lVar10 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022effd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_01ecb238(param_3,lVar6,0);
LAB_022effd8:
    lVar6 = *(long *)(lVar6 + 8);
    pvStack_20 = puVar2;
    puStack_18 = puVar12;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_3,&pvStack_20,acStack_c);
  } while (acStack_c[0] == '\0');
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022f0068;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022f0068:
    (*(code *)*puVar9)(plVar3,puVar9[1]);
  }
  if (*(long *)(lStack_40 + 0x28) == lStack_8) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


