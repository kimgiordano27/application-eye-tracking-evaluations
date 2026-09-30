/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 01f5e738
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_hasVrFocus(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint in_w8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  double dVar11;
  double dVar12;
  
  if (in_w8 < 0xd) {
    uVar5 = 0;
    if (in_w8 != 0xc) {
      uVar5 = in_w8;
    }
    unaff_x19[3] = uVar5;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f5f2b0();
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      goto LAB_01f5e830;
    }
    plVar7 = (long *)*unaff_x20;
    if (plVar7 == (long *)0x0) goto LAB_01f5e9b4;
    uVar6 = (**(code **)(*plVar7 + 0x2a8))
                      (plVar7,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                       unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x38,
                       *(undefined8 *)(*plVar7 + 0x2b0));
    if ((uVar6 & 1) != 0) {
      dVar12 = *(double *)(unaff_x29 + -0x58);
      if (0.0 < dVar12) {
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        dVar12 = dVar12 * DAT_00745958;
        dVar11 = modf(dVar12,(double *)(unaff_x29 + -0x20));
        if (0.0 <= dVar12) {
          if (dVar11 == 0.5) {
            dVar12 = *(double *)(unaff_x29 + -0x20);
            dVar11 = 1.0;
            goto LAB_01f5e8dc;
          }
          dVar12 = (double)(long)(dVar12 + 0.5);
        }
        else if (dVar11 == -0.5) {
          dVar12 = *(double *)(unaff_x29 + -0x20);
          dVar11 = -1.0;
LAB_01f5e8dc:
          if (((long)dVar12 & 1U) != 0) {
            dVar12 = dVar12 + dVar11;
          }
        }
        else {
          dVar12 = (double)(long)(dVar12 + -0.5);
        }
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar1 = -0x8000000000000000;
        if (dVar12 != INFINITY) {
          lVar1 = (long)dVar12;
        }
        uVar8 = FUN_01e727dc(unaff_x29 + -0x38,lVar1,0);
        *(undefined8 *)(unaff_x29 + -0x38) = uVar8;
      }
      iVar2 = *(int *)(unaff_x29 + -100);
      if (iVar2 != -1) {
        plVar7 = (long *)*unaff_x20;
        if (plVar7 == (long *)0x0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        iVar4 = (**(code **)(*plVar7 + 0x1f8))
                          (plVar7,*(undefined8 *)(unaff_x29 + -0x38),
                           *(undefined8 *)(*plVar7 + 0x200));
        if (iVar2 != iVar4) {
          uVar10 = 4;
          puVar9 = (undefined8 *)PTR_DAT_027c0ab8;
          goto LAB_01f5e6f4;
        }
      }
      *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5f534(unaff_x29 + -0xa0);
      goto LAB_01f5e830;
    }
    uVar10 = 7;
    puVar9 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
    uVar8 = *puVar9;
    unaff_x19[0x10] = uVar10;
  }
  else {
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar3 = PTR_DAT_027c0a78;
    unaff_x19[0x10] = 4;
    uVar8 = *(undefined8 *)puVar3;
  }
  uVar5 = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
LAB_01f5e830:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


