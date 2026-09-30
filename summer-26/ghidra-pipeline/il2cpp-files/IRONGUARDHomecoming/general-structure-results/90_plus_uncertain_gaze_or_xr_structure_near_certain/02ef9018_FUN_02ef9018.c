/*
FUNCTION_NAME: FUN_02ef9018
ENTRY_POINT: 02ef9018
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ef9388) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02ef9018(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  void *__src;
  undefined8 *puVar10;
  void *__s;
  long lVar11;
  undefined8 *apuStack_80 [2];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_0483192e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483192e = 1;
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x98) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar8);
  puVar10 = (undefined8 *)((long)__src - uVar8);
  __s = (void *)((long)puVar10 - uVar8);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_034efd20(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_3);
  }
  if ((int)param_1[4] != 0) {
    if (param_1 != param_2) {
      lVar11 = *(long *)(lVar11 + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar11) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02ef9150;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_02ef9150:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02ef91b8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02ef91b8:
        uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar8 & 1) == 0) goto LAB_02ef92ac;
        lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
        }
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
              goto LAB_02ef9230;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar11 = FUN_01ecb238(plVar4,lVar11,0);
LAB_02ef9230:
        lVar11 = *(long *)(lVar11 + 8);
        apuStack_80[1] = __src;
        (**(code **)(lVar11 + 0x10))
                  (*(undefined8 *)(lVar11 + 8),lVar11,plVar4,apuStack_80 + 1,__src);
        memcpy(__s,__src,__n);
        memcpy(puVar10,__s,__n);
        lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        apuStack_80[1] = puVar10;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
          apuStack_80[1] = (undefined8 *)*puVar10;
        }
        puVar3 = *(undefined8 **)(lVar11 + 0x148);
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,apuStack_80 + 1,auStack_6c);
      } while( true );
    }
    (*(code *)**(undefined8 **)(lVar11 + 0x130))(param_1);
  }
  goto LAB_02ef9318;
LAB_02ef92ac:
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02ef9308;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar4,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02ef9308:
    (*(code *)*puVar10)(plVar4,puVar10[1]);
  }
LAB_02ef9318:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


