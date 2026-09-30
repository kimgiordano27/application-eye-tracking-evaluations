/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$getCPtr
ENTRY_POINT: 0793cc28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


long Unity_Services_Vivox_vx_req_account_get_session_fonts_t__getCPtr(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a12f8);
    FUN_03a8a718(PTR_DAT_084a12e8);
    FUN_03a8a718(PTR_DAT_084a12f0);
    FUN_03a8a718(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_03a8a718(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf___TypeInfo);
    FUN_03a8a718(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_03a8a718(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_03a8a718(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xdb8) = 1;
  }
  puVar1 = PTR_DAT_084a12f8;
  lVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_05f9f7c4(lVar2,*unaff_x20);
  plVar3 = *(long **)(param_2 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_Quatf___TypeInfo,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(param_2 + 0x40);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) {
LAB_0793ce4c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  return lVar2;
}


