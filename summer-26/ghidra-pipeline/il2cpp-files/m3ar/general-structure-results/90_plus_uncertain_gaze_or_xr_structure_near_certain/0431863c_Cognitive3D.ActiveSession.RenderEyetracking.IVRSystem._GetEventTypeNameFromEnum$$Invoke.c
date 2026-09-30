/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetEventTypeNameFromEnum$$Invoke
ENTRY_POINT: 0431863c
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetEventTypeNameFromEnum__Invoke(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
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
  
  if ((*(byte *)(unaff_x20 + 0xe0d) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f738c0);
    FUN_0403162c(PTR_DAT_08f738c8);
    FUN_0403162c(PTR_DAT_08f738d0);
    FUN_0403162c(PTR_DAT_08f738d8);
    FUN_0403162c(PTR_DAT_08f73868);
    FUN_0403162c(PTR_DAT_08f738e0);
    FUN_0403162c(PTR_DAT_08f738e8);
    FUN_0403162c(PTR_DAT_08f68760);
    *(undefined1 *)(unaff_x20 + 0xe0d) = 1;
  }
  lVar9 = *(long *)(unaff_x19 + 0x28);
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (lVar9 != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73868);
    }
    FUN_04308fec(lVar9,uVar5);
  }
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
      lVar9 = in_stack_00000048;
      if ((uVar6 & 1) == 0) {
        FUN_04fcfdf4(&stack0x00000030,*(undefined8 *)puVar3);
        return;
      }
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *(long *)(in_stack_00000040 + 0x30);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar8 = *(uint *)(lVar10 + 0x18);
    } while ((int)uVar8 < 1);
    lVar11 = 0;
    puVar12 = (undefined8 *)(lVar10 + 0x28);
    lVar1 = in_stack_00000048 + 0x20;
    do {
      if (uVar8 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar9 + 0x18) <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar7 = *(long **)(lVar1 + lVar11 * 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      (**(code **)(*plVar7 + 0x178))
                (plVar7,puVar12[-1],*puVar12,1,*(undefined8 *)puVar2,
                 *(undefined8 *)(*plVar7 + 0x180));
      uVar8 = *(uint *)(lVar10 + 0x18);
      lVar11 = lVar11 + 1;
      puVar12 = puVar12 + 2;
    } while ((int)lVar11 < (int)uVar8);
  } while( true );
}


