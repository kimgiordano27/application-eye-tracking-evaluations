/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$InitPools
ENTRY_POINT: 07756080
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__InitPools
               (undefined1 param_1 [16],float param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long unaff_x19;
  int iVar16;
  long *unaff_x25;
  int iVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  puVar8 = PTR_DAT_09f31e48;
  puVar7 = PTR_DAT_09f313a0;
  puVar6 = PTR_DAT_09f31320;
  puVar5 = PTR_DAT_09f20b38;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x18);
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31e50);
  FUN_05d0cac8(lVar9,uVar2,*(undefined8 *)puVar8);
  lVar10 = FUN_04447c90(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x18));
  lVar11 = FUN_04447c90(*(undefined8 *)puVar7,*(undefined4 *)(unaff_x19 + 0x18));
  puVar5 = PTR_DAT_09f1e6b8;
  if (*(int *)(unaff_x19 + 0x18) < 1) {
    fVar29 = 0.0;
    if (lVar10 == 0) goto LAB_07756660;
  }
  else {
    uVar18 = 0;
    fVar29 = 0.0;
    do {
      lVar12 = FUN_05badb74();
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar5);
      }
      uVar13 = FUN_094beb2c(0);
      if ((uVar13 & 1) == 0) {
        fVar20 = 1.0;
        if (lVar12 == 0) goto LAB_07756660;
      }
      else {
        if (lVar12 == 0) goto LAB_07756660;
        plVar14 = *(long **)(lVar12 + 200);
        fVar20 = 1.0;
        if (plVar14 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
          if (((bVar3 <= *(byte *)(*plVar14 + 0x130)) &&
              (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) ==
               *(long *)PTR_DAT_09f1ed58)) &&
             (fVar20 = (float)FUN_0771f9d0(plVar14,0), fVar20 <= 0.0)) {
            fVar20 = 1.0;
          }
        }
      }
      if (DAT_0a51c009 == '\0') {
        FUN_04447ba8();
        DAT_0a51c009 = '\x01';
      }
      fVar27 = *(float *)(lVar12 + 0x5c);
      fVar25 = *(float *)(lVar12 + 0x60);
      param_2 = *(float *)(lVar12 + 100);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (lVar10 == 0) goto LAB_07756660;
      if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_07756664;
      param_2 = param_2 * param_2;
      fVar20 = fVar20 * SQRT(fVar27 * fVar27 + fVar25 * fVar25 + param_2);
      *(float *)(lVar10 + 0x20 + uVar18 * 4) = fVar20;
      uVar18 = uVar18 + 1;
      fVar29 = fVar29 + fVar20;
    } while ((long)uVar18 < (long)*(int *)(unaff_x19 + 0x18));
  }
  puVar5 = PTR_DAT_09f328a8;
  in_stack_00000010 = in_stack_00000010 + 0xa0;
  if (0 < *(int *)(lVar10 + 0x18)) {
    uVar18 = 0;
    do {
      lVar12 = FUN_05badb74();
      if (lVar12 == 0) goto LAB_07756660;
      iVar1 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x28);
      fVar21 = (float)FUN_060f6f1c(in_stack_00000010,*(int *)(lVar12 + 0x28),*(undefined8 *)puVar5);
      FUN_060f6f1c(in_stack_00000010,*(undefined4 *)(lVar12 + 0x28),*(undefined8 *)puVar5);
      iVar17 = *(int *)(lVar12 + 0x28);
      fVar20 = param_2;
      fVar25 = param_2;
      fVar27 = fVar21;
      if (iVar17 < iVar1) {
        do {
          fVar22 = (float)FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          if (fVar22 < fVar21) {
            fVar21 = (float)FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          }
          fVar22 = (float)FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          if (fVar27 < fVar22) {
            fVar27 = (float)FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          }
          FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          if (param_2 < fVar20) {
            FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
            fVar20 = param_2;
          }
          FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
          if (fVar25 < param_2) {
            FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
            fVar25 = param_2;
          }
          iVar17 = iVar17 + 1;
        } while (iVar1 != iVar17);
      }
      if (lVar11 == 0) goto LAB_07756660;
      if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_07756664;
      lVar12 = lVar11 + uVar18 * 0x10;
      *(float *)(lVar12 + 0x2c) = fVar25 - fVar20;
      *(float *)(lVar12 + 0x20) = fVar21;
      *(float *)(lVar12 + 0x24) = fVar20;
      *(float *)(lVar12 + 0x28) = fVar27 - fVar21;
      if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_07756664;
      lVar15 = lVar10 + uVar18 * 4;
      fVar20 = *(float *)(lVar15 + 0x20) / fVar29;
      *(float *)(lVar15 + 0x20) = fVar20;
      if (lVar9 == 0) goto LAB_07756660;
      fVar25 = *(float *)(lVar12 + 0x28);
      param_2 = *(float *)(lVar12 + 0x2c);
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar15 = *(long *)PTR_DAT_09f31e40;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_07756660;
      uVar4 = *(uint *)(lVar9 + 0x18);
      fVar20 = fVar20 * 8192.0;
      param_2 = fVar20 * param_2;
      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)uVar4 * 8;
        *(uint *)(lVar9 + 0x18) = uVar4 + 1;
        *(float *)(lVar12 + 0x20) = fVar20 * fVar25;
        *(float *)(lVar12 + 0x24) = param_2;
      }
      else {
        FUN_05d0d2c0(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)*(int *)(lVar10 + 0x18));
  }
  plVar14 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31e58);
  FUN_07765a78(plVar14,0);
  if (plVar14 != (long *)0x0) {
    *(undefined1 *)((long)plVar14 + 0x14) = 0;
    lVar9 = (**(code **)(*plVar14 + 0x178))
                      (plVar14,lVar9,0x2000,0x2000,in_stack_00000008._4_4_,
                       *(undefined8 *)(*plVar14 + 0x180));
    puVar7 = PTR_DAT_09f32858;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_07756664:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (0 < *(int *)(unaff_x19 + 0x18)) {
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar18 = 0;
        do {
          lVar10 = FUN_05badb74(unaff_x19,uVar18 & 0xffffffff,*(undefined8 *)puVar6);
          if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_07756660;
          if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_07756664;
          if ((lVar9 == 0) || (lVar12 = *(long *)(lVar9 + 0x20), lVar12 == 0)) goto LAB_07756660;
          if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_07756664;
          iVar17 = *(int *)(lVar10 + 0x28);
          iVar19 = *(int *)(lVar10 + 0x30);
          iVar1 = iVar19 + iVar17;
          if (iVar17 < iVar1) {
            lVar15 = lVar11 + uVar18 * 0x10;
            lVar12 = lVar12 + uVar18 * 0x10;
            uVar23 = *(undefined8 *)(lVar15 + 0x20);
            uVar24 = *(undefined8 *)(lVar15 + 0x28);
            uVar26 = *(undefined8 *)(lVar12 + 0x20);
            uVar28 = *(undefined8 *)(lVar12 + 0x28);
            do {
              fVar29 = (float)FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
              FUN_060f6f1c(in_stack_00000010,iVar17,*(undefined8 *)puVar5);
              param_2 = (float)((ulong)uVar26 >> 0x20) +
                        (float)((ulong)uVar28 >> 0x20) *
                        ((param_2 - (float)((ulong)uVar23 >> 0x20)) / (float)((ulong)uVar24 >> 0x20)
                        );
              FUN_060f6f5c(CONCAT44(param_2,(float)uVar26 +
                                            (float)uVar28 *
                                            ((fVar29 - (float)uVar23) / (float)uVar24)),param_2,
                           in_stack_00000010,iVar17,*(undefined8 *)puVar7);
              iVar19 = iVar19 + -1;
              iVar17 = iVar17 + 1;
            } while (iVar19 != 0);
          }
          iVar17 = *(int *)(lVar9 + 0x10);
          iVar19 = *(int *)(lVar9 + 0x14);
          if (iVar17 != iVar19) {
            if (iVar17 < iVar19) {
              iVar16 = *(int *)(lVar10 + 0x28);
              if (iVar16 < iVar1) {
                param_2 = (float)iVar19;
                fVar29 = (float)iVar17 / param_2;
                do {
                  fVar20 = (float)FUN_060f6f1c(in_stack_00000010,iVar16,*(undefined8 *)puVar5);
                  FUN_060f6f5c(fVar29 * fVar20,in_stack_00000010,iVar16,*(undefined8 *)puVar7);
                  iVar16 = iVar16 + 1;
                } while (iVar1 != iVar16);
              }
            }
            else {
              iVar16 = *(int *)(lVar10 + 0x28);
              if (iVar16 < iVar1) {
                param_2 = (float)iVar17;
                fVar29 = (float)iVar19 / param_2;
                do {
                  uVar23 = FUN_060f6f1c(in_stack_00000010,iVar16,*(undefined8 *)puVar5);
                  param_2 = fVar29 * param_2;
                  FUN_060f6f5c(uVar23,param_2,in_stack_00000010,iVar16,*(undefined8 *)puVar7);
                  iVar16 = iVar16 + 1;
                } while (iVar1 != iVar16);
              }
            }
          }
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)*(int *)(unaff_x19 + 0x18));
      }
      return;
    }
  }
LAB_07756660:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


