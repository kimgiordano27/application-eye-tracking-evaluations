/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 05349738
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0x9d0);
  if ((*(byte *)(unaff_x20 + 0x524) & 1) == 0) {
    FUN_02f08768(FadePlaneMaterial_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x524) = 1;
  }
  FUN_05116b38();
  lVar1 = thunk_FUN_02f45270(*puVar3);
  FUN_05116b38(lVar1,0);
  uVar2 = *puVar3;
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = thunk_FUN_02f45270(uVar2);
  FUN_05116b38(lVar1,0);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = DAT_011b0bd0;
  *(long *)(unaff_x19 + 0x30) = lVar1;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
                    /* try { // try from 053497b0 to 054497b7 has its CatchHandler @ 05349808 */
  *(undefined8 *)(unaff_x19 + 0x14) = uVar2;
                    /* try { // try from 053497b8 to 054497fb has its CatchHandler @ 05349560 */
  *(undefined4 *)(unaff_x19 + 0x1c) = 0x3f800000;
  return;
}


