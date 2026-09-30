/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05653f24
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;strong_foveation_hits_3;functionality_foveated_rendering
*/


undefined1  [16] OVRManager__get_useDynamicFoveatedRendering(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  
  thunk_FUN_02df485c();
  uVar1 = OVRManager__GetDynamicFoveatedRenderingEnabled(unaff_w20,unaff_w19);
                    /* try { // try from 05653f3c to 05753f4b has its CatchHandler @ 05653f4c */
  uVar2 = FUN_055efebc(uVar1,*unaff_x21,0,0);
                    /* catch() { ... } // from try @ 05653ec8 with catch @ 05653f4c
                       catch() { ... } // from try @ 05653f3c with catch @ 05653f4c */
  uVar3 = (ulong)in_stack_00000008;
                    /* try { // try from 05653f50 to 05753f53 has its CatchHandler @ 05653f5c */
                    /* try { // try from 05653f54 to 05753f5f has its CatchHandler @ 05653d7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05653f50 with catch @ 05653f5c
                        */
  if ((uVar2 & 1) == 0) {
    in_stack_00000000 = 0;
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = in_stack_00000000;
  return auVar4;
}


