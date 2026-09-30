/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetPropErrorNameFromEnum$$EndInvoke
ENTRY_POINT: 04318214
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetPropErrorNameFromEnum__EndInvoke
               (undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  in_stack_00000008 = FUN_074c3fa4(param_1,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x28);
                    /* try { // try from 04318234 to 044182b7 has its CatchHandler @ 0431837c */
    plVar2 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x23);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_04318290;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x24,1);
LAB_04318290:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      uVar5 = FUN_074c32b4(&stack0x00000008,0);
      puVar1 = PTR_DAT_08f66370;
      if (lVar9 != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar9 + 0x30) = uVar4;
        *(undefined8 *)(lVar9 + 0x38) = uVar5;
        uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
        FUN_07449f28();
        if (lVar6 != 0) {
          FUN_04308a60(lVar6,uVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


