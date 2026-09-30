/*
FUNCTION_NAME: FUN_0355c640
ENTRY_POINT: 0355c640
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355c640(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0355c658 to 0365c65b has its CatchHandler @ 0355c728 */
  if ((DAT_0412df57 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
                    /* try { // try from 0355c678 to 0365c67f has its CatchHandler @ 0355c740 */
    DAT_0412df57 = 1;
  }
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                    /* try { // try from 0355c680 to 0365c68b has its CatchHandler @ 0355c724 */
  if (*(long *)(param_1 + 0x6e8) != 0) {
    lVar3 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0);
    lVar5 = *(long *)puVar2;
                    /* try { // try from 0355c69c to 0365c6a7 has its CatchHandler @ 0355c720 */
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
    }
    puVar1 = PTR_DAT_03cbdf88;
    if (lVar3 != 0) {
      uVar6 = (uint)param_2;
      thunk_FUN_0369b650((float)(uVar6 & 0xff) / 255.0,(float)(uVar6 >> 8 & 0xff) / 255.0,
                         (float)(uVar6 >> 0x10 & 0xff) / 255.0,
                         (float)(param_2 >> 0x18 & 0xff) / 255.0,lVar3,
                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44),0);
      uVar7 = *(undefined8 *)(param_1 + 0x130);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_036d35a8(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x6e8) == 0) goto LAB_0355c774;
        uVar7 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0);
        *(undefined8 *)(param_1 + 0x130) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(param_1 + 0x130),uVar7);
      }
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x130);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x110);
      return;
    }
  }
LAB_0355c774:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


