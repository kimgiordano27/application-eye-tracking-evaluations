/*
FUNCTION_NAME: FUN_05699fec
ENTRY_POINT: 05699fec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_05699fec(undefined4 param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long local_40;
  long lStack_38;
  long local_28;
  
                    /* try { // try from 0569a000 to 0579a023 has its CatchHandler @ 0569a144 */
  if ((DAT_06dbc869 & 1) == 0) {
    FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
    DAT_06dbc869 = 1;
  }
  local_28 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = FUN_0569a0d4(param_1,param_2,&local_28);
  if ((uVar1 & 1) != 0) {
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                              );
    FUN_0552aca4(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(lVar2,param_1,param_2);
    if ((uVar1 & 1) != 0) {
      local_40 = 0;
      lStack_38 = local_28;
      LeanTween__value(&lStack_38);
      local_40 = lVar2;
      LeanTween__value(&local_40,lVar2);
      param_3[1] = lStack_38;
      *param_3 = local_40;
      LeanTween__value(param_3,0);
      return 1;
    }
  }
  return 0;
}


