/*
FUNCTION_NAME: FUN_0257a960
ENTRY_POINT: 0257a960
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0257a960(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  void *__dest;
  void *__s;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  if ((DAT_0482fe23 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_DateTime_IsLeapYear__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe23 = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  uVar7 = *(uint *)(lVar2 + 0xfc);
  uVar11 = (ulong)uVar7;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
    uVar7 = *(uint *)(lVar2 + 0xfc);
  }
  lVar2 = (long)&local_f0 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
  uVar8 = uVar11 + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar2 - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,uVar11);
  local_b0 = &local_68;
  plStack_a8 = &local_60;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_0257ab28;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0);
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50));
    uVar7 = 0;
    *(undefined4 *)(local_60 + 0x58) = 0;
    do {
      puVar5 = (undefined8 *)(local_60 + 0x50);
      plVar9 = (long *)*puVar5;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((int)*(uint *)(plVar9 + 3) <= (int)uVar7) {
        *puVar5 = 0;
        thunk_FUN_01f51358(puVar5,0);
        uVar3 = 0;
        break;
      }
      if (*(uint *)(plVar9 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy(__dest,(void *)((long)plVar9 +
                            (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar7 + 0x20),uVar11);
      memcpy(__s,__dest,uVar11);
      lVar6 = *(long *)(*(long *)(local_68 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
        lVar6 = *(long *)(*(long *)(local_68 + 0x20) + 0xc0);
      }
      FUN_01f09244(lVar4,*(undefined8 *)(lVar6 + 0x28),lVar2,__s,0,&local_f0);
      *(undefined8 *)(local_60 + 0x60) = local_f0;
      thunk_FUN_01f51358();
      param_1 = local_60;
LAB_0257ab28:
      plVar9 = *(long **)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0257ab8c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0257ab8c:
      uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        plVar9 = *(long **)(local_60 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar2 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar11 == 0) goto LAB_0257ac34;
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0257ac1c;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_68 + 0x20) + 0xc0) + 8))(local_60);
      *(undefined8 *)(local_60 + 0x60) = 0;
      thunk_FUN_01f51358((undefined8 *)(local_60 + 0x60),0);
      uVar7 = *(int *)(local_60 + 0x58) + 1;
      *(uint *)(local_60 + 0x58) = uVar7;
    } while( true );
  }
  goto LAB_0257ac94;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar10 = piVar10 + 4;
    if (uVar11 == 0) break;
LAB_0257ac1c:
    if (*(long *)(piVar10 + -2) == *(long *)Method_System_DateTime_IsLeapYear__) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto 
      System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
      ;
    }
  }
LAB_0257ac34:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_DateTime_IsLeapYear__,0);

  System_Collections_ObjectModel_ReadOnlyCollection<ushort>__System_Collections_ICollection_get_SyncRoot
  :
  (*(code *)*puVar5)(&local_f0,plVar9,puVar5[1]);
  uVar3 = 1;
  uStack_98 = uStack_e8;
  local_a0 = local_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  local_70 = local_c0;
  *(undefined4 *)(local_60 + 0x44) = local_c0;
  *(undefined8 *)(local_60 + 0x3c) = uStack_c8;
  *(undefined8 *)(local_60 + 0x34) = local_d0;
  *(undefined8 *)(local_60 + 0x2c) = uStack_d8;
  *(undefined8 *)(local_60 + 0x24) = uStack_e0;
  *(undefined8 *)(local_60 + 0x1c) = uStack_e8;
  *(undefined8 *)(local_60 + 0x14) = local_f0;
  *(undefined4 *)(local_60 + 0x10) = 1;
LAB_0257ac94:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


