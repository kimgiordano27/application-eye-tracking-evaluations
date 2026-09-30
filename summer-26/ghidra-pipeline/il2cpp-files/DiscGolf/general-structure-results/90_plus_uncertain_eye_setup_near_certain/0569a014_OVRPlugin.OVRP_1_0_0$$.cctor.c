/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$.cctor
ENTRY_POINT: 0569a014
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_0_0___cctor(void)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000018;
  
  FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x869) = 1;
                    /* try { // try from 0569a034 to 0579a03b has its CatchHandler @ 0569a12c */
  in_stack_00000018 = 0;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  uVar1 = FUN_0569a0d4(unaff_w21,unaff_w20,&stack0x00000018);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 0569a044 to 0579a047 has its CatchHandler @ 0569a160 */
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                              );
    FUN_0552aca4(lVar2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(lVar2,unaff_w21,unaff_w20);
    if ((uVar1 & 1) != 0) {
      in_stack_00000008 = in_stack_00000018;
      LeanTween__value(&stack0x00000008);
                    /* try { // try from 0569a098 to 0579a0bf has its CatchHandler @ 0569a1e0 */
      LeanTween__value();
      unaff_x19[1] = in_stack_00000008;
      *unaff_x19 = lVar2;
      LeanTween__value();
      return 1;
    }
  }
  return 0;
}


