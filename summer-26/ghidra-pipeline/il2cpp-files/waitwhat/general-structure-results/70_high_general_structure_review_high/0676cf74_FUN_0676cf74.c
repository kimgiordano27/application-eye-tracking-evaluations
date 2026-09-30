/*
FUNCTION_NAME: FUN_0676cf74
ENTRY_POINT: 0676cf74
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0676cf74(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar2 = Sentry_Internal_MainSentryEventProcessor_TypeInfo;
  if ((DAT_075585ea & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f2fb0);
    FUN_03188a78(ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>___TypeInfo);
    FUN_03188a78(Sentry_Internal_MainSentryEventProcessor_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_SerializedVirtualizationData_TypeInfo);
    FUN_03188a78(System_Net_ServerCertValidationCallback_TypeInfo);
    DAT_075585ea = 1;
  }
  puVar3 = UnityEngine_UIElements_SerializedVirtualizationData_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>___TypeInfo;
  iVar4 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  if (iVar4 == 0) {
    thunk_FUN_031e5338();
  }
  FUN_066c6210(param_1,0);
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_065e0ba0(uVar5,*(undefined8 *)puVar3,0);
  FUN_066c647c(param_1,uVar5,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) goto LAB_0676d174;
  uVar5 = FUN_0676d178(*(undefined8 *)(*(long *)(param_3 + 0x18) + 0x40));
  lVar7 = *(long *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  if (lVar7 == 0) goto LAB_0676d174;
  uVar5 = FUN_0676d178(*(undefined8 *)(lVar7 + 0x48));
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar8 = 0x30;
  uVar6 = FUN_069e2f6c(0x30,0x20,0);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0x4a;
    uVar6 = FUN_069e2f6c(0x4a,0x20,0);
    if ((uVar6 & 1) != 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_BurstDirectCall__Invoke
    ;
    *(undefined4 *)(param_1 + 200) = 8;
  }
  else {

    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_BurstDirectCall__Invoke
    :
    *(undefined4 *)(param_1 + 200) = uVar8;
  }
  lVar7 = *(long *)puVar2;
  *(undefined4 *)(param_1 + 0xcc) = 8;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  iVar4 = FUN_069e1e50(0);
  if (iVar4 == 0xb) {
    if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    iVar4 = FUN_069978b0(0);
    if (iVar4 < 3) {
      lVar7 = thunk_FUN_069e1c24(0);
      if (lVar7 == 0) {
LAB_0676d174:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar6 = FUN_057bdcd0(lVar7,*(undefined8 *)System_Net_ServerCertValidationCallback_TypeInfo,0);
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(param_1 + 0xe0) = 0;
      }
    }
  }
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
  FUN_05971910(uVar5,0);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  return;
}


