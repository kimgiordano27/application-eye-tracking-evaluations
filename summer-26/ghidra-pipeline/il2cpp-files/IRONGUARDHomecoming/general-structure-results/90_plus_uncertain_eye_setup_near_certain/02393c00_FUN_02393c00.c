/*
FUNCTION_NAME: FUN_02393c00
ENTRY_POINT: 02393c00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02393f8c) */

int FUN_02393c00(long *param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****__src;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  int iVar8;
  long *plVar9;
  void *__s;
  long alStack_a0 [2];
  undefined8 ***local_90;
  undefined8 ***pppuStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  char local_6c [4];
  long local_68;
  
  alStack_a0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_a0[1] + 0x28);
  plVar9 = *(long **)(param_3 + 0x38);
  local_90 = param_2;
  pppuStack_88 = param_2;
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
  puVar3 = (undefined8 *)((long)alStack_a0 - uVar6);
  __dest = (undefined8 *)((long)puVar3 - uVar6);
  __dest_00 = (undefined8 *)((long)__dest - uVar6);
  __s = (void *)((long)__dest_00 - uVar6);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02393d24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_02393d24:
  plVar9 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar8 = 0;
  do {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02393d90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02393d90:
    uVar6 = (*(code *)*puVar1)(plVar9,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      iVar8 = -1;
      if (plVar9 == (long *)0x0) goto LAB_02393f44;
      goto LAB_02393ee4;
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
          goto LAB_02393e04;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238(plVar9,lVar4,0);
LAB_02393e04:
    lVar4 = *(long *)(lVar4 + 8);
    local_80 = puVar3;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,&local_80,puVar3);
    memcpy(__s,puVar3,__n);
    plVar2 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28))();
    memcpy(__dest,__s,__n);
    lVar4 = *(long *)(param_3 + 0x38);
    __src = (undefined8 ****)local_90;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
      __src = &pppuStack_88;
    }
    memcpy(__dest_00,__src,__n);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_80 = __dest;
    puStack_78 = __dest_00;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
      local_80 = (undefined8 *)*__dest;
      puStack_78 = (undefined8 *)*__dest_00;
    }
    lVar4 = *(long *)(*plVar2 + 0x1c0);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,&local_80,local_6c);
    if (local_6c[0] != '\0') break;
    iVar8 = iVar8 + 1;
  } while( true );
  if (plVar9 != (long *)0x0) {
LAB_02393ee4:
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02393f38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02393f38:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
LAB_02393f44:
  if (*(long *)(alStack_a0[1] + 0x28) == local_68) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


