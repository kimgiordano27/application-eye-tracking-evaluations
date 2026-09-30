/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 06af0db8
PROGRAM: Waifu-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 uVar3;
  long lVar4;
  long unaff_x23;
  
  *(undefined8 *)(unaff_x23 + 0xcc0) = param_2;
  (*param_1)();
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(unaff_x23 + 0xcc0);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
      *(code **)(unaff_x23 + 0xcc0) = pcVar2;
    }
    uVar1 = (*pcVar2)(lVar4,(unaff_w21 ^ 1) & 1);
    lVar4 = 0x40;
    if ((unaff_w21 & 1) == 0) {
      lVar4 = 0x48;
    }
    uVar3 = *(undefined8 *)(unaff_x19 + lVar4);
    uVar1 = FUN_06af0e5c(uVar1,uVar3);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_06af0f30(uVar1,uVar3,unaff_w20 & 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


