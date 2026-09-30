/*
FUNCTION_NAME: FUN_034cde2c
ENTRY_POINT: 034cde2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_034cde2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__;
  if ((DAT_04832d0e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ProfilingSampler_Get<RenderGraphProfileId>__);
    DAT_04832d0e = 1;
  }
  puVar1 = Method_OVREyeGaze_OnPermissionGranted__;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  uVar4 = FUN_034ccb50();
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034ccd7c(uVar5,uVar6,uVar4,0x80,1);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
  return;
}


