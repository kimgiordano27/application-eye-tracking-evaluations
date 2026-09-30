/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 076ed0e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 137
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
               (long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(uint *)(param_1 + 0x98) == param_3) {
    if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x28), plVar1 != (long *)0x0)) {
      lVar2 = *plVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      goto LAB_076ed138;
    }
  }
  else if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 0x28);
    if ((param_3 & 1) == 0) {
      if (plVar1 == (long *)0x0) goto LAB_076ed14c;
      lVar2 = *plVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x34);
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_076ed14c;
      lVar2 = *plVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x48);
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      uVar4 = *(undefined4 *)(param_1 + 0x44);
    }
LAB_076ed138:
                    /* WARNING: Could not recover jumptable at 0x076ed148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x2a8))(uVar3,uVar4,uVar5,uVar6,plVar1,*(undefined8 *)(lVar2 + 0x2b0));
    return;
  }
LAB_076ed14c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


