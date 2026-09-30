/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$LateUpdate
ENTRY_POINT: 0431508c
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__LateUpdate(void)

{
  undefined4 extraout_var;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *plVar7;
  long unaff_x21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined4 uStack000000000000000c;
  
  FUN_043152b0();
  uStack000000000000000c = extraout_var;
  uVar1 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x0000000c);
  uVar1 = FUN_0735fe18(*unaff_x19,uVar1,0);
  plVar7 = *(long **)(unaff_x21 + 0xa0);
  lVar2 = FUN_085849e0();
  if ((lVar2 == 0) || (uVar3 = thunk_FUN_085992a0(lVar2,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f6a6b0) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_04315140;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f6a6b0,2);
LAB_04315140:
  (*(code *)*puVar4)(unaff_s8 + unaff_s13 * DAT_01a2eba0,unaff_s9 + unaff_s12 * DAT_01a2eba0,
                     unaff_s10 + unaff_s11 * DAT_01a2eba0,plVar7,uVar3,uVar1,0,0,puVar4[1]);
  return;
}


