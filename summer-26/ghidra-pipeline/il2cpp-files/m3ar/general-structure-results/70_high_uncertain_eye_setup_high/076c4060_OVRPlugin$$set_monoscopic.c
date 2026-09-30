/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 076c4060
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_monoscopic(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x8f0));
  FUN_0403162c(PTR_DAT_08fad8f8);
  FUN_0403162c(PTR_DAT_08fad900);
  FUN_0403162c(PTR_DAT_08fad908);
  FUN_0403162c(PTR_DAT_08fad910);
  FUN_0403162c(PTR_DAT_08fad918);
  FUN_0403162c(PTR_DAT_08fad920);
  FUN_0403162c(PTR_DAT_08fad928);
  FUN_0403162c(PTR_DAT_08fad930);
  FUN_0403162c(PTR_DAT_08fad938);
  FUN_0403162c(PTR_DAT_08fad8d0);
  *(undefined1 *)(unaff_x20 + 399) = 1;
  puVar4 = PTR_DAT_08fad938;
  puVar3 = PTR_DAT_08fad8f8;
  puVar2 = PTR_DAT_08fad8e8;
  puVar1 = PTR_DAT_08fad8d0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_058ded58(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08fad920);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while( true ) {
    uVar8 = FUN_0724eea4(&stack0x00000020,*(undefined8 *)puVar2);
    uVar7 = in_stack_00000038;
    uVar6 = _uStack0000000000000030;
    if ((uVar8 & 1) == 0) {
      FUN_0724eea0(&stack0x00000020,*(undefined8 *)PTR_DAT_08fad8e0);
      return;
    }
    uVar5 = uStack0000000000000030;
    lVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar4);
    FUN_075273c0(lVar9,0);
    if (lVar9 == 0) break;
    *(long *)(lVar9 + 0x18) = unaff_x19;
    FUN_076f3180(uVar6 & 0xffffffff,0);
    *(undefined4 *)(lVar9 + 0x10) = uVar5;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar10 = FUN_076c3c38(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff);
    if (lVar10 == 0) {
      uVar11 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad918);
      FUN_05320da4(uVar11,lVar9,*(undefined8 *)PTR_DAT_08fad930,0);
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar9 = *(long *)puVar1;
      }
      puVar12 = *(undefined8 **)(lVar9 + 0xb8);
      lVar13 = puVar12[2];
      if (lVar13 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar12 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar14 = *puVar12;
        lVar13 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad910);
        FUN_053210c4(lVar13,uVar14,*(undefined8 *)PTR_DAT_08fad928,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar13;
      }
      uVar14 = *(undefined8 *)(unaff_x19 + 0x48);
      lVar10 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad908);
      FUN_052668e0(lVar10,uVar11,lVar13,uVar14,*(undefined8 *)PTR_DAT_08fad900);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076c3c08(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff,lVar10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    FUN_0526691c(lVar10,uVar7,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


