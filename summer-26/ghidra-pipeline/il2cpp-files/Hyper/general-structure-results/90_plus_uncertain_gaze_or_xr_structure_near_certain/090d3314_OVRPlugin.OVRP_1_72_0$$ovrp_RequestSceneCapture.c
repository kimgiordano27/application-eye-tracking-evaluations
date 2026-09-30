/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 090d3314
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x22;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x760));
  *(undefined1 *)(unaff_x19 + 0x578) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 090d334c to 091d3353 has its CatchHandler @ 090d35ac */
      thunk_FUN_049a583c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79768);
    FUN_06412f98(lVar6,uVar7,*(undefined8 *)PTR_DAT_0ac79788,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar4 = lVar6;
                    /* try { // try from 090d3398 to 091d33cb has its CatchHandler @ 090d35b0 */
    thunk_FUN_049ee3d8(plVar4,lVar6);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_0ac79780;
  puVar1 = PTR_DAT_0ac79778;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar5[2];
  if (lVar8 == 0) {
                    /* try { // try from 090d33d0 to 091d33eb has its CatchHandler @ 090d35a4 */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar7 = *puVar5;
                    /* try { // try from 090d33ec to 091d358b has its CatchHandler @ 090d2c54 */
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79770);
    FUN_06425158(lVar8,uVar7,*(undefined8 *)PTR_DAT_0ac79790,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar8;
    thunk_FUN_049ee3d8(plVar4,lVar8);
  }
  uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_0714ad18(uVar7,2,lVar6,lVar8,*(undefined8 *)puVar1);
  return uVar7;
}


