/*
FUNCTION_NAME: FUN_02416118
ENTRY_POINT: 02416118
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


/* WARNING: Removing unreachable block (ram,0x024164fc) */
/* WARNING: Removing unreachable block (ram,0x0241656c) */

void * FUN_02416118(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  void *__src;
  void *__dest;
  void *__s;
  long *local_a0;
  int local_94;
  undefined8 local_90;
  long *local_88;
  long local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  lVar9 = *(long *)(param_3 + 0x38);
  local_90 = param_2;
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    lVar9 = *(long *)(param_3 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_3);
      lVar9 = *(long *)(param_3 + 0x38);
    }
  }
  uVar8 = *(uint *)(*(long *)(lVar9 + 0x20) + 0xfc);
  uVar16 = (ulong)uVar8;
  if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
    uVar8 = *(uint *)(lVar9 + 0xfc);
  }
  lVar9 = (long)&local_a0 - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
  uVar12 = uVar16 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar9 - uVar12);
  __dest = (void *)((long)__src - uVar12);
  __s = (void *)((long)__dest - uVar12);
  memset(__s,0,uVar16);
  if (param_1 != (long *)0x0) {
    lVar7 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar10 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    local_80 = lVar11;
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0241626c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_0241626c:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    local_88 = (long *)0x0;
    pvVar6 = (void *)0x0;
    iVar1 = 0;
    do {
      iVar15 = iVar1;
      local_78 = pvVar6;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_024162e4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_024162e4:
          uVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          pvVar6 = local_78;
          if ((uVar12 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_024164f0;
            lVar11 = *plVar5;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 == 0) goto LAB_024164c8;
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_024164b0;
          }
          lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar7 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                lVar11 = lVar7 + (long)*piVar14 * 0x10 + 0x138;
                goto LAB_02416358;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          lVar11 = FUN_01ecb238(plVar5,lVar11,0);
LAB_02416358:
          lVar11 = *(long *)(lVar11 + 8);
          local_70 = __src;
          (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_70,__src);
          memcpy(__s,__src,uVar16);
          memcpy(__dest,__s,uVar16);
          uVar12 = FUN_01f089f8(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),__dest);
        } while ((uVar12 & 1) == 0);
        lVar7 = *(long *)(param_3 + 0x38);
        lVar11 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44();
          lVar7 = *(long *)(param_3 + 0x38);
        }
        FUN_01f09244(lVar11,*(undefined8 *)(lVar7 + 0x28),lVar9,__s,0,&local_70);
        pvVar3 = local_70;
        uVar12 = FUN_0340eec4(local_70,0);
      } while ((uVar12 & 1) != 0);
      pvVar6 = pvVar3;
      iVar1 = 1;
      if (iVar15 != 0) {
        plVar13 = local_88;
        local_94 = iVar15;
        if (iVar15 == 1) {
          local_a0 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                               );
          FUN_03416d98(local_a0,0);
          plVar13 = local_a0;
          if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(local_a0,local_78,0);
        }
        iVar1 = local_94 + 1;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        local_88 = plVar13;
        FUN_03418748(plVar13,local_90,0);
        pvVar6 = local_78;
        FUN_03418748(local_88,pvVar3,0);
      }
    } while( true );
  }
LAB_02416568:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar14 = piVar14 + 4;
    if (uVar16 == 0) break;
LAB_024164b0:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_024164e4;
    }
  }
LAB_024164c8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024164e4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_024164f0:
  if (iVar15 == 0) {
    pvVar6 = (void *)0x0;
  }
  else if (iVar15 != 1) {
    if (local_88 == (long *)0x0) goto LAB_02416568;
    pvVar6 = (void *)(**(code **)(*local_88 + 0x168))(local_88,*(undefined8 *)(*local_88 + 0x170));
  }
  if (*(long *)(local_80 + 0x28) == local_68) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


