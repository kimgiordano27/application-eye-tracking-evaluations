/*
FUNCTION_NAME: FUN_02efb7a8
ENTRY_POINT: 02efb7a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02efbacc) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_02efb7a8(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong __n;
  void *__src;
  undefined8 *puVar9;
  void *__s;
  long lVar10;
  undefined8 *apuStack_80 [2];
  char local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04831934 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831934 = 1;
  }
  lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x98) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar7);
  puVar9 = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)puVar9 - uVar7);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *(long *)(lVar10 + 0x38);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar10) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02efb8bc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02efb8bc:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02efb924;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02efb924:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          lVar10 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02efb9a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar10 = FUN_01ecb238(plVar5,lVar10,0);
LAB_02efb9a0:
    lVar10 = *(long *)(lVar10 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar5,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar9,__s,__n);
    lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    apuStack_80[1] = puVar9;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x98) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar9;
    }
    puVar4 = *(undefined8 **)(lVar10 + 0x188);
    (*(code *)puVar4[2])(*puVar4,puVar4,param_1,apuStack_80 + 1,local_6c);
  } while (local_6c[0] != '\0');
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02efba80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02efba80:
    (*(code *)*puVar9)(plVar5,puVar9[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return (uVar3 ^ 1) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


