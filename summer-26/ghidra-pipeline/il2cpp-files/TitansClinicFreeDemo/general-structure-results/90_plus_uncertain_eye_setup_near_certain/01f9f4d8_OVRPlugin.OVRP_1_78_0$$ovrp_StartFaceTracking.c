/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 01f9f4d8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar8;
  long *unaff_x24;
  long lVar9;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000030;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
  FUN_018de658();
  cVar2 = cStack0000000000000030;
  puVar1 = PTR_DAT_027c1f10;
  uVar4 = *(uint *)(unaff_x21 + 0x18);
  if (0 < (int)uVar4) {
                    /* try { // try from 01f9f4ec to 0209f503 has its CatchHandler @ 01f9f658 */
    lVar9 = 0;
    do {
                    /* try { // try from 01f9f504 to 0209f50b has its CatchHandler @ 01f9f654 */
      if (uVar4 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar8 = *(long **)(unaff_x21 + 0x20 + lVar9 * 8);
                    /* try { // try from 01f9f510 to 0209f523 has its CatchHandler @ 01f9f668 */
      if (plVar8 == (long *)0x0) goto LAB_01f9f5ec;
      uVar4 = FUN_01ef5150(plVar8,0);
                    /* try { // try from 01f9f52c to 0209f52f has its CatchHandler @ 01f9f64c */
      uVar5 = FUN_01ef5150(plVar8,0);
      uVar3 = in_stack_00000038;
      if ((uVar4 & (unaff_w22 ^ 2)) == uVar5) {
        if (cStack0000000000000034 != '\0') {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f9e2bc(plVar8,uVar3,cVar2 != '\0');
          if ((uVar6 & 1) == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
        }
        if (unaff_x20 != 0) {
          lVar7 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (lVar7 == 0) {
LAB_01f9f5ec:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          if (*(int *)(lVar7 + 0x18) != *(int *)(unaff_x20 + 0x18))
          goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
        }
        FUN_018de888(&stack0x00000010,plVar8,*(undefined8 *)puVar1);
      }
OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking:
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)uVar4);
  }
  in_stack_00000008[2] = in_stack_00000020;
  in_stack_00000008[1] = in_stack_00000018;
  *in_stack_00000008 = in_stack_00000010;
  return;
}


