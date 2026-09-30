/*
FUNCTION_NAME: FUN_068b4604
ENTRY_POINT: 068b4604
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void FUN_068b4604(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_88 [2];
  undefined8 uStack_74;
  undefined8 local_6c [2];
  undefined8 uStack_58;
  undefined8 local_50 [2];
  undefined8 uStack_3c;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((DAT_0755915d & 1) == 0) {
    FUN_03188a78(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03188a78(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_0755915d = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x4d0));
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar1);
  }
  uVar3 = FUN_069d69b8(uVar2,0,0);
  puVar1 = OVRPlugin_TextureRectMatrixf_TypeInfo;
  lVar4 = param_1[0x1f];
  if ((uVar3 & 1) == 0) {
    if (lVar4 != 0) {
      FUN_05253128(lVar4,param_2,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo);
      if (param_1[0x20] != 0) {
        FUN_05253128(param_1[0x20],param_2,*(undefined8 *)puVar1);
        return;
      }
    }
  }
  else {
    FUN_06824a80(local_6c,uVar2,0);
    puVar1 = OVRPlugin_TrackingConfidence_TypeInfo;
    if (lVar4 != 0) {
      local_50[0] = local_6c[0];
      uStack_3c = uStack_58;
      FUN_05251b18(lVar4,param_2,local_50,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo);
      lVar4 = param_1[0x20];
      FUN_06824a1c(local_88,uVar2,0);
      if (lVar4 != 0) {
        local_50[0] = local_88[0];
        uStack_3c = uStack_74;
        FUN_05251b18(lVar4,param_2,local_50,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


