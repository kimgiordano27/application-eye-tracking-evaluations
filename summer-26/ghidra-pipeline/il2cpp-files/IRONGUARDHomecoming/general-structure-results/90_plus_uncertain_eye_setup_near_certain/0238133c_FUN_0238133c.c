/*
FUNCTION_NAME: FUN_0238133c
ENTRY_POINT: 0238133c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0238179c) */

void FUN_0238133c(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong __n;
  code *pcVar9;
  void *__src;
  undefined8 *puVar10;
  void *__s;
  long lVar11;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)(param_3 + 0x38);
  if (lVar11 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar11 = *(long *)(param_3 + 0x38);
    if (lVar11 == 0) {
      FUN_01ecafa0(param_3);
      lVar11 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x38) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_70 - uVar7);
  puVar10 = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)puVar10 - uVar7);
  memset(__s,0,__n);
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44();
  }
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)) {
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
        lVar6 = *param_1;
        bVar1 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11))
      {
        lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        pcVar9 = (code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
          lVar6 = *param_1;
          bVar1 = *(byte *)(lVar6 + 0x130);
        }
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)
           ) {
          (*pcVar9)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
          goto LAB_023816b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_1);
    }
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar11) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02381490;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_02381490:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023814f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_023814f8:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_023816b8;
      lVar11 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 == 0) goto LAB_0238168c;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar11) {
          lVar11 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0238156c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar11 = FUN_01ecb238(plVar5,lVar11,0);
LAB_0238156c:
    lVar11 = *(long *)(lVar11 + 8);
    local_70 = __src;
    (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_70,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar10,__s,__n);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(param_3 + 0x38);
    lVar11 = *(long *)(lVar6 + 0x40);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
      lVar6 = *(long *)(param_3 + 0x38);
    }
    puVar4 = puVar10;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*puVar10;
    }
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar11) {
          lVar11 = lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138;
          goto LAB_0238162c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar11 = FUN_01ecb238(param_1,lVar11,2);
LAB_0238162c:
    lVar11 = *(long *)(lVar11 + 8);
    local_70 = puVar4;
    (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,param_1,&local_70,puVar4);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_023816a8;
    }
  }
LAB_0238168c:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar5,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023816a8:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
LAB_023816b8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


