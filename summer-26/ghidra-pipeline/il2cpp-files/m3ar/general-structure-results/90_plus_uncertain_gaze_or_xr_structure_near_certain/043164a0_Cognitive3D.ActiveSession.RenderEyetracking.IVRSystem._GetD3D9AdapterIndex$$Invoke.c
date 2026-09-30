/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetD3D9AdapterIndex$$Invoke
ENTRY_POINT: 043164a0
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetD3D9AdapterIndex__Invoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 unaff_x20;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  FUN_07449f28();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *unaff_x21;
  fVar6 = unaff_s11 * DAT_01a2eba8;
  fVar7 = unaff_s12 * DAT_01a2eba8;
  fVar5 = unaff_s13 * DAT_01a2eba8;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f68948) {
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
  (*(code *)*puVar1)((float)(int)((ulong)unaff_x20 >> 0x20),fVar6 + unaff_s10,fVar7 + unaff_s9,
                     fVar5 + unaff_s8);
  return;
}


