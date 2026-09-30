/*
FUNCTION_NAME: FUN_035968e8
ENTRY_POINT: 035968e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_035968e8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
                    /* try { // try from 035968f4 to 036968f7 has its CatchHandler @ 035969dc */
  if ((DAT_0412e098 & 1) == 0) {
                    /* try { // try from 03596910 to 03696913 has its CatchHandler @ 035969b8 */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
                    /* try { // try from 03596914 to 03696917 has its CatchHandler @ 035969b4 */
                    /* try { // try from 03596918 to 0369691b has its CatchHandler @ 035969a0 */
                    /* try { // try from 0359691c to 0369691f has its CatchHandler @ 03596994 */
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
                    /* try { // try from 03596920 to 03696923 has its CatchHandler @ 03596980 */
                    /* try { // try from 03596924 to 03696927 has its CatchHandler @ 0359696c */
    DAT_0412e098 = 1;
  }
  puVar1 = PTR_DAT_03cbdf88;
                    /* try { // try from 03596928 to 0369692b has its CatchHandler @ 03596968 */
  lVar2 = param_1[2];
                    /* try { // try from 0359692c to 0369692f has its CatchHandler @ 03596954 */
  if (lVar2 != 0) {
    FUN_02793a34(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((param_2 & 1) != 0) {
      lVar2 = *param_1;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_036cee6c(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*param_1 == 0) goto LAB_03596a1c;
        FUN_036a460c(*param_1,param_1[2],0);
      }
    }
    lVar2 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036cee6c(lVar2,0,0);
    puVar1 = OVRPlugin_Media_TypeInfo;
    if ((uVar3 & 1) != 0) {
      lVar4 = *param_1;
      lVar2 = *(long *)OVRPlugin_Media_TypeInfo;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(lVar2 + 0xb8);
      local_50 = *(undefined8 *)(lVar2 + 0x30);
      uStack_58 = *(undefined8 *)(lVar2 + 0x28);
      local_60 = *(undefined8 *)(lVar2 + 0x20);
      local_40 = local_60;
      uStack_38 = uStack_58;
      local_30 = local_50;
      if (lVar4 == 0) {
LAB_03596a1c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_036a3af4(lVar4,&local_60,0);
    }
  }
  return;
}


