/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 01dae990
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


long OVRPlugin_Qpl_Variant__From(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint unaff_w22;
  long lVar8;
  undefined8 in_stack_00000008;
  long lStack0000000000000018;
  
  puVar1 = PTR_DAT_0234bbd8;
  lStack0000000000000018 = *(long *)(param_1 + 0x30);
  thunk_FUN_0106e12c(&stack0x00000018);
  lVar6 = lStack0000000000000018;
  if (lStack0000000000000018 == 0) {
    if ((unaff_w22 >> 1 & 1) == 0) {
      uVar4 = 0;
      lVar6 = 0;
      lVar3 = 0;
      lVar8 = 0;
      goto LAB_01daeaa4;
    }
    lVar6 = 0;
    uVar4 = 0;
LAB_01daea74:
    lVar3 = 0;
    lVar8 = 0;
    uVar5 = uVar4;
    if (lVar6 != 0) goto LAB_01daeaa4;
  }
  else {
    if ((*(byte *)(lStack0000000000000018 + 0x30) >> 1 & 1) != 0) {
      return 0;
    }
    if (((unaff_w22 & 1) == 0) &&
       (plVar2 = *(long **)(lStack0000000000000018 + 0x10), plVar2 != (long *)0x0)) {
      lVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    }
    else {
      lVar3 = 0;
    }
    in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
    uVar4 = FUN_01c8abe0(&stack0x00000008,0);
    lVar8 = 0;
    if ((uVar4 & 1) != 0) {
      in_stack_00000008 = FUN_01daeb78(&stack0x00000018);
      lVar8 = FUN_01c8abf0(&stack0x00000008,0);
    }
    uVar4 = *(ulong *)(lVar6 + 0x38);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((unaff_w22 >> 1 & 1) == 0) || (lVar3 != 0)) goto LAB_01daeaa4;
    if (lVar8 == 0) goto LAB_01daea74;
    uVar5 = FUN_01c7b208(lVar8,0);
    lVar3 = 0;
    if ((lVar6 != 0) || (uVar4 != 0)) goto LAB_01daeaa4;
    uVar5 = uVar5 & 1;
  }
  lVar3 = 0;
  if (uVar5 == 0) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar6 = *(long *)puVar1;
    }
    return **(long **)(lVar6 + 0xb8);
  }
LAB_01daeaa4:
  lVar7 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
  FUN_01d8c630(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar3;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x10),lVar3);
    *(long *)(lVar7 + 0x20) = lVar8;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x20),lVar8);
    *(ulong *)(lVar7 + 0x38) = uVar4;
    thunk_FUN_0106e12c((ulong *)(lVar7 + 0x38),uVar4);
    *(long *)(lVar7 + 0x40) = lVar6;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x40),lVar6);
    *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 1;
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


