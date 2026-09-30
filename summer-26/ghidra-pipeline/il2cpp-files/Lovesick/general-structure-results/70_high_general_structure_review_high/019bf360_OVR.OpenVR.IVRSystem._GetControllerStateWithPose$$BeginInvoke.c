/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 019bf360
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(char *)(unaff_x20 + 0x10) != '\0') {
    param_1 = FUN_019bf548(param_1,*(undefined4 *)(unaff_x20 + 0x14),
                           *(undefined4 *)(unaff_x20 + 0x18));
  }
  if (*(char *)(unaff_x20 + 0x1c) != '\0') {
    param_2 = FUN_019bf548(param_2,*(undefined4 *)(unaff_x20 + 0x20),
                           *(undefined4 *)(unaff_x20 + 0x24));
  }
  if (*(char *)(unaff_x20 + 0x28) != '\0') {
    param_3 = FUN_019bf548(param_3,*(undefined4 *)(unaff_x20 + 0x2c),
                           *(undefined4 *)(unaff_x20 + 0x30));
  }
  fVar5 = (float)param_2 * DAT_028aa044;
  fVar7 = (float)param_3 * DAT_028aa044;
  fVar2 = (float)FUN_02698b6c((float)param_1 * DAT_028aa044,0);
  fVar11 = fVar5;
  fVar8 = fVar7;
  fVar10 = param_4;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_02681b9c();
  if ((uVar1 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar3 = (float)FUN_0269f810();
    fVar13 = fVar5 * fVar3;
    fVar4 = fVar2 * fVar3;
    fVar12 = fVar2 * fVar8;
    fVar14 = fVar2 * fVar11;
    fVar6 = fVar5 * fVar11;
    fVar9 = fVar7 * fVar8;
    fVar2 = (fVar7 * fVar11 + fVar2 * fVar10 + param_4 * fVar3) - fVar5 * fVar8;
    fVar5 = (fVar12 + fVar5 * fVar10 + param_4 * fVar11) - fVar7 * fVar3;
    fVar7 = (fVar13 + fVar7 * fVar10 + param_4 * fVar8) - fVar14;
    param_4 = ((param_4 * fVar10 - fVar4) - fVar6) - fVar9;
  }
  if (DAT_0377a2f5 == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377a2f5 = '\x01';
  }
  fVar11 = SQRT(param_4 * param_4 + fVar7 * fVar7 + fVar2 * fVar2 + fVar5 * fVar5);
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar11) {
    fVar2 = fVar2 / fVar11;
  }
  else {
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    fVar2 = **(float **)
              (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
              0xb8);
  }
  return fVar2;
}


