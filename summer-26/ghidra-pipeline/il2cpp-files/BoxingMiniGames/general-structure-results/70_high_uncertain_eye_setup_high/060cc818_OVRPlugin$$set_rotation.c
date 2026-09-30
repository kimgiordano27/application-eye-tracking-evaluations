/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 060cc818
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation
               (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],float param_6)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  fVar1 = (float)FUN_071af308();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar10 = *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    fVar4 = param_2;
    fVar6 = param_3;
    fVar2 = (float)FUN_060cc5cc();
    fVar3 = (float)FUN_071af308(uVar10,fVar2,fVar4,fVar6,0);
    fVar7 = param_3 * fVar4;
    fVar5 = param_3 * fVar2;
    fVar8 = (param_2 * fVar4 + param_6 * fVar3 + fVar1 * fVar6) - fVar5;
    fVar9 = ((param_6 * fVar6 - fVar1 * fVar3) - param_2 * fVar2) - fVar7;
    uVar10 = FUN_060cc3f8();
    FUN_071af638(fVar8,(param_3 * fVar3 + param_6 * fVar2 + param_2 * fVar6) - fVar1 * fVar4,
                 (fVar1 * fVar2 + param_6 * fVar4 + param_3 * fVar6) - param_2 * fVar3,fVar9,uVar10,
                 fVar5,fVar7,0);
    if (unaff_x19 != 0) {
      FUN_071d140c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


