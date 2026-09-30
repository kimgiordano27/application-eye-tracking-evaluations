/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetD3D9AdapterIndex$$BeginInvoke
ENTRY_POINT: 043164b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetD3D9AdapterIndex__BeginInvoke
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int in_w9;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long *unaff_x21;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar5 = *(float *)(param_1 + 0xba8);
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0x948)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xf) * 0x10 + 0x138);
        goto LAB_043165c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_043165c8:
                    /* WARNING: Could not recover jumptable at 0x04316600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)((float)in_w9,unaff_s11 * fVar5 + unaff_s10,unaff_s12 * fVar5 + unaff_s9,
                     unaff_s13 * fVar5 + unaff_s8);
  return;
}


