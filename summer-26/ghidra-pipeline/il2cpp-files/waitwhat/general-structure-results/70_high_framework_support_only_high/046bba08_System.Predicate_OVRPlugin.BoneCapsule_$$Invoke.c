/*
FUNCTION_NAME: System.Predicate<OVRPlugin.BoneCapsule>$$Invoke
ENTRY_POINT: 046bba08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Predicate<OVRPlugin_BoneCapsule>__Invoke(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    uVar5 = FUN_05144e18(lVar3,uVar1,uVar2,&stack0x00000060,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
    lVar3 = in_stack_00000060;
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_046bbbe4;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      in_stack_00000070 = uVar7;
      in_stack_00000078 = uVar8;
      in_stack_00000080 = uVar6;
      FUN_051401d4(lVar3,uVar1,uVar2,&stack0x00000070,
                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x168));
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_046bb694();
    }
    else {
      if (in_stack_00000060 == 0) goto LAB_046bbbe4;
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      uVar8 = unaff_x21[1];
      uVar7 = *unaff_x21;
      uVar6 = unaff_x21[2];
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      in_stack_00000070 = uVar7;
      in_stack_00000078 = uVar8;
      in_stack_00000080 = uVar6;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,&stack0x00000070,
                 *(undefined8 *)(lVar3 + 0x28));
    }
    return;
  }
LAB_046bbbe4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


