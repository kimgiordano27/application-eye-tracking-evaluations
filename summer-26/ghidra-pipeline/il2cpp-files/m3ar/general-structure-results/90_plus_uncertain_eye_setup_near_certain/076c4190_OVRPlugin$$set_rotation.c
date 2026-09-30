/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 076c4190
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  long unaff_x23;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    if (param_1 == 0) {
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad918);
      FUN_05320da4(uVar2,unaff_x23,*(undefined8 *)PTR_DAT_08fad930,0);
      lVar3 = *unaff_x29;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *unaff_x29;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      lVar5 = puVar4[2];
      if (lVar5 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*unaff_x29 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad910);
        FUN_053210c4(lVar5,uVar6,*(undefined8 *)PTR_DAT_08fad928,0);
        *(long *)(*(long *)(*unaff_x29 + 0xb8) + 0x10) = lVar5;
      }
      uVar6 = *(undefined8 *)(unaff_x19 + 0x48);
      param_1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad908);
      FUN_052668e0(param_1,uVar2,lVar5,uVar6,*(undefined8 *)PTR_DAT_08fad900);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_076c3c08(*(long *)(unaff_x19 + 0x40),unaff_w21,param_1);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    FUN_0526691c(param_1,unaff_x20,*unaff_x26);
    uVar1 = FUN_0724eea4(&stack0x00000020,*unaff_x27);
    unaff_x20 = in_stack_00000038;
    unaff_w21 = in_stack_00000030;
    if ((uVar1 & 1) == 0) {
      FUN_0724eea0(&stack0x00000020,*(undefined8 *)PTR_DAT_08fad8e0);
      return;
    }
    unaff_x23 = thunk_FUN_0406deb8(*unaff_x28);
    FUN_075273c0(unaff_x23,0);
    if (unaff_x23 == 0) break;
    *(long *)(unaff_x23 + 0x18) = unaff_x19;
    FUN_076f3180(unaff_w21,0);
    *(undefined4 *)(unaff_x23 + 0x10) = unaff_w21;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = FUN_076c3c38(*(long *)(unaff_x19 + 0x40),unaff_w21);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


