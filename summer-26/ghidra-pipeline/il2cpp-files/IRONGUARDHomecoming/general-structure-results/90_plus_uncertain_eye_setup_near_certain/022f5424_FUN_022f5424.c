/*
FUNCTION_NAME: FUN_022f5424
ENTRY_POINT: 022f5424
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022f5778) */
/* WARNING: Removing unreachable block (ram,0x022f5820) */

void FUN_022f5424(long *param_1,int param_2,void *param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  int *__src;
  void *__s;
  long lVar10;
  int *local_80;
  int *piStack_78;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)(param_4 + 0x38);
  if (lVar10 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar10 = *(long *)(param_4 + 0x38);
    if (lVar10 == 0) {
      FUN_01ecafa0(param_4);
      lVar10 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x18) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (int *)((long)&local_80 - uVar8);
  __s = (void *)((long)__src - uVar8);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar6 = FUN_03971094(uVar6,0);
LAB_022f5814:
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  plVar4 = (long *)thunk_FUN_01f116d0(param_1,lVar10);
  if (plVar4 == (long *)0x0) {
    if (param_2 < 0) {
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      uVar6 = FUN_039710f0(uVar6,0);
      goto LAB_022f5814;
    }
    lVar10 = **(long **)(param_4 + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022f55ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_1,lVar10,0);
LAB_022f55ec:
    plVar4 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_022f5658;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_022f5658:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar6 = FUN_039710f0(uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,param_4);
      }
      bVar1 = param_2 != 0;
      param_2 = param_2 + -1;
    } while (bVar1);
    lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          lVar10 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_022f56d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar10 = FUN_01ecb238(plVar4,lVar10,0);
LAB_022f56d4:
    lVar10 = *(long *)(lVar10 + 8);
    local_80 = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&local_80,__src);
    memcpy(__s,__src,__n);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_022f5760;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022f5760:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    memcpy(__src,__s,__n);
  }
  else {
    lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    local_6c = param_2;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          lVar10 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_022f55bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar10 = FUN_01ecb238(plVar4,lVar10,0);
LAB_022f55bc:
    local_80 = &local_6c;
    lVar10 = *(long *)(lVar10 + 8);
    piStack_78 = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&local_80,__src);
  }
  memcpy(param_3,__src,__n);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


