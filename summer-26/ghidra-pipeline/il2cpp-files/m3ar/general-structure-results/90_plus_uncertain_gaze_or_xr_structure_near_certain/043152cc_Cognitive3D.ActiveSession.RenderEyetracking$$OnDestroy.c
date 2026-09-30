/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$OnDestroy
ENTRY_POINT: 043152cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__OnDestroy(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x21 + 0x780);
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f73788);
    FUN_0403162c(PTR_DAT_08f73790);
    FUN_0403162c(PTR_DAT_08f73798);
    FUN_0403162c(PTR_DAT_08f73780);
    *(undefined1 *)(unaff_x20 + 0xde9) = 1;
  }
  lVar3 = thunk_FUN_0406deb8(*puVar7);
  FUN_075273c0(lVar3,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x10) = unaff_w19;
    lVar4 = FUN_04426cb4(0);
    puVar2 = PTR_DAT_08f73798;
    puVar1 = PTR_DAT_08f73788;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x28);
      uVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73790);
      FUN_0534e280(uVar5,lVar3,*(undefined8 *)puVar2,0);
      FUN_04aec9fc(uVar6,uVar5,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


