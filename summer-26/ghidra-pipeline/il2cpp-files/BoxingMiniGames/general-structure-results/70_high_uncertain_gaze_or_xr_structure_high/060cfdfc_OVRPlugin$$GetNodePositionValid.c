/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 060cfdfc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetNodePositionValid(long param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if ((DAT_07ee0a69 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a242a8);
    FUN_03642964(PTR_DAT_07a242b0);
    FUN_03642964(PTR_DAT_07a242b8);
    FUN_03642964(PTR_DAT_07a242c0);
    FUN_03642964(PTR_DAT_07a242c8);
    FUN_03642964(PTR_DAT_07a242d0);
    FUN_03642964(PTR_DAT_07a242d8);
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07ee0a69 = 1;
  }
  puVar1 = PTR_DAT_079f4e28;
  in_stack_00000028 = 0;
  plVar10 = (long *)(param_1 + 0x20);
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  if (*plVar10 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a242d8);
    FUN_0459e910(uVar6,uVar11,*(undefined8 *)PTR_DAT_07a242d0);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    thunk_FUN_036b7ad0(plVar10,uVar6);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar7 = FUN_071c630c(param_3,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = **(long **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
  }
  else {
    if (param_3 == 0) goto LAB_060d0050;
    lVar8 = FUN_071bd9b8(param_3,0);
  }
  if (*(int *)(*(long *)PTR_DAT_07a242c0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_060d00b4(param_4);
  puVar2 = PTR_DAT_07a242b0;
  puVar1 = PTR_DAT_07a242a8;
  if (*plVar10 != 0) {
    FUN_0459fb44(&stack0x00000008,*plVar10,*(undefined8 *)PTR_DAT_07a242c8);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    lVar4 = 0;
    in_stack_00000010 = &stack0x00000020;
    do {
      while( true ) {
        do {
          lVar9 = lVar4;
          uVar7 = FUN_05897b28(&stack0x00000020,*(undefined8 *)puVar2);
          lVar3 = in_stack_00000030;
          if ((uVar7 & 1) == 0) {
            FUN_05897b24(&stack0x00000020,*(undefined8 *)puVar1);
            return lVar9;
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar4 = lVar9;
        } while ((*(int *)(in_stack_00000030 + 0x10) != param_2) ||
                ((*(uint *)(in_stack_00000030 + 0x20) != 0 &&
                 ((*(uint *)(in_stack_00000030 + 0x20) & uVar5) == 0))));
        uVar7 = FUN_05c97640(*(undefined8 *)(in_stack_00000030 + 0x18),0);
        if ((uVar7 & 1) == 0) break;
        lVar4 = lVar3;
        if (lVar9 != 0) {
          lVar4 = lVar9;
        }
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar7 = FUN_05c960d0(lVar8,*(undefined8 *)(lVar3 + 0x18),0);
    } while ((uVar7 & 1) == 0);
    FUN_05897b24(&stack0x00000020,*(undefined8 *)puVar1);
    return lVar3;
  }
LAB_060d0050:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


