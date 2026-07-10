/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance.InteractorData$$UpdateFallbackState
ENTRY_POINT: 0369350c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;repeated_pose_getters;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;functionality_gaze_interaction_hits_2
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_InteractorData__UpdateFallbackState
          (float param_1,float param_2,float param_3,long param_4,long param_5,ulong param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [8];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 local_b0 [8];
  float local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  
  if ((DAT_03ef6e35 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo_03cb6040
                );
    DAT_03ef6e35 = 1;
  }
  local_88 = 0.0;
  local_90 = 0;
  if (*(char *)(param_4 + 0x1a) != '\0') {
    if ((param_6 & 1) == 0) {
      if (param_5 == 0) goto LAB_03693bd0;
      fVar17 = (float)UnityEngine_Transform__get_forward(param_5,0);
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_03693bd0;
      fVar20 = param_2;
      fVar21 = param_3;
      fVar18 = (float)UnityEngine_Transform__get_forward(*(long *)(param_4 + 0x48),0);
      if (DAT_03ef5443 == '\0') {
        FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
        DAT_03ef5443 = '\x01';
      }
      puVar2 = PTR_System_Math_TypeInfo_03cb5ea0;
      if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar19 = SQRT((param_3 * param_3 + fVar17 * fVar17 + param_2 * param_2) *
                    (fVar21 * fVar21 + fVar18 * fVar18 + fVar20 * fVar20));
      fVar24 = 0.0;
      fVar25 = DAT_00b45dac;
      if (DAT_00b45dac <= fVar19) {
        fVar25 = -1.0;
        fVar19 = (param_3 * fVar21 + fVar17 * fVar18 + param_2 * fVar20) / fVar19;
        fVar17 = 1.0;
        if (fVar19 <= 1.0) {
          fVar17 = fVar19;
        }
        fVar20 = -1.0;
        if (-1.0 <= fVar19) {
          fVar20 = fVar17;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          fVar25 = -1.0;
          thunk_FUN_01cb0d4c();
        }
        dVar23 = acos((double)fVar20);
        fVar24 = (float)dVar23 * DAT_00b45f84;
      }
      param_3 = fVar25;
      param_2 = fVar24;
      bVar16 = param_1 < param_2;
    }
    else {
      bVar16 = false;
    }
    puVar2 = 
    PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo_03cb6040;
    plVar14 = *(long **)(param_4 + 0x28);
    if (plVar14 == (long *)0x0) goto LAB_03693bd0;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)
             PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo_03cb6040
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
          goto LAB_03693704;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01c8cb54(plVar14,*(long *)
                                   PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_TypeInfo_03cb6040
                          ,5);
LAB_03693704:
    uVar12 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    cVar9 = *(char *)(param_4 + 0x19);
    if ((uVar12 & 1) == 0) {
      if (bVar16 == false) {
        if (cVar9 != '\0') {
          if (*(char *)(param_4 + 0x40) != '\0') {
            lVar10 = *(long *)(param_4 + 0x38);
            if (lVar10 == 0) goto LAB_03693bd0;
            uVar1 = *(undefined1 *)(param_4 + 0x60);
            *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(param_4 + 0x58);
            *(undefined1 *)(lVar10 + 0x98) = uVar1;
            thunk_FUN_01cc8040();
          }
          puVar3 = 
          PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588;
          plVar14 = *(long **)(param_4 + 0x20);
          if (plVar14 == (long *)0x0) goto LAB_03693bd0;
          lVar10 = *plVar14;
          uVar15 = *(undefined8 *)(param_4 + 0x48);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)
                   PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
                 ) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_03693848;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01c8cb54(plVar14,*(long *)
                                         PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
                                ,2);
LAB_03693848:
          (*(code *)*puVar8)(plVar14,uVar15,puVar8[1]);
          plVar14 = *(long **)(param_4 + 0x20);
          if (plVar14 == (long *)0x0) goto LAB_03693bd0;
          lVar10 = *plVar14;
          uVar15 = *(undefined8 *)(param_4 + 0x50);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_036938b4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01c8cb54(plVar14,*(long *)puVar3,3);
LAB_036938b4:
          (*(code *)*puVar8)(plVar14,uVar15,puVar8[1]);
          if (*(char *)(param_4 + 0x18) == '\0') {
            *(undefined1 *)(param_4 + 0x30) = 1;
          }
        }
      }
      else if (cVar9 == '\0') {
        if (*(char *)(param_4 + 0x40) != '\0') {
          lVar10 = *(long *)(param_4 + 0x38);
          if (lVar10 == 0) goto LAB_03693bd0;
          uVar1 = *(undefined1 *)(lVar10 + 0x98);
          *(undefined8 *)(param_4 + 0x58) = *(undefined8 *)(lVar10 + 0xa0);
          *(undefined1 *)(param_4 + 0x60) = uVar1;
          thunk_FUN_01cc8040((undefined8 *)(param_4 + 0x58));
          lVar10 = *(long *)(param_4 + 0x38);
          if (lVar10 == 0) goto LAB_03693bd0;
          *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(param_4 + 0x78);
          *(undefined1 *)(lVar10 + 0x98) = 1;
          thunk_FUN_01cc8040();
        }
        puVar3 = PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
        ;
        plVar14 = *(long **)(param_4 + 0x20);
        if (plVar14 == (long *)0x0) goto LAB_03693bd0;
        lVar10 = *plVar14;
        uVar15 = *(undefined8 *)(param_4 + 0x68);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
               ) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_036938e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01c8cb54(plVar14,*(long *)
                                       PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_TypeInfo_03ce2588
                              ,2);
LAB_036938e8:
        (*(code *)*puVar8)(plVar14,uVar15,puVar8[1]);
        plVar14 = *(long **)(param_4 + 0x20);
        if (plVar14 == (long *)0x0) goto LAB_03693bd0;
        lVar10 = *plVar14;
        uVar15 = *(undefined8 *)(param_4 + 0x70);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_03693954;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01c8cb54(plVar14,*(long *)puVar3,3);
LAB_03693954:
        (*(code *)*puVar8)(plVar14,uVar15,puVar8[1]);
      }
      *(bool *)(param_4 + 0x19) = bVar16;
      cVar9 = bVar16;
    }
    if (cVar9 == '\0') {
      return 0;
    }
    Unity_XR_CoreUtils_TransformExtensions__GetWorldPose(local_b0,param_5,0);
    uVar7 = local_98;
    uVar6 = uStack_9c;
    uVar5 = local_a0;
    uVar22 = uStack_a4;
    fVar17 = local_a8;
    auVar4 = local_b0;
    if (*(char *)(param_4 + 0x18) == '\0') {
      plVar14 = *(long **)(param_4 + 0x28);
      if (plVar14 == (long *)0x0) goto LAB_03693bd0;
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      lVar10 = *(long *)puVar2;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_036939f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c8cb54(plVar14,lVar10,5);
LAB_036939f0:
      uVar12 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      if ((uVar12 & 1) != 0) {
        plVar14 = *(long **)(param_4 + 0x28);
        if (plVar14 == (long *)0x0) goto LAB_03693bd0;
        lVar11 = *plVar14;
        lVar10 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_03693a58;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01c8cb54(plVar14,lVar10,4);
LAB_03693a58:
        uVar12 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_4 + 0x70) != 0) {
            fVar20 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x70),0);
            local_88 = param_3 - fVar17;
            fVar18 = auVar4._0_4_;
            fVar24 = auVar4._4_4_;
            local_90 = CONCAT44(param_2 - fVar24,fVar20 - fVar18);
            fVar21 = (float)FUN_036a7a78(&local_90,0);
            fVar21 = fVar21 + fVar21;
            fVar20 = 1.0;
            if (fVar21 <= 1.0) {
              fVar20 = fVar21;
            }
            fVar25 = 0.0;
            if (0.0 <= fVar21) {
              fVar25 = fVar20;
            }
            Unity_XR_CoreUtils_TransformExtensions__GetWorldPose
                      (local_b0,*(undefined8 *)(param_4 + 0x48),0);
            lVar10 = *(long *)(param_4 + 0x68);
            uVar22 = UnityEngine_Quaternion__Lerp
                               (uStack_a4,local_a0,uStack_9c,local_98,uVar22,uVar5,uVar6,uVar7,0);
            if (lVar10 != 0) {
              fVar20 = 0.0;
              if (0.0 <= fVar25) {
                fVar20 = fVar25;
              }
              fVar21 = local_b0._4_4_ + (fVar24 - local_b0._4_4_) * fVar20;
              UnityEngine_Transform__SetPositionAndRotation
                        (CONCAT44(fVar21,local_b0._0_4_ + (fVar18 - local_b0._0_4_) * fVar20),fVar21
                         ,local_a8 + fVar20 * (fVar17 - local_a8),uVar22,local_a0,uStack_9c,local_98
                         ,lVar10,0);
              if (*(char *)(param_4 + 0x40) == '\0') {
                return 1;
              }
              if (*(long *)(param_4 + 0x38) != 0) {
                UnityEngine_Behaviour__set_enabled(*(long *)(param_4 + 0x38),1,0);
                return 1;
              }
            }
          }
          goto LAB_03693bd0;
        }
      }
    }
    if ((*(char *)(param_4 + 0x40) != '\0') && (*(char *)(param_4 + 0x18) == '\0')) {
      if (*(long *)(param_4 + 0x38) == 0) {
LAB_03693bd0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      UnityEngine_Behaviour__set_enabled(*(long *)(param_4 + 0x38),0,0);
    }
  }
  return 0;
}


