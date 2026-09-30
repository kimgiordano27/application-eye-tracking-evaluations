/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.DateTimeUtils$$CreateDateTime
ENTRY_POINT: 04d1ff58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_7;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d1fd54) */

undefined8 Newtonsoft_Json_Utilities_DateTimeUtils__CreateDateTime(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
LAB_04d1ff68:
  uVar2 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
  in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
LAB_04d1ff90:
  FUN_04c180e0();
  do {
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      iVar3 = (**(code **)(*unaff_x22 + 0x178))();
      if (iVar3 <= unaff_w23) {
        return 1;
      }
      unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (unaff_x24 == (long *)0x0) goto LAB_04d1fff0;
      uVar4 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      uVar5 = FUN_04cb9870(uVar4,0,0);
      if ((uVar5 & 1) != 0) break;
      (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      FUN_04d1fff4();
      if (in_stack_00000028._4_1_ == '\0') {
        iVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
        if (iVar3 == -1) {
          in_stack_00000010 = unaff_x24[3];
          DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
          DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
          if (unaff_x21 == 0) goto LAB_04d1fff0;
          FUN_04c180e0();
          if ((int)unaff_x24[4] != 0xffffff) {
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
            DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(unaff_x19 + 0x50),&stack0x00000010);
            goto LAB_04d1fe50;
          }
        }
        else {
          uVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
          DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(unaff_x19 + 0x48),&stack0x00000010);
          if (unaff_x21 == 0) goto LAB_04d1fff0;
LAB_04d1fe50:
          FUN_04c17600();
        }
        lVar6 = FUN_04d1f174(unaff_x24);
        if (lVar6 != 0) {
          sVar1 = FUN_04c045f0(lVar6,0,0);
          if (sVar1 != 0x3c) goto LAB_04d1ff68;
          plVar7 = (long *)(**(code **)(*unaff_x24 + 0x1a8))
                                     (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
          if (plVar7 != (long *)0x0) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
            ;
            if (plVar7 != (long *)0x0) {
              auVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
              _in_stack_00000018 = auVar8;
              uVar4 = thunk_FUN_04d75718(&stack0x00000018,*(undefined8 *)PTR_DAT_063317f8,0);
              lVar6 = FUN_04d1faa4();
              iVar3 = (**(code **)(*unaff_x24 + 0x198))
                                (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
              if ((iVar3 == -1) && (lVar6 != 0)) {
                FUN_04c0af28(*(undefined8 *)PTR_DAT_06331820,uVar4,lVar6,0);
              }
              else {
                FUN_04c00984(*(undefined8 *)PTR_DAT_06331800,uVar4,0);
              }
              goto LAB_04d1ff68;
            }
          }
        }
LAB_04d1fff0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    FUN_04dc1734(0);
    if (unaff_x21 == 0) goto LAB_04d1fff0;
    FUN_04c1633c();
    FUN_04c1633c();
    if (unaff_x24[8] == 0) break;
    FUN_04c1633c();
  } while( true );
  in_stack_00000010 = unaff_x24[3];
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(unaff_x19 + 0x68),&stack0x00000010);
  in_stack_00000008._4_4_ =
       (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(unaff_x19 + 0x48),(long)&stack0x00000008 + 4);
  goto LAB_04d1ff90;
}


