/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0577b734
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 0577b738 to 0587b743 has its CatchHandler @ 0577b758 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0577b744 to 0587b74f has its CatchHandler @ 0577b5d4 */
    FUN_02f07e70(PTR_DAT_06d5a000);
                    /* try { // try from 0577b750 to 0587b757 has its CatchHandler @ 0577b758 */
    FUN_02f07e70(PTR_DAT_06d36fa0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0577b738 with catch @ 0577b758
                       catch(type#2 @ 00000000) { ... } // from try @ 0577b750 with catch @ 0577b758
                        */
    *(undefined1 *)(unaff_x21 + 0xb0) = 1;
  }
  puVar1 = PTR_DAT_06d36fa0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  __ptr = (void *)FUN_057759cc(param_2);
  uVar2 = FUN_0577b7b8();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


