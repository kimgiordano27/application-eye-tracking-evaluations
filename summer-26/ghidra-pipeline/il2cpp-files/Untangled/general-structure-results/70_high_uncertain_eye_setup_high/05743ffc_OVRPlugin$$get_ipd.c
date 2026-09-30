/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 05743ffc
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_ipd(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long in_stack_00000008;
  
  puVar1 = PTR_DAT_06d02bd0;
  plVar6 = (long *)(unaff_x20 + 0x28);
  if (*plVar6 == 0) {
    lVar8 = thunk_FUN_02ef170c();
    if (lVar8 != 0) {
      plVar2 = (long *)FUN_02f07f14(*(undefined8 *)puVar1,1);
      if (plVar2 == (long *)0x0) goto LAB_0574420c;
      lVar8 = thunk_FUN_02ef170c();
      if (lVar8 == 0) goto LAB_05744200;
      if ((int)plVar2[3] == 0) goto LAB_057441b4;
      plVar2[4] = (long)unaff_x19;
      thunk_FUN_02f411dc();
      unaff_x19 = plVar2;
    }
    *plVar6 = (long)unaff_x19;
  }
  else {
    in_stack_00000008 = thunk_FUN_02ef170c(*plVar6,*(undefined8 *)PTR_DAT_06d02bd0);
    if (in_stack_00000008 == 0) {
      plVar2 = (long *)FUN_02f07f14(*(undefined8 *)puVar1,2);
      if (plVar2 == (long *)0x0) {
LAB_0574420c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar6;
      if ((lVar8 != 0) &&
         (lVar3 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_05744200:
        uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar4,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar8;
        thunk_FUN_02f411dc(plVar2 + 4,lVar8);
        lVar8 = thunk_FUN_02ef170c();
        if (lVar8 == 0) goto LAB_05744200;
        if (1 < *(uint *)(plVar2 + 3)) {
          plVar2[5] = (long)unaff_x19;
          thunk_FUN_02f411dc();
          *plVar6 = (long)plVar2;
          unaff_x19 = plVar2;
          goto LAB_057441a0;
        }
      }
LAB_057441b4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar5 = (uint)*(undefined8 *)(in_stack_00000008 + 0x18);
    if ((int)uVar5 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) goto LAB_057441b4;
      } while ((*(long *)(in_stack_00000008 + (long)(int)uVar7 * 8 + 0x20) != 0) &&
              (uVar7 = uVar7 + 1, (int)uVar7 < (int)uVar5));
    }
    if (uVar7 == uVar5) {
      FUN_037364b4(&stack0x00000008,uVar7 << 1,*(undefined8 *)PTR_DAT_06d590d0);
      *plVar6 = in_stack_00000008;
      thunk_FUN_02f411dc(plVar6);
      if (in_stack_00000008 == 0) goto LAB_0574420c;
    }
    lVar8 = in_stack_00000008;
    lVar3 = thunk_FUN_02ef170c();
    if (lVar3 == 0) goto LAB_05744200;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_057441b4;
    plVar6 = (long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
    *plVar6 = (long)unaff_x19;
  }
LAB_057441a0:
  thunk_FUN_02f411dc(plVar6,unaff_x19);
  return;
}


