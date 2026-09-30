/*
FUNCTION_NAME: System.Linq.Expressions.ParameterExpression$$get_NodeType
ENTRY_POINT: 01bbb4a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_ParameterExpression__get_NodeType(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint in_w8;
  float *pfVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (in_w8 < 3) goto LAB_01bbb954;
  if (param_1 == 0) goto LAB_01bbb958;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar2 = *(undefined4 *)(in_x9 + 0x40);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(in_x9 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    if (1 < *(uint *)(unaff_x21 + 0x18)) {
      lVar7 = *(long *)(unaff_x21 + 0x28);
      if (lVar7 == 0) goto LAB_01bbb958;
      if ((*(int *)(lVar7 + 0x18) != 0) && (1 < uVar1)) {
        uVar2 = *(undefined4 *)(lVar7 + 0x28);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(lVar7 + 0x20);
        *(undefined4 *)(param_1 + 0x34) = uVar2;
        if (1 < *(uint *)(unaff_x21 + 0x18)) {
          lVar7 = *(long *)(unaff_x21 + 0x28);
          if (lVar7 != 0) {
            if ((*(uint *)(lVar7 + 0x18) < 2) || (uVar1 < 3)) goto LAB_01bbb954;
            uVar2 = *(undefined4 *)(lVar7 + 0x34);
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar7 + 0x2c);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
            if (unaff_x22 == 0) goto LAB_01bbb958;
            FUN_01323e24();
            if (*(int *)(unaff_x21 + 0x18) == 0) goto LAB_01bbb954;
            lVar7 = *(long *)(unaff_x21 + 0x20);
            if (lVar7 == 0) goto LAB_01bbb958;
            if ((*(uint *)(lVar7 + 0x18) < 2) ||
               (FUN_01bbbd30(*(undefined4 *)(lVar7 + 0x2c),*(undefined4 *)(lVar7 + 0x30),
                             *(undefined4 *)(lVar7 + 0x34)), *(uint *)(unaff_x21 + 0x18) < 2))
            goto LAB_01bbb954;
            lVar7 = *(long *)(unaff_x21 + 0x28);
            if (lVar7 == 0) goto LAB_01bbb958;
            if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_01bbb954;
            FUN_01bbbd30(*(undefined4 *)(lVar7 + 0x38),*(undefined4 *)(lVar7 + 0x3c),
                         *(undefined4 *)(lVar7 + 0x40));
            FUN_01bbbd30();
            if (*(int *)(unaff_x19 + 0x28) == 1) {
              if (*(int *)(unaff_x21 + 0x18) == 0) goto LAB_01bbb954;
              lVar7 = *(long *)(unaff_x21 + 0x20);
              if (lVar7 == 0) goto LAB_01bbb958;
              if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_01bbb954;
              fVar14 = *(float *)(lVar7 + 0x38);
              fVar13 = *(float *)(lVar7 + 0x3c);
              fVar15 = *(float *)(lVar7 + 0x40);
              if (DAT_03774e1b == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03774e1b = '\x01';
              }
              puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_01bbb954;
              lVar7 = *(long *)(unaff_x21 + 0x28);
              if (lVar7 == 0) goto LAB_01bbb958;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
              fVar9 = *(float *)(lVar7 + 0x2c);
              fVar16 = *(float *)(lVar7 + 0x30);
              fVar11 = *(float *)(lVar7 + 0x34);
              if (DAT_03774e1b == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03774e1b = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_01bbb954;
              lVar7 = *(long *)(unaff_x21 + 0x28);
              if (lVar7 == 0) goto LAB_01bbb958;
              if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01bbb954;
              fVar14 = fVar14 - unaff_s11;
              fVar13 = fVar13 - unaff_s10;
              fVar9 = fVar9 - unaff_s11;
              fVar16 = fVar16 - unaff_s10;
              fVar15 = fVar15 - unaff_s12;
              fVar11 = fVar11 - unaff_s12;
              fVar10 = *(float *)(lVar7 + 0x2c);
              fVar12 = *(float *)(lVar7 + 0x30);
              fVar17 = *(float *)(lVar7 + 0x34);
              if (DAT_0377518c == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_0377518c = '\x01';
              }
              fVar10 = fVar10 - unaff_s11;
              fVar12 = fVar12 - unaff_s10;
              fVar17 = fVar17 - unaff_s12;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar8 = SQRT(fVar17 * fVar17 + fVar10 * fVar10 + fVar12 * fVar12);
              fVar14 = (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) +
                       SQRT(fVar9 * fVar9 + fVar16 * fVar16 + fVar11 * fVar11)) * 0.5;
              if (fVar8 <= DAT_028aa038) {
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                pfVar6 = *(float **)
                          (*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
                fVar10 = *pfVar6;
                fVar12 = pfVar6[1];
                fVar17 = pfVar6[2];
              }
              else {
                fVar12 = fVar12 / fVar8;
                fVar10 = fVar10 / fVar8;
                fVar17 = fVar17 / fVar8;
              }
              FUN_01bbbd30(unaff_s11 + fVar14 * fVar10,unaff_s10 + fVar14 * fVar12,
                           unaff_s12 + fVar14 * fVar17);
            }
            puVar5 = OVREyeGaze_TypeInfo;
            lVar7 = *(long *)(unaff_x19 + 0x50);
            if (lVar7 != 0) {
              iVar3 = *(int *)(lVar7 + 0x18);
              FUN_0132138c(lVar7,unaff_w20,(long)&stack0x00000058 + 4,
                           *(undefined8 *)OVREyeGaze_TypeInfo);
              if (*(long *)(unaff_x19 + 0x50) != 0) {
                iVar4 = 0;
                if (iVar3 != 0) {
                  iVar4 = (unaff_w20 + 1) / iVar3;
                }
                iVar3 = (unaff_w20 + 1) - iVar4 * iVar3;
                FUN_0132138c(*(long *)(unaff_x19 + 0x50),iVar3,&stack0x00000058,
                             *(undefined8 *)puVar5);
                fVar13 = (fStack0000000000000058 - fStack000000000000005c) -
                         (float)(int)((fStack0000000000000058 - fStack000000000000005c) / 360.0) *
                         360.0;
                fVar14 = fVar13;
                if (360.0 < fVar13) {
                  fVar14 = 360.0;
                }
                if (fVar13 < 0.0) {
                  fVar14 = 0.0;
                }
                if (*(long *)(unaff_x19 + 0x50) != 0) {
                  fVar13 = fVar14 + -360.0;
                  if (fVar14 <= 180.0) {
                    fVar13 = fVar14;
                  }
                  fStack000000000000000c = fStack000000000000005c + unaff_s13 * fVar13;
                  FUN_01323a14(*(long *)(unaff_x19 + 0x50),iVar3,&stack0x0000000c,
                               *(undefined8 *)
                                Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
                  lVar7 = *(long *)(unaff_x19 + 0x10);
                  *(undefined1 *)(unaff_x19 + 0x30) = 0;
                  if (lVar7 != 0) {
                    (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
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
    }
  }
LAB_01bbb954:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


