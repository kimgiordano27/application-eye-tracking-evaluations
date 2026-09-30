/*
FUNCTION_NAME: FUN_0273d694
ENTRY_POINT: 0273d694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0273dcac) */
/* WARNING: Removing unreachable block (ram,0x0273dc98) */
/* WARNING: Removing unreachable block (ram,0x0273dcb4) */

void FUN_0273d694(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong __n;
  int *__src;
  void *__s;
  int *__dest;
  void *__s_00;
  int aiStack_b0 [2];
  long local_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  int *local_88;
  int *local_80;
  long *plStack_78;
  int local_6c;
  long local_68;
  
  local_a0 = tpidr_el0;
  local_68 = *(long *)(local_a0 + 0x28);
  local_90 = param_2;
  if ((DAT_048302a7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_048302a7 = 1;
  }
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar6 + 0xc0);
  uVar5 = *(uint *)(lVar3 + 0xfc);
  uVar10 = (ulong)uVar5;
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x78) + 0xfc);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
    uVar5 = *(uint *)(lVar3 + 0xfc);
  }
  local_a8 = (long)aiStack_b0 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
  uVar12 = __n + 0xf & 0x1fffffff0;
  piVar11 = (int *)(local_a8 - uVar12);
  __dest = (int *)((long)piVar11 - uVar12);
  uVar8 = uVar10 + 0xf & 0x1fffffff0;
  __src = (int *)((long)__dest - uVar8);
  __s = (void *)((long)__src - uVar8);
  memset(__s,0,uVar10);
  __s_00 = (void *)((long)__s - uVar12);
  memset(__s_00,0,__n);
  if (*local_90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *param_3;
  iVar2 = *(int *)(*local_90 + 0x18);
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_0273d81c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
                    /* try { // try from 0273d7f8 to 0283d85f has its CatchHandler @ 0273d91c */
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_3,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,
                        0xc);
LAB_0273d81c:
  (*(code *)*puVar4)(param_3,(long)iVar2,puVar4[1]);
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_98 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90)
                     )();
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = local_98[3];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0))(lVar3);
  if (*local_90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb8);
  local_88 = __src;
  (*(code *)puVar4[2])(*puVar4,puVar4,*local_90,&local_88,__src);
  memcpy(__s,__src,uVar10);
  while (uVar10 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0))
                            (__s), (uVar10 & 1) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200);
    local_88 = piVar11;
    (*(code *)puVar4[2])(*puVar4,puVar4,__s,&local_88,piVar11);
    memcpy(__s_00,piVar11,__n);
    memcpy(__dest,__s_00,__n);
    lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    local_88 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x78) + 0x28)) {
      local_88 = *(int **)__dest;
    }
    puVar4 = *(undefined8 **)(lVar6 + 0xd8);
    (*(code *)puVar4[2])(*puVar4,puVar4,lVar3,&local_88);
  }
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar7 + 0xc0);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
    lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0xe8),local_a8,__s,0,0);
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0))(lVar3);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      lVar6 = *(long *)(lVar7 + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      }
      puVar4 = *(undefined8 **)(lVar7 + 0xf8);
      lVar6 = **(long **)(lVar6 + 0xb8);
      local_80 = &local_6c;
      plStack_78 = (long *)piVar11;
      local_6c = iVar2;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar3,&local_80,piVar11);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      local_80 = piVar11;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x78) + 0x28)) {
        local_80 = *(int **)piVar11;
      }
      puVar4 = *(undefined8 **)(lVar7 + 0x100);
      plStack_78 = param_3;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar6,&local_80,param_3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  plVar1 = local_98;
  if (local_98 != (long *)0x0) {
    lVar3 = *local_98;
    uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0273dbdc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(local_98,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0273dbdc:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *param_3;
  uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
        goto LAB_0273dc48;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_3,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,
                        0xd);
LAB_0273dc48:
  (*(code *)*puVar4)(param_3,puVar4[1]);
  if (*(long *)(local_a0 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


