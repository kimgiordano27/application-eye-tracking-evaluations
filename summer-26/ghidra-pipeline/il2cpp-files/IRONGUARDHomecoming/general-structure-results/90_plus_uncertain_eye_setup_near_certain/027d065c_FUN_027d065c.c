/*
FUNCTION_NAME: FUN_027d065c
ENTRY_POINT: 027d065c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x027d0a10) */

int FUN_027d065c(undefined8 param_1,int param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  ulong __n;
  void *__src;
  void *__s;
  int iVar11;
  long lVar12;
  code *pcVar13;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_048305ff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048305ff = 1;
  }
  lVar12 = *(long *)(param_3 + 0x20);
  lVar5 = lVar12;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar12 + 0xc0) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_70 - uVar7);
  __s = (void *)((long)__src - uVar7);
  memset(__s,0,__n);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  puVar6 = (undefined8 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
  plVar9 = (long *)*puVar6;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar12 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_027d07c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_027d07c4:
  plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar11 = 0;
  do {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d0830;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_027d0830:
    uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if ((uVar7 & 1) == 0) {
      iVar11 = 0;
      iVar10 = 6;
      iVar4 = 6;
      if (plVar9 == (long *)0x0) goto LAB_027d09c0;
      goto LAB_027d0960;
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar12 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_027d08b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar9,lVar5,0);
LAB_027d08b4:
    lVar5 = *(long *)(lVar5 + 8);
    local_70 = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,&local_70,__src);
    memcpy(__s,__src,__n);
    lVar12 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar5 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      lVar12 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    iVar4 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48));
    if (iVar4 == param_2) break;
    iVar11 = iVar11 + 1;
  } while( true );
  iVar10 = 5;
  iVar4 = 5;
  if (plVar9 != (long *)0x0) {
LAB_027d0960:
    iVar10 = iVar4;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d09b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_027d09b4:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
LAB_027d09c0:
  if ((iVar10 == 6) || (iVar10 == 0)) {
    iVar11 = -1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


