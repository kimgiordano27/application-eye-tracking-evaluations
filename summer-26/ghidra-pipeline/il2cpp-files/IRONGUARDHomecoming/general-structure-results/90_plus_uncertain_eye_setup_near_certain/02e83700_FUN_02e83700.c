/*
FUNCTION_NAME: FUN_02e83700
ENTRY_POINT: 02e83700
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void FUN_02e83700(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long *__src;
  long *__dest;
  void *__s;
  long lVar11;
  long lVar12;
  long local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  if ((DAT_04831821 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831821 = 1;
  }
  lVar12 = *(long *)(param_4 + 0x20);
  lVar6 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x48);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  uVar10 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x60) + 0xfc);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
    lVar12 = *(long *)(param_4 + 0x20);
    lVar7 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x48);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  lVar6 = (long)&local_80 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    lVar12 = *(long *)(param_4 + 0x20);
  }
  lVar11 = lVar6 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar8 = uVar10 + 0xf & 0x1fffffff0;
  __src = (long *)(lVar11 - uVar8);
  __dest = (long *)((long)__src - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,uVar10);
  puVar3 = Method_System_Configuration_ConfigurationElement_Reset__;
  lVar12 = *(long *)(lVar12 + 0xc0);
  lVar7 = *(long *)(lVar12 + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar12 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar12 + 0x78),lVar6,param_2,0,&local_78);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_3;
  lVar12 = (long)(int)local_78;
  lVar7 = *(long *)puVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_02e838e0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar7,0xc);
LAB_02e838e0:
  (*(code *)*puVar5)(param_3,lVar12,puVar5[1]);
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar6 + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar6 + 0x88),lVar11,param_2,0,&local_78);
  plVar4 = local_78;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02e83984:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02e83b28;
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 == 0) goto LAB_02e83b00;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          lVar7 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar7 = FUN_01ecb238(plVar4,lVar7,0);
LAB_02e839fc:
    lVar7 = *(long *)(lVar7 + 8);
    local_78 = __src;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,&local_78,__src);
    memcpy(__s,__src,uVar10);
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    memcpy(__dest,__s,uVar10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    local_78 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
      local_78 = (long *)*__dest;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0xa0);
    plStack_70 = param_3;
    (*(code *)puVar5[2])(*puVar5,puVar5,lVar7,&local_78,param_3);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar9 = piVar9 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02e83b1c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_02e83b28:
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_3;
  lVar7 = *(long *)puVar3;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar7,0xd);
LAB_02e83b80:
  (*(code *)*puVar5)(param_3,puVar5[1]);
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


