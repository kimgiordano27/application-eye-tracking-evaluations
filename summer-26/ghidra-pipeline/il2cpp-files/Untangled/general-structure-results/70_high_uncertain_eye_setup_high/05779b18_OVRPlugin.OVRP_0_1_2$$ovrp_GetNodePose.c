/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 05779b18
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_06d5a000;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05779b10 with catch @ 05779b1c
                        */
  if ((DAT_071c3f00 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
    FUN_02f07e70(PTR_DAT_06d36fa0);
    DAT_071c3f00 = 1;
  }
  puVar1 = PTR_DAT_06d36fa0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  __ptr = (void *)FUN_057759cc(param_1);
  __ptr_00 = (void *)FUN_057759cc(param_2);
  uVar3 = FUN_05779bdc(__ptr,__ptr_00);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  free(__ptr);
  free(__ptr_00);
  return uVar3;
}


