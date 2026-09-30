/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 060bb874
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack000000000000004c = (undefined4)param_2;
  uStack0000000000000050 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000040 = param_1;
  FUN_0606b4ac(param_3,param_4,0);
                    /* try { // try from 060bb88c to 061bb8a3 has its CatchHandler @ 060bb990 */
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack000000000000001c;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
  return;
}


