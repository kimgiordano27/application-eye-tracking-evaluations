/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 01d8f3cc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetFaceVisemesState(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  ulong in_stack_00000008;
  
  while( true ) {
    uVar1 = FUN_01d8eaa8(unaff_x27,param_2);
    unaff_x28 = unaff_x28 + 1;
    unaff_w26 = unaff_w26 & uVar1;
    uVar1 = (uint)unaff_x28;
    if (*(int *)(unaff_x25 + 0x18) <= (int)uVar1) break;
    if (*(uint *)(unaff_x24 + 0x18) <= uVar1) {
LAB_01d8f5dc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar2 = *(long **)(unaff_x23 + unaff_x28 * 8);
    if (plVar2 == (long *)0x0) goto LAB_01d8f72c;
    unaff_x27 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) goto LAB_01d8f5dc;
    plVar2 = *(long **)(unaff_x29 + unaff_x28 * 8);
    if (plVar2 == (long *)0x0) goto LAB_01d8f72c;
    param_2 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
  }
  if ((unaff_w26 & 1) == 0) {
    if ((in_stack_00000008 & 0x100000000) != 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar4 = thunk_FUN_010400dc();
      uVar3 = thunk_FUN_010303a8(PTR_DAT_023597e8);
      FUN_01c65ad0(uVar4,uVar3,0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_023597e0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar4,uVar3);
    }
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00fd82c8();
    if (lVar5 == 0) {
      if (in_stack_00000000 != 0) {
LAB_01d8f72c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
    }
    else {
      *(undefined8 *)(lVar5 + 0x60) = unaff_x19;
      thunk_FUN_0106e12c();
      if (in_stack_00000000 != 0) {
        *(long *)(lVar5 + 0x68) = in_stack_00000000;
        thunk_FUN_0106e12c((long *)(lVar5 + 0x68),in_stack_00000000);
      }
    }
  }
  return lVar5;
}


