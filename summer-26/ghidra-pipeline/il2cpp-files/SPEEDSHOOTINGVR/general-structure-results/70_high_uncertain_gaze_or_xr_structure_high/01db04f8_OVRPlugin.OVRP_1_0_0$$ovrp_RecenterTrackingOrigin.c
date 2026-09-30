/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 01db04f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin
               (ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a3c0);
    *(undefined1 *)(unaff_x21 + 0x9d0) = 1;
  }
  if ((*(long **)(param_2 + 0x28) != (long *)0x0) &&
     (**(long **)(param_2 + 0x28) == *(long *)PTR_DAT_0235a3c0)) {
    uVar1 = thunk_FUN_010303a8(PTR_DAT_0235a400);
    uVar1 = FUN_01d75474(uVar1,0);
    thunk_FUN_010303a8(PTR_DAT_0234c170);
    uVar2 = thunk_FUN_010400dc();
    FUN_01d4a564(uVar2,uVar1,0);
    uVar1 = thunk_FUN_010303a8(PTR_DAT_0235a408);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar1);
  }
  *(undefined8 *)(param_2 + 0x18) = param_3;
  thunk_FUN_0106e12c((undefined8 *)(param_2 + 0x18),param_3);
  FUN_01db0418(param_2,&stack0x0000000c);
  return;
}


