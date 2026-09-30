/*
FUNCTION_NAME: OVRManager$$.ctor
ENTRY_POINT: 01d72d80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager___ctor(uint *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  bool in_ZR;
  int iVar3;
  int iVar4;
  
  if (!in_ZR) {
    do {
      if (param_5 == 0) {
        return -1;
      }
      if ((uint)(byte)*param_1 == (param_3 & 0xff)) {
        return param_4;
      }
      param_1 = (uint *)((long)param_1 + 1);
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (((ulong)param_1 & 3) != 0);
  }
  if (3 < param_5) {
    iVar3 = param_5;
    do {
      uVar2 = *param_1 ^ (param_3 & 0xff) * 0x1010101;
      if (((uVar2 + 0x7efefeff ^ uVar2 ^ 0xffffffff) & 0x81010100) != 0) {
        if ((*param_1 & 0xff) == (param_3 & 0xff)) goto LAB_01d72e60;
        iVar4 = (int)param_1;
        if ((uint)*(byte *)((long)param_1 + 1) == (param_3 & 0xff)) {
          return (iVar4 - param_2) + 1;
        }
        if ((uint)*(byte *)((long)param_1 + 2) == (param_3 & 0xff)) {
          return (iVar4 - param_2) + 2;
        }
        if ((uint)*(byte *)((long)param_1 + 3) == (param_3 & 0xff)) {
          return (iVar4 - param_2) + 3;
        }
      }
      param_5 = iVar3 + -4;
      param_1 = param_1 + 1;
      bVar1 = 7 < iVar3;
      iVar3 = param_5;
    } while (bVar1);
  }
  if (0 < param_5) {
    param_5 = param_5 + 1;
    do {
      if ((uint)(byte)*param_1 == (param_3 & 0xff)) {
LAB_01d72e60:
        return (int)param_1 - param_2;
      }
      param_5 = param_5 + -1;
      param_1 = (uint *)((long)param_1 + 1);
    } while (1 < param_5);
  }
  return -1;
}


