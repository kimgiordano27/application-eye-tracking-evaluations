/*
FUNCTION_NAME: FUN_022efccc
ENTRY_POINT: 022efccc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x022f00d4) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_022efccc(long *param_1,undefined8 *******param_2,long *param_3,long param_4)

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
  long local_a0;
  void *local_98;
  undefined8 *******local_90;
  undefined8 *******pppppppuStack_88;
  void *local_80;
  undefined8 *puStack_78;
  char local_6c [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar10 = *(long *)(param_4 + 0x38);
  local_90 = param_2;
  pppppppuStack_88 = param_2;
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
  __src_01 = (void *)((long)&local_a0 - uVar7);
  puVar9 = (undefined8 *)((long)__src_01 - uVar7);
  __dest = (undefined8 *)((long)puVar9 - uVar7);
  local_98 = (void *)((long)__dest - uVar7);
  memset(local_98,0,__n);
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
  local_a0 = lVar6;
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
    local_80 = __src_01;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,&local_80,__src_01);
    __src_00 = local_98;
    memcpy(local_98,__src_01,__n);
    memcpy(puVar9,__src_00,__n);
    plVar11 = *(long **)(param_4 + 0x38);
    __src = local_90;
    if (-1 < *(int *)(plVar11[8] + 0x28)) {
      __src = &pppppppuStack_88;
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
    local_80 = puVar2;
    puStack_78 = puVar12;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_3,&local_80,local_6c);
  } while (local_6c[0] == '\0');
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
  if (*(long *)(local_a0 + 0x28) == local_68) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


