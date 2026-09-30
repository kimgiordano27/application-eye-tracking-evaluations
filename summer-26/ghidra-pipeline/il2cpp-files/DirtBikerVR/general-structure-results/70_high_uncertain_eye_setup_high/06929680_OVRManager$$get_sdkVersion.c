/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 06929680
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_sdkVersion(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_08486738;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    uVar4 = *(undefined8 *)PTR_DAT_084868a0;
  }
  else {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218();
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_07c721e4();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar5 = (uint)*(ulong *)(lVar3 + 0x18);
      uVar2 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
      if (0 < (int)uVar5) {
        uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar2 = uVar2 - 1;
          uVar6 = uVar6 - 1;
        } while (uVar2 != 0);
      }
    }
  }
  return;
}


