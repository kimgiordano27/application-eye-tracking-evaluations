/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 01a15f68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar8;
  
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = FUN_01a15d48();
  fVar1 = (float)FUN_02698d50(uVar13,uVar3,param_3,param_4,0);
  if (*(long *)(param_5 + 0x18) != 0) {
    uVar13 = *(undefined4 *)(*(long *)(param_5 + 0x18) + 0x28);
    uVar7 = uVar3;
    uVar10 = param_3;
    uVar4 = FUN_01a15d48(param_5);
    fVar2 = (float)FUN_02698d50(uVar13,uVar4,uVar7,uVar10,0);
    fVar16 = (float)param_4;
    fVar12 = (float)uVar10;
    fVar5 = (float)uVar4;
    fVar15 = (float)uVar3;
    fVar9 = (float)uVar7;
    fVar14 = (float)param_3;
    uVar11 = (ulong)(uint)(fVar14 * fVar9);
    fVar6 = (fVar16 * fVar12 - fVar1 * fVar2) - fVar15 * fVar5;
    uVar8 = (ulong)(uint)fVar6;
    uVar3 = FUN_01a15b74(param_5);
    FUN_02699088((fVar15 * fVar9 + fVar16 * fVar2 + fVar1 * fVar12) - fVar14 * fVar5,
                 (fVar14 * fVar2 + fVar16 * fVar5 + fVar15 * fVar12) - fVar1 * fVar9,
                 (fVar1 * fVar5 + fVar16 * fVar9 + fVar14 * fVar12) - fVar15 * fVar2,
                 fVar6 - fVar14 * fVar9,uVar3,uVar8,uVar11,0);
    if (param_6 != 0) {
      FUN_026a048c(param_6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


