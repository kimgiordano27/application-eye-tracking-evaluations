/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 04f975b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar4;
  
  while (param_1 != 0) {
    do {
      if (*(uint *)(unaff_x23 + 3) <= unaff_x21) {
LAB_04f9763c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(long *)((long)unaff_x23 + unaff_x22) = unaff_x20;
      thunk_FUN_02bb0e9c((long)unaff_x23 + unaff_x22,unaff_x20);
      plVar4 = *(long **)(unaff_x19 + 0xa0);
      lVar1 = FUN_04f93560();
      if (plVar4 == (long *)0x0) {
LAB_04f97638:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
                    /* try { // try from 04f975e8 to 0509765f has its CatchHandler @ 04f976b4 */
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02b79548(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_04f97640;
      if (*(uint *)(plVar4 + 3) <= unaff_x21) goto LAB_04f9763c;
      *(long *)((long)plVar4 + unaff_x22) = lVar1;
      thunk_FUN_02bb0e9c((long)plVar4 + unaff_x22,lVar1);
      unaff_x21 = unaff_x21 + 1;
      unaff_x22 = unaff_x22 + 8;
      if (unaff_x21 == 0x1a) {
        return;
      }
      unaff_x23 = *(long **)(unaff_x19 + 0x98);
      unaff_x20 = FUN_04f931f0();
      if (unaff_x23 == (long *)0x0) goto LAB_04f97638;
    } while (unaff_x20 == 0);
    param_1 = thunk_FUN_02b79548(unaff_x20,*(undefined8 *)(*unaff_x23 + 0x40));
  }
LAB_04f97640:
  uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,0);
}


