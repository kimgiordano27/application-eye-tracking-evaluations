/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerAxisTypeNameFromEnum$$EndInvoke
ENTRY_POINT: 04318fc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerAxisTypeNameFromEnum__EndInvoke
               (void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  int unaff_w20;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000028;
  uStack0000000000000038 = in_stack_00000010;
  uStack0000000000000030 = in_stack_00000008;
  lStack0000000000000048 = in_stack_00000020;
  lStack0000000000000040 = in_stack_00000018;
  while( true ) {
    uVar1 = FUN_04fcfce0(&stack0x00000030,*unaff_x24);
    lVar2 = lStack0000000000000048;
    if ((uVar1 & 1) == 0) {
      FUN_04fcfdf4(&stack0x00000030,*unaff_x21);
      lVar2 = *unaff_x23;
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar2 = *unaff_x23;
      }
      puVar5 = *(undefined8 **)(lVar2 + 0xb8);
      lVar6 = puVar5[1];
      if (lVar6 == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar5 = *(undefined8 **)(*unaff_x23 + 0xb8);
        }
        uVar7 = *puVar5;
        lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73900);
        FUN_0532c238(lVar6,uVar7,*(undefined8 *)PTR_DAT_08f73940,0);
        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar6;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_057d5d8c(lVar3,lVar6,*unaff_x22);
      return;
    }
    if (lStack0000000000000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *(long *)(lStack0000000000000040 + 0x30);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_w20 < *(int *)(lVar3 + 0x24)) {
      if (lStack0000000000000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (0 < (int)*(ulong *)(lStack0000000000000048 + 0x18)) {
        uVar1 = 0;
        uVar4 = *(ulong *)(lStack0000000000000048 + 0x18) & 0xffffffff;
        lVar3 = lStack0000000000000048 + 0x20;
        do {
          if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          FUN_042a550c(*(undefined8 *)(lVar3 + uVar1 * 8),0);
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


