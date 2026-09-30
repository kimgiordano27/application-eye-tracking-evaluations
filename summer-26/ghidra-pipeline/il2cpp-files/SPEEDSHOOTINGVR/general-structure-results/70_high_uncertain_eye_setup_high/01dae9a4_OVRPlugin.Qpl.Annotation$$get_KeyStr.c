/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 01dae9a4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Annotation__get_KeyStr(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint unaff_w22;
  long lVar7;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  thunk_FUN_0106e12c();
  lVar5 = in_stack_00000018;
  if (in_stack_00000018 == 0) {
    if ((unaff_w22 >> 1 & 1) == 0) {
      uVar3 = 0;
      lVar5 = 0;
      lVar2 = 0;
      lVar7 = 0;
      goto LAB_01daeaa4;
    }
    lVar5 = 0;
    uVar3 = 0;
LAB_01daea74:
    lVar2 = 0;
    lVar7 = 0;
    uVar4 = uVar3;
    if (lVar5 != 0) goto LAB_01daeaa4;
  }
  else {
    if ((*(byte *)(in_stack_00000018 + 0x30) >> 1 & 1) != 0) {
      return 0;
    }
    if (((unaff_w22 & 1) == 0) &&
       (plVar1 = *(long **)(in_stack_00000018 + 0x10), plVar1 != (long *)0x0)) {
      lVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    }
    else {
      lVar2 = 0;
    }
    in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
    uVar3 = FUN_01c8abe0(&stack0x00000008,0);
    lVar7 = 0;
    if ((uVar3 & 1) != 0) {
      in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
      lVar7 = FUN_01c8abf0(&stack0x00000008,0);
    }
    uVar3 = *(ulong *)(lVar5 + 0x38);
    lVar5 = *(long *)(lVar5 + 0x40);
    if (((unaff_w22 >> 1 & 1) == 0) || (lVar2 != 0)) goto LAB_01daeaa4;
    if (lVar7 == 0) goto LAB_01daea74;
    uVar4 = FUN_01c7b208(lVar7,0);
    lVar2 = 0;
    if ((lVar5 != 0) || (uVar3 != 0)) goto LAB_01daeaa4;
    uVar4 = uVar4 & 1;
  }
  lVar2 = 0;
  if (uVar4 == 0) {
    lVar5 = *unaff_x24;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar5 = *unaff_x24;
    }
    return **(long **)(lVar5 + 0xb8);
  }
LAB_01daeaa4:
  lVar6 = thunk_FUN_010400dc(*unaff_x24);
  FUN_01d8c630(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = lVar2;
    thunk_FUN_0106e12c((long *)(lVar6 + 0x10),lVar2);
    *(long *)(lVar6 + 0x20) = lVar7;
    thunk_FUN_0106e12c((long *)(lVar6 + 0x20),lVar7);
    *(ulong *)(lVar6 + 0x38) = uVar3;
    thunk_FUN_0106e12c((ulong *)(lVar6 + 0x38),uVar3);
    *(long *)(lVar6 + 0x40) = lVar5;
    thunk_FUN_0106e12c((long *)(lVar6 + 0x40),lVar5);
    *(uint *)(lVar6 + 0x30) = *(uint *)(lVar6 + 0x30) | 1;
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


