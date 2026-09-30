/*
FUNCTION_NAME: FUN_0347b29c
ENTRY_POINT: 0347b29c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0347b5f4) */

long * FUN_0347b29c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar1 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
  if ((DAT_04832a4a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832a4a = 1;
  }
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_0353e574(plVar5,0);
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar10 = param_1[4];
  if (lVar10 != 0) {
    uVar13 = 0;
    do {
      if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar13) {
        plVar14 = (long *)param_1[2];
        if (plVar14 == (long *)0x0) {
          return plVar5;
        }
        lVar10 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_0347b3dc;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0347b3c4;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar6 = (**(code **)(*param_1 + 0x288))
                        (param_1,*(undefined8 *)(lVar10 + uVar13 * 8 + 0x20),
                         *(undefined8 *)(*param_1 + 0x290));
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x308))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x310));
      lVar10 = param_1[4];
      uVar13 = uVar13 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar12 = piVar12 + 4;
    if (uVar13 == 0) break;
LAB_0347b3c4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
      goto LAB_0347b3fc;
    }
  }
LAB_0347b3dc:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar2,9);
LAB_0347b3fc:
  plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
  puVar4 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0347b474;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,0);
LAB_0347b474:
    uVar13 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if ((uVar13 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_01f116d0(plVar14,*(undefined8 *)puVar1);
      if (plVar14 == (long *)0x0) {
        return plVar5;
      }
      lVar11 = *plVar14;
      lVar10 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_0347b58c;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0347b4d4;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,1);
LAB_0347b4d4:
    plVar8 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar9 = (long *)thunk_FUN_01f11920();
    plVar8 = (long *)*plVar9;
    lVar10 = plVar9[1];
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8,*(long *)puVar3);
    }
    uVar13 = FUN_0347ab00(param_1);
    if ((uVar13 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar5 + 0x308))(plVar5,lVar10,*(undefined8 *)(*plVar5 + 0x310));
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar12 = piVar12 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar10) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0347b5a8;
    }
  }
LAB_0347b58c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar14,lVar10,0);
LAB_0347b5a8:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
  return plVar5;
}


