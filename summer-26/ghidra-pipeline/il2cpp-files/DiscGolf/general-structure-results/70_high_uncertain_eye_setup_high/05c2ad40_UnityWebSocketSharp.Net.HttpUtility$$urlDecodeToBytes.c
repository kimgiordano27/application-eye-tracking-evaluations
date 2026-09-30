/*
FUNCTION_NAME: UnityWebSocketSharp.Net.HttpUtility$$urlDecodeToBytes
ENTRY_POINT: 05c2ad40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityWebSocketSharp_Net_HttpUtility__urlDecodeToBytes(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (((param_1 & 1) == 0) && (*(long *)(unaff_x21 + 0x28) == 0)) {
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0eb58);
    FUN_0549bcb4(uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x58),uVar2);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(*(long *)(unaff_x19 + 0x40) + 0x98);
    if (unaff_x20 == 0) {
      uVar3 = FUN_05508414(0,0,0);
      uVar2 = 0;
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    else {
      uVar3 = FUN_05508414(*(undefined8 *)(unaff_x20 + 0x50),0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    }
    puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
    lVar4 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar1;
    }
    uVar3 = FUN_05508414(uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x98) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


