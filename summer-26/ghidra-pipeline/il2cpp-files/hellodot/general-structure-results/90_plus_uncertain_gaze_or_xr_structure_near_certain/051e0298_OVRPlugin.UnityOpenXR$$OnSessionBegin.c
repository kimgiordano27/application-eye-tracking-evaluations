/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 051e0298
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


undefined8 OVRPlugin_UnityOpenXR__OnSessionBegin(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  FUN_04a57ae4();
  lVar3 = *unaff_x22;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = param_1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_06609218;
  puVar1 = PTR_DAT_06609210;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609208);
    FUN_04a66bf0(lVar4,uVar5,*(undefined8 *)PTR_DAT_06609228,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar4;
  }
                    /* try { // try from 051e0340 to 052e0347 has its CatchHandler @ 051e0410 */
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_03d86c78(uVar5,2,param_1,lVar4,*(undefined8 *)puVar1);
  return uVar5;
}


