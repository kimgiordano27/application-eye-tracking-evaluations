/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 051e05d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
                    /* try { // try from 051e05d4 to 052e0647 has its CatchHandler @ 051e04e0 */
  uVar5 = *param_1;
  uVar3 = thunk_FUN_02cea894(**(undefined8 **)(in_x9 + 0x260));
  FUN_04a57d0c(uVar3,uVar5,*(undefined8 *)PTR_DAT_06609280,0);
  lVar4 = *unaff_x22;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28) = uVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *unaff_x22;
  }
  puVar2 = PTR_DAT_06609278;
  puVar1 = PTR_DAT_06609270;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar4 = *unaff_x22;
    }
                    /* try { // try from 051e0648 to 052e0657 has its CatchHandler @ 051e065c */
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609268);
    FUN_04a66dd0(lVar6,uVar5,*(undefined8 *)PTR_DAT_06609288,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = lVar6;
  }
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_03d875dc(uVar5,4,uVar3,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


