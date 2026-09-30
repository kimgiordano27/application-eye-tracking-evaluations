/*
FUNCTION_NAME: FUN_026df394
ENTRY_POINT: 026df394
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


/* WARNING: Removing unreachable block (ram,0x026df7f0) */

void FUN_026df394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  ulong __n;
  undefined8 *puVar11;
  void *__s;
  long *plVar12;
  long lVar13;
  long alStack_80 [2];
  void *local_70;
  long local_68;
  
  alStack_80[1] = tpidr_el0;
  local_68 = *(long *)(alStack_80[1] + 0x28);
  if ((DAT_0483019c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483019c = 1;
  }
  lVar13 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar13 + 0x10) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar11 = (undefined8 *)(((long)alStack_80 - uVar8) - uVar8);
  __s = (void *)((long)puVar11 - uVar8);
  memset(__s,0,__n);
  (*(code *)**(undefined8 **)(lVar13 + 8))(param_1,param_2,param_3);
  pvVar3 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0x20);
  memset(pvVar3,0,__n);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar4 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x30))();
  FUN_01bc5360(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80) + 0x40,uVar4)
  ;
  if (param_4 != (long *)0x0) {
    lVar13 = *param_4;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
           ) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_026df548;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(param_4,*(long *)
                                   Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                          ,0);
LAB_026df548:
    plVar6 = (long *)(*(code *)*puVar5)(param_4,puVar5[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar6;
      lVar13 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar13) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_026df5b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar13,0);
LAB_026df5b0:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar9 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar6 == (long *)0x0) break;
        lVar13 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_026df788;
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_026df770;
      }
      lVar7 = *plVar6;
      lVar13 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar13) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_026df610;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar13,1);
LAB_026df610:
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      lVar13 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      pvVar3 = (void *)FUN_01f08934(uVar4,lVar13,(long)alStack_80 - uVar8);
      memcpy(__s,pvVar3,__n);
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) +
                                                   0x80) + 0x40);
      plVar12 = (long *)*puVar5;
      memcpy(puVar11,__s,__n);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
      lVar13 = *(long *)(lVar7 + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
        lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
      }
      puVar5 = puVar11;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
        puVar5 = (undefined8 *)*puVar11;
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar13) {
            lVar13 = lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138;
            goto LAB_026df718;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar13 = FUN_01ecb238(plVar12,lVar13,2);
LAB_026df718:
      lVar13 = *(long *)(lVar13 + 8);
      local_70 = puVar5;
      (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8),lVar13,plVar12,&local_70,puVar5);
    } while( true );
  }
  goto LAB_026df7b4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_026df770:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_026df7a4;
    }
  }
LAB_026df788:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_026df7a4:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
LAB_026df7b4:
  if (*(long *)(alStack_80[1] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


