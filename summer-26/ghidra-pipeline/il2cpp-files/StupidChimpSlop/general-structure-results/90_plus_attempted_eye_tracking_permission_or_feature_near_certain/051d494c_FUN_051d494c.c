/*
FUNCTION_NAME: FUN_051d494c
ENTRY_POINT: 051d494c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4 FUN_051d494c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_06a51eec & 1) == 0) {
    FUN_02d4dc40(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02d4dc40(PTR_DAT_0664c118);
    FUN_02d4dc40(PTR_DAT_0664c120);
    DAT_06a51eec = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  thunk_FUN_02d5b8bc(uVar3,0);
  uVar4 = FUN_051b732c(param_1,0);
  if ((uVar4 & 1) == 0) {
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar3,0);
    uVar6 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar3,0);
    puVar2 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
    puVar1 = PTR_DAT_0664c120;
    uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c118);
    FUN_050645dc(uVar3,param_1,*(undefined8 *)puVar2,0);
    lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
    FUN_0506ee38(lVar5,uVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar6 = 1;
    FUN_0506f658(lVar5,1,0);
    FUN_0506f0c0(lVar5,0);
  }
  return uVar6;
}


