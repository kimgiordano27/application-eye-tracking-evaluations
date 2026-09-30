/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateFaceTrackingContext
ENTRY_POINT: 05598184
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__CreateFaceTrackingContext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long lVar7;
  long unaff_x21;
  undefined8 uVar8;
  
  FUN_02d965b8(Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var);
                    /* try { // try from 05598198 to 0569819b has its CatchHandler @ 055981a0 */
  FUN_02d965b8(Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_var);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05598130 with catch @ 0559819c
                       try { // try from 0559819c to 056981bb has its CatchHandler @ 055980e8 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05598150 with catch @ 055981a0
                       catch(type#1 @ 066567d8) { ... } // from try @ 05598198 with catch @ 055981a0
                        */
  FUN_02d965b8(Unity_Netcode_NetworkUpdateLoop_NetworkPreLateUpdate_var);
  *(undefined1 *)(unaff_x21 + 0x587) = 1;
  puVar2 = Unity_Netcode_NetworkUpdateLoop_NetworkPreLateUpdate_var;
  if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 055981bc to 056981bf has its CatchHandler @ 055981c8 */
                    /* catch() { ... } // from try @ 055981bc with catch @ 055981c8 */
                    /* try { // try from 055981cc to 056981d3 has its CatchHandler @ 055981dc */
                    /* try { // try from 055981d4 to 056981df has its CatchHandler @ 055980e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055981cc with catch @ 055981dc
                        */
    uVar3 = (**(code **)(*unaff_x19 + 0x728))();
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar1 = Unity_Netcode_NetworkUpdateLoop_NetworkInitialization_var;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var);
      FUN_03b7820c(lVar7,uVar8,
                   *(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_var,0)
      ;
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar7;
      LeanTween__value(plVar4,lVar7);
    }
    FUN_03612e6c(uVar3,lVar7,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


