/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartQueryByLocalGroupDelegate$$EndInvoke
ENTRY_POINT: 07714f50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate__EndInvoke(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  int iVar3;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x21 + 0x19f) = 1;
  fStack0000000000000038 = 0.0;
  fStack000000000000003c = 0.0;
  in_stack_00000040 = 0.0;
  fStack0000000000000044 = 0.0;
  in_stack_00000048 = 0.0;
  fStack000000000000004c = 0.0;
  if (unaff_x20 != 0) {
    uVar1 = FUN_05badb74();
    uVar2 = FUN_0775fc9c(uVar1,&stack0x00000038,0);
    if ((uVar2 & 1) == 0) {
LAB_077150cc:
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30a70,0);
    }
    else {
      fVar14 = fStack000000000000004c;
      fStack0000000000000024 = fStack000000000000003c;
      fStack000000000000002c = fStack0000000000000044;
      if (1 < *(int *)(unaff_x20 + 0x18)) {
        iVar3 = 1;
        fVar7 = in_stack_00000040;
        fVar15 = fStack0000000000000038;
        fVar10 = fStack000000000000003c;
        fVar9 = fStack0000000000000044;
        fVar12 = in_stack_00000048;
        do {
          uVar1 = FUN_05badb74();
          uVar2 = FUN_0775fc9c(uVar1,&stack0x00000038,0);
          if ((uVar2 & 1) == 0) goto LAB_077150cc;
          fVar16 = fStack0000000000000038 - fStack0000000000000044;
          fVar17 = fStack000000000000003c - in_stack_00000048;
          fVar18 = in_stack_00000040 - fStack000000000000004c;
          fVar4 = fStack0000000000000038 + fStack0000000000000044;
          fVar5 = fStack000000000000003c + in_stack_00000048;
          uVar2 = CONCAT44(fVar5,fVar4);
          fVar6 = in_stack_00000040 + fStack000000000000004c;
          uVar8 = CONCAT44(fVar17,fVar16) ^
                  (CONCAT44(fVar17,fVar16) ^ CONCAT44(fVar10 - fVar12,fVar15 - fVar9)) &
                  CONCAT44(-(uint)(fVar10 - fVar12 < fVar17),-(uint)(fVar15 - fVar9 < fVar16));
          fVar13 = fVar7 - fVar14;
          if (fVar18 <= fVar7 - fVar14) {
            fVar13 = fVar18;
          }
          uVar11 = CONCAT44(fVar17,fVar16) ^
                   (CONCAT44(fVar17,fVar16) ^ CONCAT44(fVar12 + fVar10,fVar9 + fVar15)) &
                   CONCAT44(-(uint)(fVar17 < fVar12 + fVar10),-(uint)(fVar16 < fVar9 + fVar15));
          fVar15 = fVar14 + fVar7;
          if (fVar14 + fVar7 <= fVar18) {
            fVar15 = fVar18;
          }
          fVar7 = (float)uVar8;
          fVar9 = (float)(uVar8 >> 0x20);
          fVar10 = ((float)uVar11 - fVar7) * 0.5;
          fVar12 = ((float)(uVar11 >> 0x20) - fVar9) * 0.5;
          fVar14 = (fVar15 - fVar13) * 0.5;
          fVar7 = fVar7 + fVar10;
          fVar9 = fVar9 + fVar12;
          fVar15 = fVar7 - fVar10;
          fVar16 = fVar9 - fVar12;
          uVar8 = CONCAT44(fVar16,fVar15);
          fVar10 = fVar10 + fVar7;
          fVar12 = fVar12 + fVar9;
          fVar7 = (fVar13 + fVar14) - fVar14;
          fVar14 = fVar14 + fVar13 + fVar14;
          uVar8 = uVar8 ^ (uVar8 ^ uVar2) &
                          ~CONCAT44(-(uint)(fVar16 < fVar5),-(uint)(fVar15 < fVar4));
          uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar12,fVar10)) &
                          CONCAT44(-(uint)(fVar5 < fVar12),-(uint)(fVar4 < fVar10));
          if (fVar6 <= fVar7) {
            fVar7 = fVar6;
          }
          fVar15 = (float)uVar8;
          fVar10 = (float)(uVar8 >> 0x20);
          if (fVar14 <= fVar6) {
            fVar14 = fVar6;
          }
          fVar9 = ((float)uVar2 - fVar15) * 0.5;
          fVar12 = ((float)(uVar2 >> 0x20) - fVar10) * 0.5;
          iVar3 = iVar3 + 1;
          fVar14 = (fVar14 - fVar7) * 0.5;
          fVar15 = fVar15 + fVar9;
          fVar10 = fVar10 + fVar12;
          fVar7 = fVar7 + fVar14;
          fStack0000000000000024 = fVar10;
          fStack000000000000002c = fVar9;
        } while (iVar3 < *(int *)(unaff_x20 + 0x18));
      }
      if (unaff_x19 == 0) goto LAB_07715114;
      fStack0000000000000034 = fVar14;
      FUN_094d96a4();
    }
    return;
  }
LAB_07715114:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


