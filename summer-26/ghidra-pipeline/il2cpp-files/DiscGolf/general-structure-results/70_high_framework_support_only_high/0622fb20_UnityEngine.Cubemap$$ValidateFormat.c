/*
FUNCTION_NAME: UnityEngine.Cubemap$$ValidateFormat
ENTRY_POINT: 0622fb20
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Cubemap__ValidateFormat(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_06dc71fa & 1) == 0) {
    FUN_02d965b8(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
    DAT_06dc71fa = 1;
  }
  puVar1 = Method_OVRSceneManager_OVRManager_SceneCaptureComplete__;
  lVar5 = *(long *)(param_1 + 0x1f8);
  do {
    lVar3 = FUN_0552e2e4(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02dd3048(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(lVar3,uVar6);
      }
    }
    lVar3 = FUN_02dcf89c(param_1 + 0x1f8,lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


