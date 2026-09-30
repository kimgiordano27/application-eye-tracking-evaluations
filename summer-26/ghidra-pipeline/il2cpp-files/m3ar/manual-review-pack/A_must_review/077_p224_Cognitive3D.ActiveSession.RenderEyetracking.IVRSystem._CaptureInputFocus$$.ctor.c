/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._CaptureInputFocus$$.ctor
ENTRY_POINT: 04318fec
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__CaptureInputFocus___ctor(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  int unaff_w20;
  long lVar5;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar7;
  long in_stack_00000040;
  long in_stack_00000048;
  
  while( true ) {
    lVar1 = in_stack_00000048;
    if ((param_1 & 1) == 0) {
      FUN_04fcfdf4(&stack0x00000030,*unaff_x21);
      lVar1 = *unaff_x23;
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar1 = *unaff_x23;
      }
      puVar4 = *(undefined8 **)(lVar1 + 0xb8);
      lVar5 = puVar4[1];
      if (lVar5 == 0) {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*unaff_x23 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73900);
        FUN_0532c238(lVar5,uVar6,*(undefined8 *)PTR_DAT_08f73940,0);
        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar5;
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_057d5d8c(lVar2,lVar5,*unaff_x22);
      return;
    }
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *(long *)(in_stack_00000040 + 0x30);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_w20 < *(int *)(lVar2 + 0x24)) {
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
        uVar7 = 0;
        uVar3 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
        lVar2 = in_stack_00000048 + 0x20;
        do {
          if (uVar3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          FUN_042a550c(*(undefined8 *)(lVar2 + uVar7 * 8),0);
          uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
    }
    param_1 = FUN_04fcfce0(&stack0x00000030,*unaff_x24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


