/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetHiddenAreaMesh$$.ctor
ENTRY_POINT: 043186fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetHiddenAreaMesh___ctor
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 *puVar8;
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
  
  puVar3 = PTR_DAT_08f738c8;
  puVar2 = PTR_DAT_08f68760;
  puVar8 = *(undefined8 **)(unaff_x19 + 0x8d0);
  FUN_06ff01a8(&stack0x00000008,param_2,**(undefined8 **)(param_1 + 0x8c0));
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  do {
    do {
      uVar5 = FUN_04fcfce0(&stack0x00000030,*puVar8);
      lVar4 = in_stack_00000048;
      if ((uVar5 & 1) == 0) {
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
      uVar7 = *(uint *)(lVar9 + 0x18);
    } while ((int)uVar7 < 1);
    lVar10 = 0;
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    lVar1 = in_stack_00000048 + 0x20;
    do {
      if (uVar7 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar6 = *(long **)(lVar1 + lVar10 * 8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      (**(code **)(*plVar6 + 0x178))
                (plVar6,puVar11[-1],*puVar11,1,*(undefined8 *)puVar2,
                 *(undefined8 *)(*plVar6 + 0x180));
      uVar7 = *(uint *)(lVar9 + 0x18);
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 2;
    } while ((int)lVar10 < (int)uVar7);
  } while( true );
}


