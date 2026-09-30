/*
FUNCTION_NAME: FUN_06635708
ENTRY_POINT: 06635708
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_06635708(char *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  
  if ((DAT_07557b49 & 1) == 0) {
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_DLSequence_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1868);
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07557b49 = 1;
  }
  if (*param_1 == '\0') {
    thunk_FUN_031edd38(PTR_DAT_070c2208);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar8 = thunk_FUN_031edd38(
                              Best_HTTP_Shared_PlatformSupport_Network_DNS_Cache_DNSQueryParameters_TypeInfo
                              );
    FUN_05966bd0(uVar7,uVar8,0);
    uVar8 = thunk_FUN_031edd38(
                              Best_HTTP_Shared_PlatformSupport_Network_DNS_Cache_DNSQueryResult_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar7,uVar8);
  }
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  iVar5 = FUN_059306e4(param_2,1,0);
  if (*(int *)(param_1 + 4) < iVar5) {
    FUN_06635a7c(param_1);
    puVar4 = OVRPlugin_TrackingConfidence___TypeInfo;
    uVar1 = iVar5 + 0x7f;
    iVar10 = 1;
    uVar2 = iVar5 + 0xfe;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 & 0xffffff80;
    uVar9 = (ulong)uVar2;
    uVar12 = uVar9;
    uVar11 = uVar2;
    if (0xff < (int)uVar1) {
      do {
        iVar10 = iVar10 + 1;
        uVar1 = (int)(uVar9 >> 7) + 0x7fU & 0x1ffff80;
        uVar9 = (ulong)uVar1;
        uVar11 = uVar1 + (int)uVar12;
        uVar12 = (ulong)uVar11;
      } while (0x80 < uVar1);
    }
    *(uint *)(param_1 + 4) = uVar2;
    *(uint *)(param_1 + 8) = uVar11;
    *(int *)(param_1 + 0xc) = iVar10;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar4);
    FUN_069a776c(uVar7,0x20,uVar11,4,0);
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_069a776c(uVar7,0x20,iVar5,4,0);
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_069a776c(uVar7,0x20,1,4,0);
    puVar3 = PTR_DAT_070f1868;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_03b14090(*(undefined8 *)
                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_DLSequence_TypeInfo);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar4);
    FUN_069a776c(uVar7,0x10,iVar10,uVar6,0);
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar8);
    FUN_069a776c(uVar7,0x100,iVar10 << 4,4,0);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
  }
  return;
}


