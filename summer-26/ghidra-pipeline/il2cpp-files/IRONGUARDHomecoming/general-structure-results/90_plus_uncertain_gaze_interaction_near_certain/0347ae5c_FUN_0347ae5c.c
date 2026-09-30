/*
FUNCTION_NAME: FUN_0347ae5c
ENTRY_POINT: 0347ae5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0347b1cc) */

long * FUN_0347ae5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  
  puVar1 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
  if ((DAT_04832a49 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832a49 = 1;
  }
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_0353e574(plVar4,0);
  puVar3 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar2 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 != 0) {
    uVar10 = 0;
    do {
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar10) {
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 == (long *)0x0) {
          return plVar4;
        }
        lVar7 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_0347af88;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0347af70;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (plVar4 == (long *)0x0) break;
      (**(code **)(*plVar4 + 0x308))
                (plVar4,*(undefined8 *)(lVar7 + uVar10 * 8 + 0x20),*(undefined8 *)(*plVar4 + 0x310))
      ;
      lVar7 = *(long *)(param_1 + 0x20);
      uVar10 = uVar10 + 1;
    } while (lVar7 != 0);
  }
  goto LAB_0347af4c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar9 = piVar9 + 4;
    if (uVar10 == 0) break;
LAB_0347b15c:
    if (*(long *)(piVar9 + -2) == lVar7) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0347b190;
    }
  }
LAB_0347b174:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_0347b190:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return plVar4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar9 = piVar9 + 4;
    if (uVar10 == 0) break;
LAB_0347af70:
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
      goto LAB_0347afa8;
    }
  }
LAB_0347af88:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,2);
LAB_0347afa8:
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0347b008;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_0347b008:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar11;
      lVar7 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0347b078;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_0347b078:
      uVar10 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar1);
        if (plVar11 == (long *)0x0) {
          return plVar4;
        }
        lVar8 = *plVar11;
        lVar7 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_0347b174;
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0347b15c;
      }
      lVar8 = *plVar11;
      lVar7 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0347b0d8;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,1);
LAB_0347b0d8:
      plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar6);
      }
      uVar10 = FUN_0347ab00(param_1,plVar6);
      if ((uVar10 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar4 + 0x308))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x310));
      }
    } while( true );
  }
LAB_0347af4c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


