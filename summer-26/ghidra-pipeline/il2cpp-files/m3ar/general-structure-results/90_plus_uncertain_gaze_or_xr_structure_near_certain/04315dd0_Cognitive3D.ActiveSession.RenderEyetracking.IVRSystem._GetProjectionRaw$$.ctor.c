/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetProjectionRaw$$.ctor
ENTRY_POINT: 04315dd0
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetProjectionRaw___ctor(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar6;
  
  if (param_1 != 0) {
    uVar3 = FUN_044b2f64(param_1,unaff_w19,unaff_w21,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x28);
    uVar2 = FUN_042f2ebc(unaff_w19,0);
    if (lVar6 != 0) {
      uVar3 = FUN_04344cb0(lVar6,uVar2,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(unaff_x20 + 0x10);
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *(long *)PTR_DAT_08f737d0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = unaff_w19;
          }
          else {
            FUN_05769150(lVar6,unaff_w19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)(unaff_x20 + 0x40);
          if (lVar6 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x04315e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),unaff_w19,3,*(undefined8 *)(lVar6 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


