/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$manualWorldToScreenPoint
ENTRY_POINT: 04314da8
PROGRAM: m3ar-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__manualWorldToScreenPoint
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 *unaff_x23;
  
  puVar3 = (undefined8 *)FUN_0406ae20(param_1,param_2,2);
  (*(code *)*puVar3)();
  plVar8 = *(long **)(unaff_x19 + 0xc0);
  uVar4 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_05329970();
  puVar1 = PTR_DAT_08f68b90;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f729a8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_04314e60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f729a8,1);
LAB_04314e60:
    (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_051cfa40();
    puVar2 = PTR_DAT_08f73758;
    puVar1 = PTR_DAT_08f6d100;
    if (lVar5 != 0) {
      FUN_0430fb74(lVar5,uVar4);
      uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
      FUN_0545306c();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_04342398(uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


