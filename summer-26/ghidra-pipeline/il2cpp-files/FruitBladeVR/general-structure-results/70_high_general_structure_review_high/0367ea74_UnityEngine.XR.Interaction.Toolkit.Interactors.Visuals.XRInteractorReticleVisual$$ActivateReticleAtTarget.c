/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual$$ActivateReticleAtTarget
ENTRY_POINT: 0367ea74
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_11;paired_field_refs_with_structure_only;repeated_pose_getters;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorReticleVisual__ActivateReticleAtTarget
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_d0;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef6d87 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6d87 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_4 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  puVar2 = PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0;
  fVar15 = param_2;
  if ((uVar4 & 1) == 0) {
LAB_0367eb7c:
    if (DAT_03ef1418 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
      DAT_03ef1418 = '\x01';
    }
    lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
    fVar9 = *(float *)(lVar5 + 0x18);
    param_2 = *(float *)(lVar5 + 0x1c);
    fVar14 = *(float *)(lVar5 + 0x20);
  }
  else {
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_0367f064;
    uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x58) + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    fVar15 = param_2;
    if ((uVar4 & 1) == 0) goto LAB_0367eb7c;
    if (((*(long *)(param_4 + 0x58) == 0) ||
        (lVar5 = *(long *)(*(long *)(param_4 + 0x58) + 0x38), lVar5 == 0)) ||
       (lVar5 = UnityEngine_GameObject__get_transform(lVar5,0), lVar5 == 0)) goto LAB_0367f064;
    fVar9 = (float)UnityEngine_Transform__get_up(lVar5,0);
    fVar14 = param_3;
    fVar15 = param_2;
  }
  puVar1 = PTR_System_Math_TypeInfo_03cb5ea0;
  if ((*(char *)(param_4 + 0x35) == '\0') || (*(char *)(param_4 + 0x8c) == '\0')) {
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_0367f064;
    uVar8 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x60),0);
    if ((*(long *)(param_4 + 0x68) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_4 + 0x68) + 0x50), lVar5 == 0)) goto LAB_0367f064;
    uVar11 = *(undefined4 *)(param_4 + 0x70);
    uVar13 = *(undefined4 *)(param_4 + 0x74);
    fVar19 = *(float *)(param_4 + 0x78);
    fVar17 = (float)UnityEngine_Transform__get_position(lVar5,0);
    fVar12 = *(float *)(param_4 + 0x70);
    fVar20 = *(float *)(param_4 + 0x74);
    fVar10 = *(float *)(param_4 + 0x78);
    if (DAT_03ef141d == '\0') {
      FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
      DAT_03ef141d = '\x01';
    }
    fVar17 = fVar17 - fVar12;
    fVar15 = fVar15 - fVar20;
    param_3 = param_3 - fVar10;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    fVar10 = SQRT(param_3 * param_3 + fVar17 * fVar17 + fVar15 * fVar15);
    if (fVar10 <= DAT_00b46114) {
      if (DAT_03ef1415 == '\0') {
        FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
        DAT_03ef1415 = '\x01';
      }
      pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar17 = *pfVar7;
      fVar15 = pfVar7[1];
      param_3 = pfVar7[2];
    }
    else {
      fVar17 = fVar17 / fVar10;
      fVar15 = fVar15 / fVar10;
      param_3 = param_3 / fVar10;
    }
    uVar16 = UnityEngine_Quaternion__LookRotation(fVar9,param_2,fVar14,fVar17,fVar15,param_3,0);
    local_90 = 0;
    uStack_88 = 0;
    fStack_84 = 0.0;
    local_78 = 0;
    local_80 = 0;
    uStack_7c = 0;
    UnityEngine_Pose___ctor(uVar11,uVar13,fVar19,uVar16,param_2,fVar14,fVar17,&local_90,0);
    uStack_bc = CONCAT44(local_78,uStack_7c);
    puVar6 = &local_d0;
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    fStack_c4 = fStack_84;
    uStack_c0 = local_80;
LAB_0367ef4c:
    fVar15 = fStack_84;
    Unity_XR_CoreUtils_TransformExtensions__SetWorldPose(uVar8,puVar6,0);
  }
  else {
    fVar15 = fVar14 * *(float *)(param_4 + 0x84) +
             fVar9 * *(float *)(param_4 + 0x7c) + param_2 * *(float *)(param_4 + 0x80);
    fVar17 = ABS(fVar15);
    if (DAT_03ef1815 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Mathf_TypeInfo_03cb6100);
      DAT_03ef1815 = '\x01';
    }
    puVar3 = PTR_UnityEngine_Mathf_TypeInfo_03cb6100;
    fVar19 = fVar17;
    if (fVar17 <= 1.0) {
      fVar19 = 1.0;
    }
    fVar12 = **(float **)(*(long *)PTR_UnityEngine_Mathf_TypeInfo_03cb6100 + 0xb8) * 8.0;
    fVar10 = fVar19 * DAT_00b460c0;
    if (fVar19 * DAT_00b460c0 <= fVar12) {
      fVar10 = fVar12;
    }
    if (ABS(1.0 - fVar17) < fVar10) {
      if ((*(long *)(param_4 + 0x68) == 0) ||
         (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x68),0), lVar5 == 0))
      goto LAB_0367f064;
      fVar9 = (float)UnityEngine_Transform__get_forward(lVar5,0);
      fVar9 = fVar15 * fVar9;
      param_2 = fVar15 * fVar10;
      fVar14 = fVar15 * fVar12;
    }
    fVar19 = *(float *)(param_4 + 0x7c);
    fVar17 = *(float *)(param_4 + 0x80);
    fVar15 = *(float *)(param_4 + 0x84);
    if (DAT_03ef5442 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Mathf_TypeInfo_03cb6100);
      DAT_03ef5442 = '\x01';
    }
    fVar10 = fVar15 * fVar15 + fVar19 * fVar19 + fVar17 * fVar17;
    if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar10) {
      fVar12 = fVar14 * fVar15 + fVar9 * fVar19 + param_2 * fVar17;
      fVar9 = fVar9 - (fVar19 * fVar12) / fVar10;
      param_2 = param_2 - (fVar17 * fVar12) / fVar10;
      fVar14 = fVar14 - (fVar15 * fVar12) / fVar10;
    }
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
      DAT_03ef1415 = '\x01';
    }
    lVar5 = *(long *)(param_4 + 0x60);
    pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
    if (DAT_00b45dd0 <=
        (fVar14 - pfVar7[2]) * (fVar14 - pfVar7[2]) +
        (fVar9 - *pfVar7) * (fVar9 - *pfVar7) + (param_2 - pfVar7[1]) * (param_2 - pfVar7[1])) {
      if (lVar5 == 0) goto LAB_0367f064;
      uVar8 = UnityEngine_GameObject__get_transform(lVar5,0);
      fVar19 = *(float *)(param_4 + 0x78);
      uVar13 = *(undefined4 *)(param_4 + 0x7c);
      uVar16 = *(undefined4 *)(param_4 + 0x70);
      uVar18 = *(undefined4 *)(param_4 + 0x74);
      uVar11 = UnityEngine_Quaternion__LookRotation
                         (fVar9,param_2,fVar14,uVar13,*(undefined4 *)(param_4 + 0x80),
                          *(undefined4 *)(param_4 + 0x84),0);
      local_90 = 0;
      uStack_88 = 0;
      fStack_84 = 0.0;
      local_78 = 0;
      local_80 = 0;
      uStack_7c = 0;
      UnityEngine_Pose___ctor(uVar16,uVar18,fVar19,uVar11,param_2,fVar14,uVar13,&local_90,0);
      uStack_9c = CONCAT44(local_78,uStack_7c);
      puVar6 = &local_b0;
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      fStack_a4 = fStack_84;
      uStack_a0 = local_80;
      goto LAB_0367ef4c;
    }
    if ((lVar5 == 0) || (lVar5 = UnityEngine_GameObject__get_transform(lVar5,0), lVar5 == 0))
    goto LAB_0367f064;
    fVar15 = *(float *)(param_4 + 0x74);
    fVar19 = *(float *)(param_4 + 0x78);
    UnityEngine_Transform__set_position(*(undefined4 *)(param_4 + 0x70),fVar15,fVar19,lVar5,0);
  }
  fVar14 = *(float *)(param_4 + 0x30);
  if (*(char *)(param_4 + 0x34) != '\0') {
    if ((*(long *)(param_4 + 0x68) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_4 + 0x68) + 0x50), lVar5 == 0)) goto LAB_0367f064;
    fVar9 = (float)UnityEngine_Transform__get_position(lVar5,0);
    fVar17 = *(float *)(param_4 + 0x70);
    fVar12 = *(float *)(param_4 + 0x74);
    fVar10 = *(float *)(param_4 + 0x78);
    if (DAT_03ef141c == '\0') {
      FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
      DAT_03ef141c = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    fVar15 = fVar15 - fVar12;
    fVar9 = fVar9 - fVar17;
    fVar19 = fVar19 - fVar10;
    fVar14 = fVar14 * SQRT(fVar19 * fVar19 + fVar9 * fVar9 + fVar15 * fVar15);
  }
  if ((*(long *)(param_4 + 0x60) != 0) &&
     (lVar5 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x60),0), lVar5 != 0)) {
    UnityEngine_Transform__set_localScale(fVar14,fVar14,fVar14,lVar5,0);
    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorReticleVisual__set_reticleActive
              (param_4,1);
    return;
  }
LAB_0367f064:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


