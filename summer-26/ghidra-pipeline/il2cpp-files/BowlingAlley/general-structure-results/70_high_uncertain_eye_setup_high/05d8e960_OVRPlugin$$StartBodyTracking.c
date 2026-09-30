/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 05d8e960
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  double dVar4;
  double unaff_d8;
  undefined8 in_stack_00000008;
  
  while (iVar1 = FUN_06ba6794(param_1,param_2), iVar1 < 1) {
    in_stack_00000008 = FUN_06312688();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x21);
    }
    dVar4 = (double)FUN_0593a3a8(&stack0x00000008,0);
    if (unaff_d8 <= dVar4) break;
    FUN_0598d728(0x32,0);
    param_1 = *(undefined8 *)(unaff_x19 + 0x40);
    param_2 = 0;
  }
  iVar1 = FUN_06ba6794(*(undefined8 *)(unaff_x19 + 0x40),0);
  if (iVar1 < 1) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_032e1da0(PTR_DAT_0728def8);
    uVar2 = FUN_057a19ac(uVar2,uVar3,0);
    thunk_FUN_032e1da0(PTR_DAT_0727b240);
    uVar3 = thunk_FUN_032a56a0();
    FUN_0595ad48(uVar3,uVar2,0);
    uVar2 = thunk_FUN_032e1da0(PTR_DAT_072b19f8);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,uVar2);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_06ba5868(*(long *)(unaff_x19 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


