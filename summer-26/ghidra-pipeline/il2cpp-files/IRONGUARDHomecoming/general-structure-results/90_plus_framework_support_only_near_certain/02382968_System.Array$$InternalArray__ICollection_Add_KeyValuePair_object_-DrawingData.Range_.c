/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<KeyValuePair<object,-DrawingData.Range>>
ENTRY_POINT: 02382968
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02382c98) */

void System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_DrawingData_Range>>
               (long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  int iVar9;
  long *local_90;
  long local_88;
  undefined8 *local_80;
  int *piStack_78;
  int local_6c;
  long local_68;
  
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  plVar8 = *(long **)(param_3 + 0x38);
  if (plVar8 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar8 = *(long **)(param_3 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar8 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar8[4] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  puVar3 = (undefined8 *)((long)&local_90 - uVar6);
  __dest = (undefined8 *)((long)puVar3 - uVar6);
  __s = (void *)((long)__dest - uVar6);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02382a80;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_02382a80:
  local_90 = param_1;
  plVar8 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02382af4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_02382af4:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_02382c54;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02382c2c;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02382b68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(plVar8,lVar4,0);
LAB_02382b68:
    lVar4 = *(long *)(lVar4 + 8);
    local_80 = puVar3;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar8,&local_80,puVar3);
    memcpy(__s,puVar3,__n);
    memcpy(__dest,__s,__n);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_80 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x28)) {
      local_80 = (undefined8 *)*__dest;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
    piStack_78 = &local_6c;
    local_6c = iVar9;
    (*(code *)puVar2[2])(*puVar2,puVar2,param_2,&local_80,&local_6c);
    iVar9 = iVar9 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_02382c48;
    }
  }
LAB_02382c2c:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02382c48:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_02382c54:
  if (*(long *)(local_88 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_90);
  }
  return;
}


