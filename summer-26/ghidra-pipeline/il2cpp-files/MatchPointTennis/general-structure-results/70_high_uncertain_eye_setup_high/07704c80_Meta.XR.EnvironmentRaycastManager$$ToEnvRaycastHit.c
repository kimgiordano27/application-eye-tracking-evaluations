/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ToEnvRaycastHit
ENTRY_POINT: 07704c80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__ToEnvRaycastHit(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  while( true ) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),unaff_w19,*(undefined8 *)(lVar3 + 0x28));
    while( true ) {
      uVar1 = FUN_052459c0(&stack0x00000030,*unaff_x23);
      lVar3 = in_stack_00000048;
      if ((uVar1 & 1) == 0) {
        FUN_05245ae4(&stack0x00000030,*unaff_x22);
        return;
      }
      uVar2 = thunk_FUN_04484e3c(*unaff_x24,&stack0x0000006c);
      in_stack_00000008 = *unaff_x24;
      uVar1 = FUN_07a742a4(&stack0x00000008,uVar2,0);
      if ((uVar1 & 1) != 0) break;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_0952a454(lVar3,0,0);
    }
    if (lVar3 == 0) break;
    FUN_0952a454(lVar3,1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


