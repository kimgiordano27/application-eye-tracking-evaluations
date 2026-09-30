/*
FUNCTION_NAME: FUN_066022b8
ENTRY_POINT: 066022b8
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


void FUN_066022b8(long param_1,int param_2,int param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = UnityEngine_BootConfigData_TypeInfo;
                    /* try { // try from 066022d8 to 06702557 has its CatchHandler @ 066022d8
                       catch() { ... } // from try @ 066022d8 with catch @ 066022d8
                       catch() { ... } // from try @ 06602628 with catch @ 066022d8
                       catch() { ... } // from try @ 066026dc with catch @ 066022d8
                       catch() { ... } // from try @ 066026e8 with catch @ 066022d8
                       catch() { ... } // from try @ 06602744 with catch @ 066022d8
                       catch() { ... } // from try @ 06602768 with catch @ 066022d8 */
  if ((bRam0000000007557956 & 1) == 0) {
    FUN_03188a78(UnityEngine_BootConfigData_TypeInfo);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(PTR_DAT_070f2650);
    bRam0000000007557956 = 1;
  }
  uVar6 = FUN_03188b1c(*(undefined8 *)puVar4,2);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  FUN_05971910(param_1,0);
  iVar3 = param_3 * param_2;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  puVar4 = OVRPlugin_TrackingConfidence___TypeInfo;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar2 = param_2 * 0xc + (iVar2 >> 2);
  if ((param_4 & 1) != 0) {
    uVar8 = 0;
    bVar5 = true;
    do {
      bVar7 = bVar5;
      lVar9 = *(long *)(param_1 + 0x30);
      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar4);
      FUN_069a7ab0(uVar6,0x20,1,iVar2,4,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar1 = uVar8 * 8;
      uVar8 = 1;
      *(undefined8 *)(lVar9 + lVar1 + 0x20) = uVar6;
      bVar5 = false;
    } while (bVar7);
  }
  puVar4 = PTR_DAT_070f2650;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0454acf4(&uStack_50,iVar2 * 4,4,1,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uStack_48;
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  return;
}


