/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 050d977c
PROGRAM: DirtBikerVR-libil2cpp.so
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
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_08976ad0 & 1) == 0) {
    FUN_03a8a718(&DAT_0865dfa0);
    DAT_08976ad0 = 1;
  }
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  if (*param_1 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (0x3f < iVar1) {
      thunk_FUN_03af1434(&DAT_0861aac0);
      uVar2 = thunk_FUN_03ac74bc();
      uVar3 = thunk_FUN_03af1434(&DAT_0869ae98);
      FUN_06750b44(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2,param_4);
    }
    if (iVar1 < 2) {
      *param_1 = 0;
    }
    else {
      param_2 = FUN_0458f268(*param_1,iVar1,param_2,param_3,*(undefined8 *)PTR_DAT_08494668);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
  }
  return param_2;
}


