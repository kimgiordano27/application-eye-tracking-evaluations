/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 0516ea18
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x950));
  FUN_02d6084c(PTR_DAT_06769498);
  *(undefined1 *)(unaff_x22 + 0xe9c) = 1;
  puVar2 = PTR_DAT_06782788;
  puVar1 = PTR_DAT_06774188;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_050d0c74();
  FUN_050f136c();
                    /* try { // try from 0516ea78 to 0526eaa7 has its CatchHandler @ 0516eac8 */
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04fd7610();
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0504920c(lVar4,0);
  *(undefined4 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x10),uVar3);
  *(long *)(unaff_x19 + 0x60) = lVar4;
  thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x60),lVar4);
  return;
}


