/*
FUNCTION_NAME: FUN_022f7f98
ENTRY_POINT: 022f7f98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x022f8414) */

void FUN_022f7f98(long *param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  ulong __n;
  undefined4 *__src;
  ulong uVar8;
  void *__s;
  void *__s_00;
  long lVar9;
  int iVar10;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(param_3 + 0x38);
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar9 = *(long *)(param_3 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_3);
      lVar9 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x28) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (undefined4 *)((long)&local_80 - uVar8);
  __s_00 = (void *)((long)__src - uVar8);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar8);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar5 = FUN_03971094(uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_3);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  plVar3 = (long *)thunk_FUN_01f116d0(param_1,lVar9);
  if (plVar3 == (long *)0x0) {
    lVar9 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022f81ec;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_1,lVar9,0);
LAB_022f81ec:
    plVar3 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022f8254;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_022f8254:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      iVar10 = 6;
      iVar2 = 6;
    }
    else {
      lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            lVar9 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_022f82d8;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      lVar9 = FUN_01ecb238(plVar3,lVar9,0);
LAB_022f82d8:
      lVar9 = *(long *)(lVar9 + 8);
      local_80 = __src;
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar3,&local_80,__src);
      memcpy(__s_00,__src,__n);
      iVar10 = 8;
      iVar2 = 8;
    }
    if (plVar3 != (long *)0x0) {
      lVar9 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_022f8364;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022f8364:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      iVar2 = iVar10;
    }
    if (iVar2 == 0) {
LAB_022f8388:
      memset(__s,0,__n);
      __s_00 = __s;
    }
    else if (iVar2 != 8) {
      if (iVar2 != 6) goto LAB_022f83b8;
      goto LAB_022f8388;
    }
    memcpy(__src,__s_00,__n);
  }
  else {
    lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022f8140;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar9,0);
LAB_022f8140:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 < 1) goto LAB_022f8388;
    lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    local_6c = 0;
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          lVar9 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_022f81bc;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    lVar9 = FUN_01ecb238(plVar3,lVar9,0);
LAB_022f81bc:
    local_80 = &local_6c;
    lVar9 = *(long *)(lVar9 + 8);
    puStack_78 = __src;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar3,&local_80,__src);
  }
  memcpy(param_2,__src,__n);
LAB_022f83b8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


