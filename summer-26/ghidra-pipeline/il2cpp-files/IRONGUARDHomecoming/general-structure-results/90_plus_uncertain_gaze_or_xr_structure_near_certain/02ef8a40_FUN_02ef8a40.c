/*
FUNCTION_NAME: FUN_02ef8a40
ENTRY_POINT: 02ef8a40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ef8d8c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02ef8a40(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong __n;
  void *__src;
  undefined8 *puVar11;
  void *__s;
  long lVar12;
  undefined8 *apuStack_80 [2];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_0483192d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483192d = 1;
  }
  lVar12 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar12 + 0x98) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar9);
  puVar11 = (undefined8 *)((long)__src - uVar9);
  __s = (void *)((long)puVar11 - uVar9);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_034efd20(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_3);
  }
  lVar12 = *(long *)(lVar12 + 0x38);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar12) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02ef8b54;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar12,0);
LAB_02ef8b54:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ef8bc4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_02ef8bc4:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          lVar12 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02ef8c3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar12 = FUN_01ecb238(plVar5,lVar12,0);
LAB_02ef8c3c:
    lVar12 = *(long *)(lVar12 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar5,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar11,__s,__n);
    lVar12 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    apuStack_80[1] = puVar11;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x98) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar11;
    }
    puVar4 = *(undefined8 **)(lVar12 + 0xa8);
    (*(code *)puVar4[2])(*puVar4,puVar4,param_1,apuStack_80 + 1,auStack_6c);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_int>__get_Count;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_int>__get_Count:
    (*(code *)*puVar11)(plVar5,puVar11[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


