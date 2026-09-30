/*
FUNCTION_NAME: Oculus.Interaction.Input.Hmd$$TryGetRootPose
ENTRY_POINT: 0524908c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_Hmd__TryGetRootPose(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  long *plVar5;
  
                    /* try { // try from 05249090 to 05349093 has its CatchHandler @ 0524909c */
  plVar5 = *(long **)(unaff_x23 + 0xc18);
                    /* catch() { ... } // from try @ 05249090 with catch @ 0524909c */
  if ((*(byte *)(unaff_x21 + 0x983) & 1) == 0) {
                    /* try { // try from 052490a0 to 053490a7 has its CatchHandler @ 052490b0 */
                    /* try { // try from 052490a8 to 053490b3 has its CatchHandler @ 05248e6c */
    FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052490a0 with catch @ 052490b0
                        */
    FUN_02f08768(
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                );
    FUN_02f08768(Oculus_Platform_Request<CowatchingState>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<AssetDetails>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x983) = 1;
  }
  lVar1 = *plVar5;
  *(long *)(param_1 + 0x38) = param_2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar1 = *plVar5;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  lVar3 = puVar2[6];
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*plVar5 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                              );
    FUN_0472ba3c(lVar3,uVar4,*(undefined8 *)Oculus_Platform_Request<CowatchingState>_TypeInfo,0);
    *(long *)(*(long *)(*plVar5 + 0xb8) + 0x30) = lVar3;
  }
  if (param_2 != 0) {
    uVar4 = FUN_0303b0c0(param_2,lVar3,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                        );
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


