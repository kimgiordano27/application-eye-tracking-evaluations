/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 090d3dc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 145
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(undefined8 param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 090d3dc8 to 091d3dd3 has its CatchHandler @ 090d3af4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090d3dc0 with catch @ 090d3dd0
                        */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
    fVar2 = *(float *)(param_2 + 0x20);
    fVar3 = *(float *)(param_2 + 0x24);
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(param_2 + 0x2c);
    if (DAT_0b32fbd8 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b32fbd8 = '\x01';
    }
    fVar3 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
    if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar3) {
      fVar2 = fVar2 / fVar3;
    }
    else {
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0f100);
        DAT_0b31f57b = '\x01';
      }
      fVar2 = **(float **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


