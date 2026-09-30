/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 01d73244
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke
               (undefined4 *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  while (!(bool)in_ZR && in_NG == in_OV) {
    in_OV = SBORROW4(param_3,0x1f);
    in_NG = param_3 + -0x1f < 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    puVar2 = param_2 + 3;
    param_2 = param_2 + 4;
    param_1[3] = *puVar2;
    param_1 = param_1 + 4;
    in_ZR = param_3 == 0x1f;
    param_3 = param_3 + -0x10;
  }
  puVar2 = param_1;
  puVar3 = param_2;
  iVar4 = param_3;
  if (3 < param_3) {
    do {
      param_2 = puVar3 + 1;
      param_3 = iVar4 + -4;
      param_1 = puVar2 + 1;
      *puVar2 = *puVar3;
      bVar1 = 7 < iVar4;
      puVar2 = param_1;
      puVar3 = param_2;
      iVar4 = param_3;
    } while (bVar1);
  }
  if (0 < param_3) {
    param_3 = param_3 + 1;
    do {
      param_3 = param_3 + -1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1 = (undefined4 *)((long)param_1 + 1);
      param_2 = (undefined4 *)((long)param_2 + 1);
    } while (1 < param_3);
  }
  return;
}


