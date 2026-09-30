/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 052ee824
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  
  lVar1 = FUN_066c67b0(param_1,0);
  if (lVar1 != 0) {
                    /* try { // try from 052ee838 to 053ee843 has its CatchHandler @ 052ee538 */
    FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),
                 *(undefined4 *)(unaff_x19 + 0x4c),lVar1,0);
                    /* try { // try from 052ee844 to 053ee84b has its CatchHandler @ 052ee84c */
    lVar1 = *(long *)(unaff_x19 + 0x68);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052ee810 with catch @ 052ee84c
                       catch(type#2 @ 00000000) { ... } // from try @ 052ee844 with catch @ 052ee84c
                        */
    if (DAT_071babf5 == '\0') {
                    /* try { // try from 052ee850 to 053ee8a7 has its CatchHandler @ 052ee850
                       catch() { ... } // from try @ 052ee850 with catch @ 052ee850
                       catch() { ... } // from try @ 052ee8d4 with catch @ 052ee850
                       catch() { ... } // from try @ 052ee910 with catch @ 052ee850
                       catch() { ... } // from try @ 052ee964 with catch @ 052ee850 */
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    if (lVar1 != 0) {
      puVar2 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      FUN_06741454(*puVar2,puVar2[1],puVar2[2],lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


