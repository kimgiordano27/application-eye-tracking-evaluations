/*
FUNCTION_NAME: FUN_03026864
ENTRY_POINT: 03026864
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03026cec) */

void FUN_03026864(long param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong __n;
  void *__s;
  undefined8 uVar14;
  long alStack_a0 [2];
  uint local_8c;
  long *local_88;
  undefined8 *local_80;
  long **local_78;
  uint *local_70;
  long local_68;
  
  alStack_a0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_a0[1] + 0x28);
  if ((DAT_04831b6d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831b6d = 1;
  }
  lVar7 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x48) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  puVar10 = (undefined8 *)((long)alStack_a0 - uVar12);
  __s = (void *)((long)puVar10 - uVar12);
  local_88 = (long *)0x0;
  local_8c = 0;
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar11 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03026998;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_03026998:
  plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  local_88 = *(long **)(param_1 + 0x20);
  local_8c = *(uint *)(param_1 + 0x28);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03026a10;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03026a10:
    uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = local_8c;
      *(uint *)(param_1 + 0x2c) = (local_8c + *(int *)(param_1 + 0x2c)) - iVar1;
      if (plVar9 == (long *)0x0) goto LAB_03026ca0;
      lVar7 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 == 0) goto LAB_03026c78;
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          lVar7 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_03026a94;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar7 = FUN_01ecb238(plVar9,lVar7,0);
LAB_03026a94:
    lVar7 = *(long *)(lVar7 + 8);
    local_80 = puVar10;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar9,&local_80,puVar10);
    memcpy(__s,puVar10,__n);
    plVar6 = local_88;
    uVar5 = local_8c;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = (long)(int)local_8c;
    uVar2 = *(uint *)(local_88 + 3);
    memcpy(puVar10,__s,__n);
    if (uVar5 < uVar2) {
      if (*(uint *)(plVar6 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar7 + 0x20),puVar10,__n);
      lVar11 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x48);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar6 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar11,(long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar7 + 0x20,puVar10);
    }
    else {
      lVar11 = *(long *)(param_3 + 0x20);
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar7 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar11 = *(long *)(param_3 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      uVar14 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
      lVar7 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar11 = *(long *)(param_3 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      local_80 = puVar10;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x48) + 0x28)) {
        local_80 = (undefined8 *)*puVar10;
      }
      local_78 = &local_88;
      local_70 = &local_8c;
      (**(code **)(lVar7 + 0x10))(uVar14,lVar7,param_1,&local_80,&local_8c);
    }
    local_8c = local_8c + 1;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03026c94;
    }
  }
LAB_03026c78:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03026c94:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03026ca0:
  if (*(long *)(alStack_a0[1] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


