/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Equality
ENTRY_POINT: 0469ceac
PROGRAM: ZombiesMRFree-libil2cpp.so
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
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Equality
          (ulong param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9b0c0);
                    /* try { // try from 0469cec4 to 0479cf27 has its CatchHandler @ 0469d034 */
    *(undefined1 *)(unaff_x23 + 0x4dd) = 1;
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (*param_2 != 0) {
    iVar1 = *(int *)((long)param_2 + 0xc);
    if (0x3f < iVar1) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar2 = thunk_FUN_0301080c();
                    /* try { // try from 0469cf48 to 0479cf57 has its CatchHandler @ 0469d02c */
      uVar3 = thunk_FUN_03037804(PTR_DAT_06f9b0c8);
                    /* try { // try from 0469cf58 to 0479d01b has its CatchHandler @ 0469cb80 */
      FUN_05aeefcc(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar2);
    }
    if (iVar1 < 2) {
      *param_2 = 0;
    }
    else {
      param_3 = FUN_03c8a1fc(*param_2,iVar1,param_3);
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 0xc) = 0;
    }
  }
  return param_3;
}


