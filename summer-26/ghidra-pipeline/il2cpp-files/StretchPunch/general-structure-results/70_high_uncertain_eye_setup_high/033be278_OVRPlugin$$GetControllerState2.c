/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 033be278
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetControllerState2
              (uint *param_1,int param_2,uint param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint in_w9;
  uint in_w10;
  int in_w11;
  uint in_w12;
  
  while( true ) {
    iVar3 = (int)param_1;
    if (in_w12 == (param_3 & 0xff)) {
                    /* try { // try from 033be2ec to 034be323 has its CatchHandler @ 033be26c */
      return (iVar3 - param_2) + 1;
    }
    if ((uint)*(byte *)((long)param_1 + 2) == (param_3 & 0xff)) {
      return (iVar3 - param_2) + 2;
    }
    iVar2 = param_5;
    if ((uint)*(byte *)((long)param_1 + 3) == (param_3 & 0xff)) {
      return (iVar3 - param_2) + 3;
    }
    do {
      puVar4 = param_1;
      param_5 = iVar2 + -4;
                    /* try { // try from 033be2a0 to 034be2ab has its CatchHandler @ 033be344 */
      param_1 = puVar4 + 1;
      if (iVar2 < 8) {
        if (param_5 < 1) {
          return -1;
        }
        iVar2 = iVar2 + -3;
        while ((uint)(byte)*param_1 != (param_3 & 0xff)) {
          iVar2 = iVar2 + -1;
                    /* try { // try from 033be2d4 to 034be2db has its CatchHandler @ 033be334 */
          param_1 = (uint *)((long)param_1 + 1);
          if (iVar2 < 2) {
            return -1;
          }
        }
        goto LAB_033be2e4;
      }
      uVar1 = *param_1 ^ in_w10;
      iVar2 = param_5;
    } while ((in_w9 & (uVar1 + in_w11 ^ uVar1 ^ 0xffffffff)) == 0);
    if ((*param_1 & 0xff) == (param_3 & 0xff)) break;
    in_w12 = (uint)*(byte *)((long)puVar4 + 5);
  }
LAB_033be2e4:
                    /* try { // try from 033be2e4 to 034be2eb has its CatchHandler @ 033be330 */
  return (int)param_1 - param_2;
}


