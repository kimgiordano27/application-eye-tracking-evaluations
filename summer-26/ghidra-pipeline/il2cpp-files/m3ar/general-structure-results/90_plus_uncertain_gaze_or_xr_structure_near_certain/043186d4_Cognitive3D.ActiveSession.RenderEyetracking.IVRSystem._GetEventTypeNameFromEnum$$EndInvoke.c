/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetEventTypeNameFromEnum$$EndInvoke
ENTRY_POINT: 043186d4
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetEventTypeNameFromEnum__EndInvoke
               (void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_054b8ffc();
  FUN_04308fec();
  puVar4 = PTR_DAT_08f738d0;
  puVar3 = PTR_DAT_08f738c8;
  puVar2 = PTR_DAT_08f68760;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_06ff01a8(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08f738c0);
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  do {
    do {
      uVar6 = FUN_04fcfce0(&stack0x00000030,*(undefined8 *)puVar4);
      lVar5 = in_stack_00000048;
      if ((uVar6 & 1) == 0) {
        FUN_04fcfdf4(&stack0x00000030,*(undefined8 *)puVar3);
        return;
      }
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *(long *)(in_stack_00000040 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar8 = *(uint *)(lVar9 + 0x18);
    } while ((int)uVar8 < 1);
    lVar10 = 0;
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    lVar1 = in_stack_00000048 + 0x20;
    do {
      if (uVar8 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar7 = *(long **)(lVar1 + lVar10 * 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      (**(code **)(*plVar7 + 0x178))
                (plVar7,puVar11[-1],*puVar11,1,*(undefined8 *)puVar2,
                 *(undefined8 *)(*plVar7 + 0x180));
      uVar8 = *(uint *)(lVar9 + 0x18);
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 2;
    } while ((int)lVar10 < (int)uVar8);
  } while( true );
}


