/*
FUNCTION_NAME: FUN_05eb7414
ENTRY_POINT: 05eb7414
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05eb7414(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar1 = thunk_FUN_02cea894();
    uVar2 = thunk_FUN_02c7737c(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_04e97f6c(uVar1,uVar2,0);
  }
  else {
    if (*(int *)(param_2 + 0x18) == 6) {
      uStack_38 = param_1[5];
      local_40 = param_1[4];
      uStack_28 = param_1[7];
      uStack_30 = param_1[6];
      uStack_58 = param_1[1];
      local_60 = *param_1;
      uStack_48 = param_1[3];
      uStack_50 = param_1[2];
      if (DAT_06a7d2e8 == (code *)0x0) {
        DAT_06a7d2e8 = (code *)FUN_02ce79f8(
                                           "UnityEngine.GeometryUtility::Internal_ExtractPlanes_Injected(UnityEngine.Plane[],UnityEngine.Matrix4x4&)"
                                           );
      }
      (*DAT_06a7d2e8)(param_2,&local_60);
      return;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar1 = thunk_FUN_02cea894();
    uVar2 = thunk_FUN_02c7737c(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    uVar3 = thunk_FUN_02c7737c(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_04e97fd8(uVar1,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_02c7737c(OVRPlugin_Quatf___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar1,uVar2);
}


