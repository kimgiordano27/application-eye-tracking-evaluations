/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 03a92150
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>
               (long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03293514(param_3);
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18) + -1;
    uVar2 = FUN_0419d380(param_1,iVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
                    /* try { // try from 03a92190 to 03b92197 has its CatchHandler @ 03a92298 */
                    /* try { // try from 03a92198 to 03b92287 has its CatchHandler @ 03a91fc4 */
    FUN_0419d3d4(param_1,param_2,uVar2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
    FUN_0419ee08(param_1,iVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


