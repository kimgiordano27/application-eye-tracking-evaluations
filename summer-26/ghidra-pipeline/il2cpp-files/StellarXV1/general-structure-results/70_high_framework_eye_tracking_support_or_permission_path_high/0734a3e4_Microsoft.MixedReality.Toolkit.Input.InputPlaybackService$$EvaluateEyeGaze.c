/*
FUNCTION_NAME: Microsoft.MixedReality.Toolkit.Input.InputPlaybackService$$EvaluateEyeGaze
ENTRY_POINT: 0734a3e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Microsoft_MixedReality_Toolkit_Input_InputPlaybackService__EvaluateEyeGaze(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x21;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uStack000000000000000c;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xf70));
  FUN_04077588(PTR_DAT_092c6f78);
  FUN_04077588(PTR_DAT_092a63d0);
  FUN_04077588(PTR_DAT_092a63d8);
  FUN_04077588(PTR_DAT_09285978);
  *(undefined1 *)(unaff_x21 + 0xfde) = 1;
  uStack000000000000000c = 0;
  uVar6 = FUN_0734a218();
  puVar5 = PTR_DAT_092c6f78;
  puVar4 = PTR_DAT_092b9940;
  puVar3 = PTR_DAT_092a63d8;
  puVar2 = PTR_DAT_092a63d0;
  puVar1 = PTR_DAT_09285978;
  if ((uVar6 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x58);
    if (lVar10 != 0) {
      uVar8 = FUN_072d58a8();
      FUN_0678cfe4(lVar10,uVar8,*(undefined8 *)PTR_DAT_092b9940);
    }
LAB_0734a62c:
    puVar1 = PTR_DAT_092858a0;
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
    FUN_05c26520(lVar10,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_092858c0;
    lVar11 = *(long *)(unaff_x19 + 0x40);
    if (lVar11 != 0) {
      uVar16 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar16) {
        uVar15 = 0;
        do {
          if (uVar16 <= uVar15) {
LAB_0734a7b0:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar14 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
          if (((lVar14 == 0) || (plVar7 = (long *)FUN_0734a7b4(lVar14), plVar7 == (long *)0x0)) ||
             (uVar8 = (**(code **)(*plVar7 + 0x178))(), lVar10 == 0)) goto LAB_0734a5fc;
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar1;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0734a5fc;
          uVar16 = *(uint *)(lVar10 + 0x18);
          if (uVar16 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar16 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar16 * 8 + 0x20) = uVar8;
            thunk_FUN_040ec700();
          }
          else {
            FUN_05c26d88(lVar10,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = FUN_0734a870(lVar14);
          if (lVar12 != 0) {
            uVar6 = FUN_0734a954();
            if ((uVar6 & 1) != 0) {
              plVar7 = (long *)FUN_0734a870(0,lVar14);
              if (plVar7 == (long *)0x0) goto LAB_0734a5fc;
              (**(code **)(*plVar7 + 0x198))();
            }
            FUN_07349384(*(undefined8 *)(lVar14 + 0x48),*(undefined1 *)(lVar14 + 0x40));
          }
          uVar16 = *(uint *)(lVar11 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
      if (lVar10 != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x50);
        uVar8 = FUN_05c287cc(lVar10,*(undefined8 *)PTR_DAT_09287ab0);
        if (lVar11 != 0) {
          FUN_0678cfe4(lVar11,uVar8,*(undefined8 *)PTR_DAT_092c6f70);
          return;
        }
      }
    }
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x48);
    if (lVar10 != 0) {
      uVar16 = 0;
LAB_0734a46c:
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar16) goto LAB_0734a62c;
      if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0734a7b0;
      lVar10 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar10 != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x40);
        lVar14 = *(long *)(lVar10 + 0x10);
        uStack000000000000000c = 0;
        do {
          if (lVar11 == 0) break;
          if ((int)*(uint *)(lVar11 + 0x18) <= (int)uStack000000000000000c) goto LAB_0734a5cc;
          if (*(uint *)(lVar11 + 0x18) <= uStack000000000000000c) goto LAB_0734a7b0;
          if ((*(long *)(lVar11 + (long)(int)uStack000000000000000c * 8 + 0x20) == 0) ||
             (plVar7 = (long *)FUN_0734a7b4(), plVar7 == (long *)0x0)) break;
          uVar8 = (**(code **)(*plVar7 + 0x178))();
          uVar6 = FUN_074e5d94(*(undefined8 *)(lVar10 + 0x10),0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_074e5d94(uVar8,0);
            if ((uVar6 & 1) == 0) {
              lVar11 = *(long *)puVar5;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar11 = *(long *)puVar5;
              }
              if (**(long **)(lVar11 + 0xb8) == 0) break;
              lVar11 = FUN_08000f04(**(long **)(lVar11 + 0xb8),lVar14,uVar8,1,0);
              uVar9 = FUN_07676bc4(&stack0x0000000c,0);
              uVar9 = FUN_074e691c(*(undefined8 *)puVar2,uVar9,*(undefined8 *)puVar3,0);
              if (lVar11 == 0) break;
              lVar14 = FUN_074e89d8(lVar11,uVar9,uVar8,0);
            }
            else {
              uVar8 = FUN_07676bc4(&stack0x0000000c,0);
              uVar8 = FUN_074e691c(*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar3,0);
              if (lVar14 == 0) break;
              uVar6 = FUN_074eb21c(lVar14,uVar8,0);
              if ((uVar6 & 1) != 0) goto LAB_0734a5c8;
            }
          }
          lVar11 = *(long *)(unaff_x19 + 0x40);
          uStack000000000000000c = uStack000000000000000c + 1;
        } while( true );
      }
    }
  }
LAB_0734a5fc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0734a5c8:
  lVar14 = *(long *)puVar1;
LAB_0734a5cc:
  uVar6 = FUN_074e5d94(lVar14,0);
  if (((uVar6 & 1) == 0) && (*(long *)(lVar10 + 0x18) != 0)) {
    FUN_0678cfe4(*(long *)(lVar10 + 0x18),lVar14,*(undefined8 *)puVar4);
  }
  lVar10 = *(long *)(unaff_x19 + 0x48);
  uVar16 = uVar16 + 1;
  if (lVar10 == 0) goto LAB_0734a5fc;
  goto LAB_0734a46c;
}


