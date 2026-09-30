/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction$$GetHandGrabPose
ENTRY_POINT: 035b0fb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_HandGrab_HandGrabInteraction__GetHandGrabPose(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x23;
  
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_3__);
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<Preprocess>b__18_0__);
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                    );
  *(undefined1 *)(unaff_x23 + 0x563) = 1;
  lVar1 = FUN_035b08ac();
  if ((lVar1 != 0) &&
     (uVar2 = FUN_0340e600(lVar1,**(undefined8 **)
                                   (*(long *)
                                     Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                   + 0xb8),0), (uVar2 & 1) != 0)) {
    return lVar1;
  }
  lVar1 = FUN_042af88c(*(undefined4 *)
                        (*(long *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                        + 0xe0));
  return lVar1;
}


