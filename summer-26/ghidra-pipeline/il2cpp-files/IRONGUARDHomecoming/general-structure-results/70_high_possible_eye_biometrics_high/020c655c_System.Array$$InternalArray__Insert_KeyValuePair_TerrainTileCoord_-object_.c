/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<KeyValuePair<TerrainTileCoord,-object>>
ENTRY_POINT: 020c655c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__Insert<KeyValuePair<TerrainTileCoord,_object>>(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  long *unaff_x24;
  
  uVar2 = FUN_020c268c();
  FUN_020c26f8(uVar2,0);
  plVar4 = (long *)*unaff_x20;
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Item__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Item__)) {
      lVar3 = FUN_032b9080(*(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                          );
      if ((lVar3 == 0) ||
         ((*(long *)(lVar3 + 0x58) == 0 ||
          (lVar3 = FUN_02b3005c(*(long *)(lVar3 + 0x58),(int)plVar4[5],
                                *(undefined8 *)
                                 Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__
                               ), lVar3 == 0)))) goto LAB_020c6650;
      FUN_020b4448(lVar3,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar2 = FUN_040703d4(*(long *)(unaff_x19 + 0x20),0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x24);
    }
    FUN_040770d0(uVar2,0);
    uVar2 = FUN_040703d4();
    FUN_040770d0(uVar2,0);
    return;
  }
LAB_020c6650:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


