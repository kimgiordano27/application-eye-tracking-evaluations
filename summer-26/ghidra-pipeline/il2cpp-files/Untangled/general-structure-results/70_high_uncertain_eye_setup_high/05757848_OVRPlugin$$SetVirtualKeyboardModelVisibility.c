/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 05757848
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetVirtualKeyboardModelVisibility(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  long *plVar9;
  undefined8 in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x25 + 0x200);
  do {
    iVar3 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar3 != 5) {
      if (iVar3 != 7) {
        if (iVar3 == 0xe) {
          if (unaff_x20 != 0) {
            FUN_03f38c3c();
            return;
          }
LAB_05757980:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar4 = FUN_055b5920(0);
        FUN_02a551a0();
        in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
        uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
        uVar5 = thunk_FUN_02ef1438(uVar5,(long)&stack0x00000008 + 4);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d596a8);
        FUN_056f1630(uVar7,uVar4,uVar5,0);
        goto LAB_057579f4;
      }
      uVar4 = (**(code **)(*unaff_x19 + 0x248))();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x24);
      }
      uVar5 = FUN_055b5920(0);
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*plVar9);
      }
      uVar2 = FUN_05569a94(uVar4,uVar5,0);
      if (unaff_x20 == 0) goto LAB_05757980;
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05757980;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined1 *)(lVar8 + (int)uVar1 + 0x20) = uVar2;
      }
      else {
        FUN_03f37214();
      }
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
  } while ((uVar6 & 1) != 0);
  thunk_FUN_02f239f0(PTR_DAT_06d553b8);
LAB_057579f4:
  uVar4 = FUN_05692378();
  uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d596b0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar4,uVar5);
}


