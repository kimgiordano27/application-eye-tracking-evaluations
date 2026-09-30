/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetProjectionMatrix$$EndInvoke
ENTRY_POINT: 04315d98
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetProjectionMatrix__EndInvoke(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0403162c(PTR_DAT_08f737d0);
  *(undefined1 *)(unaff_x21 + 0xdf1) = 1;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    uVar2 = FUN_04349df4(*(long *)(unaff_x20 + 0x38),0);
    lVar3 = FUN_04426cb4(0);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
      uVar4 = FUN_044b2f64(*(long *)(lVar3 + 0x30),unaff_w19,uVar2,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(unaff_x20 + 0x28);
      uVar2 = FUN_042f2ebc(unaff_w19,0);
      if (lVar3 != 0) {
        uVar4 = FUN_04344cb0(lVar3,uVar2,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar6 = *(long *)PTR_DAT_08f737d0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w19;
            }
            else {
              FUN_05769150(lVar3,unaff_w19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            lVar3 = *(long *)(unaff_x20 + 0x40);
            if (lVar3 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x04315e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),unaff_w19,3,*(undefined8 *)(lVar3 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


