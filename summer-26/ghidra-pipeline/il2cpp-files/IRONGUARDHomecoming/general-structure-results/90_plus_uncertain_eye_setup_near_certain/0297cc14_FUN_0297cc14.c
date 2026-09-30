/*
FUNCTION_NAME: FUN_0297cc14
ENTRY_POINT: 0297cc14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0297cfcc) */

void FUN_0297cc14(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong __n;
  undefined8 *__dest;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *local_80 [2];
  char local_70;
  undefined7 uStack_6f;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04830cc6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830cc6 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  puVar8 = (undefined8 *)((long)local_80 - uVar6);
  __dest = (undefined8 *)((long)puVar8 - uVar6);
  puVar10 = (undefined8 *)((long)__dest - uVar6);
  pvVar9 = (void *)((long)puVar10 - uVar6);
  memset(pvVar9,0,__n);
  if (param_1 != (long *)0x0) {
    FUN_0422b6c0(param_1,0);
    plVar2 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) +
                                                                     0xc0) + 0x80) + 0x240);
    if (*plVar2 != 0) {
      uVar3 = FUN_0422b208(param_1,0);
      pvVar4 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) +
                                                                       0xc0) + 0x80) + 0x260);
      memcpy(puVar8,pvVar4,__n);
      memcpy(pvVar9,puVar8,__n);
      FUN_0422b27c(param_1,param_1,uVar3,0);
      plVar2 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28))();
      memcpy(__dest,pvVar9,__n);
      pvVar4 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20) +
                                                                       0xc0) + 0x80) + 0x260);
      memcpy(puVar10,pvVar4,__n);
      if (plVar2 == (long *)0x0) goto LAB_0297cfc4;
      local_80[0] = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
        local_80[0] = (undefined8 *)*__dest;
      }
      lVar5 = *(long *)(*plVar2 + 0x1c0);
      local_80[1] = puVar10;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar2,local_80,&local_70);
      if (local_70 == '\0') {
        memcpy(puVar8,pvVar9,__n);
        pvVar9 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20)
                                                                         + 0xc0) + 0x80) + 0x260);
        memcpy(__dest,pvVar9,__n);
        lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
        puVar10 = *(undefined8 **)(lVar5 + 0x50);
        local_80[0] = puVar8;
        if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
          __dest = (undefined8 *)*__dest;
          local_80[0] = (undefined8 *)*puVar8;
        }
        local_80[1] = __dest;
        (*(code *)puVar10[2])(*puVar10,puVar10,0,local_80,&local_70);
        plVar2 = (long *)CONCAT71(uStack_6f,local_70);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_041d4560(plVar2,param_1,0);
        pvVar9 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_2 + 0x20)
                                                                         + 0xc0) + 0x80) + 0x260);
        memcpy(puVar8,pvVar9,__n);
        if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10) + 0x28)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        lVar5 = *(long *)(*param_1 + 0x840);
        local_80[0] = puVar8;
        (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,local_80,puVar8);
        (**(code **)(*param_1 + 0x198))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x1a0));
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0297cf84;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar2,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0297cf84:
        (*(code *)*puVar8)(plVar2,puVar8[1]);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0297cfc4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


