/*
FUNCTION_NAME: FUN_00e786b8
ENTRY_POINT: 00e786b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_00e786b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_03774f15 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_1890);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__);
    thunk_FUN_00d48444(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                      );
    DAT_03774f15 = 1;
  }
  puVar1 = 
  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__;
  lVar5 = *(long *)(param_1 + 0x78);
                    /* try { // try from 00e7871c to 00f78727 has its CatchHandler @ 00e78914 */
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x90);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                              );
                    /* try { // try from 00e78734 to 00f78743 has its CatchHandler @ 00e78918 */
    if (lVar2 == 0) goto LAB_00e78850;
    FUN_00eed53c(lVar2,param_1,*(undefined8 *)StringLiteral_1890,0);
                    /* try { // try from 00e78760 to 00f78767 has its CatchHandler @ 00e78910 */
    plVar3 = (long *)FUN_017b76bc(uVar4,lVar2,0);
    lVar2 = *(long *)puVar1;
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x90) = 0;
    }
    else {
                    /* try { // try from 00e78778 to 00f78787 has its CatchHandler @ 00e7890c */
      if ((*plVar3 != lVar2) || (*(long **)(lVar5 + 0x90) = plVar3, *plVar3 != lVar2))
      goto LAB_00e787f8;
    }
    lVar5 = *(long *)(param_1 + 0x88);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x90);
                    /* try { // try from 00e7879c to 00f7879f has its CatchHandler @ 00e788f4 */
      lVar2 = thunk_FUN_00d62348(lVar2);
      if (lVar2 != 0) {
                    /* try { // try from 00e787a8 to 00f787af has its CatchHandler @ 00e788d8 */
        FUN_00eed53c(lVar2,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__,0);
                    /* try { // try from 00e787cc to 00f787d7 has its CatchHandler @ 00e788f0 */
        plVar3 = (long *)FUN_017b76bc(uVar4,lVar2,0);
        if (plVar3 == (long *)0x0) {
                    /* try { // try from 00e787fc to 00f78803 has its CatchHandler @ 00e788bc */
          *(undefined8 *)(lVar5 + 0x90) = 0;
        }
        else {
          lVar2 = *(long *)puVar1;
                    /* try { // try from 00e787ec to 00f787ef has its CatchHandler @ 00e788c4 */
          if ((*plVar3 != lVar2) || (*(long **)(lVar5 + 0x90) = plVar3, *plVar3 != lVar2)) {
LAB_00e787f8:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
        }
        uVar4 = *(undefined8 *)(param_1 + 0xc0);
                    /* try { // try from 00e7880c to 00f7882f has its CatchHandler @ 00e788c0 */
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
        if (lVar5 != 0) {
          FUN_016f27fc(lVar5,param_1,
                       *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,0);
                    /* try { // try from 00e7883c to 00f78843 has its CatchHandler @ 00e788b8 */
          FUN_00fe0700(uVar4,lVar5,0);
          return;
        }
      }
    }
  }
LAB_00e78850:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


