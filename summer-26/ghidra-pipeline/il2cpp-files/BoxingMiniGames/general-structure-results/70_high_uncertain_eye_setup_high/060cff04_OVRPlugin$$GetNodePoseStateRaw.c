/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateRaw
ENTRY_POINT: 060cff04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetNodePoseStateRaw(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int unaff_w19;
  long lVar8;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  lVar6 = FUN_071bd9b8();
  if (*(int *)(*(long *)PTR_DAT_07a242c0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_060d00b4();
  puVar2 = PTR_DAT_07a242b0;
  puVar1 = PTR_DAT_07a242a8;
  if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0459fb44(&stack0x00000008,*unaff_x22,*(undefined8 *)PTR_DAT_07a242c8);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  lVar4 = 0;
  in_stack_00000010 = &stack0x00000020;
  do {
    while( true ) {
      do {
        lVar8 = lVar4;
        uVar7 = FUN_05897b28(&stack0x00000020,*(undefined8 *)puVar2);
        lVar3 = in_stack_00000030;
        if ((uVar7 & 1) == 0) {
          FUN_05897b24(&stack0x00000020,*(undefined8 *)puVar1);
          return lVar8;
        }
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar4 = lVar8;
      } while ((*(int *)(in_stack_00000030 + 0x10) != unaff_w19) ||
              ((*(uint *)(in_stack_00000030 + 0x20) != 0 &&
               ((*(uint *)(in_stack_00000030 + 0x20) & uVar5) == 0))));
      uVar7 = FUN_05c97640(*(undefined8 *)(in_stack_00000030 + 0x18),0);
      if ((uVar7 & 1) == 0) break;
      lVar4 = lVar3;
      if (lVar8 != 0) {
        lVar4 = lVar8;
      }
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar7 = FUN_05c960d0(lVar6,*(undefined8 *)(lVar3 + 0x18),0);
  } while ((uVar7 & 1) == 0);
  FUN_05897b24(&stack0x00000020,*(undefined8 *)puVar1);
  return lVar3;
}


