/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 01f5e7a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_hasInputFocus(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined4 in_w8;
  undefined8 *puVar8;
  undefined4 uVar9;
  long in_x9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  double dVar10;
  double dVar11;
  
  uVar5 = (**(code **)(in_x9 + 0x2a8))
                    (param_1,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],in_x5,in_x6,0,in_w8,
                     unaff_x29 + -0x38,*(undefined8 *)(in_x9 + 0x2b0));
  if ((uVar5 & 1) == 0) {
    uVar9 = 7;
    puVar8 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
    uVar4 = 0;
    uVar6 = *puVar8;
    unaff_x19[0x10] = uVar9;
    *(undefined8 *)(unaff_x19 + 0x12) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
  }
  else {
    dVar11 = *(double *)(unaff_x29 + -0x58);
    if (0.0 < dVar11) {
      if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      dVar11 = dVar11 * DAT_00745958;
      dVar10 = modf(dVar11,(double *)(unaff_x29 + -0x20));
      if (0.0 <= dVar11) {
        if (dVar10 == 0.5) {
          dVar11 = *(double *)(unaff_x29 + -0x20);
          dVar10 = 1.0;
          goto LAB_01f5e8dc;
        }
        dVar11 = (double)(long)(dVar11 + 0.5);
      }
      else if (dVar10 == -0.5) {
        dVar11 = *(double *)(unaff_x29 + -0x20);
        dVar10 = -1.0;
LAB_01f5e8dc:
        if (((long)dVar11 & 1U) != 0) {
          dVar11 = dVar11 + dVar10;
        }
      }
      else {
        dVar11 = (double)(long)(dVar11 + -0.5);
      }
      if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar1 = -0x8000000000000000;
      if (dVar11 != INFINITY) {
        lVar1 = (long)dVar11;
      }
      uVar6 = FUN_01e727dc(unaff_x29 + -0x38,lVar1,0);
      *(undefined8 *)(unaff_x29 + -0x38) = uVar6;
    }
    iVar2 = *(int *)(unaff_x29 + -100);
    if (iVar2 != -1) {
      plVar7 = (long *)*unaff_x20;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      iVar3 = (**(code **)(*plVar7 + 0x1f8))
                        (plVar7,*(undefined8 *)(unaff_x29 + -0x38),*(undefined8 *)(*plVar7 + 0x200))
      ;
      if (iVar2 != iVar3) {
        uVar9 = 4;
        puVar8 = (undefined8 *)PTR_DAT_027c0ab8;
        goto LAB_01f5e6f4;
      }
    }
    *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5f534(unaff_x29 + -0xa0);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


