/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopFaceTracking
ENTRY_POINT: 01f9f540
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopFaceTracking(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  
  do {
    uVar1 = in_stack_00000038;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f9e2bc(unaff_x22,uVar1,unaff_w27 != 0);
    if ((uVar4 & 1) == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
    do {
      if (unaff_x20 == 0) {
LAB_01f9f598:
                    /* try { // try from 01f9f5a0 to 0209f5b3 has its CatchHandler @ 01f9f644 */
        FUN_018de888(&stack0x00000010,unaff_x22,*unaff_x28);
      }
      else {
                    /* try { // try from 01f9f570 to 0209f59b has its CatchHandler @ 01f9f65c */
        lVar5 = (**(code **)(*unaff_x22 + 0x238))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x240));
        if (lVar5 == 0) {
LAB_01f9f5ec:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if (*(int *)(lVar5 + 0x18) == *(int *)(unaff_x20 + 0x18)) goto LAB_01f9f598;
      }
OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking:
      do {
        unaff_x25 = unaff_x25 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)(uint)unaff_x25) {
          in_stack_00000008[2] = in_stack_00000020;
          in_stack_00000008[1] = in_stack_00000018;
          *in_stack_00000008 = in_stack_00000010;
          return;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        unaff_x22 = *(long **)(unaff_x19 + unaff_x25 * 8);
        if (unaff_x22 == (long *)0x0) goto LAB_01f9f5ec;
        uVar2 = FUN_01ef5150(unaff_x22,0);
        uVar3 = FUN_01ef5150(unaff_x22,0);
      } while ((uVar2 & unaff_w29) != uVar3);
    } while (unaff_w26 == 0);
  } while( true );
}


