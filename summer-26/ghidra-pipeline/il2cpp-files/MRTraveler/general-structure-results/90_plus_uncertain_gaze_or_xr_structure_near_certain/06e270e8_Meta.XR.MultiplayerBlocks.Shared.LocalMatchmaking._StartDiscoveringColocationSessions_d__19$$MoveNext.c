/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__19$$MoveNext
ENTRY_POINT: 06e270e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__19__MoveNext
               (long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar1;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  while (!(bool)in_ZR && in_NG == in_OV) {
    FUN_05212a24(param_1,0,*unaff_x21);
    if (unaff_x19[9] == 0) goto LAB_06e27164;
    FUN_052143ec(unaff_x19[9],0,*unaff_x22);
    (**(code **)(*unaff_x19 + 0x248))();
    uVar1 = FUN_06e27168();
    if ((uVar1 & 1) == 0) break;
    param_1 = unaff_x19[9];
    if (param_1 == 0) goto LAB_06e27164;
    in_NG = *(int *)(param_1 + 0x18) < 0;
    in_OV = '\0';
    in_ZR = *(int *)(param_1 + 0x18) == 0;
  }
                    /* try { // try from 06e27138 to 06f2728f has its CatchHandler @ 06e27138
                       catch() { ... } // from try @ 06e27138 with catch @ 06e27138
                       catch() { ... } // from try @ 06e27314 with catch @ 06e27138
                       catch() { ... } // from try @ 06e27388 with catch @ 06e27138
                       catch() { ... } // from try @ 06e273cc with catch @ 06e27138
                       catch() { ... } // from try @ 06e273fc with catch @ 06e27138 */
  if (unaff_x19[9] != 0) {
    return 0 < *(int *)(unaff_x19[9] + 0x18);
  }
LAB_06e27164:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


