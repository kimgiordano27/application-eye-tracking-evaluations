/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentMarkdownText
ENTRY_POINT: 0696cec4
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


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentMarkdownText
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
                    /* try { // try from 0696cec8 to 06a6cf57 has its CatchHandler @ 0696cb70 */
  if ((DAT_0897d0e0 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08487508);
    DAT_0897d0e0 = 1;
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
LAB_0696cf80:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar6 = UnityEngine_UIElements_Length__Equals(lVar3,0);
        if (lVar1 == 0) goto LAB_0696cf84;
        if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_0696cf80;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x30;
        puVar5[-2] = uVar6;
        puVar5[-1] = param_2;
        *puVar5 = param_3;
        puVar5 = puVar5 + 3;
      } while ((uVar2 & 0xffffffff) != uVar4);
    }
    FUN_0696ce24(lVar1);
    return;
  }
LAB_0696cf84:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


