/*
FUNCTION_NAME: System.Linq.Expressions.SymbolDocumentInfo$$get_FileName
ENTRY_POINT: 01bbb5ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_10;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_SymbolDocumentInfo__get_FileName
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  FUN_01bbbd30(param_2,param_3,*(undefined4 *)(param_1 + 0x40));
  FUN_01bbbd30();
  if (*(int *)(unaff_x19 + 0x28) == 1) {
    if (*(int *)(unaff_x21 + 0x18) == 0) goto LAB_01bbb954;
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if (lVar4 == 0) goto LAB_01bbb958;
    if (*(uint *)(lVar4 + 0x18) < 3) {
LAB_01bbb954:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    fVar12 = *(float *)(lVar4 + 0x38);
    fVar11 = *(float *)(lVar4 + 0x3c);
    fVar13 = *(float *)(lVar4 + 0x40);
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_01bbb954;
    lVar4 = *(long *)(unaff_x21 + 0x28);
    if (lVar4 == 0) goto LAB_01bbb958;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_01bbb954;
    fVar7 = *(float *)(lVar4 + 0x2c);
    fVar14 = *(float *)(lVar4 + 0x30);
    fVar9 = *(float *)(lVar4 + 0x34);
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(unaff_x21 + 0x18) < 2) goto LAB_01bbb954;
    lVar4 = *(long *)(unaff_x21 + 0x28);
    if (lVar4 == 0) goto LAB_01bbb958;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_01bbb954;
    fVar12 = fVar12 - unaff_s11;
    fVar11 = fVar11 - unaff_s10;
    fVar7 = fVar7 - unaff_s11;
    fVar14 = fVar14 - unaff_s10;
    fVar13 = fVar13 - unaff_s12;
    fVar9 = fVar9 - unaff_s12;
    fVar8 = *(float *)(lVar4 + 0x2c);
    fVar10 = *(float *)(lVar4 + 0x30);
    fVar15 = *(float *)(lVar4 + 0x34);
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    fVar8 = fVar8 - unaff_s11;
    fVar10 = fVar10 - unaff_s10;
    fVar15 = fVar15 - unaff_s12;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar6 = SQRT(fVar15 * fVar15 + fVar8 * fVar8 + fVar10 * fVar10);
    fVar12 = (SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13) +
             SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar9 * fVar9)) * 0.5;
    if (fVar6 <= DAT_028aa038) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar5 = *(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8);
      fVar8 = *pfVar5;
      fVar10 = pfVar5[1];
      fVar15 = pfVar5[2];
    }
    else {
      fVar10 = fVar10 / fVar6;
      fVar8 = fVar8 / fVar6;
      fVar15 = fVar15 / fVar6;
    }
    FUN_01bbbd30(unaff_s11 + fVar12 * fVar8,unaff_s10 + fVar12 * fVar10,unaff_s12 + fVar12 * fVar15)
    ;
  }
  puVar3 = OVREyeGaze_TypeInfo;
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    FUN_0132138c(lVar4,unaff_w20,(long)&stack0x00000058 + 4,*(undefined8 *)OVREyeGaze_TypeInfo);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (unaff_w20 + 1) / iVar1;
      }
      iVar1 = (unaff_w20 + 1) - iVar2 * iVar1;
      FUN_0132138c(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x00000058,*(undefined8 *)puVar3);
      fVar11 = (fStack0000000000000058 - fStack000000000000005c) -
               (float)(int)((fStack0000000000000058 - fStack000000000000005c) / 360.0) * 360.0;
      fVar12 = fVar11;
      if (360.0 < fVar11) {
        fVar12 = 360.0;
      }
      if (fVar11 < 0.0) {
        fVar12 = 0.0;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar11 = fVar12 + -360.0;
        if (fVar12 <= 180.0) {
          fVar11 = fVar12;
        }
        fStack000000000000000c = fStack000000000000005c + unaff_s13 * fVar11;
        FUN_01323a14(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x0000000c,
                     *(undefined8 *)Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
        lVar4 = *(long *)(unaff_x19 + 0x10);
        *(undefined1 *)(unaff_x19 + 0x30) = 0;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        return;
      }
    }
  }
LAB_01bbb958:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


