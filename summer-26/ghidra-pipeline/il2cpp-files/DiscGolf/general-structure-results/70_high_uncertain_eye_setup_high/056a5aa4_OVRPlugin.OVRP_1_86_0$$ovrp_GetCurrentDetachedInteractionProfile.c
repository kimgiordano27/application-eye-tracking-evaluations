/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetCurrentDetachedInteractionProfile
ENTRY_POINT: 056a5aa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_86_0__ovrp_GetCurrentDetachedInteractionProfile(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  char *pcStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  pcVar2 = *(code **)(unaff_x21 + 0x9f8);
  if (pcVar2 == (code *)0x0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056a5934 with catch @ 056a5ab4
                        */
    pcStack0000000000000010 = "ovravatar2";
    uStack0000000000000018 = 10;
                    /* try { // try from 056a5acc to 057a5ae3 has its CatchHandler @ 056a5bac */
    pcStack0000000000000020 = "ovrAvatar2Entity_GetAbstractPose";
    uStack0000000000000028 = 0x20;
    uStack0000000000000030 = DAT_010fc3f0;
                    /* try { // try from 056a5ae4 to 057a5b9b has its CatchHandler @ 056a57a4 */
    in_stack_00000038 = CONCAT35(in_stack_00000038._5_3_,0xc);
    pcVar2 = (code *)thunk_FUN_02dd33e4(&stack0x00000010);
    *(code **)(unaff_x21 + 0x9f8) = pcVar2;
  }
  uStack0000000000000028 = 0;
  pcStack0000000000000020 = (char *)0x0;
  in_stack_00000038 = 0;
  uStack0000000000000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000018 = 0;
  pcStack0000000000000010 = (char *)0x0;
  uVar1 = (*pcVar2)(unaff_w20,&stack0x00000010);
  in_stack_00000008 = 0;
  FUN_02d045a4(&stack0x00000010,&stack0x00000008);
  *unaff_x19 = in_stack_00000008;
  LeanTween__value();
  FUN_02d04648(&stack0x00000010);
  return uVar1;
}


