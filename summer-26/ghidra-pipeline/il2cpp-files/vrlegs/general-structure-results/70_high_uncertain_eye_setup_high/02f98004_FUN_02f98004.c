/*
FUNCTION_NAME: FUN_02f98004
ENTRY_POINT: 02f98004
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f9808c) */
/* WARNING: Removing unreachable block (ram,0x02f98188) */

undefined8 FUN_02f98004(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01a89a98(*in_x9,&stack0x00000008);
  FUN_025d8778();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar1 = FUN_02f97598();
  if (lVar1 != 0) {
    FUN_02f97598();
    FUN_025d8778();
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar1 = FUN_02f96db4();
    if (lVar1 != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_02f98184;
      FUN_02f96db4();
      FUN_025d8778();
    }
    FUN_025cee48();
    FUN_025d5d20();
    uVar2 = (**(code **)(*unaff_x20 + 0x168))();
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d142e8);
    FUN_02f79074(uVar3,uVar2,0);
    return uVar3;
  }
LAB_02f98184:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


