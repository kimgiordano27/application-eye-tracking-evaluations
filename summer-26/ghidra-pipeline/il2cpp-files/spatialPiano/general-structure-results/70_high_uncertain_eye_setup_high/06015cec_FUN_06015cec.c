/*
FUNCTION_NAME: FUN_06015cec
ENTRY_POINT: 06015cec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool FUN_06015cec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 local_30 [16];
  
  if ((DAT_06bc5343 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_18__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_14__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_19__);
    DAT_06bc5343 = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_19__;
  lVar3 = *(long *)(param_1 + 0x48);
  local_30 = ZEXT816(0);
  if (lVar3 != 0) {
    iVar4 = 0;
    local_30 = ZEXT816(0);
    do {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 <= iVar4) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        return 0 < iVar1;
      }
      auVar5 = FUN_03a7abdc(lVar3,iVar4,*(undefined8 *)puVar2);
      local_30 = auVar5;
      FUN_0609937c(local_30,0);
      lVar3 = *(long *)(param_1 + 0x48);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


