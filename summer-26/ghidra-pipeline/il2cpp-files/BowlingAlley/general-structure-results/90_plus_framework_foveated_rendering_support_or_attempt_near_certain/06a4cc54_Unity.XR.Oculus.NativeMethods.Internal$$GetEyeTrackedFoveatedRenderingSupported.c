/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 06a4cc54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long *plVar3;
  long unaff_x21;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0x2d0);
  puVar2 = *(undefined8 **)(unaff_x19 + 0x2c8);
  plVar3 = (long *)*unaff_x20;
  puVar5 = *(undefined8 **)(unaff_x22 + 0x6b0);
  puVar4 = *(undefined8 **)(unaff_x21 + 0x6b8);
  if ((*(byte *)(unaff_x23 + 0xcaa) & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Stack<Rect>_Push__);
    thunk_FUN_032e1da0(PTR_DAT_072af2c8);
    thunk_FUN_032e1da0(PTR_DAT_0727b6b8);
                    /* try { // try from 06a4cc94 to 06b4ccc7 has its CatchHandler @ 06a4cdc8 */
    thunk_FUN_032e1da0(PTR_DAT_0727b6b0);
    thunk_FUN_032e1da0(PTR_DAT_072af2d0);
    *(undefined1 *)(unaff_x23 + 0xcaa) = 1;
  }
  uVar1 = thunk_FUN_032a56a0(*puVar6);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar1,*puVar2);
  **(undefined8 **)(*plVar3 + 0xb8) = uVar1;
  thunk_FUN_0333a630(*(undefined8 *)(*plVar3 + 0xb8),uVar1);
  uVar1 = thunk_FUN_032a56a0(*puVar5);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar1,*puVar4);
  puVar2 = (undefined8 *)(*(long *)(*plVar3 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_0333a630(puVar2,uVar1);
  return;
}


