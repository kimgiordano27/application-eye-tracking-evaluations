/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 0469ada8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w23;
  
                    /* try { // try from 0469ada8 to 0479adcf has its CatchHandler @ 0469af5c */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_0469aea8(unaff_w23,param_3);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[1];
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
                    /* try { // try from 0469ade8 to 0479ae47 has its CatchHandler @ 0469af60 */
  FUN_0469b65c(param_2,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  return;
}


