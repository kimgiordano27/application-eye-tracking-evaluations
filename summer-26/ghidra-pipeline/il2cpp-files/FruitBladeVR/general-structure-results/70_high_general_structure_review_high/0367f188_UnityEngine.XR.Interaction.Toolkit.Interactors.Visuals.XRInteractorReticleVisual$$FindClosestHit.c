/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual$$FindClosestHit
ENTRY_POINT: 0367f188
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorReticleVisual__FindClosestHit
               (undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((int)param_3 < 1) {
    if (param_2 == 0) goto LAB_0367f268;
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
LAB_0367f268:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar3 = 0;
    uVar2 = 0;
    fVar5 = 3.4028235e+38;
    lVar1 = param_2 + 0x20;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar3) goto LAB_0367f264;
      fVar4 = (float)UnityEngine_RaycastHit__get_distance(lVar1,0);
      if (fVar4 < fVar5) {
        if (*(uint *)(param_2 + 0x18) <= uVar3) goto LAB_0367f264;
        fVar5 = (float)UnityEngine_RaycastHit__get_distance(lVar1,0);
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x2c;
    } while (param_3 != uVar3);
  }
  if (uVar2 < *(uint *)(param_2 + 0x18)) {
    param_2 = param_2 + (long)(int)uVar2 * 0x2c;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar10 = *(undefined8 *)(param_2 + 0x44);
    uVar9 = *(undefined8 *)(param_2 + 0x3c);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    *(undefined8 *)((long)param_1 + 0x24) = uVar10;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar9;
    return;
  }
LAB_0367f264:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbdc();
}


