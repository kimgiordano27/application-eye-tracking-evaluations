/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$MatchTargetCamera
ENTRY_POINT: 04315034
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__MatchTargetCamera
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x21;
  float extraout_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack000000000000000c;
  
  puVar1 = PTR_DAT_08f71f50;
  uVar2 = FUN_08598884(param_4,0);
  if (DAT_09539e16 == '\0') {
    uVar2 = FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar11 = *(float *)(lVar5 + 0x18);
  fVar10 = *(float *)(lVar5 + 0x1c);
  fVar9 = *(float *)(lVar5 + 0x20);
  FUN_043152b0(uVar2,*(undefined4 *)(unaff_x21 + 0x88));
  uStack000000000000000c = extraout_var;
  uVar2 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x0000000c);
  uVar2 = FUN_0735fe18(*(undefined8 *)puVar1,uVar2,0);
  plVar8 = *(long **)(unaff_x21 + 0xa0);
  lVar5 = FUN_085849e0();
  if ((lVar5 == 0) || (uVar3 = thunk_FUN_085992a0(lVar5,0), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f6a6b0) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_04315140;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f6a6b0,2);
LAB_04315140:
  (*(code *)*puVar4)(extraout_s0 + fVar11 * DAT_01a2eba0,param_2 + fVar10 * DAT_01a2eba0,
                     param_3 + fVar9 * DAT_01a2eba0,plVar8,uVar3,uVar2,0,0,puVar4[1]);
  return;
}


