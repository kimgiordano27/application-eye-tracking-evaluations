/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 01f91c70
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
              (uint *param_1,int param_2,uint param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  uint *puVar3;
  uint in_w9;
  uint in_w10;
  int in_w11;
  
  while( true ) {
    if ((bool)in_ZR) {
      return ((int)param_1 - param_2) + 2;
    }
    iVar2 = param_5;
    if ((uint)*(byte *)((long)param_1 + 3) == (param_3 & 0xff)) {
      return ((int)param_1 - param_2) + 3;
    }
    do {
      puVar3 = param_1;
      param_5 = iVar2 + -4;
      param_1 = puVar3 + 1;
      if (iVar2 < 8) {
        if (param_5 < 1) {
          return -1;
        }
        iVar2 = iVar2 + -3;
        while ((uint)(byte)*param_1 != (param_3 & 0xff)) {
          iVar2 = iVar2 + -1;
          param_1 = (uint *)((long)param_1 + 1);
          if (iVar2 < 2) {
            return -1;
          }
        }
        goto LAB_01f91ccc;
      }
      uVar1 = *param_1 ^ in_w10;
      iVar2 = param_5;
    } while ((in_w9 & (uVar1 + in_w11 ^ uVar1 ^ 0xffffffff)) == 0);
    if ((*param_1 & 0xff) == (param_3 & 0xff)) break;
    if ((uint)*(byte *)((long)puVar3 + 5) == (param_3 & 0xff)) {
      return ((int)param_1 - param_2) + 1;
    }
    in_ZR = (uint)*(byte *)((long)puVar3 + 6) == (param_3 & 0xff);
  }
LAB_01f91ccc:
  return (int)param_1 - param_2;
}


