/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01ea0be0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Array__InternalArray__Insert<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_01d7d918(Field_OVRRaycaster_RaycastHit_graphic);
  FUN_01d7d918(StringLiteral_85);
  FUN_01d7d918(StringLiteral_86);
  FUN_01d7d918(Field_OVRSceneLoader_SceneInfo_scenes);
  *(undefined1 *)(unaff_x20 + 0xe16) = 1;
  if ((unaff_x19 != 0) && (plVar3 = (long *)FUN_03bebab0(), plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_85) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_01ea0c88;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar3,*(long *)StringLiteral_85,6);
LAB_01ea0c88:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = Field_OVRRaycaster_RaycastHit_graphic;
    if (lVar5 != 0) {
      uVar2 = FUN_03d72658(lVar5,*(undefined8 *)StringLiteral_86,0);
      lVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
      FUN_01edaebc(lVar5,0);
      puVar1 = Field_OVRSceneLoader_SceneInfo_scenes;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 0x10) = uVar2 & 1;
        *(undefined4 *)(lVar5 + 0x14) = 0x7f;
        FUN_01eda170(*(undefined8 *)puVar1,lVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


