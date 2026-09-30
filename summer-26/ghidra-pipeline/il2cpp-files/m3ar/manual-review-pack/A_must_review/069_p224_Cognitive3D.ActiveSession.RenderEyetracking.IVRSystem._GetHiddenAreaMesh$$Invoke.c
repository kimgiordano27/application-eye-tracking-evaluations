/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetHiddenAreaMesh$$Invoke
ENTRY_POINT: 04318788
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetHiddenAreaMesh__Invoke(void)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint in_w8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long in_stack_00000040;
  long in_stack_00000048;
  
  while( true ) {
    if (in_w8 <= (uint)unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    plVar2 = *(long **)(unaff_x26 + unaff_x23 * 8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    (**(code **)(*plVar2 + 0x178))
              (plVar2,unaff_x25[-1],*unaff_x25,1,*unaff_x21,*(undefined8 *)(*plVar2 + 0x180));
    uVar3 = *(uint *)(unaff_x22 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x25 = unaff_x25 + 2;
    if ((int)uVar3 <= (int)unaff_x23) {
      do {
        uVar1 = FUN_04fcfce0(&stack0x00000030,*unaff_x19);
        if ((uVar1 & 1) == 0) {
          FUN_04fcfdf4(&stack0x00000030,*unaff_x20);
          return;
        }
        if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        unaff_x22 = *(long *)(in_stack_00000040 + 0x30);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
      } while ((int)uVar3 < 1);
      unaff_x23 = 0;
      unaff_x25 = (undefined8 *)(unaff_x22 + 0x28);
      unaff_x26 = in_stack_00000048 + 0x20;
      unaff_x24 = in_stack_00000048;
    }
    if (uVar3 <= (uint)unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_x24 == 0) break;
    in_w8 = *(uint *)(unaff_x24 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


