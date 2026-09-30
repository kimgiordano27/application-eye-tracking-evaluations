/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 02c0377c
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x21;
  long *unaff_x23;
  
  uVar1 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
  uVar1 = FUN_017fc3f4(uVar1,2);
  FUN_015d6ff8();
  uVar2 = (**(code **)(*unaff_x23 + 0x168))();
  FUN_015d6ff8(uVar1);
  FUN_015d7aec(uVar1,uVar2);
                    /* try { // try from 02c037d0 to 02d03ab7 has its CatchHandler @ 02c037d0
                       catch() { ... } // from try @ 02c037d0 with catch @ 02c037d0
                       catch() { ... } // from try @ 02c03acc with catch @ 02c037d0
                       catch() { ... } // from try @ 02c03dfc with catch @ 02c037d0
                       catch() { ... } // from try @ 02c03f9c with catch @ 02c037d0
                       catch() { ... } // from try @ 02c03ffc with catch @ 02c037d0
                       catch() { ... } // from try @ 02c04038 with catch @ 02c037d0
                       catch() { ... } // from try @ 02c04138 with catch @ 02c037d0 */
  FUN_015d7b20(uVar1,0,uVar2);
  FUN_015d6ff8();
  uVar2 = (**(code **)(*unaff_x21 + 0x168))();
  FUN_015d6ff8(uVar1);
  FUN_015d7aec(uVar1,uVar2);
  FUN_015d7b20(uVar1,1,uVar2);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380a1b8);
  uVar1 = FUN_02c12818(uVar2,uVar1,0);
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar2 = thunk_FUN_01861bbc();
  System_Threading_Tasks_Task__Finish(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


