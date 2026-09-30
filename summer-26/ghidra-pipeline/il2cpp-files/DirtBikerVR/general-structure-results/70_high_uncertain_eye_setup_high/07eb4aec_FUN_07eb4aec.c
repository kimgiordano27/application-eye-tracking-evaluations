/*
FUNCTION_NAME: FUN_07eb4aec
ENTRY_POINT: 07eb4aec
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


long FUN_07eb4aec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_0899ac40 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08497180);
    FUN_03a8a718(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_0899ac40 = 1;
  }
  if (((param_1 == 0) || (lVar4 = FUN_07e2d9a0(param_1,0), lVar4 == 0)) ||
     (lVar4 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08497180,*(undefined4 *)(lVar4 + 0x18)),
     puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo, lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (0 < *(int *)(lVar4 + 0x18)) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar3 = FUN_07eb49f8(param_1,uVar5 & 0xffffffff);
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined4 *)(lVar4 + 0x20 + uVar5 * 4) = uVar3;
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return lVar4;
}


