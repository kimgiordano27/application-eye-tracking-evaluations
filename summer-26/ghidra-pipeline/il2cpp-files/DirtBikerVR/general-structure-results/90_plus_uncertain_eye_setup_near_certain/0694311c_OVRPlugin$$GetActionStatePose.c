/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0694311c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(ulong param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    *(undefined1 *)(unaff_x20 + 0xfbb) = 1;
  }
  if (*(long *)(unaff_x19 + 0x108) != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_07c9c218(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_069431b4;
      FUN_07c9f0c8(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x108),0);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc1) = 0;
  *(undefined4 *)(unaff_x19 + 0xf4) = 0;
  *(undefined4 *)(unaff_x19 + 0x134) = 0;
  *(undefined4 *)(unaff_x19 + 0x110) = 0;
  *(undefined4 *)(unaff_x19 + 0x104) = 0;
  *(undefined4 *)(unaff_x19 + 0x13c) = 0;
  *(undefined1 *)(unaff_x19 + 0xec) = 0;
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0xb8),0);
    return;
  }
LAB_069431b4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


