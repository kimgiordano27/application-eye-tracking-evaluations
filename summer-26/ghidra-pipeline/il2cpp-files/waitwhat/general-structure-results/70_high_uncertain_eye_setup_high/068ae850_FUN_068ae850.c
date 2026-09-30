/*
FUNCTION_NAME: FUN_068ae850
ENTRY_POINT: 068ae850
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_068ae850(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = 
  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetB_TypeInfo
  ;
  puVar2 = 
  Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetA_TypeInfo
  ;
  if ((DAT_0755910a & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetC_TypeInfo
                );
    FUN_03188a78(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetB_TypeInfo
                );
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetA_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_52_0_TypeInfo);
    DAT_0755910a = 1;
  }
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_042e4268(uVar4,*(undefined8 *)puVar3);
  (**(code **)(*param_1 + 0x538))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x540));
  FUN_068aec44(param_1);
  puVar2 = OVRPlugin_OVRP_1_124_0_TypeInfo;
  lVar5 = param_1[0x2c];
  if (lVar5 == 0) {
LAB_068aec40:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar8 = *(long *)(lVar5 + 0x10);
  lVar7 = param_1[0x28];
  lVar9 = *(long *)OVRPlugin_OVRP_1_124_0_TypeInfo;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_068aec40;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
  }
  else {
    FUN_042e4a64(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
  }
  lVar5 = param_1[0x2c];
  if (lVar5 == 0) goto LAB_068aec40;
  lVar8 = *(long *)(lVar5 + 0x10);
  lVar7 = param_1[0x29];
  lVar9 = *(long *)puVar2;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_068aec40;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
  }
  else {
    FUN_042e4a64(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
  }
  lVar5 = FUN_069d3b50(param_1,0);
  puVar3 = PTR_DAT_070c2418;
  puVar2 = PTR_DAT_070c1b68;
  if (lVar5 == 0) goto LAB_068aec40;
  uVar4 = FUN_03ac34dc(lVar5,1,*(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetC_TypeInfo
                      );
  FUN_068aed20(param_1,uVar4);
  if ((char)param_1[0x36] != '\0') {
    lVar5 = param_1[0x37];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_069d8404(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,param_1,0);
    }
  }
  if (*(char *)((long)param_1 + 0x1c1) == '\0') {
LAB_068aeaa4:
    if ((char)param_1[0x3a] != '\0') {
      lVar5 = param_1[0x3b];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_069d69b8(lVar5,0,0);
      if ((uVar6 & 1) != 0) goto LAB_068aeb94;
    }
    if ((char)param_1[0x3c] != '\0') {
      lVar5 = param_1[0x3d];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_069d69b8(lVar5,0,0);
      if ((uVar6 & 1) != 0) goto LAB_068aeb94;
    }
    if ((char)param_1[0x3e] != '\0') {
      lVar5 = param_1[0x3f];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_069d69b8(lVar5,0,0);
      if ((uVar6 & 1) != 0) goto LAB_068aeb94;
    }
    if ((char)param_1[0x40] != '\0') {
      lVar5 = param_1[0x41];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_069d69b8(lVar5,0,0);
      if ((uVar6 & 1) != 0) goto LAB_068aeb94;
    }
    if ((char)param_1[0x42] == '\0') goto LAB_068aebc4;
    lVar5 = param_1[0x43];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_069d69b8(lVar5,0,0);
    if ((uVar6 & 1) == 0) goto LAB_068aebc4;
  }
  else {
    lVar5 = param_1[0x39];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_069d69b8(lVar5,0,0);
    if ((uVar6 & 1) == 0) goto LAB_068aeaa4;
  }
LAB_068aeb94:
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)puVar2,param_1,0);
  FUN_068aedb8(param_1);
LAB_068aebc4:
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((((*(char *)((long)param_1 + 0x221) == '\0') && (*(char *)((long)param_1 + 0x22c) == '\0')) &&
      ((char)param_1[0x47] == '\0')) &&
     (((*(char *)((long)param_1 + 0x244) == '\0' && ((char)param_1[0x4a] == '\0')) &&
      (*(char *)((long)param_1 + 0x25c) == '\0')))) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)puVar2,param_1,0);
  FUN_068aeefc(param_1);
  return;
}


