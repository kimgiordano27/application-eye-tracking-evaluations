/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetPropErrorNameFromEnum$$Invoke
ENTRY_POINT: 0431817c
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetPropErrorNameFromEnum__Invoke
               (code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  lVar3 = (*param_1)();
  if (lVar3 == 0) {
    return;
  }
                    /* try { // try from 0431818c to 0441818f has its CatchHandler @ 0431834c */
  uVar10 = *(undefined8 *)(lVar3 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)PTR_DAT_08f65f48);
  }
  FUN_074c25d4(&stack0x00000018,uVar10,0);
  lVar3 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04318200;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_04318200:
  iVar2 = (*(code *)*puVar4)();
  in_stack_00000008 = FUN_074c3fa4((double)iVar2,&stack0x00000018,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    plVar5 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x23);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_04318290;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x24,1);
LAB_04318290:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      uVar6 = FUN_074c32b4(&stack0x00000008,0);
      puVar1 = PTR_DAT_08f66370;
      if (lVar3 != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar3 + 0x30) = uVar10;
        *(undefined8 *)(lVar3 + 0x38) = uVar6;
        uVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
        FUN_07449f28();
        if (lVar7 != 0) {
          FUN_04308a60(lVar7,uVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


