/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Finalize
ENTRY_POINT: 0793cc68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


long Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Finalize(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03a8a718();
  FUN_03a8a718(OVRPlugin_Quatf___TypeInfo);
  FUN_03a8a718(OVRPlugin_SpaceComponentType___TypeInfo);
  FUN_03a8a718(OVRPlugin_SpaceQueryResult___TypeInfo);
  FUN_03a8a718(OVRPlugin_TrackingConfidence___TypeInfo);
                    /* try { // try from 0793cca0 to 07a3ccaf has its CatchHandler @ 0793ccb0 */
  FUN_03a8a718(System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xdb8) = 1;
  puVar1 = PTR_DAT_084a12f8;
                    /* catch() { ... } // from try @ 0793cc04 with catch @ 0793ccb0
                       catch() { ... } // from try @ 0793cca0 with catch @ 0793ccb0 */
                    /* try { // try from 0793ccb4 to 07a3ccb7 has its CatchHandler @ 0793ccc0 */
                    /* try { // try from 0793ccb8 to 07a3ccc3 has its CatchHandler @ 0793c648 */
  lVar2 = thunk_FUN_03ac74bc(*unaff_x22);
                    /* catch() { ... } // from try @ 0793ccb4 with catch @ 0793ccc0 */
  FUN_05f9f7c4(lVar2,*unaff_x20);
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_Quatf___TypeInfo,uVar4,*(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)
                        System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar2 == 0) goto LAB_0793ce4c;
    FUN_05fa0540(lVar2,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo,uVar4,
                 *(undefined8 *)puVar1);
  }
  plVar3 = *(long **)(unaff_x19 + 0x40);
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


