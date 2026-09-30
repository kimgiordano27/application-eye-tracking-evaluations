/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<long,-object>$$System.Collections.Generic.ICollection<TKey>.Clear
ENTRY_POINT: 02efb7ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02efbacc) */

uint System_Collections_Generic_Dictionary_KeyCollection<long,_object>__System_Collections_Generic_ICollection<TKey>_Clear
               (void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar10;
  void *__s;
  long lVar11;
  long unaff_x27;
  long unaff_x29;
  
                    /* try { // try from 02efb7f0 to 02ffb7f7 has its CatchHandler @ 02efb80c */
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x22 + 0x934) = 1;
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x98) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar8;
  puVar10 = (undefined8 *)(__src + -uVar8);
  __s = (void *)((long)puVar10 - uVar8);
  memset(__s,0,__n);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)(lVar11 + 0x38);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar11) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02efb8bc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02efb8bc:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efb924;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_02efb924:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar2 & 1) == 0) break;
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) {
          lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02efb9a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar11 = FUN_01ecb238(plVar4,lVar11,0);
LAB_02efb9a0:
    *(undefined1 **)(unaff_x29 + -0x18) = __src;
    lVar11 = *(long *)(lVar11 + 8);
    (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar4,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar10,__s,__n);
    lVar11 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar3 = puVar10;
    if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
      puVar3 = (undefined8 *)*puVar10;
    }
    puVar6 = *(undefined8 **)(lVar11 + 0x188);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar6[2])(uVar5);
  } while (*(char *)(unaff_x29 + -0xc) != '\0');
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efba80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar4,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02efba80:
    (*(code *)*puVar10)(plVar4,puVar10[1]);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return (uVar2 ^ 1) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


