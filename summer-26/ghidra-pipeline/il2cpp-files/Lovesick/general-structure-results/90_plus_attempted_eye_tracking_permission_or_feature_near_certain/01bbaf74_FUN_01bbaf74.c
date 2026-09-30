/*
FUNCTION_NAME: FUN_01bbaf74
ENTRY_POINT: 01bbaf74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 120
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01bbaf74(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  float local_78;
  
  if ((DAT_0377e760 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
    thunk_FUN_00d48444(StringLiteral_13022);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_0377e760 = 1;
  }
  puVar2 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
  if (*(char *)(param_4 + 0x20) != '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x18) != 0) {
    FUN_0132138c(*(long *)(param_4 + 0x18),0,&local_80,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    fVar9 = local_78;
    uVar6 = local_80;
    if (*(long *)(param_4 + 0x18) != 0) {
      FUN_0132138c(*(long *)(param_4 + 0x18),1,&local_80,*(undefined8 *)puVar2);
      fVar10 = (float)uVar6 - (float)local_80;
      fVar11 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)local_80 >> 0x20);
      fVar9 = fVar9 - local_78;
      if ((*(uint *)(param_4 + 0x28) | 2) != 3) {
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_01bbb2e8;
        FUN_0132138c(*(long *)(param_4 + 0x18),0,&local_80,*(undefined8 *)puVar2);
        fVar4 = local_78;
        fVar8 = (float)local_80;
        fVar3 = local_80._4_4_;
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1b = '\x01';
        }
        puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar7 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
        fVar8 = SQRT((fVar8 - param_1) * (fVar8 - param_1) + (fVar3 - param_2) * (fVar3 - param_2) +
                     (fVar4 - param_3) * (fVar4 - param_3));
        if (fVar7 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          uVar6 = **(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fVar9 = *(float *)(*(undefined8 **)
                              (*(long *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              + 0xb8) + 1);
        }
        else {
          uVar6 = CONCAT44(fVar11 / fVar7,fVar10 / fVar7);
          fVar9 = fVar9 / fVar7;
        }
        fVar10 = (float)uVar6 * fVar8 * 0.5;
        fVar11 = (float)((ulong)uVar6 >> 0x20) * fVar8 * 0.5;
        fVar9 = fVar8 * fVar9 * 0.5;
      }
      if (*(long *)(param_4 + 0x18) != 0) {
        FUN_0132138c(*(long *)(param_4 + 0x18),0,&local_80,*(undefined8 *)puVar2);
        fVar8 = local_78;
        uVar6 = local_80;
        puVar2 = StringLiteral_13022;
        if (*(long *)(param_4 + 0x18) != 0) {
          local_80 = CONCAT44(param_2,param_1);
          local_78 = param_3;
          FUN_01323a14(*(long *)(param_4 + 0x18),0,&local_80,*(undefined8 *)StringLiteral_13022);
          if (*(long *)(param_4 + 0x18) != 0) {
            fVar10 = fVar10 + (float)uVar6;
            fVar11 = fVar11 + (float)((ulong)uVar6 >> 0x20);
            local_80 = CONCAT44((param_2 + fVar11) * 0.5,(param_1 + fVar10) * 0.5);
            local_78 = (param_3 + fVar9 + fVar8) * 0.5;
            FUN_01323a14(*(long *)(param_4 + 0x18),1,&local_80,*(undefined8 *)puVar2);
            if (*(long *)(param_4 + 0x18) != 0) {
              local_80 = CONCAT44(fVar11,fVar10);
              local_78 = fVar9 + fVar8;
              FUN_01323a14(*(long *)(param_4 + 0x18),2,&local_80,*(undefined8 *)puVar2);
              puVar2 = Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__;
              lVar5 = *(long *)(param_4 + 0x50);
              if (lVar5 != 0) {
                FUN_0132138c(lVar5,0,&local_80,*(undefined8 *)OVREyeGaze_TypeInfo);
                FUN_01323a14(lVar5,0,&local_80,*(undefined8 *)puVar2);
                if (*(int *)(param_4 + 0x28) == 3) {
                  FUN_01bbaee0(param_4,0);
                }
                lVar5 = *(long *)(param_4 + 0x10);
                *(undefined1 *)(param_4 + 0x30) = 0;
                if (lVar5 == 0) {
                  return;
                }
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01bbb2e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


