/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<TMP_TextProcessingStack<WordWrapState>>
ENTRY_POINT: 02384228
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02384588) */

void System_Array__InternalArray__ICollection_Add<TMP_TextProcessingStack<WordWrapState>>
               (long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong __n;
  void *__src;
  undefined8 *puVar8;
  void *__s;
  long *plVar9;
  void *pvStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  plVar9 = *(long **)(param_3 + 0x38);
  if (plVar9 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar9 = *(long **)(param_3 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar9 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar9[4] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&pvStack_10 - uVar6);
  puVar8 = (undefined8 *)((long)__src - uVar6);
  __s = (void *)((long)puVar8 - uVar6);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02384324;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_02384324:
  plVar9 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0238438c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0238438c:
    uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_02384548;
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02384520;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02384400;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(plVar9,lVar4,0);
LAB_02384400:
    lVar4 = *(long *)(lVar4 + 8);
    pvStack_10 = __src;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,&pvStack_10,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar8,__s,__n);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(param_3 + 0x38);
    lVar4 = *(long *)(lVar5 + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
      lVar5 = *(long *)(param_3 + 0x38);
    }
    puVar3 = puVar8;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*puVar8;
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138;
          goto LAB_023844c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(param_1,lVar4,2);
LAB_023844c0:
    lVar4 = *(long *)(lVar4 + 8);
    pvStack_10 = puVar3;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,param_1,&pvStack_10,puVar3);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0238453c;
    }
  }
LAB_02384520:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0238453c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_02384548:
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


