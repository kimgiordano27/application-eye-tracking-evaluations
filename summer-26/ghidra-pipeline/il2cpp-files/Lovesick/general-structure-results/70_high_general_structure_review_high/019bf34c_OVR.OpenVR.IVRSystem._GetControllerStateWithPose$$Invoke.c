/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 019bf34c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke
                (float param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  param_2 = param_2 * param_4;
  uVar10 = 0;
  param_3 = param_3 * param_4;
  uVar14 = 0;
  uVar5 = FUN_026992c0(param_1 * param_4);
  if (unaff_x20 != 0) {
    uVar6 = CONCAT44(uVar10,param_2);
    uVar7 = CONCAT44(uVar14,param_3);
    if (*(char *)(unaff_x20 + 0x10) != '\0') {
      uVar5 = FUN_019bf548(uVar5,*(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18)
                          );
    }
    if (*(char *)(unaff_x20 + 0x1c) != '\0') {
      uVar6 = FUN_019bf548(uVar6,*(undefined4 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x24)
                          );
    }
    if (*(char *)(unaff_x20 + 0x28) != '\0') {
      uVar7 = FUN_019bf548(uVar7,*(undefined4 *)(unaff_x20 + 0x2c),*(undefined4 *)(unaff_x20 + 0x30)
                          );
    }
    fVar8 = (float)uVar6 * DAT_028aa044;
    fVar11 = (float)uVar7 * DAT_028aa044;
    fVar2 = (float)FUN_02698b6c((float)uVar5 * DAT_028aa044,0);
    fVar16 = fVar8;
    fVar12 = fVar11;
    fVar15 = param_4;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_02681b9c();
    if ((uVar1 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_019bf544;
      fVar3 = (float)FUN_0269f810();
      fVar18 = fVar8 * fVar3;
      fVar4 = fVar2 * fVar3;
      fVar17 = fVar2 * fVar12;
      fVar19 = fVar2 * fVar16;
      fVar9 = fVar8 * fVar16;
      fVar13 = fVar11 * fVar12;
      fVar2 = (fVar11 * fVar16 + fVar2 * fVar15 + param_4 * fVar3) - fVar8 * fVar12;
      fVar8 = (fVar17 + fVar8 * fVar15 + param_4 * fVar16) - fVar11 * fVar3;
      fVar11 = (fVar18 + fVar11 * fVar15 + param_4 * fVar12) - fVar19;
      param_4 = ((param_4 * fVar15 - fVar4) - fVar9) - fVar13;
    }
    if (DAT_0377a2f5 == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_0377a2f5 = '\x01';
    }
    fVar16 = SQRT(param_4 * param_4 + fVar11 * fVar11 + fVar2 * fVar2 + fVar8 * fVar8);
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar16) {
      fVar2 = fVar2 / fVar16;
    }
    else {
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      fVar2 = **(float **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
    }
    return fVar2;
  }
LAB_019bf544:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


