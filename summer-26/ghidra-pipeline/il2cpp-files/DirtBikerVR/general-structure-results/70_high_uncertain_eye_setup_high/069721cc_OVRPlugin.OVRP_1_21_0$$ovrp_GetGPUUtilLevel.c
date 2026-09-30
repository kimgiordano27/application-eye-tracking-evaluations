/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilLevel
ENTRY_POINT: 069721cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilLevel
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6,int *param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  float fVar5;
  float fStack000000000000000c;
  
  if (param_1 != param_3) {
    in_w9 = (int)param_1;
  }
  iVar1 = -in_w9;
  if ((unaff_x20 & 1) != 0) {
    iVar1 = in_w9;
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
  fStack000000000000000c = param_6;
  if (param_2 != param_3) {
    fStack000000000000000c = (float)(int)param_2;
  }
  fVar5 = (float)*param_7 + (float)iVar1;
  if (param_4 != param_3) {
    param_6 = (float)(int)param_4;
  }
  if (fVar5 <= param_6) {
    param_6 = fVar5;
  }
  if (fStack000000000000000c <= fVar5) {
    fStack000000000000000c = param_6;
  }
  uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x21 + 0x78),&stack0x0000000c);
  if (lVar2 != 0) {
    FUN_0667c5b4(lVar2,uVar3,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


