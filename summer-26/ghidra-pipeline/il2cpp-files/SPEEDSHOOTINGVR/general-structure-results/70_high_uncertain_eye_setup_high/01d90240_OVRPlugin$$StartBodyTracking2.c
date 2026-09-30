/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 01d90240
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  FUN_00fdc2e4(PTR_DAT_02359830);
  FUN_00fdc2e4(PTR_DAT_023594b0);
  FUN_00fdc2e4(PTR_DAT_023597d0);
  *(undefined1 *)(unaff_x21 + 0x870) = 1;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x1c8))();
    puVar3 = PTR_DAT_02359828;
    puVar2 = PTR_DAT_023597d0;
    puVar1 = PTR_DAT_023594b0;
    in_stack_00000008._4_4_ = 0;
    if (lVar4 != 0) {
      uVar7 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          if (uVar7 <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar8 = *(long **)(lVar4 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_01d90448;
          if (plVar8[4] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_01d47d28((long)&stack0x00000008 + 4,0);
            uVar5 = FUN_01c45a74(*(undefined8 *)puVar1,uVar5,0);
          }
          lVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar3);
          FUN_01d90d84(lVar6,plVar8,uVar5);
          if (lVar9 == 0) {
            if (unaff_x19 == 0) goto LAB_01d90448;
            FUN_01ca0f60();
            if (plVar8[4] != 0) goto LAB_01d90370;
          }
          else {
            *(long *)(lVar9 + 0x40) = lVar6;
            thunk_FUN_0106e12c((long *)(lVar9 + 0x40),lVar6);
            if (plVar8[4] != 0) {
              if (unaff_x19 == 0) goto LAB_01d90448;
LAB_01d90370:
              FUN_01ca0f60();
            }
          }
          uVar5 = FUN_01d47d28((long)&stack0x00000008 + 4,0);
          FUN_01c45a74(*(undefined8 *)puVar2,uVar5,0);
          (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (unaff_x19 == 0) goto LAB_01d90448;
          FUN_01ca0f60();
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          uVar7 = *(uint *)(lVar4 + 0x18);
          lVar9 = lVar6;
        } while ((int)in_stack_00000008._4_4_ < (int)uVar7);
      }
      uVar5 = *(undefined8 *)PTR_DAT_02352728;
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d5e86c(uVar5,0);
      if (unaff_x19 != 0) {
        System_WindowsConsoleDriver__GetConsoleScreenBufferInfo();
        return;
      }
    }
  }
LAB_01d90448:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


