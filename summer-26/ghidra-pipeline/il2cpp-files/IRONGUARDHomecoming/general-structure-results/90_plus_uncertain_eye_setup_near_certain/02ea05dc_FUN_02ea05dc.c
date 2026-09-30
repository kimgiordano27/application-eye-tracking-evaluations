/*
FUNCTION_NAME: FUN_02ea05dc
ENTRY_POINT: 02ea05dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02ea09a8) */

long FUN_02ea05dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong __n;
  void *__s;
  undefined8 *puVar12;
  undefined8 *__dest;
  long alStack_90 [2];
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((DAT_048318b0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__);
    DAT_048318b0 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)alStack_90 - uVar10);
  puVar12 = (undefined8 *)((long)__dest - uVar10);
  __s = (void *)((long)puVar12 - uVar10);
  memset(__s,0,__n);
  if (param_2 != (long *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
    lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar9 = thunk_FUN_01f117cc(lVar9);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10))();
    if (lVar4 != 0) {
      alStack_90[1] = lVar8;
      plVar5 = (long *)FUN_033b0fc8(lVar4,0);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *plVar5;
        lVar8 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02ea0760;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_02ea0760:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        lVar8 = alStack_90[1];
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar10 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar5 == (long *)0x0) goto LAB_02ea0938;
          lVar4 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar10 == 0) goto LAB_02ea0910;
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_02ea08f8;
        }
        lVar4 = *plVar5;
        lVar8 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_02ea07c0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_02ea07c0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
          memset(__s,0,__n);
          memcpy(__dest,__s,__n);
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)
                           Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__ +
                         0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        memset(__s,0,__n);
        memcpy(__dest,__s,__n);
        lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
        puVar6 = __dest;
        if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 0x28)) {
          puVar6 = (undefined8 *)*__dest;
        }
        lVar8 = thunk_FUN_01ec485c(*(undefined8 *)
                                    (*plVar7 + (ulong)*(ushort *)(*(long *)(lVar8 + 0x20) + 0x50) *
                                               0x10 + 0x140));
        local_80 = puVar6;
        puStack_78 = puVar12;
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar7,&local_80,puVar12);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
        local_80 = puVar12;
        if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 0x28)) {
          local_80 = (undefined8 *)*puVar12;
        }
        puVar6 = *(undefined8 **)(lVar8 + 0x28);
        (*(code *)puVar6[2])(*puVar6,puVar6,lVar9,&local_80,auStack_6c);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02ea08f8:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02ea092c;
    }
  }
LAB_02ea0910:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02ea092c:
  (*(code *)*puVar12)(plVar5,puVar12[1]);
LAB_02ea0938:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


