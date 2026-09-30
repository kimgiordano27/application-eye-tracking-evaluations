/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 01d72d78
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__IsOpenXRLoaderActive(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  for (puVar6 = (uint *)(param_1 + param_3); ((ulong)puVar6 & 3) != 0;
      puVar6 = (uint *)((long)puVar6 + 1)) {
    if (param_4 == 0) {
      return -1;
    }
    if ((uint)(byte)*puVar6 == (param_2 & 0xff)) {
      return param_3;
    }
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  iVar3 = (int)param_1;
  if (3 < param_4) {
    iVar4 = param_4;
    do {
      uVar2 = *puVar6 ^ (param_2 & 0xff) * 0x1010101;
      if (((uVar2 + 0x7efefeff ^ uVar2 ^ 0xffffffff) & 0x81010100) != 0) {
        if ((*puVar6 & 0xff) == (param_2 & 0xff)) goto LAB_01d72e60;
        iVar5 = (int)puVar6;
        if ((uint)*(byte *)((long)puVar6 + 1) == (param_2 & 0xff)) {
          return (iVar5 - iVar3) + 1;
        }
        if ((uint)*(byte *)((long)puVar6 + 2) == (param_2 & 0xff)) {
          return (iVar5 - iVar3) + 2;
        }
        if ((uint)*(byte *)((long)puVar6 + 3) == (param_2 & 0xff)) {
          return (iVar5 - iVar3) + 3;
        }
      }
      param_4 = iVar4 + -4;
      puVar6 = puVar6 + 1;
      bVar1 = 7 < iVar4;
      iVar4 = param_4;
    } while (bVar1);
  }
  if (0 < param_4) {
    param_4 = param_4 + 1;
    do {
      if ((uint)(byte)*puVar6 == (param_2 & 0xff)) {
LAB_01d72e60:
        return (int)puVar6 - iVar3;
      }
      param_4 = param_4 + -1;
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (1 < param_4);
  }
  return -1;
}


