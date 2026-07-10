/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$UpdateSnapVolumeInteractable
ENTRY_POINT: 03661e3c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;pose_vector;ray_interaction;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;repeated_pose_getters;ray_or_cast_sink_hits_12;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__UpdateSnapVolumeInteractable
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  float local_78;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  puVar2 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef6ca1 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_BoxCollider_TypeInfo_03ce49d8);
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_SphereCollider_TypeInfo_03ce4978);
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_TypeInfo_03cb6110
                );
    DAT_03ef6ca1 = 1;
  }
  uVar10 = *(undefined8 *)(param_4 + 0x4c8);
  local_78 = 0.0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_24 = 0;
  local_28[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (DAT_03ef1415 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
    DAT_03ef1415 = '\x01';
  }
  uVar13 = 0;
  fVar14 = *(float *)(param_4 + 0x4c4);
  pfVar7 = *(float **)(*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8);
  fVar15 = *pfVar7;
  fVar16 = pfVar7[1];
  fVar17 = pfVar7[2];
  if (param_5 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_TypeInfo_03cb6110
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_5 + 0x130)) &&
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_TypeInfo_03cb6110))
    {
      fVar11 = param_3;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        fVar11 = param_3;
      }
      uVar3 = UnityEngine_Object__op_Inequality(param_5,0,0);
      param_3 = fVar11;
      if (((uVar3 & 1) != 0) && ((char)param_5[0xf] != '\0')) {
        lVar8 = *param_5;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
               ) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              fVar16 = param_2;
              goto LAB_036621dc;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c8cb54(param_5,*(long *)
                                       PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                              ,6);
        fVar16 = param_2;
LAB_036621dc:
        lVar8 = (*(code *)*puVar4)(param_5,puVar4[1]);
        if (lVar8 == 0) goto LAB_03662278;
        fVar15 = (float)UnityEngine_Transform__get_position(lVar8,0);
        param_3 = fVar11;
        param_2 = fVar16;
        uVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetHitInfo
                          (param_4,&local_80,&local_a8,&local_24,local_28);
        fVar17 = fVar11;
        if ((uVar3 & 1) == 0) {
          lVar8 = 0;
        }
        else {
          param_2 = (float)((ulong)local_80 >> 0x20);
          param_3 = local_78;
          uVar3 = UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility__TryGetClosestCollider
                            ((undefined4)local_80,param_5,&local_98,0);
          lVar5 = local_88;
          lVar8 = 0;
          if ((uVar3 & 1) != 0) {
            if (local_88 == 0) goto LAB_03662278;
            UnityEngine_Collider__get_bounds(&local_c0,local_88,0);
            lVar8 = lVar5;
            fVar15 = local_c0;
            fVar16 = fStack_bc;
            fVar17 = local_b8;
          }
        }
        uVar13 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
                           (param_4,lVar8);
        goto LAB_03661ffc;
      }
    }
    lVar8 = 0;
    param_5 = (long *)0x0;
  }
LAB_03661ffc:
  if (*(char *)(param_4 + 0x4d0) != '\0') {
    lVar5 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar5 == 0) goto LAB_03662278;
    fVar11 = (float)UnityEngine_Transform__get_position(lVar5,0);
    if (DAT_03ef141c == '\0') {
      FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
      DAT_03ef141c = '\x01';
    }
    if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    fVar11 = fVar14 * SQRT((param_3 - fVar17) * (param_3 - fVar17) +
                           (fVar11 - fVar15) * (fVar11 - fVar15) +
                           (param_2 - fVar16) * (param_2 - fVar16));
    fVar14 = fVar11;
    if (*(char *)(param_4 + 0x4d1) != '\0') {
      fVar12 = *(float *)(param_4 + 0x4d4);
      if (fVar11 <= *(float *)(param_4 + 0x4d4)) {
        fVar12 = fVar11;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar11) {
        fVar14 = fVar12;
      }
    }
  }
  if ((*(long *)(param_4 + 0x4c8) != 0) &&
     (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x4c8),0), lVar5 != 0)) {
    UnityEngine_Transform__set_position(fVar15,fVar16,fVar17,lVar5,0);
    UnityEngine_Transform__set_localScale(fVar14,fVar14,fVar14,lVar5,0);
    if (*(long *)(param_4 + 0x4c8) != 0) {
      plVar6 = *(long **)(*(long *)(param_4 + 0x4c8) + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_UnityEngine_SphereCollider_TypeInfo_03ce4978 + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_UnityEngine_SphereCollider_TypeInfo_03ce4978)) {
          bVar1 = *(byte *)(*(long *)PTR_UnityEngine_BoxCollider_TypeInfo_03ce49d8 + 0x130);
          if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_UnityEngine_BoxCollider_TypeInfo_03ce49d8)) {
            UnityEngine_BoxCollider__set_size(uVar13,uVar13,uVar13,plVar6,0);
          }
        }
        else {
          UnityEngine_SphereCollider__set_radius(uVar13,plVar6,0);
        }
      }
      if (*(long *)(param_4 + 0x4c8) != 0) {
        UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume__set_interactable
                  (*(long *)(param_4 + 0x4c8),param_5,0);
        if (*(long *)(param_4 + 0x4c8) != 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x4c8) + 0x40);
          *plVar6 = lVar8;
          thunk_FUN_01cc8040(plVar6,lVar8);
          return;
        }
      }
    }
  }
LAB_03662278:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


