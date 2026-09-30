/*
FUNCTION_NAME: System.Linq.Expressions.TryExpression$$.ctor
ENTRY_POINT: 01bbb658
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_TryExpression___ctor(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar11;
  float fVar12;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (param_1 == 0) goto LAB_01bbb958;
  if (1 < *(uint *)(param_1 + 0x18)) {
    fVar7 = *(float *)(param_1 + 0x2c);
    fVar11 = *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x34);
    fStack0000000000000004 = unaff_s15;
    if (*(char *)(unaff_x24 + 0xe1b) == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      *(undefined1 *)(unaff_x24 + 0xe1b) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (1 < *(uint *)(unaff_x21 + 0x18)) {
      lVar4 = *(long *)(unaff_x21 + 0x28);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_01bbb954;
        fVar7 = fVar7 - unaff_s11;
        fVar11 = fVar11 - unaff_s10;
        fVar9 = fVar9 - unaff_s12;
        fVar8 = *(float *)(lVar4 + 0x2c);
        fVar10 = *(float *)(lVar4 + 0x30);
        fVar12 = *(float *)(lVar4 + 0x34);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar8 = fVar8 - unaff_s11;
        fVar10 = fVar10 - unaff_s10;
        fVar12 = fVar12 - unaff_s12;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar6 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar10 * fVar10);
        fVar7 = (SQRT((unaff_s14 - unaff_s11) * (unaff_s14 - unaff_s11) +
                      (unaff_s9 - unaff_s10) * (unaff_s9 - unaff_s10) +
                      (fStack0000000000000004 - unaff_s12) * (fStack0000000000000004 - unaff_s12)) +
                SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar9 * fVar9)) * 0.5;
        if (fVar6 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar5 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fVar8 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar12 = pfVar5[2];
        }
        else {
          fVar10 = fVar10 / fVar6;
          fVar8 = fVar8 / fVar6;
          fVar12 = fVar12 / fVar6;
        }
        FUN_01bbbd30(unaff_s11 + fVar7 * fVar8,unaff_s10 + fVar7 * fVar10,unaff_s12 + fVar7 * fVar12
                    );
        puVar3 = OVREyeGaze_TypeInfo;
        lVar4 = *(long *)(unaff_x19 + 0x50);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x18);
          FUN_0132138c(lVar4,unaff_w20,(long)&stack0x00000058 + 4,*(undefined8 *)OVREyeGaze_TypeInfo
                      );
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = (unaff_w20 + 1) / iVar1;
            }
            iVar1 = (unaff_w20 + 1) - iVar2 * iVar1;
            FUN_0132138c(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x00000058,*(undefined8 *)puVar3);
            fVar11 = (fStack0000000000000058 - fStack000000000000005c) -
                     (float)(int)((fStack0000000000000058 - fStack000000000000005c) / 360.0) * 360.0
            ;
            fVar7 = fVar11;
            if (360.0 < fVar11) {
              fVar7 = 360.0;
            }
            if (fVar11 < 0.0) {
              fVar7 = 0.0;
            }
            if (*(long *)(unaff_x19 + 0x50) != 0) {
              fVar11 = fVar7 + -360.0;
              if (fVar7 <= 180.0) {
                fVar11 = fVar7;
              }
              fStack000000000000000c = fStack000000000000005c + unaff_s13 * fVar11;
              FUN_01323a14(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x0000000c,
                           *(undefined8 *)
                            Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
              lVar4 = *(long *)(unaff_x19 + 0x10);
              *(undefined1 *)(unaff_x19 + 0x30) = 0;
              if (lVar4 != 0) {
                (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
              }
              return;
            }
          }
        }
      }
LAB_01bbb958:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01bbb954:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


