/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentMarkdownText
ENTRY_POINT: 0696cd68
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


void OVRPlugin_UnifiedConsent__GetConsentMarkdownText
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if ((DAT_0897d0df & 1) == 0) {
                    /* try { // try from 0696cd7c to 06a6cda3 has its CatchHandler @ 0696d0dc */
    FUN_03a8a718(PTR_DAT_08487508);
    DAT_0897d0df = 1;
  }
  if (param_4 != 0) {
    lVar1 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08487508,*(undefined4 *)(param_4 + 0x18));
    uVar2 = *(ulong *)(param_4 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      lVar3 = param_4 + 0x20;
      puVar5 = (undefined4 *)(lVar1 + 0x28);
      do {
        if (*(uint *)(param_4 + 0x18) <= uVar4) {
LAB_0696ce1c:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar6 = FUN_07d22938(lVar3,0);
        if (lVar1 == 0) goto LAB_0696ce20;
        if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_0696ce1c;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x30;
        puVar5[-2] = uVar6;
        puVar5[-1] = param_2;
        *puVar5 = param_3;
        puVar5 = puVar5 + 3;
      } while ((uVar2 & 0xffffffff) != uVar4);
    }
                    /* try { // try from 0696ce10 to 06a6ce3f has its CatchHandler @ 0696d0d8 */
    FUN_0696ce24(lVar1);
    return;
  }
LAB_0696ce20:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


