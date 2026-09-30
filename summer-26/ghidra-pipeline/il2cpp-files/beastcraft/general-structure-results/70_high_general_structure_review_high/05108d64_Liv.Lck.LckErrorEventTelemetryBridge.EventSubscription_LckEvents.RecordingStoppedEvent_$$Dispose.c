/*
FUNCTION_NAME: Liv.Lck.LckErrorEventTelemetryBridge.EventSubscription<LckEvents.RecordingStoppedEvent>$$Dispose
ENTRY_POINT: 05108d64
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Liv_Lck_LckErrorEventTelemetryBridge_EventSubscription<LckEvents_RecordingStoppedEvent>__Dispose
               (void)

{
  int iVar1;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000018;
  
  FUN_02e7568c();
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 05108d58 with catch @ 05108d78
                       try { // try from 05108d78 to 05208d93 has its CatchHandler @ 05108d04 */
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (iVar1 < 1) {
    return;
  }
                    /* try { // try from 05108d94 to 05208d97 has its CatchHandler @ 05108dd8 */
                    /* try { // try from 05108d98 to 05208ddb has its CatchHandler @ 05108d04 */
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar2 = *unaff_x28;
    uVar4 = unaff_x27[1];
    uVar3 = *unaff_x27;
    unaff_x27[1] = unaff_x28[1];
    *unaff_x27 = uVar2;
    thunk_FUN_02ee2be8(unaff_x20 + 0x20 + in_stack_00000018 * 0x10,0);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
                    /* catch() { ... } // from try @ 05108d94 with catch @ 05108dd8 */
                    /* try { // try from 05108ddc to 05208de3 has its CatchHandler @ 05108dec */
                    /* try { // try from 05108de4 to 05208def has its CatchHandler @ 05108d04 */
      unaff_x28[1] = uVar4;
      *unaff_x28 = uVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05108ddc with catch @ 05108dec
                        */
                    /* try { // try from 05108df0 to 05208e5b has its CatchHandler @ 05108df0
                       catch() { ... } // from try @ 05108df0 with catch @ 05108df0
                       catch() { ... } // from try @ 05108e64 with catch @ 05108df0
                       catch() { ... } // from try @ 05108eec with catch @ 05108df0
                       catch() { ... } // from try @ 05108f28 with catch @ 05108df0 */
      thunk_FUN_02ee2be8(unaff_x20 + 0x20 + unaff_x29 * 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
}


