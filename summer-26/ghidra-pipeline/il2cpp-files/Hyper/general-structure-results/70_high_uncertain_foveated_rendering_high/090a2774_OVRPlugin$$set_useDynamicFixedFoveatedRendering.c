/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 090a2774
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
                    /* catch() { ... } // from try @ 090a2768 with catch @ 090a2774 */
                    /* try { // try from 090a2778 to 091a277f has its CatchHandler @ 090a2788 */
  *(undefined1 *)(unaff_x22 + 0x290) = 1;
                    /* try { // try from 090a2780 to 091a278b has its CatchHandler @ 090a234c */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090a2778 with catch @ 090a2788
                        */
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_090cbe88(0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  thunk_FUN_049ee3d8();
  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
    uVar1 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac78e90,
                         *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    thunk_FUN_049ee3d8();
    FUN_08dbf2f0();
    FUN_0909b49c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


