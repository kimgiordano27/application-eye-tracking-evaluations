/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationEventsCache$$.cctor
ENTRY_POINT: 0338157c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033818dc) */

uint System_Runtime_Serialization_SerializationEventsCache___cctor(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_033815e0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)
                                 Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0);
LAB_033815e0:
  plVar7 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar5 = Method_DefaultNamespace_UI_GameplayUI_Refresh__;
  puVar4 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
  puVar3 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
  puVar2 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03381668;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03381668:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_033817c4;
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_0338179c;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033816c4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_033816c4:
    lVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *unaff_x28;
    }
    lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
    if (lVar13 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *unaff_x28;
      }
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02a487e4(lVar13,uVar14,*(undefined8 *)puVar5,0);
      plVar8 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x20);
      *plVar8 = lVar13;
      thunk_FUN_01f51358(plVar8,lVar13);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f459c(lVar9,lVar13,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033817b8;
    }
  }
LAB_0338179c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033817b8:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_033817c4:
  return in_stack_00000000._4_4_ & 1;
}


