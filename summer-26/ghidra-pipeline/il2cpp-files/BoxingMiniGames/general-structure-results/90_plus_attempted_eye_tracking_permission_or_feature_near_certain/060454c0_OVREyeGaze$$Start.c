/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 060454c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a208e0);
    FUN_03642964(PTR_DAT_07a21f78);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(PTR_DAT_07a21f88);
    *(undefined1 *)(unaff_x20 + 0x50a) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*(int *)(unaff_x19 + 0x84) != 2) {
    uVar10 = *(undefined8 *)(unaff_x19 + 200);
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_071c0684(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      FUN_060f81f4(*(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x120),0,0);
      goto LAB_06045558;
    }
  }
  puVar2 = PTR_DAT_07a208e0;
  FUN_060f7df8(*(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x120),0);
  uVar3 = 0;
  do {
    lVar5 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar5 == 0) {
LAB_060456a4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_060456a8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar5 = *(long *)(lVar5 + uVar3 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_060456a4;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      lVar6 = *(long *)(lVar5 + 0x18);
      if (lVar6 == 0) goto LAB_060456a4;
      uVar12 = 0;
      while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_060456a8;
        plVar11 = *(long **)(unaff_x19 + 0x120);
        if (plVar11 == (long *)0x0) goto LAB_060456a4;
        lVar8 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar1 = *(undefined4 *)(lVar6 + uVar12 * 4 + 0x20);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 10) * 0x10 + 0x138);
              goto LAB_06045658;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar2,10);
LAB_06045658:
        uVar7 = (*(code *)*puVar4)(plVar11,uVar1,&stack0x00000020,puVar4[1]);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_060456a4;
          FUN_060f7988(*(long *)(unaff_x19 + 0x1b0),uVar1);
        }
        lVar6 = *(long *)(lVar5 + 0x18);
        uVar12 = uVar12 + 1;
        if (lVar6 == 0) goto LAB_060456a4;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 5);
LAB_06045558:
  FUN_04b0dbc0();
  return;
}


