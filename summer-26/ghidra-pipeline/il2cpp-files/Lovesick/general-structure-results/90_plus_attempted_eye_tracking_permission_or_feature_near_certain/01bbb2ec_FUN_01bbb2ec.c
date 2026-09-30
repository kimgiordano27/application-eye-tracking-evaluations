/*
FUNCTION_NAME: FUN_01bbb2ec
ENTRY_POINT: 01bbb2ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01bbb390) */

void FUN_01bbb2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                 long param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_84;
  float local_38;
  float local_34;
  
  if ((DAT_0377e761 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRLocatable_TrackingSpacePose>_Dispose__);
    thunk_FUN_00d48444(Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_0377e761 = 1;
  }
  puVar6 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar5 = Method_OVRObjectPool_ListScope<OVRLocatable_TrackingSpacePose>_Dispose__;
  if (param_4 < 0.0) {
    param_4 = 0.0;
  }
  fVar20 = (float)param_3;
  fVar14 = (float)param_2;
  fVar12 = (float)param_1;
  if (*(int *)(param_5 + 0x28) == 3) {
    lVar10 = *(long *)(param_5 + 0x18);
    lVar7 = FUN_00da4fb8(*(undefined8 *)
                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                         ,3);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    if (lVar7 == 0) goto LAB_01bbb958;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 == 0) {
LAB_01bbb954:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar2 = *(undefined4 *)
             (*(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8) + 1);
    *(undefined8 *)(lVar7 + 0x20) =
         **(undefined8 **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    *(undefined4 *)(lVar7 + 0x28) = uVar2;
    if (uVar1 == 1) goto LAB_01bbb954;
    *(float *)(lVar7 + 0x2c) = fVar12;
    *(float *)(lVar7 + 0x30) = fVar14;
    *(float *)(lVar7 + 0x34) = fVar20;
    if (uVar1 < 3) goto LAB_01bbb954;
    uVar2 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
    *(undefined8 *)(lVar7 + 0x38) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
    *(undefined4 *)(lVar7 + 0x40) = uVar2;
    if (lVar10 == 0) goto LAB_01bbb958;
    FUN_01323e24(lVar10,param_6 * 3 + 2,lVar7,*(undefined8 *)puVar5);
    FUN_01bbaee0(param_5,param_6 * 3 + 3);
  }
  else {
    FUN_01bbb95c(param_5,param_6);
    lVar7 = FUN_01bbba74(param_4);
    lVar11 = *(long *)(param_5 + 0x18);
    lVar10 = FUN_00da4fb8(*(undefined8 *)puVar6,3);
    if (lVar7 == 0) goto LAB_01bbb958;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01bbb954;
    lVar9 = *(long *)(lVar7 + 0x20);
    if (lVar9 == 0) goto LAB_01bbb958;
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_01bbb954;
    if (lVar10 == 0) goto LAB_01bbb958;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 == 0) goto LAB_01bbb954;
    uVar2 = *(undefined4 *)(lVar9 + 0x40);
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar9 + 0x38);
    *(undefined4 *)(lVar10 + 0x28) = uVar2;
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
    lVar9 = *(long *)(lVar7 + 0x28);
    if (lVar9 == 0) goto LAB_01bbb958;
    if ((*(int *)(lVar9 + 0x18) == 0) || (uVar1 < 2)) goto LAB_01bbb954;
    uVar2 = *(undefined4 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar10 + 0x2c) = *(undefined8 *)(lVar9 + 0x20);
    *(undefined4 *)(lVar10 + 0x34) = uVar2;
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
    lVar9 = *(long *)(lVar7 + 0x28);
    if (lVar9 == 0) goto LAB_01bbb958;
    if ((*(uint *)(lVar9 + 0x18) < 2) || (uVar1 < 3)) goto LAB_01bbb954;
    uVar2 = *(undefined4 *)(lVar9 + 0x34);
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar9 + 0x2c);
    *(undefined4 *)(lVar10 + 0x40) = uVar2;
    if (lVar11 == 0) goto LAB_01bbb958;
    iVar3 = param_6 * 3;
    FUN_01323e24(lVar11,iVar3 + 2,lVar10,*(undefined8 *)puVar5);
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01bbb954;
    lVar10 = *(long *)(lVar7 + 0x20);
    if (lVar10 == 0) goto LAB_01bbb958;
    if ((*(uint *)(lVar10 + 0x18) < 2) ||
       (FUN_01bbbd30(*(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                     *(undefined4 *)(lVar10 + 0x34),param_5,iVar3 + 1,1),
       *(uint *)(lVar7 + 0x18) < 2)) goto LAB_01bbb954;
    lVar10 = *(long *)(lVar7 + 0x28);
    if (lVar10 == 0) goto LAB_01bbb958;
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_01bbb954;
    FUN_01bbbd30(*(undefined4 *)(lVar10 + 0x38),*(undefined4 *)(lVar10 + 0x3c),
                 *(undefined4 *)(lVar10 + 0x40),param_5,iVar3 + 5,1);
    FUN_01bbbd30(param_1,param_2,param_3,param_5,iVar3 + 3,1);
    if (*(int *)(param_5 + 0x28) == 1) {
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01bbb954;
      lVar10 = *(long *)(lVar7 + 0x20);
      if (lVar10 == 0) goto LAB_01bbb958;
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_01bbb954;
      fVar21 = *(float *)(lVar10 + 0x38);
      fVar19 = *(float *)(lVar10 + 0x3c);
      fVar22 = *(float *)(lVar10 + 0x40);
      if (DAT_03774e1b == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03774e1b = '\x01';
      }
      puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
      lVar10 = *(long *)(lVar7 + 0x28);
      if (lVar10 == 0) goto LAB_01bbb958;
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_01bbb954;
      fVar15 = *(float *)(lVar10 + 0x2c);
      fVar23 = *(float *)(lVar10 + 0x30);
      fVar17 = *(float *)(lVar10 + 0x34);
      if (DAT_03774e1b == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03774e1b = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 == 0) goto LAB_01bbb958;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
      fVar21 = fVar21 - fVar12;
      fVar19 = fVar19 - fVar14;
      fVar15 = fVar15 - fVar12;
      fVar23 = fVar23 - fVar14;
      fVar22 = fVar22 - fVar20;
      fVar17 = fVar17 - fVar20;
      fVar16 = *(float *)(lVar7 + 0x2c);
      fVar18 = *(float *)(lVar7 + 0x30);
      fVar24 = *(float *)(lVar7 + 0x34);
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      fVar16 = fVar16 - fVar12;
      fVar18 = fVar18 - fVar14;
      fVar24 = fVar24 - fVar20;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar13 = SQRT(fVar24 * fVar24 + fVar16 * fVar16 + fVar18 * fVar18);
      fVar21 = (SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar22 * fVar22) +
               SQRT(fVar15 * fVar15 + fVar23 * fVar23 + fVar17 * fVar17)) * 0.5;
      if (fVar13 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar8 = *(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        fVar16 = *pfVar8;
        fVar18 = pfVar8[1];
        fVar24 = pfVar8[2];
      }
      else {
        fVar18 = fVar18 / fVar13;
        fVar16 = fVar16 / fVar13;
        fVar24 = fVar24 / fVar13;
      }
      FUN_01bbbd30(fVar12 + fVar21 * fVar16,fVar14 + fVar21 * fVar18,fVar20 + fVar21 * fVar24,
                   param_5,iVar3 + 4,1);
    }
  }
  puVar5 = OVREyeGaze_TypeInfo;
  lVar7 = *(long *)(param_5 + 0x50);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x18);
    FUN_0132138c(lVar7,param_6,&local_34,*(undefined8 *)OVREyeGaze_TypeInfo);
    if (*(long *)(param_5 + 0x50) != 0) {
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (param_6 + 1) / iVar3;
      }
      iVar3 = (param_6 + 1) - iVar4 * iVar3;
      FUN_0132138c(*(long *)(param_5 + 0x50),iVar3,&local_38,*(undefined8 *)puVar5);
      fVar12 = (local_38 - local_34) - (float)(int)((local_38 - local_34) / 360.0) * 360.0;
      fVar14 = fVar12;
      if (360.0 < fVar12) {
        fVar14 = 360.0;
      }
      if (fVar12 < 0.0) {
        fVar14 = 0.0;
      }
      if (*(long *)(param_5 + 0x50) != 0) {
        fVar12 = fVar14 + -360.0;
        if (fVar14 <= 180.0) {
          fVar12 = fVar14;
        }
        local_84 = local_34 + param_4 * fVar12;
        FUN_01323a14(*(long *)(param_5 + 0x50),iVar3,&local_84,
                     *(undefined8 *)Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
        lVar7 = *(long *)(param_5 + 0x10);
        *(undefined1 *)(param_5 + 0x30) = 0;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        return;
      }
    }
  }
LAB_01bbb958:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


