/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 01d73230
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


void OVRManager_InstantiateMrcCameraDelegate__Invoke
               (undefined4 *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_w8;
  
  while( true ) {
    param_1[2] = in_w8;
    puVar5 = param_2 + 4;
    param_1[3] = param_2[3];
    puVar3 = param_1 + 4;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_OV = SBORROW4(param_3,0x1f);
    in_NG = param_3 + -0x1f < 0;
    in_ZR = param_3 == 0x1f;
    param_3 = param_3 + -0x10;
    *puVar3 = *puVar5;
    param_1[5] = param_2[5];
    in_w8 = param_2[6];
    param_1 = puVar3;
    param_2 = puVar5;
  }
  puVar2 = puVar3;
  puVar4 = puVar5;
  iVar6 = param_3;
  if (3 < param_3) {
    do {
      puVar5 = puVar4 + 1;
      param_3 = iVar6 + -4;
      puVar3 = puVar2 + 1;
      *puVar2 = *puVar4;
      bVar1 = 7 < iVar6;
      puVar2 = puVar3;
      puVar4 = puVar5;
      iVar6 = param_3;
    } while (bVar1);
  }
  if (0 < param_3) {
    param_3 = param_3 + 1;
    do {
      param_3 = param_3 + -1;
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar3 = (undefined4 *)((long)puVar3 + 1);
      puVar5 = (undefined4 *)((long)puVar5 + 1);
    } while (1 < param_3);
  }
  return;
}


