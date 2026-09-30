/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 083e97d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_21;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__GetFoveationLevel(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar17;
  long lVar18;
  uint unaff_w26;
  uint uStack000000000000000c;
  uint uStack000000000000001c;
  
  FUN_0403162c(PTR_DAT_08ffe698);
  FUN_0403162c(PTR_DAT_08ffe6a0);
  FUN_0403162c(PTR_DAT_08ffe6a8);
  FUN_0403162c(PTR_DAT_08ffe6b0);
  FUN_0403162c(PTR_DAT_08ffe6b8);
  FUN_0403162c(PTR_DAT_08ffe6c0);
  FUN_0403162c(PTR_DAT_08ffe6c8);
  FUN_0403162c(PTR_DAT_08ffe6d0);
  FUN_0403162c(PTR_DAT_08ffe6d8);
  FUN_0403162c(PTR_DAT_08ffe6e0);
  FUN_0403162c(PTR_DAT_08ffe6e8);
  FUN_0403162c(PTR_DAT_08ffe6f0);
  FUN_0403162c(PTR_DAT_08ffe6f8);
  FUN_0403162c(PTR_DAT_08f66550);
  FUN_0403162c(PTR_DAT_08ffe700);
  FUN_0403162c(PTR_DAT_08ffe708);
  FUN_0403162c(PTR_DAT_08ffe710);
  FUN_0403162c(PTR_DAT_08ffe718);
  FUN_0403162c(PTR_DAT_08ffe720);
  FUN_0403162c(PTR_DAT_08ffe618);
  *(undefined1 *)(unaff_x21 + 0x222) = 1;
  uStack000000000000001c = 0;
  plVar11 = (long *)thunk_FUN_0406deb8(*unaff_x19);
  FUN_073776a4(plVar11,0);
  uVar12 = FUN_083f9f34();
  uVar13 = FUN_083fa4a0();
  puVar6 = PTR_DAT_08ffe680;
  puVar5 = PTR_DAT_08ffe638;
  puVar3 = PTR_DAT_08ffe630;
  puVar4 = PTR_DAT_08f65db8;
  if (plVar11 != (long *)0x0) {
    FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08ffe708,0);
    FUN_07379318(plVar11,*(undefined8 *)puVar6,0);
    FUN_073792f8(plVar11,0);
    FUN_07379318(plVar11,*(undefined8 *)puVar5,0);
    FUN_07379318(plVar11,*(undefined8 *)puVar3,0);
    lVar14 = FUN_040316d0(*(undefined8 *)puVar4,5);
    if (lVar14 != 0) {
      uVar16 = *(uint *)(lVar14 + 0x18);
      if ((((uVar16 == 0) ||
           (*(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_08ffe620, uVar16 == 1)) ||
          (*(undefined8 *)(lVar14 + 0x28) = uVar13, uVar16 < 3)) ||
         ((*(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_08ffe6a0, uVar16 == 3 ||
          (*(undefined8 *)(lVar14 + 0x38) = uVar13, puVar6 = PTR_DAT_08ffe6c8,
          puVar5 = PTR_DAT_08ffe698, puVar3 = PTR_DAT_08f65be8, uVar16 < 5)))) {
LAB_083ea080:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_08f66550;
      uVar15 = FUN_07369f9c(lVar14,0);
      FUN_07379318(plVar11,uVar15,0);
      FUN_07379318(plVar11,*(undefined8 *)puVar6,0);
      FUN_07379318(plVar11,*(undefined8 *)puVar3,0);
      FUN_073792f8(plVar11,0);
      FUN_07379318(plVar11,*(undefined8 *)puVar5,0);
      lVar14 = FUN_040316d0(*(undefined8 *)puVar4,5);
      if (lVar14 != 0) {
        uVar16 = *(uint *)(lVar14 + 0x18);
        if (((uVar16 == 0) ||
            (*(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_08ffe6b0, uVar16 == 1)) ||
           ((*(undefined8 *)(lVar14 + 0x28) = uVar13, uVar16 < 3 ||
            ((*(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_08ffe660, uVar16 == 3 ||
             (*(undefined8 *)(lVar14 + 0x38) = uVar12, puVar6 = PTR_DAT_08ffe700,
             puVar5 = PTR_DAT_08ffe6f8, puVar3 = PTR_DAT_08ffe628, uVar16 < 5))))))
        goto LAB_083ea080;
        *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_08ffe678;
        uStack000000000000000c = unaff_w26;
        uVar13 = FUN_07369f9c(lVar14,0);
        FUN_07379318(plVar11,uVar13,0);
        uVar13 = FUN_0736972c(*(undefined8 *)puVar6,uVar12,*(undefined8 *)puVar5,0);
        FUN_07379318(plVar11,uVar13,0);
        FUN_07379318(plVar11,*(undefined8 *)puVar3,0);
        FUN_073792f8(plVar11,0);
        puVar9 = PTR_DAT_08ffe6d8;
        puVar7 = PTR_DAT_08ffe690;
        puVar6 = PTR_DAT_08ffe648;
        puVar5 = PTR_DAT_08ffe640;
        puVar3 = PTR_DAT_08ffe618;
        if (unaff_x20 != 0) {
          uVar16 = *(uint *)(unaff_x20 + 0x18);
          if (0 < (int)uVar16) {
            uVar17 = 0;
            do {
              if (uVar16 <= uVar17) goto LAB_083ea080;
              lVar18 = *(long *)(unaff_x20 + (long)(int)uVar17 * 8 + 0x20);
              lVar14 = FUN_040316d0(*(undefined8 *)puVar4,7);
              if (lVar14 == 0) goto LAB_083ea084;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar5;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar13 = FUN_083ea270(lVar18);
              uVar16 = *(uint *)(lVar14 + 0x18);
              if ((uVar16 < 2) || (*(undefined8 *)(lVar14 + 0x28) = uVar13, uVar16 == 2))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar9;
              if (lVar18 == 0) goto LAB_083ea084;
              if ((((uVar16 < 4) ||
                   (*(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar18 + 0x30), uVar16 == 4))
                  || (*(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)puVar6, uVar16 < 6)) ||
                 (*(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar18 + 0x38), uVar16 == 6))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)puVar7;
              uVar13 = FUN_07369f9c(lVar14,0);
              FUN_07379318(plVar11,uVar13,0);
              uVar16 = *(uint *)(unaff_x20 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar16);
          }
          puVar10 = PTR_DAT_08ffe6e8;
          puVar8 = PTR_DAT_08ffe6c0;
          puVar6 = PTR_DAT_08ffe688;
          puVar5 = PTR_DAT_08ffe650;
          FUN_073792f8(plVar11,0);
          FUN_07379318(plVar11,*(undefined8 *)puVar8,0);
          FUN_07379318(plVar11,*(undefined8 *)puVar10,0);
          FUN_073792f8(plVar11,0);
          uVar13 = FUN_0736972c(*(undefined8 *)puVar6,uVar12,*(undefined8 *)puVar5,0);
          FUN_07379318(plVar11,uVar13,0);
          FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08ffe628,0);
          FUN_073792f8(plVar11,0);
          puVar8 = PTR_DAT_08ffe710;
          puVar6 = PTR_DAT_08ffe6d0;
          puVar5 = PTR_DAT_08ffe658;
          uVar16 = *(uint *)(unaff_x20 + 0x18);
          uStack000000000000001c = 0;
          if (0 < (int)uVar16) {
            do {
              if (uVar16 <= uStack000000000000001c) goto LAB_083ea080;
              lVar18 = *(long *)(unaff_x20 + (long)(int)uStack000000000000001c * 8 + 0x20);
              lVar14 = FUN_040316d0(*(undefined8 *)puVar4,5);
              if (lVar14 == 0) goto LAB_083ea084;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_08ffe6e0;
              uVar13 = FUN_074e1fd8(&stack0x0000001c,0);
              uVar16 = *(uint *)(lVar14 + 0x18);
              if ((uVar16 < 2) || (*(undefined8 *)(lVar14 + 0x28) = uVar13, uVar16 == 2))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_08ffe670;
              if (lVar18 == 0) goto LAB_083ea084;
              if ((uVar16 < 4) ||
                 (*(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar18 + 0x38), uVar16 == 4))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_08f66550;
              uVar13 = FUN_07369f9c(lVar14,0);
              FUN_07379318(plVar11,uVar13,0);
              lVar14 = FUN_040316d0(*(undefined8 *)puVar4,7);
              if (lVar14 == 0) goto LAB_083ea084;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_08ffe6a8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              uVar13 = FUN_083ea270(lVar18);
              uVar16 = *(uint *)(lVar14 + 0x18);
              if ((((uVar16 < 2) || (*(undefined8 *)(lVar14 + 0x28) = uVar13, uVar16 == 2)) ||
                  (*(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar9, uVar16 < 4)) ||
                 (*(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar18 + 0x30), uVar16 == 4))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)puVar6;
              uVar13 = FUN_074e1fd8(&stack0x0000001c,0);
              if ((*(uint *)(lVar14 + 0x18) < 6) ||
                 (*(undefined8 *)(lVar14 + 0x48) = uVar13, *(uint *)(lVar14 + 0x18) == 6))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)puVar7;
              uVar13 = FUN_07369f9c(lVar14,0);
              FUN_07379318(plVar11,uVar13,0);
              lVar14 = FUN_040316d0(*(undefined8 *)puVar4,5);
              if (lVar14 == 0) goto LAB_083ea084;
              uVar16 = *(uint *)(lVar14 + 0x18);
              if (((uVar16 == 0) ||
                  (*(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar5, uVar16 == 1)) ||
                 (*(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar18 + 0x38), uVar16 < 3))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar8;
              uVar13 = FUN_074e1fd8(&stack0x0000001c,0);
              if ((*(uint *)(lVar14 + 0x18) < 4) ||
                 (*(undefined8 *)(lVar14 + 0x38) = uVar13, *(uint *)(lVar14 + 0x18) == 4))
              goto LAB_083ea080;
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_08f66550;
              uVar13 = FUN_07369f9c(lVar14,0);
              FUN_07379318(plVar11,uVar13,0);
              FUN_073792f8(plVar11,0);
              uVar16 = *(uint *)(unaff_x20 + 0x18);
              uStack000000000000001c = uStack000000000000001c + 1;
            } while ((int)uStack000000000000001c < (int)uVar16);
          }
          puVar1 = (undefined8 *)PTR_DAT_08ffe720;
          puVar6 = PTR_DAT_08ffe718;
          puVar5 = PTR_DAT_08ffe6f0;
          puVar2 = (undefined8 *)PTR_DAT_08ffe6b8;
          puVar4 = PTR_DAT_08ffe668;
          FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08ffe6c0,0);
          puVar3 = PTR_DAT_08ffe6e8;
          FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08ffe6e8,0);
          FUN_073792f8(plVar11,0);
          FUN_07379318(plVar11,*(undefined8 *)puVar6,0);
          if ((uStack000000000000000c & 1) == 0) {
            puVar1 = (undefined8 *)puVar4;
            puVar2 = (undefined8 *)puVar5;
          }
          uVar12 = FUN_0736972c(*puVar2,uVar12,*puVar1,0);
          FUN_07379318(plVar11,uVar12,0);
          FUN_07379318(plVar11,*(undefined8 *)puVar3,0);
          FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08ffe6c8,0);
          FUN_07379318(plVar11,*(undefined8 *)PTR_DAT_08f65be8,0);
          (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          return;
        }
      }
    }
  }
LAB_083ea084:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


