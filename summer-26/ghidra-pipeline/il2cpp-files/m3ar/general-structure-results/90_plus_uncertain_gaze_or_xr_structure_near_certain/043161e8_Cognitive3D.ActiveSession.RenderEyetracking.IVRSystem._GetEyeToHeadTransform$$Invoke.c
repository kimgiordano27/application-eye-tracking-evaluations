/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetEyeToHeadTransform$$Invoke
ENTRY_POINT: 043161e8
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetEyeToHeadTransform__Invoke(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f68738);
  FUN_0403162c(PTR_DAT_08f737e8);
  *(undefined1 *)(unaff_x19 + 0xdf7) = 1;
  plVar6 = *(long **)(unaff_x21 + 0x28);
  uVar1 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_05329970();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f68738) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto LAB_04316288;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f68738,8);
LAB_04316288:
                    /* WARNING: Could not recover jumptable at 0x043162a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}


