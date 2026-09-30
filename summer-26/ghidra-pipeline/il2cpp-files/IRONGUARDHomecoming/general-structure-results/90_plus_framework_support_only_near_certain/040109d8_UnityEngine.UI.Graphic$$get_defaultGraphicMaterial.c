/*
FUNCTION_NAME: UnityEngine.UI.Graphic$$get_defaultGraphicMaterial
ENTRY_POINT: 040109d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04010a98) */

void UnityEngine_UI_Graphic__get_defaultGraphicMaterial(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar1 = FUN_032a01b0();
  plVar2 = (long *)FUN_03fadc10(uVar1,0);
  lVar3 = FUN_032a0290();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0400fd28(lVar3,plVar2);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04010a68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04010a68:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  FUN_02dfa1f4();
  return;
}


