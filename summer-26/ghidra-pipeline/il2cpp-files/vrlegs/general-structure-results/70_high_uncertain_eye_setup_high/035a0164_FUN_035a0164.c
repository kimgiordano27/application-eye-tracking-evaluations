/*
FUNCTION_NAME: FUN_035a0164
ENTRY_POINT: 035a0164
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035a0164(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((DAT_0412e0fc & 1) == 0) {
    FUN_01ab69ac(Photon_Voice_RawCodec_ShortToFloat_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    DAT_0412e0fc = 1;
  }
  plVar5 = (long *)(param_1 + 0x50);
  lVar9 = *plVar5;
  if (lVar9 == 0) {
    lVar9 = FUN_01ab6a94(*(undefined8 *)Photon_Voice_RawCodec_ShortToFloat_TypeInfo,2);
    *plVar5 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar9);
    lVar9 = *plVar5;
    if (lVar9 == 0) {
UnityEngine_Light__get_lightShadowCasterMode:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  puVar1 = OVRPlugin_OVRP_0_1_1_TypeInfo;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar3 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    lVar6 = 0;
    uVar7 = 0;
    lVar8 = uVar3 * 0x5c;
    do {
      if (uVar3 <= uVar7) {
LAB_035a02ec:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar2 = lVar9 + lVar6;
      *(undefined8 *)(lVar2 + 0x2c) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x5c) = 0;
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
        uVar3 = (ulong)*(uint *)(lVar9 + 0x18);
      }
      if (uVar3 <= uVar7) goto LAB_035a02ec;
      puVar4 = *(undefined8 **)(lVar2 + 0xb8);
      *(undefined4 *)(lVar9 + lVar6 + 0x4c) = *(undefined4 *)(puVar4 + 1);
      lVar9 = *plVar5;
      if (lVar9 == 0) goto UnityEngine_Light__get_lightShadowCasterMode;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_035a02ec;
      uVar10 = *(undefined4 *)puVar4;
      lVar9 = lVar9 + lVar6;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      *(undefined4 *)(lVar9 + 0x54) = uVar10;
      *(undefined8 *)(lVar9 + 0x6c) = *puVar4;
      lVar9 = *plVar5;
      if (lVar9 == 0) goto UnityEngine_Light__get_lightShadowCasterMode;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_035a02ec;
      *(undefined8 *)(lVar9 + lVar6 + 0x74) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8)
      ;
      lVar9 = *plVar5;
      if (lVar9 == 0) goto UnityEngine_Light__get_lightShadowCasterMode;
      uVar3 = (ulong)*(uint *)(lVar9 + 0x18);
      if (uVar3 <= uVar7) goto LAB_035a02ec;
      lVar2 = lVar9 + lVar6;
      lVar6 = lVar6 + 0x5c;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar2 + 0x58) = 0;
    } while (lVar8 - lVar6 != 0);
  }
  return;
}


