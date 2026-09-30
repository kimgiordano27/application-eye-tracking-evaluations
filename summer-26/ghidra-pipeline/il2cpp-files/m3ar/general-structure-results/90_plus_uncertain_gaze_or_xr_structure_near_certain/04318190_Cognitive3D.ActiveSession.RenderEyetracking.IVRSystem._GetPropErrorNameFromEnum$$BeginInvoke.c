/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetPropErrorNameFromEnum$$BeginInvoke
ENTRY_POINT: 04318190
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetPropErrorNameFromEnum__BeginInvoke
               (long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364(*param_1);
  }
                    /* try { // try from 043181ac to 044181b3 has its CatchHandler @ 04318350 */
  FUN_074c25d4(&stack0x00000018);
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04318200;
      }
                    /* try { // try from 043181d8 to 044181e7 has its CatchHandler @ 04318348 */
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_04318200:
  iVar2 = (*(code *)*puVar3)();
  in_stack_00000008 = FUN_074c3fa4((double)iVar2,&stack0x00000018,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x28);
    plVar4 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x23);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04318290;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*unaff_x24,1);
LAB_04318290:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      uVar6 = FUN_074c32b4(&stack0x00000008,0);
      puVar1 = PTR_DAT_08f66370;
      if (lVar7 != 0) {
        lVar8 = *(long *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar7 + 0x30) = uVar5;
        *(undefined8 *)(lVar7 + 0x38) = uVar6;
        uVar5 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
        FUN_07449f28();
        if (lVar8 != 0) {
          FUN_04308a60(lVar8,uVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


