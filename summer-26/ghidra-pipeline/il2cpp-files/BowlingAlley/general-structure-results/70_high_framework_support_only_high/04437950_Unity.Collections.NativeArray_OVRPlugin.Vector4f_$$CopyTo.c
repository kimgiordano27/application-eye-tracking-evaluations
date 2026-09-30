/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 04437950
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_076d046f & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072835c0);
    DAT_076d046f = 1;
  }
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
                    /* try { // try from 04437990 to 045379db has its CatchHandler @ 04437990
                       catch() { ... } // from try @ 04437990 with catch @ 04437990
                       catch() { ... } // from try @ 04437a50 with catch @ 04437990
                       catch() { ... } // from try @ 04437a80 with catch @ 04437990
                       catch() { ... } // from try @ 04437b00 with catch @ 04437990 */
  if (*param_1 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (0x3f < iVar1) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar2 = thunk_FUN_032a56a0();
      uVar3 = thunk_FUN_032e1da0(PTR_DAT_072835c8);
      FUN_0592371c(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar2,param_4);
    }
    if (iVar1 < 2) {
      *param_1 = 0;
    }
    else {
      param_2 = FUN_03a08ee4(*param_1,iVar1,param_2,param_3,*(undefined8 *)PTR_DAT_072835c0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
  }
  return param_2;
}


