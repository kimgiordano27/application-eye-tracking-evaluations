/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._DriverDebugRequest$$EndInvoke
ENTRY_POINT: 043193a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__DriverDebugRequest__EndInvoke(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_0437181c();
  if ((uVar1 & 1) == 0) {
LAB_04319428:
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar1 = FUN_0852f904(0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = FUN_074c70a4();
      if ((uVar1 & 1) != 0) goto LAB_04319478;
    }
    lVar3 = FUN_08584ab0();
    if (lVar3 != 0) {
      FUN_08588638(lVar3,0,0);
      return;
    }
  }
  else {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (plVar5 = *(long **)(unaff_x19 + 0x38), plVar5 == (long *)0x0)) goto LAB_043194bc;
    lVar3 = *plVar5;
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_04319414;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f69238,9);
LAB_04319414:
    uVar1 = (*(code *)*puVar2)(plVar5,uVar6,puVar2[1]);
    if ((uVar1 & 1) != 0) goto LAB_04319428;
LAB_04319478:
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_04308fec(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20));
      return;
    }
  }
LAB_043194bc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


