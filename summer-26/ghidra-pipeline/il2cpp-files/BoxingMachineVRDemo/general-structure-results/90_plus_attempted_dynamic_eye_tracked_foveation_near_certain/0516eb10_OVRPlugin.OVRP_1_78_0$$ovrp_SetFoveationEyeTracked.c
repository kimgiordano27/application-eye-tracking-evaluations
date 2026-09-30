/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 0516eb10
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
                    /* try { // try from 0516eb14 to 0526eb1b has its CatchHandler @ 0516eb30 */
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x950));
                    /* try { // try from 0516eb1c to 0526eb27 has its CatchHandler @ 0516e850 */
  FUN_02d6084c(PTR_DAT_06779690);
                    /* try { // try from 0516eb28 to 0526eb2f has its CatchHandler @ 0516eb30 */
  *(undefined1 *)(unaff_x22 + 0xe9d) = 1;
  puVar1 = PTR_DAT_06782788;
                    /* catch() { ... } // from try @ 0516eb14 with catch @ 0516eb30
                       catch() { ... } // from try @ 0516eb28 with catch @ 0516eb30 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_050d0c74();
  FUN_050f136c();
  lVar2 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  thunk_FUN_02dd37b4();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x60),lVar2);
  return;
}


