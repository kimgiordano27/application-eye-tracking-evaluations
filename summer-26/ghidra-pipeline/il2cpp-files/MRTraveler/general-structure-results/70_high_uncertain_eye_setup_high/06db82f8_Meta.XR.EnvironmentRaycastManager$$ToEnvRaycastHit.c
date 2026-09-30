/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ToEnvRaycastHit
ENTRY_POINT: 06db82f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__ToEnvRaycastHit(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000030;
  
  do {
    FUN_06dfdedc(unaff_x22,unaff_x21,0,0);
    do {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_06a4e36c(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x24 + 0x28),unaff_x20,
                   *unaff_x23);
      uVar1 = FUN_049dc4d0(&stack0x00000020,*unaff_x25);
      unaff_x24 = in_stack_00000030;
      if ((uVar1 & 1) == 0) {
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90478);
        return 0;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = FUN_06f74e14(*(undefined8 *)(in_stack_00000030 + 0x18),0);
      if ((uVar1 & 1) == 0) {
        uVar2 = FUN_06f7465c(*(undefined8 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_08e71968,
                             *(undefined8 *)(unaff_x24 + 0x10),0);
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x24 + 0x10);
      }
      uVar2 = FUN_06f7465c(uVar2,*(undefined8 *)PTR_DAT_08e7cd00,*(undefined8 *)(unaff_x24 + 0x38),0
                          );
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      unaff_x20 = FUN_03c8fd28(uVar2,*unaff_x28,*unaff_x29);
      uVar1 = FUN_07119344(unaff_x20,0,0);
    } while ((uVar1 & 1) == 0);
    plVar3 = (long *)thunk_FUN_03d12a58();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x22 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    unaff_x21 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
  } while( true );
}


