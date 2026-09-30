/*
FUNCTION_NAME: FUN_01bb9b8c
ENTRY_POINT: 01bb9b8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 120
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01bb9b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_80;
  float fStack_7c;
  float local_78;
  
  if ((DAT_0377e75f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_0377e75f = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
  if (*(char *)(param_4 + 0x20) != '\0') {
    return;
  }
  lVar7 = *(long *)(param_4 + 0x18);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    iVar2 = iVar1 + -1;
    FUN_0132138c(lVar7,iVar2,&local_80,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    fVar13 = local_78;
    fVar12 = fStack_7c;
    fVar10 = local_80;
    if (*(long *)(param_4 + 0x18) != 0) {
      iVar1 = iVar1 + -2;
      FUN_0132138c(*(long *)(param_4 + 0x18),iVar1,&local_80,*(undefined8 *)puVar4);
      if ((*(uint *)(param_4 + 0x28) | 2) == 3) {
        fVar10 = fVar10 - local_80;
        fVar12 = fVar12 - fStack_7c;
        fVar13 = fVar13 - local_78;
      }
      else {
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01bb9f54;
        FUN_0132138c(*(long *)(param_4 + 0x18),iVar2,&local_80,*(undefined8 *)puVar4);
        fVar13 = local_78;
        fVar12 = fStack_7c;
        fVar10 = local_80;
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1b = '\x01';
        }
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01bb9f54;
        FUN_0132138c(*(long *)(param_4 + 0x18),iVar2,&local_80,*(undefined8 *)puVar4);
        fVar11 = local_78;
        fVar15 = fStack_7c;
        fVar14 = local_80;
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01bb9f54;
        fVar13 = fVar13 - (float)param_3;
        fVar10 = fVar10 - (float)param_1;
        fVar12 = fVar12 - (float)param_2;
        FUN_0132138c(*(long *)(param_4 + 0x18),iVar1,&local_80,*(undefined8 *)puVar4);
        fVar6 = local_78;
        fVar5 = fStack_7c;
        fVar9 = local_80;
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar14 = fVar14 - fVar9;
        fVar15 = fVar15 - fVar5;
        fVar11 = fVar11 - fVar6;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar9 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar15 * fVar15);
        fVar13 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13);
        if (fVar9 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          uVar8 = **(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fVar11 = *(float *)(*(undefined8 **)
                               (*(long *)
                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                               + 0xb8) + 1);
        }
        else {
          uVar8 = CONCAT44(fVar15 / fVar9,fVar14 / fVar9);
          fVar11 = fVar11 / fVar9;
        }
        fVar10 = (float)uVar8 * fVar13 * 0.5;
        fVar12 = (float)((ulong)uVar8 >> 0x20) * fVar13 * 0.5;
        fVar13 = fVar13 * fVar11 * 0.5;
      }
      if (*(long *)(param_4 + 0x18) != 0) {
        FUN_0132138c(*(long *)(param_4 + 0x18),iVar2,&local_80,*(undefined8 *)puVar4);
        puVar4 = StringLiteral_1006;
        if (*(long *)(param_4 + 0x18) != 0) {
          fVar10 = fVar10 + local_80;
          fVar12 = fVar12 + fStack_7c;
          FUN_00ac4f98(CONCAT44(fVar12,fVar10),fVar12,fVar13 + local_78,*(long *)(param_4 + 0x18),
                       *(undefined8 *)StringLiteral_1006);
          if (*(long *)(param_4 + 0x18) != 0) {
            fVar12 = ((float)param_2 + fVar12) * 0.5;
            FUN_00ac4f98(CONCAT44(fVar12,((float)param_1 + fVar10) * 0.5),fVar12,
                         ((float)param_3 + fVar13 + local_78) * 0.5,*(long *)(param_4 + 0x18),
                         *(undefined8 *)puVar4);
            if (*(long *)(param_4 + 0x18) != 0) {
              FUN_00ac4f98(param_1,param_2,param_3,*(long *)(param_4 + 0x18),*(undefined8 *)puVar4);
              puVar4 = Method_System_Numerics_Vector<ushort>_get_Zero__;
              lVar7 = *(long *)(param_4 + 0x50);
              if (lVar7 != 0) {
                FUN_0132138c(lVar7,*(int *)(lVar7 + 0x18) + -1,&local_80,
                             *(undefined8 *)OVREyeGaze_TypeInfo);
                FUN_00ac1d04(local_80,lVar7,*(undefined8 *)puVar4);
                if (*(int *)(param_4 + 0x28) == 3) {
                  if (*(long *)(param_4 + 0x18) == 0) goto LAB_01bb9f54;
                  FUN_01bbaee0(param_4,*(int *)(*(long *)(param_4 + 0x18) + 0x18) + -1);
                }
                lVar7 = *(long *)(param_4 + 0x10);
                *(undefined1 *)(param_4 + 0x30) = 0;
                if (lVar7 == 0) {
                  return;
                }
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01bb9f54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


