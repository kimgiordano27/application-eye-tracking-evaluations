/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 0339afb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long *unaff_x28;
  
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar1 = FUN_03295500(0);
  uVar1 = FUN_033704d4(*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__,uVar1);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  uVar2 = thunk_FUN_01c495e4();
  FUN_03358c64(uVar2,param_1,uVar1,0);
  if (unaff_x25 != (long *)0x0) {
    lVar6 = *unaff_x25;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0339b0a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_0339b0a0:
    (*(code *)*puVar3)();
    lVar6 = *unaff_x20;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032ea0d4(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = *unaff_x20;
      uVar1 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__
      ;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar1 = FUN_032e04b8(uVar1,0);
      uVar7 = FUN_032ea0d4(lVar6,uVar1,0);
      if ((uVar7 & 1) != 0) {
        if ((long *)*unaff_x20 == (long *)0x0) goto LAB_0339b170;
        uVar7 = (**(code **)(*(long *)*unaff_x20 + 0x298))();
        if ((uVar7 & 1) == 0) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar1 = FUN_03295500(0);
          FUN_019b2708();
          uVar2 = (**(code **)(*unaff_x24 + 0x2c8))();
          plVar9 = (long *)*unaff_x20;
          FUN_019b2708(plVar9);
          uVar4 = (**(code **)(*plVar9 + 0x2c8))(plVar9,*(undefined8 *)(*plVar9 + 0x2d0));
          uVar5 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                    );
          FUN_033704d4(uVar5,uVar1,uVar2,uVar4,0);
          uVar1 = FUN_0335cdc4();
          uVar2 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar1,uVar2);
        }
      }
    }
    *unaff_x20 = (long)unaff_x24;
    uVar1 = FUN_03395e54();
    *unaff_x21 = uVar1;
    return;
  }
LAB_0339b170:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


