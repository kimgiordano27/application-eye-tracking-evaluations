/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 036677d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *unaff_x19;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  uStack0000000000000000 = *param_2;
  uStack0000000000000008 = *(undefined4 *)(param_2 + 1);
  uStack0000000000000010 = *(undefined4 *)((long)param_2 + 0xc);
  uStack0000000000000014 = param_2[2];
  uStack000000000000001c = *(undefined4 *)(param_2 + 3);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  FUN_03667690(&stack0x00000020);
                    /* try { // try from 03667818 to 0376786b has its CatchHandler @ 03667818
                       catch() { ... } // from try @ 03667818 with catch @ 03667818
                       catch() { ... } // from try @ 03667884 with catch @ 03667818
                       catch() { ... } // from try @ 03667928 with catch @ 03667818
                       catch() { ... } // from try @ 036679a8 with catch @ 03667818 */
  *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack0000000000000038,uStack0000000000000034);
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *unaff_x19 = uStack0000000000000020;
  return;
}


