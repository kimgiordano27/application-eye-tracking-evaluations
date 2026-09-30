/*
FUNCTION_NAME: FUN_069126fc
ENTRY_POINT: 069126fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_069126fc(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_075594dd & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTNamedCurves_BrainpoolP384r1Holder_TypeInfo
                );
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTNamedCurves_BrainpoolP320t1Holder_TypeInfo
                );
    DAT_075594dd = 1;
  }
  puVar2 = PTR_DAT_070c2278;
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698f1f0(*(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTNamedCurves_BrainpoolP320t1Holder_TypeInfo
                 ,param_3,0);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_06986514(0);
  if (((uVar3 & 1) != 0) && (lVar4 = *param_1, lVar4 != 0)) {
    if (param_4 != 0) {
      FUN_042e5f0c(param_4,lVar4,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_TeleTrust_TeleTrusTNamedCurves_BrainpoolP384r1Holder_TypeInfo
                  );
      lVar4 = *param_1;
      if (lVar4 == 0) goto LAB_069128b8;
    }
    FUN_069109f8(lVar4);
  }
  *param_1 = param_2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_06986514(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_4 != 0) {
    lVar5 = *(long *)(param_4 + 0x10);
    lVar4 = *param_1;
    lVar6 = *(long *)OVRPlugin_OVRP_1_124_0_TypeInfo;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_069128b8;
    uVar1 = *(uint *)(param_4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_4 + 0x18) = uVar1 + 1;
      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
    }
    else {
      FUN_042e4a64(param_4,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (param_3 != 0) {
    uVar3 = FUN_069d3398(param_3,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*param_1 != 0) {
      FUN_069109b4();
      return;
    }
  }
LAB_069128b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


