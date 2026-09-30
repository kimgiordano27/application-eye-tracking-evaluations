/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$ovrp_QplMarkerStartForJoin
ENTRY_POINT: 0696b138
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_105_0__ovrp_QplMarkerStartForJoin(float param_1,float param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  float unaff_s8;
  float fVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  fVar4 = unaff_s8;
  if (unaff_s8 <= param_1) {
    fVar4 = param_2;
  }
  FUN_07d1d580(&stack0x00000100,fVar4,0);
  in_stack_000000e8 = in_stack_00000108;
  in_stack_000000e0 = in_stack_00000100;
  in_stack_000000f8 = in_stack_00000118;
  in_stack_000000f0 = in_stack_00000110;
  FUN_07d1c798();
  lVar3 = *(long *)(unaff_x20 + 0x78);
  if (lVar3 != 0) {
    fVar5 = *(float *)(lVar3 + 0x40);
    fVar4 = -fVar5;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 < 5.0) {
                    /* try { // try from 0696b198 to 06a6b1f3 has its CatchHandler @ 0696a944 */
      FUN_07d1d580(&stack0x00000100,0,0);
      in_stack_000000c8 = in_stack_00000108;
      in_stack_000000c0 = in_stack_00000100;
      in_stack_000000d8 = in_stack_00000118;
      in_stack_000000d0 = in_stack_00000110;
      FUN_07d1d0d8();
      FUN_07d1d580(&stack0x000000a0,0,0);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      in_stack_00000098 = in_stack_000000b8;
      in_stack_00000090 = in_stack_000000b0;
LAB_0696b1e8:
      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                ();
                    /* try { // try from 0696b1f4 to 06a6b1f7 has its CatchHandler @ 0696b204 */
      uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
                    /* try { // try from 0696b1f8 to 06a6b1fb has its CatchHandler @ 0696b200 */
                    /* try { // try from 0696b1fc to 06a6b22b has its CatchHandler @ 0696a944 */
      FUN_07ca4ee0(DAT_015c5b5c,uVar1,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
    plVar2 = *(long **)(lVar3 + 0x80);
    if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0696b22c with catch @ 0696b24c */
                    /* try { // try from 0696b250 to 06a6b257 has its CatchHandler @ 0696b2b0 */
                    /* try { // try from 0696b258 to 06a6b277 has its CatchHandler @ 0696a944 */
      fVar4 = (float)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0696b02c with catch @ 0696b25c
                        */
      FUN_07d1d580(&stack0x00000100,fVar5 * fVar4 * unaff_s8,0);
                    /* try { // try from 0696b278 to 06a6b27b has its CatchHandler @ 0696b29c */
                    /* try { // try from 0696b27c to 06a6b29f has its CatchHandler @ 0696a944 */
      in_stack_00000068 = in_stack_00000108;
      in_stack_00000060 = in_stack_00000100;
      in_stack_00000078 = in_stack_00000118;
      in_stack_00000070 = in_stack_00000110;
      FUN_07d1c9b4();
      FUN_07d1d580(&stack0x000000a0,0,0);
                    /* catch() { ... } // from try @ 0696b278 with catch @ 0696b29c */
                    /* try { // try from 0696b2a0 to 06a6b2a7 has its CatchHandler @ 0696b2b0 */
                    /* try { // try from 0696b2a8 to 06a6b2b3 has its CatchHandler @ 0696a944 */
      in_stack_00000048 = in_stack_000000a8;
      in_stack_00000040 = in_stack_000000a0;
      in_stack_00000058 = in_stack_000000b8;
      in_stack_00000050 = in_stack_000000b0;
      FUN_07d1d0d8();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0696b250 with catch @ 0696b2b0
                       catch(type#2 @ 00000000) { ... } // from try @ 0696b2a0 with catch @ 0696b2b0
                        */
      if ((*(long *)(unaff_x20 + 0x78) != 0) &&
         (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0)) {
        fVar4 = (float)(**(code **)(*plVar2 + 0x4e8))(plVar2,*(undefined8 *)(*plVar2 + 0x4f0));
        if ((*(long *)(unaff_x20 + 0x78) != 0) &&
           (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0)) {
          fVar5 = (float)(**(code **)(*plVar2 + 0x528))(plVar2,*(undefined8 *)(*plVar2 + 0x530));
          if (*unaff_x21 != 0) {
            FUN_07d1d580(&stack0x00000020,
                         (fVar4 * DAT_015c5c98 + fVar5 * DAT_015c5b88) *
                         *(float *)(*unaff_x21 + 0x38),0);
            goto LAB_0696b1e8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


