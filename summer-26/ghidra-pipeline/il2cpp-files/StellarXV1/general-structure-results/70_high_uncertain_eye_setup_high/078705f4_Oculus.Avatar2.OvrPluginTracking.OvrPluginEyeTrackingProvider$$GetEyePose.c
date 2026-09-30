/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginEyeTrackingProvider$$GetEyePose
ENTRY_POINT: 078705f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider__GetEyePose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_092e5c20;
  puVar1 = PTR_DAT_092e57a0;
  FUN_0787070c();
  FUN_07850014();
  FUN_078500fc();
  FUN_07870860();
  FUN_0784fca4();
  uVar3 = FUN_0784d77c(*(undefined8 *)(unaff_x21 + 0x20),0);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_075a0ef8(*(undefined8 *)(unaff_x21 + 0x18),0);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x21 + 0x20);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_07849778(uVar4,uVar3,uVar5,uVar6);
  thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_05696740();
  FUN_07851ebc();
  return;
}


