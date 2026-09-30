/*
FUNCTION_NAME: FUN_03fc0974
ENTRY_POINT: 03fc0974
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fc0b8c) */

undefined8 FUN_03fc0974(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0483b8c6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04583728);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04583730);
    DAT_0483b8c6 = 1;
  }
  if (param_2 != 0) {
    uVar4 = FUN_03fae1e8(param_2);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (*(long *)(param_1 + 0xa0) != 0) {
      plVar5 = (long *)FUN_0265d924(*(long *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_04583730);
      puVar3 = PTR_DAT_04583728;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03fc0a68;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03fc0a68:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_03fc0b58;
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto UnityEngine_ContactPair__get_HasRemovedCollider;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03fc0b18;
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03fc0ac4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03fc0ac4:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        FUN_03fae50c(param_2,uVar7);
        plVar8 = *(long **)(param_2 + 0x10);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar8 + 0x188))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 400));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03fc0b18:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto UnityEngine_Physics__GetCollisionToReport;
    }
  }
UnityEngine_ContactPair__get_HasRemovedCollider:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
UnityEngine_Physics__GetCollisionToReport:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_03fc0b58:
  FUN_03fae27c(param_2,uVar4);
  return 0;
}


