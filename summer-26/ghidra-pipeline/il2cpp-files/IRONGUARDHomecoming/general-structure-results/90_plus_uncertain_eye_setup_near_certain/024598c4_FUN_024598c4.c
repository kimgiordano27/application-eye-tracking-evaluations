/*
FUNCTION_NAME: FUN_024598c4
ENTRY_POINT: 024598c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02459c0c) */
/* WARNING: Type propagation algorithm not settling */

long FUN_024598c4(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong __n;
  void *__src;
  undefined8 *puVar10;
  void *__s;
  undefined8 *apuStack_80 [2];
  undefined1 auStack_6c [4];
  long local_68;
  
                    /* try { // try from 024598dc to 025598df has its CatchHandler @ 02459b2c */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(param_2 + 0x38);
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar9 = *(long *)(param_2 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_2);
      lVar9 = *(long *)(param_2 + 0x38);
    }
  }
                    /* try { // try from 02459930 to 02559937 has its CatchHandler @ 02459b50 */
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x38) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar7);
  puVar10 = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)puVar10 - uVar7);
  memset(__s,0,__n);
  lVar9 = *(long *)(lVar9 + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = (**(code **)**(undefined8 **)(param_2 + 0x38))();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02459a08;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar5,0);
LAB_02459a08:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02459a70;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02459a70:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02459bc8;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_02459ba0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02459ae4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar4,lVar5,0);
LAB_02459ae4:
    lVar5 = *(long *)(lVar5 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar4,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar10,__s,__n);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    apuStack_80[1] = puVar10;
    if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0x38) + 0x38) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar10;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x40);
    (*(code *)puVar3[2])(*puVar3,puVar3,lVar9,apuStack_80 + 1,auStack_6c);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02459bbc;
    }
  }
LAB_02459ba0:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar4,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02459bbc:
  (*(code *)*puVar10)(plVar4,puVar10[1]);
LAB_02459bc8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


