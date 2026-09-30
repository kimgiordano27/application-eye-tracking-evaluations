/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0690f9b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 152
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 0690f9b8 to 06a0f9d7 has its CatchHandler @ 0690fa3c */
  in_stack_00000018 = FUN_067c4bec();
  uVar1 = FUN_0666e8e0(&stack0x00000018,0);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e980c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_0666e9a8(&stack0x00000018,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar3 = (long *)(unaff_x20 + 0x30);
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_067b5f94(*plVar3,0);
    *plVar3 = 0;
    thunk_FUN_03afed3c(plVar3,0);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x38),0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x40),0);
    FUN_0690f260();
    lVar2 = *unaff_x23;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  return;
}


