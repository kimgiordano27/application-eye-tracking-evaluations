/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PerformFirmwareUpdate$$.ctor
ENTRY_POINT: 043193c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PerformFirmwareUpdate___ctor
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *in_x11;
  long unaff_x19;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x11) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_04319414;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_04319414:
  uVar3 = (*(code *)*puVar1)();
  if ((uVar3 & 1) == 0) {
LAB_04319478:
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_04308fec(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20));
      return;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0852f904(0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar3 = FUN_074c70a4();
      if ((uVar3 & 1) != 0) goto LAB_04319478;
    }
    lVar2 = FUN_08584ab0();
    if (lVar2 != 0) {
      FUN_08588638(lVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


