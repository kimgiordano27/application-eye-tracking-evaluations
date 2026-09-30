/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 076c4100
PROGRAM: m3ar-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long lVar12;
  undefined8 uVar13;
  long unaff_x27;
  undefined8 *puVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  puVar3 = PTR_DAT_08fad938;
  puVar2 = PTR_DAT_08fad8f8;
  puVar1 = PTR_DAT_08fad8d0;
  puVar14 = *(undefined8 **)(unaff_x27 + 0x8e8);
  FUN_058ded58(param_2,**(undefined8 **)(param_1 + 0x920));
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while( true ) {
    uVar7 = FUN_0724eea4(&stack0x00000020,*puVar14);
    uVar6 = in_stack_00000038;
    uVar5 = _uStack0000000000000030;
    if ((uVar7 & 1) == 0) {
      FUN_0724eea0(&stack0x00000020,*(undefined8 *)PTR_DAT_08fad8e0);
      return;
    }
    uVar4 = uStack0000000000000030;
    lVar8 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
    FUN_075273c0(lVar8,0);
    if (lVar8 == 0) break;
    *(long *)(lVar8 + 0x18) = unaff_x19;
    FUN_076f3180(uVar5 & 0xffffffff,0);
    *(undefined4 *)(lVar8 + 0x10) = uVar4;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = FUN_076c3c38(*(long *)(unaff_x19 + 0x40),uVar5 & 0xffffffff);
    if (lVar9 == 0) {
      uVar10 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad918);
      FUN_05320da4(uVar10,lVar8,*(undefined8 *)PTR_DAT_08fad930,0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar8 = *(long *)puVar1;
      }
      puVar11 = *(undefined8 **)(lVar8 + 0xb8);
      lVar12 = puVar11[2];
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar13 = *puVar11;
        lVar12 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad910);
        FUN_053210c4(lVar12,uVar13,*(undefined8 *)PTR_DAT_08fad928,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar12;
      }
      uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
      lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad908);
      FUN_052668e0(lVar9,uVar10,lVar12,uVar13,*(undefined8 *)PTR_DAT_08fad900);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076c3c08(*(long *)(unaff_x19 + 0x40),uVar5 & 0xffffffff,lVar9);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    FUN_0526691c(lVar9,uVar6,*(undefined8 *)puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


