/*
FUNCTION_NAME: FUN_065e1170
ENTRY_POINT: 065e1170
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_065e1170(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  
  puVar6 = OVRPlugin_SpaceComponentType___TypeInfo;
  puVar5 = OVRPlugin_Quatf___TypeInfo;
  puVar4 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
  puVar3 = OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo;
  puVar2 = PTR_DAT_070c20c8;
  if ((DAT_07557877 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07110d48);
    FUN_03188a78(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(OVRPlugin_Vector2f___TypeInfo);
    FUN_03188a78(OVRPlugin_Vector3f___TypeInfo);
    FUN_03188a78(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_03188a78(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_03188a78(OVRPlugin_Quatf___TypeInfo);
    FUN_03188a78(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_03188a78(OVRPlugin_Vector4f___TypeInfo);
    FUN_03188a78(OVRPlugin_Vector4s___TypeInfo);
    FUN_03188a78(PTR_DAT_070c20c8);
    DAT_07557877 = 1;
  }
  puVar11 = OVRPlugin_Vector4f___TypeInfo;
  puVar10 = OVRPlugin_Vector3f___TypeInfo;
  puVar9 = OVRPlugin_Vector2f___TypeInfo;
  puVar8 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar7 = OVRPlugin_SpaceQueryResult___TypeInfo;
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_042e4268(uVar12,*(undefined8 *)puVar4);
  uVar13 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar13);
  FUN_041eb710(uVar12,*(undefined8 *)puVar6);
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  FUN_05971910(param_1,0);
  iVar17 = 4;
  while( true ) {
    lVar16 = *(long *)(param_1 + 0x10);
    uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar8);
    FUN_069a776c(uVar12,0x10,0x4000,4,0);
    if (lVar16 == 0) break;
    lVar14 = *(long *)(lVar16 + 0x10);
    lVar15 = *(long *)puVar10;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar1 = *(uint *)(lVar16 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
    }
    else {
      FUN_042e4a64(lVar16,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar16 = *(long *)(param_1 + 0x18);
    if (lVar16 == 0) break;
    lVar14 = *(long *)(lVar16 + 0x10);
    lVar15 = *(long *)puVar9;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar1 = *(uint *)(lVar16 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0;
    }
    else {
      FUN_041ebf4c(lVar16,0,0,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) {
      uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar7);
      FUN_0510cbd4(uVar12,param_1,*(undefined8 *)puVar11,0);
      puVar2 = PTR_DAT_07110d48;
      *(undefined8 *)(param_1 + 0x20) = uVar12;
      uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar2);
      FUN_05110878(uVar12,param_1,*(undefined8 *)OVRPlugin_Vector4s___TypeInfo,0);
      *(undefined8 *)(param_1 + 0x38) = uVar12;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


