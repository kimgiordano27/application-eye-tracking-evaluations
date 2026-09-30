/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 02c4bffc
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  
  (*(code *)*param_1)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0();
  }
  if (unaff_w24 == 0) {
    if (unaff_x21 == 0) goto LAB_02c4c088;
  }
  else {
    lVar1 = thunk_FUN_01861ac0();
    if (lVar1 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar2 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c968);
      uVar4 = thunk_FUN_01851c08(PTR_DAT_0380c970);
      FUN_02b3cc64(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c978);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2,uVar3);
    }
    if (unaff_x21 == 0) {
LAB_02c4c088:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_028267ec();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_02c4c1b4();
    return;
  }
  return;
}


