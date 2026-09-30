/*
FUNCTION_NAME: FUN_048e5804
ENTRY_POINT: 048e5804
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_048e5804(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06d9fd78;
                    /* try { // try from 048e5820 to 049e5867 has its CatchHandler @ 048e58cc */
  if ((DAT_07241331 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    DAT_07241331 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x738);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar2 = FUN_051d94d4(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_051d94d4(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 048e5894 to 049e5897 has its CatchHandler @ 048e58c4 */
                    /* try { // try from 048e5898 to 049e58ab has its CatchHandler @ 048e58c8 */
      if (*(long *)(param_1 + 0x738) != 0) {
        Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(*(long *)(param_1 + 0x738),0)
        ;
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 048e58ac to 049e58bb has its CatchHandler @ 048e5660 */
      FUN_0160eeb4();
    }
  }
  return;
}


