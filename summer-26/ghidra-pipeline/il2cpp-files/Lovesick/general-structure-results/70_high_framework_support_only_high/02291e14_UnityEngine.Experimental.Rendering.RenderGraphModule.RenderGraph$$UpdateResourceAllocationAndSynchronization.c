/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph$$UpdateResourceAllocationAndSynchronization
ENTRY_POINT: 02291e14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph__UpdateResourceAllocationAndSynchronization
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined2 in_stack_00000008;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 02291c70 with catch @ 02291e14 */
                    /* catch() { ... } // from try @ 02291d28 with catch @ 02291e18 */
                    /* catch() { ... } // from try @ 02291d18 with catch @ 02291e1c */
  lVar2 = thunk_FUN_00d6225c();
  if (lVar2 != 0) {
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = unaff_x21;
                    /* try { // try from 02291e34 to 02391e37 has its CatchHandler @ 02291e58 */
      in_stack_00000018 = *(undefined2 *)(unaff_x20 + 2);
                    /* try { // try from 02291e38 to 02391e5f has its CatchHandler @ 02291b04 */
      lVar2 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000018);
                    /* catch() { ... } // from try @ 02291e34 with catch @ 02291e58 */
                    /* try { // try from 02291e60 to 02391e73 has its CatchHandler @ 02291ed4 */
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_02291f24;
      if (1 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[5] = lVar2;
                    /* catch() { ... } // from try @ 02291c60 with catch @ 02291e74
                       try { // try from 02291e74 to 02391e8b has its CatchHandler @ 02291b04 */
        in_stack_00000010 = *(undefined2 *)(unaff_x20 + 4);
        lVar2 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000010);
                    /* try { // try from 02291e8c to 02391e8f has its CatchHandler @ 02291eb0 */
                    /* try { // try from 02291e90 to 02391eb7 has its CatchHandler @ 02291b04 */
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_02291f24;
        if (2 < *(uint *)(unaff_x19 + 3)) {
                    /* catch() { ... } // from try @ 02291e8c with catch @ 02291eb0 */
          unaff_x19[6] = lVar2;
          in_stack_00000008 = *(undefined2 *)(unaff_x20 + 6);
                    /* try { // try from 02291eb8 to 02391ebf has its CatchHandler @ 02291ed4 */
                    /* try { // try from 02291ec0 to 02391ecb has its CatchHandler @ 02291b04 */
          lVar2 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000008);
                    /* try { // try from 02291ecc to 02391ed3 has its CatchHandler @ 02291ed4 */
                    /* catch() { ... } // from try @ 02291e60 with catch @ 02291ed4
                       catch() { ... } // from try @ 02291eb8 with catch @ 02291ed4
                       catch() { ... } // from try @ 02291ecc with catch @ 02291ed4 */
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_02291f24;
          puVar1 = OVRTelemetryConstants_OVRManager_TypeInfo;
          if (3 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[7] = lVar2;
            FUN_01600be4(*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_02291f24:
  uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,0);
}


