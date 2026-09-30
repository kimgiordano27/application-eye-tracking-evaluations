/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_conversations_t$$set_page_size
ENTRY_POINT: 0793ca2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Unity_Services_Vivox_vx_req_account_get_conversations_t__set_page_size(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  
  FUN_03a8a718(OVRPlugin_BoneCapsule___TypeInfo);
  FUN_03a8a718(OVRPlugin_EyeGazeState___TypeInfo);
  FUN_03a8a718(OVRPlugin_FaceTrackingDataSource___TypeInfo);
                    /* try { // try from 0793ca54 to 07a3ca57 has its CatchHandler @ 0793cb90 */
  *(undefined1 *)(unaff_x21 + 0xdb7) = 1;
  puVar2 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar1 = PTR_DAT_084902d8;
  plVar3 = *(long **)(unaff_x19 + 0x10);
  uVar5 = *unaff_x20;
                    /* try { // try from 0793ca68 to 07a3ca6f has its CatchHandler @ 0793cb8c */
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                    /* try { // try from 0793ca80 to 07a3ca87 has its CatchHandler @ 0793cbc4 */
                    /* try { // try from 0793ca94 to 07a3ca9b has its CatchHandler @ 0793cbc0 */
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = System_Collections_Generic_Stack<Entry>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = OVRPlugin_BodyJointLocation___TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar1 = OVRPlugin_Bone___TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065cddf0(uVar5,*(undefined8 *)puVar1,uVar4,0);
    return uVar5;
  }
  return uVar5;
}


