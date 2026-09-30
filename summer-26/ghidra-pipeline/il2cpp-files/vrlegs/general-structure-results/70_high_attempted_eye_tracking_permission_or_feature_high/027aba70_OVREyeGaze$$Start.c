/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 027aba70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027abc40) */

long * OVREyeGaze__Start(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x24;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x24 + 0xe94) = 1;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_027c34f8(&stack0x00000028);
  FUN_0259feec(&stack0x00000010);
  FUN_025a00ec(&stack0x00000010,0);
  uVar4 = FUN_01a77a34();
  FUN_025a0070(&stack0x00000008,uVar4,0);
  uVar3 = FUN_025a00ac(&stack0x00000008,0);
  plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfbc68,(ulong)uVar3);
  puVar2 = PTR_DAT_03cf2f30;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      uVar4 = thunk_FUN_0259fd74(&stack0x00000008,uVar8 & 0xffffffff,0);
      plVar6 = (long *)FUN_0267c668(uVar4,in_stack_00000028,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        lVar7 = thunk_FUN_01a89d6c(plVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar5[uVar8 + 4] = (long)plVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long)plVar5 + lVar9,plVar6)
      ;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar3 != uVar8);
  }
  FUN_025a0090(&stack0x00000008,0);
  FUN_025a0134(&stack0x00000010,0);
  return plVar5;
}


