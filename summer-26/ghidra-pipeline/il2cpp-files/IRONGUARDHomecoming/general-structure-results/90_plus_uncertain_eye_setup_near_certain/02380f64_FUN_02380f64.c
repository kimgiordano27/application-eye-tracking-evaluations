/*
FUNCTION_NAME: FUN_02380f64
ENTRY_POINT: 02380f64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02381278) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02380f64(long param_1,long *param_2,long param_3)

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
  undefined8 *apuStack_80 [2];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
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
  __src = (void *)((long)apuStack_80 - uVar6);
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
        goto LAB_02381078;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar4,0);
LAB_02381078:
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
          goto LAB_023810e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_023810e0:
    uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_02381238;
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0)
      goto 
      System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
      ;
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
          goto LAB_02381154;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(plVar9,lVar4,0);
LAB_02381154:
    lVar4 = *(long *)(lVar4 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar8,__s,__n);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    apuStack_80[1] = puVar8;
    if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar8;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
    (*(code *)puVar3[2])(*puVar3,puVar3,param_1,apuStack_80 + 1,auStack_6c);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0238122c;
    }
  }

  System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
  :
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0238122c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_02381238:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


