/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetFloatTrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 043179f4
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetFloatTrackedDeviceProperty__EndInvoke
               (ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x24;
  uint unaff_w26;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x40);
    if (plVar7 == (long *)0x0) goto LAB_04317b80;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar5 = (*(code *)*puVar2)(plVar7);
    if ((uVar5 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_04317b84();
      uVar1 = uVar1 & 1;
    }
  }
  if ((uVar1 & unaff_w26) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar5 = FUN_0852f904(0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar5 = FUN_074c70a4();
      if (((uVar5 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar4 = FUN_08584ab0();
    if (lVar4 != 0) {
      FUN_08588638(lVar4,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x28);
      uVar3 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
      if (lVar4 != 0) {
        FUN_04308fec(lVar4,uVar3);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


