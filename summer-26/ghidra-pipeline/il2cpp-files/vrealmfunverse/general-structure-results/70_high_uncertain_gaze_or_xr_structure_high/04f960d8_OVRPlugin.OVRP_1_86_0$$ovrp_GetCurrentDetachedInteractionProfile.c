/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetCurrentDetachedInteractionProfile
ENTRY_POINT: 04f960d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_86_0__ovrp_GetCurrentDetachedInteractionProfile(void)

{
  undefined *puVar1;
  undefined1 in_w8;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0xdf6) = in_w8;
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02b76274(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
                    /* try { // try from 04f960fc to 05096207 has its CatchHandler @ 04f960fc
                       catch() { ... } // from try @ 04f960fc with catch @ 04f960fc
                       catch() { ... } // from try @ 04f96298 with catch @ 04f960fc
                       catch() { ... } // from try @ 04f96368 with catch @ 04f960fc
                       catch() { ... } // from try @ 04f963a0 with catch @ 04f960fc
                       catch() { ... } // from try @ 04f963d4 with catch @ 04f960fc
                       catch() { ... } // from try @ 04f963f8 with catch @ 04f960fc
                       catch() { ... } // from try @ 04f9641c with catch @ 04f960fc
                       catch() { ... } // from try @ 04f96440 with catch @ 04f960fc */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = 
  System_Func<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
  ;
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  lVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04dbdb8c(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x10),uVar4);
  **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar2);
  return;
}


