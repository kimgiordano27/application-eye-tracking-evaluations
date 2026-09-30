/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06a4ccc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear();
                    /* try { // try from 06a4ccc8 to 06b4cccb has its CatchHandler @ 06a4cd08 */
                    /* try { // try from 06a4cccc to 06b4cccf has its CatchHandler @ 06a4cd04 */
                    /* try { // try from 06a4ccd0 to 06b4ccd7 has its CatchHandler @ 06a4ccfc */
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
                    /* try { // try from 06a4ccd8 to 06b4cce3 has its CatchHandler @ 06a4c284 */
  thunk_FUN_0333a630(*(undefined8 *)(*unaff_x20 + 0xb8));
                    /* try { // try from 06a4cce4 to 06b4cceb has its CatchHandler @ 06a4cdc8 */
  uVar1 = thunk_FUN_032a56a0(*unaff_x22);
                    /* catch() { ... } // from try @ 06a4cac8 with catch @ 06a4ccec
                       catch() { ... } // from try @ 06a4cb5c with catch @ 06a4ccec
                       try { // try from 06a4ccec to 06b4cd37 has its CatchHandler @ 06a4c284 */
                    /* catch() { ... } // from try @ 06a4cbb4 with catch @ 06a4ccf0 */
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar1,*unaff_x21);
                    /* catch() { ... } // from try @ 06a4ccd0 with catch @ 06a4ccfc */
                    /* catch() { ... } // from try @ 06a4c58c with catch @ 06a4cd00 */
                    /* catch() { ... } // from try @ 06a4cccc with catch @ 06a4cd04 */
                    /* catch() { ... } // from try @ 06a4ccc8 with catch @ 06a4cd08 */
                    /* catch() { ... } // from try @ 06a4ca54 with catch @ 06a4cd0c */
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar2 = uVar1;
                    /* catch() { ... } // from try @ 06a4c5d4 with catch @ 06a4cd10 */
                    /* catch() { ... } // from try @ 06a4c4e0 with catch @ 06a4cd14 */
                    /* catch() { ... } // from try @ 06a4c548 with catch @ 06a4cd18 */
  thunk_FUN_0333a630(puVar2,uVar1);
  return;
}


