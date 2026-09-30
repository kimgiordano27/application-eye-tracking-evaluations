/*
FUNCTION_NAME: FUN_0793cc04
ENTRY_POINT: 0793cc04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


long FUN_0793cc04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_084a12f0;
                    /* try { // try from 0793cc04 to 07a3cc1b has its CatchHandler @ 0793ccb0 */
  puVar1 = PTR_DAT_084a12e8;
                    /* try { // try from 0793cc1c to 07a3cc9f has its CatchHandler @ 0793c648 */
  if ((DAT_08987db8 & 1) == 0) {
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
    DAT_08987db8 = 1;
  }
  puVar3 = PTR_DAT_084a12f8;
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_05f9f7c4(lVar4,*(undefined8 *)puVar1);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_Quatf___TypeInfo,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x40);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) {
LAB_0793ce4c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  return lVar4;
}


