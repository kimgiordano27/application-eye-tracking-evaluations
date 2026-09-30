/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 027abf40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027ac190) */

long * OVREyeGaze__OnDestroy(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 in_w8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x23 + 0xe96) = in_w8;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  if (unaff_x22 == 0) {
    uVar7 = 0;
  }
  else {
    plVar5 = (long *)FUN_027cac54();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cfbc80) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_027abfc0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cfbc80,0);
LAB_027abfc0:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  FUN_0259feec(&stack0x00000010,uVar7,0);
  FUN_025a00ec(&stack0x00000010,0);
  uVar7 = FUN_01a78d04();
  FUN_025a0070(&stack0x00000008,uVar7,0);
  uVar4 = FUN_025a00ac(&stack0x00000008,0);
  plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cf2f50,(ulong)uVar4);
  puVar3 = PTR_DAT_03cd73a0;
  puVar2 = PTR_DAT_03cbe5e8;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    lVar10 = 0x20;
    do {
      uVar7 = thunk_FUN_0259fd74(&stack0x00000008,uVar11 & 0xffffffff,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar8 = (long *)FUN_0277b678(uVar7,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar8);
        }
        lVar9 = thunk_FUN_01a89d6c(plVar8,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar9 == 0) {
          uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar7,0);
        }
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar8);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar5[uVar11 + 4] = (long)plVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long)plVar5 + lVar10,plVar8);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while (uVar4 != uVar11);
  }
  FUN_025a0090(&stack0x00000008,0);
  FUN_025a0134(&stack0x00000010,0);
  return plVar5;
}


