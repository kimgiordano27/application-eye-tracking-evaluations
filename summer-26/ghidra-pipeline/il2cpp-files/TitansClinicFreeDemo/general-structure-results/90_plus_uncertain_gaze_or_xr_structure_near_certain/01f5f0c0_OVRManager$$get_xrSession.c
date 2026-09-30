/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 01f5f0c0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRManager__get_xrSession(void)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  int in_w8;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x24;
  double dVar6;
  double dVar7;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  double in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_01220628();
  }
  plVar3 = (long *)FUN_01f2b618(0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))
                    (plVar3,*(undefined4 *)(unaff_x22 + 2),*(undefined4 *)*unaff_x22,
                     ((undefined4 *)*unaff_x22)[1],uStack000000000000003c,uStack0000000000000038,
                     in_stack_00000030._4_4_,0);
  dVar7 = in_stack_00000028;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
    uVar5 = *(undefined8 *)PTR_DAT_027c0aa8;
    *(undefined4 *)(unaff_x19 + 0x40) = 7;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    goto LAB_01f5f090;
  }
  if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  dVar7 = dVar7 * DAT_00745958;
  dVar6 = modf(dVar7,&stack0x00000048);
  if (0.0 <= dVar7) {
    if (dVar6 == 0.5) {
      dVar7 = 1.0;
      goto LAB_01f5f194;
    }
    dVar6 = (double)(long)(dVar7 + 0.5);
  }
  else if (dVar6 == -0.5) {
    dVar7 = -1.0;
LAB_01f5f194:
    dVar6 = in_stack_00000048;
    if (((long)in_stack_00000048 & 1U) != 0) {
      dVar6 = in_stack_00000048 + dVar7;
    }
  }
  else {
    dVar6 = (double)(long)(dVar7 + -0.5);
  }
  if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar1 = -0x8000000000000000;
  if (dVar6 != INFINITY) {
    lVar1 = (long)dVar6;
  }
  in_stack_00000020 = FUN_01e727dc(&stack0x00000020,lVar1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000020;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f5f534();
LAB_01f5f090:
  return uVar2 & 1;
}


