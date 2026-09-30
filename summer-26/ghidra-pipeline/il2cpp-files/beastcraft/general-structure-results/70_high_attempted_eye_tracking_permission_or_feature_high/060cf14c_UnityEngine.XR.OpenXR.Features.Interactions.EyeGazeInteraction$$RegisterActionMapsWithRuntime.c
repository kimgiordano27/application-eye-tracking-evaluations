/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 060cf14c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 unaff_w24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(long *)(unaff_x19 + 0x168) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x160) = param_2._0_8_;
  *(undefined8 *)(unaff_x19 + 0x170) = param_1;
  thunk_FUN_02ee2be8(param_3,0);
  uVar1 = thunk_FUN_02e78ab8(*unaff_x21);
                    /* try { // try from 060cf170 to 061cf193 has its CatchHandler @ 060cf4b8 */
  FUN_05c92978(uVar1,*(undefined8 *)
                      Unity_Services_Economy_Internal_Response<PlayerInventoryResponse>_TypeInfo,0,0
               ,0,0,*(undefined8 *)PTR_DAT_06a993e0,0);
                    /* try { // try from 060cf198 to 061cf1bb has its CatchHandler @ 060cf4b4 */
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05ca8184(&stack0x00000008,uVar1,0);
                    /* try { // try from 060cf1c0 to 061cf1f3 has its CatchHandler @ 060cf4d8 */
  *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000018;
  thunk_FUN_02ee2be8(unaff_x19 + 0x180,0);
  *(undefined2 *)(unaff_x19 + 0x198) = 0x101;
  *(undefined4 *)(unaff_x19 + 0x19c) = 0x3ca3d70a;
  *(undefined2 *)(unaff_x19 + 0x24) = 0x101;
  *(undefined1 *)(unaff_x19 + 0x88) = unaff_w24;
  *(undefined1 *)(unaff_x19 + 0x99) = unaff_w24;
                    /* try { // try from 060cf1f8 to 061cf207 has its CatchHandler @ 060cf4a4 */
  thunk_FUN_062646b0();
                    /* try { // try from 060cf208 to 061cf213 has its CatchHandler @ 060cf4a0 */
  return;
}


