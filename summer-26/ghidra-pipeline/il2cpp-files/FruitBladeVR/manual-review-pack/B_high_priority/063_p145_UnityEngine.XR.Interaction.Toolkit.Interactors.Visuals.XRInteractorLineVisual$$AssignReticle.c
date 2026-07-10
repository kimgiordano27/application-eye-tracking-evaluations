/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual$$AssignReticle
ENTRY_POINT: 0367c1bc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_9;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual__AssignReticle
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 in_s3;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  puVar5 = &local_f0;
  if ((DAT_03ef6d6e & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo_03ce51e0
                );
    FUN_01c5c92c(PTR_Method_System_Nullable<Vector3>_get_HasValue___03ce51e8);
    FUN_01c5c92c(PTR_Method_System_Nullable<Vector3>_get_Value___03ce51f0);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6d6e = 1;
  }
  local_58 = 0;
  lVar9 = 0x80;
  if ((param_2 & 1) == 0) {
    lVar9 = 0x78;
  }
  if (*(char *)(param_1 + 0x178) != '\0') {
    lVar9 = 0x170;
  }
  plVar7 = (long *)(param_1 + 0xd0);
  lVar8 = *plVar7;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  *plVar7 = *(long *)(param_1 + lVar9);
  thunk_FUN_01cc8040(plVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
  if ((uVar2 & 1) != 0) {
    lVar9 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar8,lVar9,0);
    if ((uVar2 & 1) != 0) {
      if (lVar8 == 0) goto LAB_0367c524;
      UnityEngine_GameObject__SetActive(lVar8,0,0);
    }
  }
  lVar9 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar9,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c2) == '\0') {
LAB_0367c378:
    if (*plVar7 == 0) goto LAB_0367c524;
    uVar3 = UnityEngine_GameObject__get_transform(*plVar7,0);
    uVar15 = *(undefined4 *)(param_1 + 0xb4);
    uVar14 = *(undefined4 *)(param_1 + 0xb8);
    uVar12 = *(undefined4 *)(param_1 + 0xb0);
    fVar11 = -*(float *)(param_1 + 0xc4);
    fVar10 = -*(float *)(param_1 + 0xc0);
    uVar13 = UnityEngine_Quaternion__LookRotation(-*(float *)(param_1 + 0xbc),fVar10,fVar11,0);
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    UnityEngine_Pose___ctor(uVar12,uVar15,uVar14,uVar13,fVar10,fVar11,in_s3,&local_b0,0);
    uStack_dc = CONCAT44(local_98,uStack_9c);
    uStack_e8 = uStack_a8;
    local_f0 = local_b0;
    uStack_e4 = uStack_a4;
    uStack_e0 = local_a0;
  }
  else {
    uVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRHoverInteractorExtensions__GetOldestInteractableHovered
                      (*(undefined8 *)(param_1 + 0x100),0);
    puVar1 = 
    PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo_03ce51e0
    ;
    plVar4 = (long *)thunk_FUN_01c8fb4c(uVar3,*(undefined8 *)
                                               PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IXRReticleDirectionProvider_TypeInfo_03ce51e0
                                       );
    if (plVar4 == (long *)0x0) goto LAB_0367c378;
    lVar9 = *plVar4;
    uVar12 = *(undefined4 *)(param_1 + 0xbc);
    uVar13 = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    uVar14 = *(undefined4 *)(param_1 + 0xc4);
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0367c41c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c8cb54(plVar4,*(long *)puVar1,0);
LAB_0367c41c:
    (*(code *)*puVar5)(uVar12,plVar4,uVar3,&uStack_60,&local_70,puVar5[1]);
    if ((char)local_70 == '\0') {
      if ((*plVar7 == 0) || (lVar9 = UnityEngine_GameObject__get_transform(*plVar7,0), lVar9 == 0))
      goto LAB_0367c524;
      uVar12 = UnityEngine_Transform__get_forward(lVar9,0);
    }
    else {
      uVar12 = System_Nullable<Vector3>__get_Value
                         (&local_70,
                          *(undefined8 *)PTR_Method_System_Nullable<Vector3>_get_Value___03ce51f0);
    }
    local_90 = CONCAT44(uVar13,uVar12);
    local_88 = uVar14;
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__LookRotationWithForwardProjectedOnPlane
              (&local_90,&uStack_60,&local_80,0);
    if (*plVar7 == 0) goto LAB_0367c524;
    uVar3 = UnityEngine_GameObject__get_transform(*plVar7,0);
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    UnityEngine_Pose___ctor
              (*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
               *(undefined4 *)(param_1 + 0xb8),(undefined4)local_80,local_80._4_4_,
               (undefined4)local_78,local_78._4_4_,&local_b0,0);
    uStack_bc = CONCAT44(local_98,uStack_9c);
    puVar5 = &local_d0;
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    uStack_c4 = uStack_a4;
    uStack_c0 = local_a0;
  }
  Unity_XR_CoreUtils_TransformExtensions__SetWorldPose(uVar3,puVar5,0);
  if (*plVar7 != 0) {
    UnityEngine_GameObject__SetActive(*plVar7,1,0);
    return;
  }
LAB_0367c524:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


