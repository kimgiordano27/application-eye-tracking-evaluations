/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster$$PerformRaycasts
ENTRY_POINT: 0611f874
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster__PerformRaycasts(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  
  LeanTween__value();
  lVar1 = FUN_02d966a4(*unaff_x24,9);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
    LeanTween__value((undefined8 *)(lVar1 + 0x20));
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = unaff_x23;
      LeanTween__value((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) =
             *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__;
        LeanTween__value((undefined8 *)(lVar1 + 0x30));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = unaff_x22;
          LeanTween__value((undefined8 *)(lVar1 + 0x38));
                    /* try { // try from 0611f918 to 0621f91f has its CatchHandler @ 0611f990 */
          if (4 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 0611f928 to 0621f933 has its CatchHandler @ 0611f98c */
            *(undefined8 *)(lVar1 + 0x40) =
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
            ;
                    /* try { // try from 0611f938 to 0621f947 has its CatchHandler @ 0611f988 */
            LeanTween__value((undefined8 *)(lVar1 + 0x40));
                    /* try { // try from 0611f948 to 0621f9ab has its CatchHandler @ 0611f850 */
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = unaff_x21;
              LeanTween__value((undefined8 *)(lVar1 + 0x48));
              if (6 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x50) =
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Player>__;
                LeanTween__value((undefined8 *)(lVar1 + 0x50));
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0611f938 with catch @ 0611f988
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0611f928 with catch @ 0611f98c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0611f918 with catch @ 0611f990
                        */
                if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar1 + 0x58) = unaff_x20;
                  LeanTween__value((undefined8 *)(lVar1 + 0x58));
                    /* try { // try from 0611f9ac to 0621f9af has its CatchHandler @ 0611f9c8 */
                    /* try { // try from 0611f9b0 to 0621f9cb has its CatchHandler @ 0611f850 */
                  if (8 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x60) =
                         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ParentObject>__;
                    /* catch() { ... } // from try @ 0611f9ac with catch @ 0611f9c8 */
                    LeanTween__value();
                    /* try { // try from 0611f9cc to 0621f9d3 has its CatchHandler @ 0611f9dc */
                    /* try { // try from 0611f9d4 to 0621f9df has its CatchHandler @ 0611f850 */
                    uVar2 = FUN_0536dde4(lVar1,0);
                    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0611f9cc with catch @ 0611f9dc
                        */
                    LeanTween__value((undefined8 *)(unaff_x19 + 0x30),uVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


